/*
 * XREFs of VidSchResumeAdapter @ 0x1C005FDD0
 * Callers:
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0011044 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(_QWORD *a1)
{
  PsIsSystemThread(KeGetCurrentThread());
  VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
