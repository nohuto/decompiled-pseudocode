/*
 * XREFs of PopDiagNextSleepStudySession @ 0x14063861C
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceSleepStudyStart @ 0x140639C18 (PopDiagTraceSleepStudyStart.c)
 */

void __fastcall PopDiagNextSleepStudySession(GUID *a1, _OWORD *a2)
{
  GUID *v4; // rax
  __int128 v5; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  if ( !PopSleepStudyDisabled )
  {
    KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
    v4 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      KeReleaseMutex(&PopWdiTimerMutex, 0);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      PopWdiCurrentScenario = (__int64)a1;
      if ( v4 == &NullGuid )
      {
        if ( PopWdiTimerQueued )
          PopWdiNewScenarioWaiting = 1;
        else
          PopDiagTraceSleepStudyStart();
      }
      else if ( PopWdiTimerQueued )
      {
        PopWdiNewScenarioWaiting = 0;
      }
      else
      {
        if ( a2 )
        {
          PopWdiScenarioStopEventData = *a2;
          *((_OWORD *)&PopWdiScenarioStopEventData + 1) = a2[1];
          *((_OWORD *)&PopWdiScenarioStopEventData + 2) = a2[2];
          *((_OWORD *)&PopWdiScenarioStopEventData + 3) = a2[3];
          *((_OWORD *)&PopWdiScenarioStopEventData + 4) = a2[4];
          *((_OWORD *)&PopWdiScenarioStopEventData + 5) = a2[5];
          *((_OWORD *)&PopWdiScenarioStopEventData + 6) = a2[6];
          *((_OWORD *)&PopWdiScenarioStopEventData + 7) = a2[7];
          *((_OWORD *)&PopWdiScenarioStopEventData + 8) = a2[8];
        }
        KeSetTimer(&PopWdiTimer, PopWdiTimerTimeoutValue, &PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v5 = *(_OWORD *)PopWdiCurrentScenario;
      v7 = PopWdiCurrentScenarioInstanceId;
      Buffer = v5;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
}
