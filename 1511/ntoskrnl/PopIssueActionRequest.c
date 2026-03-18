/*
 * XREFs of PopIssueActionRequest @ 0x1404F7688
 * Callers:
 *     PopPolicyWorkerActionPromote @ 0x1404F56DC (PopPolicyWorkerActionPromote.c)
 *     PopPolicyWorkerAction @ 0x1404F7554 (PopPolicyWorkerAction.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PopSetSystemState @ 0x1400F1DD8 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x140126A00 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140127004 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x140153860 (ZwSetSystemPowerState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x1403A592C (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403A59A4 (PopAcquireAwaymodeLock.c)
 *     PoBlockConsoleSwitch @ 0x1404C4220 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1404F7538 (PopDiagTraceSuperfetchNotification.c)
 *     PopSuspendResumePdc @ 0x1404F7A20 (PopSuspendResumePdc.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1404F7F40 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionTime @ 0x1404F7FD0 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x1404F80E0 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1404F81FC (PopDiagTraceHiberStats.c)
 *     PopResumeApps @ 0x1404F86B4 (PopResumeApps.c)
 *     PopResumeServices @ 0x1404F8710 (PopResumeServices.c)
 *     PoUserShutdownCancelled @ 0x1404F8770 (PoUserShutdownCancelled.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     PopDiagTracePowerTransitionStart @ 0x1404F88F4 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x1404F899C (PopSetSleepMarker.c)
 *     PopReadSystemAwayModePolicy @ 0x1404F8A1C (PopReadSystemAwayModePolicy.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     PopPdcScreenOff @ 0x140637D18 (PopPdcScreenOff.c)
 *     PopNotifyConsoleDisplayBurst @ 0x14063C74C (PopNotifyConsoleDisplayBurst.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v4; // edi
  char v9; // r13
  unsigned int v10; // ebx
  signed int v11; // esi
  bool v12; // al
  int v13; // ebx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  char v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  char v25; // [rsp+20h] [rbp-48h]
  bool v26; // [rsp+21h] [rbp-47h]
  int v27; // [rsp+24h] [rbp-44h]
  int v28; // [rsp+28h] [rbp-40h] BYREF
  int v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-30h]
  _DWORD v31[4]; // [rsp+40h] [rbp-28h] BYREF
  int v32; // [rsp+50h] [rbp-18h]
  unsigned int v33; // [rsp+54h] [rbp-14h]

  v4 = 0;
  v27 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v9 = 1;
  if ( !byte_1402DE290 && !byte_1402DE291
    || a2 != PowerActionSleep
    || a3 >= PowerSystemHibernate
    || (dword_1402DE094 & 0xFFFFFFFA) != 0
    || dword_1402DE094 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_1402DE094 )
    {
      if ( dword_1402DE094 > 5 && (dword_1402DE094 <= 7 || dword_1402DE094 == 11) )
        v10 = 21;
      else
        v10 = 20;
    }
    else
    {
      v10 = 1;
    }
    if ( a2 == PowerActionDisplayOff )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock();
      v13 = PopPdcScreenOff(v10, v23);
LABEL_52:
      PopAcquirePolicyLock();
      return (unsigned int)v13;
    }
    v26 = (unsigned int)(a2 - 4) <= 2;
    if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
      v9 = 0;
    if ( a4 >= 0 )
      v11 = a4 | 1;
    else
      v11 = a4 & 0xFFFFFFFE;
    if ( v9 )
      PopAction &= ~2u;
    v25 = byte_1402DE130;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v26 )
      {
LABEL_22:
        if ( v9 )
        {
          v13 = ZwSetSystemPowerState(a2, a3, v11);
        }
        else
        {
          LOBYTE(v31[0]) = a1;
          v31[1] = a2;
          v31[2] = a3;
          v31[3] = v11;
          v33 = v10;
          if ( !a1 )
            v27 = PoBlockConsoleSwitch((__int64)v31);
          v32 = 1;
          v13 = PopDispatchStateCallout(v31, 0LL);
          if ( v13 < 0 || a1 )
          {
            v18 = v25;
          }
          else
          {
            v14 = 0;
            v30 = v11 & 0x80000000;
            if ( v11 < 0 )
              v14 = 2;
            if ( (v11 & 8) != 0 )
              v14 |= 4u;
            PfPowerActionNotify(0, v14, a3);
            PopNoMoreInput = 1;
            _InterlockedOr(v24, 0);
            if ( !v25 )
            {
              PopSuspendResumePdc(1LL, v15);
              PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
              v32 = 2;
              PopDispatchStateCallout(v31, 0LL);
              PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
              v28 = 0;
              PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
              v32 = 3;
              PopDispatchStateCallout(v31, (__int64)&v28);
              PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
            }
            if ( (v11 & 8) != 0 )
            {
              LOBYTE(v16) = 1;
              EtwShutdown(v16);
            }
            v17 = 0;
            if ( v30 )
              v17 = 2;
            PopDiagTraceSuperfetchNotification(1);
            PfPowerActionNotify(1, v17, a3);
            PopDiagTraceSuperfetchNotification(0);
            v13 = ZwSetSystemPowerState(a2, a3, v11);
            PopAcquirePolicyLock();
            v25 = byte_1402DE130;
            PopReleasePolicyLock();
            if ( (v11 & 8) != 0 )
              PoUserShutdownCancelled();
            PopNoMoreInput = 0;
            _InterlockedOr(v24, 0);
            v18 = v25;
            if ( !v25 )
            {
              PopResumeServices(v31);
              PopSuspendResumePdc(2LL, v19);
              PopResumeApps(v31);
              PopSuspendResumePdc(3LL, v20);
            }
            PfPowerActionNotify(7, 0, a3);
          }
          v32 = 8;
          PopDispatchStateCallout(v31, 0LL);
          if ( !a1 )
          {
            v29 = v27;
            v32 = 7;
            PopDispatchStateCallout(v31, (__int64)&v29);
          }
          if ( !v18 && byte_1402DDF74 && a2 == PowerActionSleep && a3 == PowerSystemHibernate )
            PopNotifyConsoleDisplayBurst();
        }
        if ( !a1 && !v26 )
        {
          if ( v13 >= 0 )
          {
            qword_1402DE5E0 = KeQueryPerformanceCounter(0LL).QuadPart;
            PopDiagTraceHiberStats();
            PopDiagTracePowerTransitionTime();
            PopDiagTracePerfTrackData((unsigned int)v11);
            PopShutdownButtonPressTime = 0LL;
            SystemAction = a2;
            MinSystemState = a3;
            PopSleepStats = 1;
          }
          PopDiagTracePowerTransitionEnd((unsigned int)v13);
        }
        PpmEndHighPerfRequest(2, v21);
        goto LABEL_52;
      }
      memset(&PopSleepStats, 0, 0x248uLL);
    }
    v12 = v26;
    if ( !v26 )
    {
      PopSetSleepMarker(1LL);
      v12 = 0;
    }
    if ( !a1 && !v12 )
    {
      PopDiagTracePowerTransitionStart((unsigned int)dword_1402DE094, (unsigned int)dword_1402DE098);
      qword_1402DE5C8 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    goto LABEL_22;
  }
  if ( !dword_1402DE298 )
  {
    if ( byte_1402DE291 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_1402DE298 + 4, dword_1402DE298 + 7);
    }
    else
    {
      PopReleasePolicyLock();
      v4 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock();
    }
  }
  PopReleaseAwaymodeLock();
  return v4;
}
