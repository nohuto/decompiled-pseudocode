/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x140670804
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140126C08 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceSleepStudyStart @ 0x140671B60 (PopDiagTraceSleepStudyStart.c)
 */

void __fastcall PopDiagNextCsSleepStudySession(GUID *a1, __int64 a2)
{
  GUID *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
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
          PopWdiScenarioStopEventData = *(_OWORD *)a2;
          *((_OWORD *)&PopWdiScenarioStopEventData + 1) = *(_OWORD *)(a2 + 16);
          *((_OWORD *)&PopWdiScenarioStopEventData + 2) = *(_OWORD *)(a2 + 32);
          *((_OWORD *)&PopWdiScenarioStopEventData + 3) = *(_OWORD *)(a2 + 48);
          *((_OWORD *)&PopWdiScenarioStopEventData + 4) = *(_OWORD *)(a2 + 64);
          *((_OWORD *)&PopWdiScenarioStopEventData + 5) = *(_OWORD *)(a2 + 80);
          *((_OWORD *)&PopWdiScenarioStopEventData + 6) = *(_OWORD *)(a2 + 96);
          *((_OWORD *)&PopWdiScenarioStopEventData + 7) = *(_OWORD *)(a2 + 112);
          *((_OWORD *)&PopWdiScenarioStopEventData + 8) = *(_OWORD *)(a2 + 128);
          *((_QWORD *)&PopWdiScenarioStopEventData + 18) = *(_QWORD *)(a2 + 144);
        }
        KiSetTimerEx((__int64)&PopWdiTimer, PopWdiTimerTimeoutValue, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v5 = *(_OWORD *)PopWdiCurrentScenario;
      v7 = PopWdiCurrentScenarioInstanceId;
      v6 = v5;
      ZwUpdateWnfStateData((__int64)&WNF_PO_SCENARIO_CHANGE, (__int64)&v6, 20LL);
    }
  }
}
