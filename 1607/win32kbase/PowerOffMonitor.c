/*
 * XREFs of PowerOffMonitor @ 0x1C0086340
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsPrepareGammaRampDataSupported_0 @ 0x1C0001CA8 (IsPrepareGammaRampDataSupported_0.c)
 *     PrepareGammaRampData_0 @ 0x1C0001CB0 (PrepareGammaRampData_0.c)
 *     IsFadeDesktopSupported_0 @ 0x1C0001CB8 (IsFadeDesktopSupported_0.c)
 *     FadeDesktop_0 @ 0x1C0001CC0 (FadeDesktop_0.c)
 *     IsModerncorePowerOffMonitorSupported_0 @ 0x1C0001CC8 (IsModerncorePowerOffMonitorSupported_0.c)
 *     ModerncorePowerOffMonitor_0 @ 0x1C0001CD0 (ModerncorePowerOffMonitor_0.c)
 *     IsRestoreGammaRampSupported_0 @ 0x1C0001CD8 (IsRestoreGammaRampSupported_0.c)
 *     RestoreGammaRamp_0 @ 0x1C0001CE0 (RestoreGammaRamp_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     PostWinlogonMessage @ 0x1C0071B40 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0072080 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00871A8 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00B24D4 (-SetProximityBlocking@@YAXXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  int v2; // r12d
  int v5; // r15d
  int v6; // r13d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]

  v2 = gPowerTransitionsState;
  v13 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( gPowerTransitionsState || qword_1C011BB6C )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v11 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v11, 4LL, 0LL, 0LL, 0, 0);
        v6 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v5 = 1, (int)IsPrepareGammaRampDataSupported_0() < 0) )
      {
        v8 = v13;
      }
      else
      {
        v7 = PrepareGammaRampData_0();
        v8 = v13;
        if ( v7 < 0 )
          v8 = 0LL;
        v13 = v8;
      }
      DrvDxgkLogCodePointPacket(14LL, v8 != 0, 0LL, 0LL);
      if ( (int)IsModerncorePowerOffMonitorSupported_0() >= 0 )
        ModerncorePowerOffMonitor_0();
      LOBYTE(v10) = 1;
      DrvSetMonitorPowerState(v9, 4LL, v10, a2);
      if ( v13 && (int)IsRestoreGammaRampSupported_0() >= 0 )
        RestoreGammaRamp_0();
      if ( v5 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C011BAE8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v2, 1);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v6 )
    {
      v12 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v12, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
