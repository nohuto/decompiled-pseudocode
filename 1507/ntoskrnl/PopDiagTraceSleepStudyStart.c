/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x1406B9D0C
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x14023F3F4 (PopWdiTimerWorkerThread.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStart()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_START) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      UserData.Ptr = PopWdiCurrentScenario;
      UserData.Size = 16;
      v2 = &PopWdiCurrentScenarioInstanceId;
      v3 = 1;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_START, &PopDiagActivityId, 2u, &UserData);
    }
  }
}
