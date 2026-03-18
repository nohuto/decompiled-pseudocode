/*
 * XREFs of UsbhSetTimer @ 0x1C00093E0
 * Callers:
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C6A4 (UsbhSetOutOfBandwidthTimer.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 */

__int64 __fastcall UsbhSetTimer(__int64 a1, int a2, struct _KTIMER *a3, struct _KDPC *a4, unsigned int a5, char a6)
{
  __int64 result; // rax
  ULONG TimeIncrement; // eax

  if ( !a6 || (result = UsbhReferenceListAdd(a1, a3, a5), (result & 0xC0000000) != 0xC0000000) )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer(a3, (LARGE_INTEGER)(int)(1 - 10000 * a2 - TimeIncrement), a4) )
    {
      if ( a6 )
        UsbhReferenceListRemove(a1, a3);
    }
    return 0LL;
  }
  return result;
}
