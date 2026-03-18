/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x140126C08
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPreCriticalBatteryNotify @ 0x140672610 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FFB38 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140201168 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxCaptureDeviceAccounting @ 0x140202314 (PopFxCaptureDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1402075E0 (PopCalculateCsSummary.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14066C900 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CA74 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CE54 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopDiagNextCsSleepStudySession @ 0x140670804 (PopDiagNextCsSleepStudySession.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE v8[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-98h]
  __int64 v10; // [rsp+38h] [rbp-90h]

  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    if ( *((_QWORD *)&xmmword_140328FE0 + 1) )
      (*((void (**)(void))&xmmword_140328FE0 + 1))();
    PopFxCaptureDeviceAccounting();
    PpmIdleCaptureCsVetoAccounting(v2, (unsigned int)dword_140328940, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140328940) )
    {
      PopFxLogSocSubsystemBlockingTimes(v3, (unsigned int)dword_140328940);
      PopFxLogSocSubsystemMetadata(v4, (unsigned int)dword_140328940);
    }
    PopAcquirePolicyLock();
    PopCalculateCsSummary(v8, a1);
    PopReleasePolicyLock(v6, v5, v7);
    PpmSnapDripsAccountingSnapshot(10 * v9, 10 * v10);
    PopDiagNextCsSleepStudySession(&NullGuid, v8);
  }
}
