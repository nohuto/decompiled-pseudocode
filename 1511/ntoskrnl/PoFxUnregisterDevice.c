/*
 * XREFs of PoFxUnregisterDevice @ 0x140634148
 * Callers:
 *     VerifierPoFxUnregisterDevice @ 0x1406C0BA8 (VerifierPoFxUnregisterDevice.c)
 * Callees:
 *     PopFxUnregisterDeviceOrWait @ 0x1404A1280 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 */

void __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(struct _KEVENT **)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  PopFxDestroyDeviceDpm(v1, a1);
}
