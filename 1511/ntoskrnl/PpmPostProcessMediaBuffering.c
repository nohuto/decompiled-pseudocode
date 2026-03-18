/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14063D484
 * Callers:
 *     PpmApplyProfile @ 0x14063D2A8 (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x140077490 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400938C0 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x1401F11A0 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  _DWORD v1[44]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[176]; // [rsp+D0h] [rbp-C8h] BYREF

  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v1);
    result = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, (char *)v1, v2);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
