/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x140209288
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FF964 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14066C9E4 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWrite(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 6u, a2);
  }
}
