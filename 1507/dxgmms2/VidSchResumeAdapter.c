/*
 * XREFs of VidSchResumeAdapter @ 0x1C00792D0
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001AFD0 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(_QWORD *a1)
{
  PsIsSystemThread(KeGetCurrentThread());
  VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
