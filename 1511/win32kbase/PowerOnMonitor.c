/*
 * XREFs of PowerOnMonitor @ 0x1C000A870
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0 @ 0x1C0002180 (IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch_0 @ 0x1C0002188 (DwmSyncFlushForceRenderAndWaitForBatch_0.c)
 *     IsSetPointerSupported_0 @ 0x1C0002190 (IsSetPointerSupported_0.c)
 *     SetPointer_0 @ 0x1C0002198 (SetPointer_0.c)
 *     IsModerncorePowerOnMonitorSupported_0 @ 0x1C00021A0 (IsModerncorePowerOnMonitorSupported_0.c)
 *     ModerncorePowerOnMonitor_0 @ 0x1C00021A8 (ModerncorePowerOnMonitor_0.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C00021B0 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C00021B8 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     IsxxxRefreshDisplayOrientationSupported_0 @ 0x1C00021C0 (IsxxxRefreshDisplayOrientationSupported_0.c)
 *     xxxRefreshDisplayOrientation_0 @ 0x1C00021C8 (xxxRefreshDisplayOrientation_0.c)
 *     PowerUnDimMonitor @ 0x1C000AB34 (PowerUnDimMonitor.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00857B0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 result; // rax
  int v3; // ebx
  BOOL v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ecx
  LARGE_INTEGER v13; // rbx
  int v14; // r8d
  __int64 v15; // rcx

  result = gpbInHiberBoot;
  v3 = 0;
  v4 = gPowerTransitionsState == 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    if ( !gPowerTransitionsState )
    {
      if ( !gProtocolType )
      {
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v5 = *((_QWORD *)gptiCurrent + 51);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v5 + 8);
            if ( v6 )
            {
              if ( (*(_DWORD *)(v6 + 244) & 1) != 0 )
              {
                UserSessionSwitchLeaveCrit();
                if ( (int)IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0() >= 0 )
                {
                  UserReferenceDwmApiPort();
                  DwmSyncFlushForceRenderAndWaitForBatch_0();
                }
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v9 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                v11 = PsGetCurrentThreadWin32Thread(v10);
                if ( v11 )
                {
                  v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
                  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                    && (qword_1C01020B0 & 0x200000010000000LL) != 0
                    && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                    && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                  {
                    LOBYTE(v12) = byte_1C01020C8 - 1;
                    Template_xqx(
                      v12,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v14,
                      v13.LowPart,
                      0,
                      gullUserCritAcquireToken);
                  }
                  if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                    && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                  {
                    Template_xqx(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v14,
                      0,
                      1000 * v13.QuadPart / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
                gptiCurrent = v9;
                gbValidateHandleForIL = 1;
              }
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported_0() >= 0 )
          SetPointer_0();
        DisplayRestoreVidPnJournalBegin();
        DrvSetMonitorPowerState(v15, 1LL, 0LL);
        DisplayRestoreVidPnJournalFinalize();
        if ( (int)IsModerncorePowerOnMonitorSupported_0() >= 0 )
          ModerncorePowerOnMonitor_0();
        if ( grpdeskRitInput && (int)IsSetPointerSupported_0() >= 0 )
          SetPointer_0();
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
      }
      v3 = 1;
    }
    result = PowerUnDimMonitor();
    if ( dword_1C0104734 == 2 )
      v3 = 1;
    if ( v3 )
    {
      UpdateDisplayState(PowerMonitorOn, a1, v4);
      result = IsDwmAsyncNotifyDisplayModeChangeSupported_0();
      if ( (int)result >= 0 )
      {
        ReferenceDwmApiPort();
        result = DwmAsyncNotifyDisplayModeChange_0();
      }
    }
    if ( v4 && grpdeskRitInput )
    {
      result = IsxxxRefreshDisplayOrientationSupported_0();
      if ( (int)result >= 0 )
        return xxxRefreshDisplayOrientation_0();
    }
  }
  return result;
}
