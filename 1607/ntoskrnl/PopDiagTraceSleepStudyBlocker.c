/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x14020945C
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FFB38 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14066C900 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
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
