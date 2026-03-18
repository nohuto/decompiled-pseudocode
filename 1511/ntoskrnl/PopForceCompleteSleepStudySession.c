/*
 * XREFs of PopForceCompleteSleepStudySession @ 0x14011A0AC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmSnapDripsAccountingSnapshot @ 0x1401E8758 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxCaptureDeviceAccounting @ 0x1401E993C (PopFxCaptureDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1401EEAD4 (PopCalculateCsSummary.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 */

__int64 __fastcall PopForceCompleteSleepStudySession(unsigned int a1)
{
  __int64 result; // rax
  _BYTE v3[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    if ( xmmword_1402DE010 )
      xmmword_1402DE010();
    PopFxCaptureDeviceAccounting();
    PpmSnapDripsAccountingSnapshot();
    PopAcquirePolicyLock();
    PopCalculateCsSummary(v3, a1);
    PopReleasePolicyLock();
    return PopDiagNextSleepStudySession(&NullGuid, v3);
  }
  return result;
}
