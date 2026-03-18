/*
 * XREFs of PopIssueActionRequest @ 0x14056624C
 * Callers:
 *     PopPolicyWorkerAction @ 0x140566108 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405699EC (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopSetSystemState @ 0x14012DEA8 (PopSetSystemState.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PpmEndHighPerfRequest @ 0x14015A1D0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1401821D0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x1403EF0EC (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403EF17C (PopAcquireAwaymodeLock.c)
 *     PopSystemStateString @ 0x1404032B4 (PopSystemStateString.c)
 *     PoBlockConsoleSwitch @ 0x14055E220 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1405660EC (PopDiagTraceSuperfetchNotification.c)
 *     PopSuspendResumePdc @ 0x1405666AC (PopSuspendResumePdc.c)
 *     PopUserShutdownCancelled @ 0x140566C24 (PopUserShutdownCancelled.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140566C88 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionTime @ 0x140566D18 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140566E28 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140566F50 (PopDiagTraceHiberStats.c)
 *     PopResumeApps @ 0x140567418 (PopResumeApps.c)
 *     PopResumeServices @ 0x140567474 (PopResumeServices.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     PopDiagTracePowerTransitionStart @ 0x1405675C0 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x140567668 (PopSetSleepMarker.c)
 *     PopReadSystemAwayModePolicy @ 0x1405676E8 (PopReadSystemAwayModePolicy.c)
 *     PopPowerActionString @ 0x1406B07B0 (PopPowerActionString.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 *     PopPdcScreenOff @ 0x1406B7AA4 (PopPdcScreenOff.c)
 */

__int64 __fastcall PopIssueActionRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  SYSTEM_POWER_STATE v5; // r13d
  int v6; // esi
  POWER_ACTION v7; // r15d
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rdx
  int v14; // ebx
  char v15; // al
  signed int v16; // esi
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // rax
  const char *v21; // rdx
  const char *v22; // r9
  __int64 v23; // rdx
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // bl
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  char v32; // [rsp+30h] [rbp-48h]
  char v33; // [rsp+31h] [rbp-47h]
  int v34; // [rsp+34h] [rbp-44h]
  int v35; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+3Ch] [rbp-3Ch]
  int v37; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-30h]
  _DWORD v39[4]; // [rsp+50h] [rbp-28h] BYREF
  int v40; // [rsp+60h] [rbp-18h]
  unsigned int v41; // [rsp+64h] [rbp-14h]

  v4 = 0;
  v5 = (int)a3;
  v34 = 0;
  v6 = a4;
  v7 = (int)a2;
  v8 = a1;
  PopAcquireAwaymodeLock(a1, a2, a3, a4);
  PopReadSystemAwayModePolicy();
  v11 = 1;
  if ( !byte_14032E850 && !byte_14032E851
    || v7 != PowerActionSleep
    || v5 >= PowerSystemHibernate
    || (dword_14032E654 & 0xFFFFFFFA) != 0
    || dword_14032E654 == 1 )
  {
    PopReleaseAwaymodeLock(v10, v9);
    if ( dword_14032E654 )
      v11 = (0x1500000001LL - (unsigned __int64)(unsigned int)(dword_14032E654 - 6)) >> 32;
    if ( v7 == PowerActionDisplayOff )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock();
      v14 = PopPdcScreenOff(v11, v13);
      goto LABEL_68;
    }
    if ( !PsWin32CalloutsEstablished || (v15 = 0, (unsigned int)(v7 - 4) <= 2) )
      v15 = 1;
    v33 = v15;
    if ( v6 >= 0 )
      v16 = v6 | 1;
    else
      v16 = v6 & 0xFFFFFFFE;
    if ( v15 )
      PopAction &= ~2u;
    v32 = byte_14032E6E8;
    if ( (PoDebug & 8) != 0 )
    {
      v17 = PopSystemStateString(v5);
      v20 = (const char *)PopPowerActionString((unsigned int)v7, v18, v19, v17);
      DbgPrint("PowerAction: %s%s, Min=%s, Flags %x\n", v21, v20, v22, v16);
    }
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !v8 )
    {
      if ( (unsigned int)(v7 - 4) <= 2 )
        goto LABEL_37;
      memset(&PopSleepStats, 0, 0x248uLL);
    }
    if ( (unsigned int)(v7 - 4) > 2 )
      PopSetSleepMarker(1LL);
    if ( !v8 && (unsigned int)(v7 - 4) > 2 )
    {
      PopDiagTracePowerTransitionStart((unsigned int)dword_14032E654, (unsigned int)dword_14032E658);
      qword_14032EB88 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
LABEL_37:
    if ( v33 )
    {
      if ( (PoDebug & 8) != 0 )
        DbgPrint("PowerAction: Setting with direct call\n");
      v14 = ZwSetSystemPowerState(v7, v5, v16);
    }
    else
    {
      LOBYTE(v39[0]) = v8;
      v39[1] = v7;
      v39[2] = v5;
      v39[3] = v16;
      v41 = v11;
      if ( !v8 )
        v34 = PoBlockConsoleSwitch((__int64)v39);
      v40 = 1;
      v14 = PopDispatchStateCallout(v39, 0LL);
      if ( v14 >= 0 && !v8 )
      {
        v24 = 0;
        v38 = v16 & 0x80000000;
        if ( v16 < 0 )
          v24 = 2;
        v36 = v16 & 8;
        if ( (v16 & 8) != 0 )
          v24 |= 4u;
        PfPowerActionNotify(0, v24, v5);
        PopNoMoreInput = 1;
        _InterlockedOr(v31, 0);
        if ( !v32 )
        {
          PopSuspendResumePdc(1LL, v25);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
          v40 = 2;
          PopDispatchStateCallout(v39, 0LL);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
          v35 = 0;
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
          v40 = 3;
          PopDispatchStateCallout(v39, (__int64)&v35);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
        }
        if ( (v16 & 8) != 0 )
        {
          LOBYTE(v26) = 1;
          EtwShutdown(v26);
        }
        v27 = 0;
        if ( v38 )
          v27 = 2;
        PopDiagTraceSuperfetchNotification(1);
        PfPowerActionNotify(1, v27, v5);
        PopDiagTraceSuperfetchNotification(0);
        v14 = ZwSetSystemPowerState(v7, v5, v16);
        PopAcquirePolicyLock();
        v32 = byte_14032E6E8;
        PopReleasePolicyLock();
        if ( v36 )
        {
          LOBYTE(v28) = 1;
          PopUserShutdownCancelled(v28);
        }
        PopNoMoreInput = 0;
        _InterlockedOr(v31, 0);
        if ( !v32 )
        {
          PopResumeServices(v39);
          PopSuspendResumePdc(2LL, v29);
          PopResumeApps(v39);
          PopSuspendResumePdc(3LL, v30);
        }
        PfPowerActionNotify(7, 0, v5);
      }
      v40 = 8;
      PopDispatchStateCallout(v39, 0LL);
      if ( v8 )
        goto LABEL_67;
      v37 = v34;
      v40 = 7;
      PopDispatchStateCallout(v39, (__int64)&v37);
    }
    if ( !v8 && (unsigned int)(v7 - 4) > 2 )
    {
      if ( v14 >= 0 )
      {
        qword_14032EBA0 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopDiagTraceHiberStats();
        PopDiagTracePowerTransitionTime();
        PopDiagTracePerfTrackData((unsigned int)v16);
        PopShutdownButtonPressTime = 0LL;
        SystemAction = v7;
        MinSystemState = v5;
        PopSleepStats = 1;
      }
      PopDiagTracePowerTransitionEnd((unsigned int)v14);
    }
LABEL_67:
    PpmEndHighPerfRequest(2, v23);
LABEL_68:
    PopAcquirePolicyLock();
    return (unsigned int)v14;
  }
  if ( !dword_14032E858 )
  {
    if ( byte_14032E851 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_14032E858 + 4, dword_14032E858 + 7);
    }
    else
    {
      PopReleasePolicyLock();
      v4 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock();
    }
  }
  PopReleaseAwaymodeLock(v10, v9);
  return v4;
}
