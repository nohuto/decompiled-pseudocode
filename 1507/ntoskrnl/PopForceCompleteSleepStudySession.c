/*
 * XREFs of PopForceCompleteSleepStudySession @ 0x1401481F8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     PpmSnapDripsAccountingSnapshot @ 0x140235A1C (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxCaptureDeviceAccounting @ 0x1402373D8 (PopFxCaptureDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 */

__int64 __fastcall PopForceCompleteSleepStudySession(unsigned int a1)
{
  __int64 result; // rax
  _BYTE v3[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    if ( xmmword_14032E5D0 )
      xmmword_14032E5D0();
    PopFxCaptureDeviceAccounting();
    PpmSnapDripsAccountingSnapshot();
    PopAcquirePolicyLock();
    PopCalculateCsSummary(v3, a1);
    PopReleasePolicyLock();
    return PopDiagNextSleepStudySession(&NullGuid, v3);
  }
  return result;
}
