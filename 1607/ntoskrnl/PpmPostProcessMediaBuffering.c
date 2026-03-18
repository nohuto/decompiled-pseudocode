/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x140675C18
 * Callers:
 *     PpmApplyProfile @ 0x140675A3C (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     PoCopyDeepIdleMask @ 0x14007D9D0 (PoCopyDeepIdleMask.c)
 *     KeSubtractAffinityEx @ 0x14014428C (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x14020A2AC (PpmCheckApplyResetNotification.c)
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
