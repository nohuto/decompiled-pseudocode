/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x140127178
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPreCriticalBatteryNotify @ 0x1406726F4 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FF964 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140200F94 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxCaptureDeviceAccounting @ 0x140202140 (PopFxCaptureDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14020740C (PopCalculateCsSummary.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14066C9E4 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CB58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CF38 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406708E8 (PopDiagNextCsSleepStudySession.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-98h]
  __int64 v7; // [rsp+38h] [rbp-90h]

  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    if ( *((_QWORD *)&xmmword_140329020 + 1) )
      (*((void (**)(void))&xmmword_140329020 + 1))();
    PopFxCaptureDeviceAccounting();
    PpmIdleCaptureCsVetoAccounting(v2, (unsigned int)dword_140328980, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140328980) )
    {
      PopFxLogSocSubsystemBlockingTimes(v3, (unsigned int)dword_140328980);
      PopFxLogSocSubsystemMetadata(v4, (unsigned int)dword_140328980);
    }
    PopAcquirePolicyLock();
    PopCalculateCsSummary(v5, a1);
    PopReleasePolicyLock();
    PpmSnapDripsAccountingSnapshot(10 * v6, 10 * v7);
    PopDiagNextCsSleepStudySession(&NullGuid, v5);
  }
}
