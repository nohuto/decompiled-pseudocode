/*
 * XREFs of PopIssueActionRequest @ 0x1405305A8
 * Callers:
 *     PopPolicyWorkerAction @ 0x140530B48 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534D98 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopSetSystemState @ 0x1400B2BC4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x140131ACC (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401323F8 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x14015D4F0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x1403D0614 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403D068C (PopAcquireAwaymodeLock.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1403DFAF0 (PopCheckpointSystemSleepUnsafe.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404D136C (PopDispatchStateCallout.c)
 *     PopDispatchSuperfetchNotification @ 0x1405303B4 (PopDispatchSuperfetchNotification.c)
 *     PopResumeServices @ 0x140530424 (PopResumeServices.c)
 *     PopResumeApps @ 0x140530498 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140530508 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x14053055C (PopSuspendApps.c)
 *     PopSuspendResumePdc @ 0x140530918 (PopSuspendResumePdc.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140531238 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionTime @ 0x1405312C8 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x1405313D8 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1405314F4 (PopDiagTraceHiberStats.c)
 *     PoUserShutdownCancelled @ 0x1405319AC (PoUserShutdownCancelled.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
 *     PopDiagTracePowerTransitionStart @ 0x140531B28 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x140531BD0 (PopSetSleepMarker.c)
 *     PopReadSystemAwayModePolicy @ 0x140531C88 (PopReadSystemAwayModePolicy.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x140670294 (PopScreenOff.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x14067283C (PopTraceSleepCheckpointInitFailure.c)
 *     PopNotifyConsoleDisplayBurst @ 0x140674ED4 (PopNotifyConsoleDisplayBurst.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1406B4DB8 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, int a3, int a4)
{
  unsigned int v4; // ebx
  SYSTEM_POWER_STATE v6; // edi
  unsigned int v8; // esi
  char v9; // r15
  ULONG v10; // r14d
  char v11; // r12
  char v12; // cl
  bool v13; // al
  LARGE_INTEGER PerformanceCounter; // rax
  int v15; // ecx
  int v16; // edi
  char v17; // dl
  SYSTEM_POWER_STATE v18; // edi
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  SYSTEM_POWER_STATE v25; // esi
  __int64 v27; // rdx
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  char v29; // [rsp+20h] [rbp-58h]
  bool v30; // [rsp+21h] [rbp-57h]
  int v31; // [rsp+24h] [rbp-54h]
  ULONG v32; // [rsp+28h] [rbp-50h]
  ULONG v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v35[8]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v37[4]; // [rsp+50h] [rbp-28h] BYREF
  int v38; // [rsp+60h] [rbp-18h]
  unsigned int v39; // [rsp+64h] [rbp-14h]

  v4 = 0;
  v31 = a3;
  v32 = 0;
  v6 = a3;
  v29 = a1;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  if ( (byte_140303D50 || byte_140303D51)
    && a2 == PowerActionSleep
    && v6 < PowerSystemHibernate
    && (dword_1403033B4 & 0xFFFFFFFA) == 0
    && dword_1403033B4 != 1 )
  {
    if ( !dword_140303D58 )
    {
      if ( byte_140303D51 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_140303D58 + 4, dword_140303D58 + 7);
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
  PopReleaseAwaymodeLock();
  if ( dword_1403033B4 )
  {
    if ( dword_1403033B4 > 5 && (dword_1403033B4 <= 7 || dword_1403033B4 == 11) )
      v8 = 21;
    else
      v8 = 20;
  }
  else
  {
    v8 = 1;
  }
  if ( a2 != PowerActionDisplayOff )
  {
    v30 = (unsigned int)(a2 - 4) <= 2;
    if ( !PsWin32CalloutsEstablished || (v9 = 0, (unsigned int)(a2 - 4) <= 2) )
      v9 = 1;
    if ( a4 >= 0 )
      v10 = a4 | 1;
    else
      v10 = a4 & 0xFFFFFFFE;
    if ( v9 )
      PopAction &= ~2u;
    v11 = byte_140303450;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    v12 = v29;
    PopSleepStats = 0;
    if ( !v29 )
    {
      if ( v30 )
        goto LABEL_23;
      memset(&PopSleepStats, 0, 0x268uLL);
      v12 = v29;
    }
    v13 = v30;
    if ( !v30 )
    {
      PopSetSleepMarker(1LL);
      v13 = 0;
      v12 = v29;
    }
    if ( !v12 && !v13 )
    {
      PopDiagTracePowerTransitionStart((unsigned int)dword_1403033B4, (unsigned int)dword_1403033B8);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = 0;
      qword_140303788 = PerformanceCounter.QuadPart;
      PopCheckpointSystemSleepEnabled = 0;
      if ( dword_1402FD030 == 2
        && !VslVsmEnabled
        && (PopCheckpointSystemSleepEnabledReg || byte_140303EB4 && (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) != 0) )
      {
        v15 = NtQueryEnvironmentVariableInfoEx(1LL, v36, &v34, v35);
        if ( v15 >= 0 )
        {
          if ( v34 <= 0x2000 )
          {
            v16 = -1073741670;
            goto LABEL_79;
          }
          v15 = PopCheckpointSystemSleepUnsafe(0);
          if ( v15 >= 0 )
            PopCheckpointSystemSleepEnabled = 1;
        }
      }
      v16 = v15;
      if ( v15 < 0 )
      {
LABEL_79:
        PopTraceSleepCheckpointInitFailure();
        v25 = v31;
        goto LABEL_47;
      }
      PopCheckpointSystemSleep(1);
      v12 = v29;
      v6 = v31;
    }
LABEL_23:
    if ( v9 )
    {
      v16 = ZwSetSystemPowerState(a2, v6, v10);
    }
    else
    {
      LOBYTE(v37[0]) = v12;
      v37[1] = a2;
      v37[2] = v6;
      v37[3] = v10;
      v39 = v8;
      if ( !v12 )
        v32 = PoBlockConsoleSwitch((__int64)v37);
      v38 = 1;
      v16 = PopDispatchStateCallout(v37, 0LL);
      if ( v16 >= 0 && !v29 )
      {
        v17 = 0;
        if ( (v10 & 0x80000000) != 0 )
          v17 = 2;
        if ( (v10 & 8) != 0 )
          v17 |= 4u;
        v18 = v31;
        v19 = v31;
        PfPowerActionNotify(0, v17, v31);
        PopNoMoreInput = 1;
        _InterlockedOr(v28, 0);
        if ( !v11 )
        {
          PopSuspendResumePdc(1LL, v20);
          PopSuspendApps(v37);
          PopSuspendServices(v37);
        }
        if ( (v10 & 8) != 0 )
        {
          LOBYTE(v21) = 1;
          EtwShutdown(v21);
        }
        PopDispatchSuperfetchNotification(v10, v18);
        v16 = ZwSetSystemPowerState(a2, v18, v10);
        PopAcquirePolicyLock();
        v11 = byte_140303450;
        PopReleasePolicyLock();
        if ( (v10 & 8) != 0 )
          PoUserShutdownCancelled();
        PopNoMoreInput = 0;
        _InterlockedOr(v28, 0);
        if ( !v11 )
        {
          PopResumeServices(v37);
          PopSuspendResumePdc(2LL, v22);
          PopResumeApps(v37);
          PopSuspendResumePdc(3LL, v23);
        }
        PfPowerActionNotify(7, 0, v19);
      }
      v38 = 8;
      PopDispatchStateCallout(v37, 0LL);
      if ( !v29 )
      {
        v33 = v32;
        v38 = 7;
        PopDispatchStateCallout(v37, (__int64)&v33);
      }
      if ( !v11 )
      {
        v25 = v31;
        if ( byte_140303EB4 && a2 == PowerActionSleep && v31 == 5 )
          PopNotifyConsoleDisplayBurst();
LABEL_45:
        if ( v29 || v30 )
        {
LABEL_50:
          PpmEndHighPerfRequest(2, v24);
          v4 = v16;
LABEL_51:
          PopAcquirePolicyLock();
          return v4;
        }
LABEL_47:
        if ( v16 >= 0 )
        {
          qword_1403037B0 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDiagTraceHiberStats();
          PopDiagTracePowerTransitionTime();
          PopDiagTracePerfTrackData(v10);
          PopShutdownButtonPressTime = 0LL;
          SystemAction = a2;
          MinSystemState = v25;
          PopSleepStats = 1;
        }
        PopDiagTracePowerTransitionEnd((unsigned int)v16);
        PopCheckpointSystemSleep(41);
        goto LABEL_50;
      }
    }
    v25 = v31;
    goto LABEL_45;
  }
  if ( PopConsoleDisplayState )
  {
    PopReleasePolicyLock();
    PopScreenOff(v8, v27);
    goto LABEL_51;
  }
  return 3221266435LL;
}
