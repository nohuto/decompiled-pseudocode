/*
 * XREFs of PoFxUnregisterDevice @ 0x1406B37CC
 * Callers:
 *     VerifierPoFxUnregisterDevice @ 0x1407423E8 (VerifierPoFxUnregisterDevice.c)
 * Callees:
 *     PopFxUnregisterDeviceOrWait @ 0x140538690 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
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
