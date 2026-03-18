/*
 * XREFs of PowerOnMonitor @ 0x1C000A210
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0 @ 0x1C0002150 (IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch_0 @ 0x1C0002158 (DwmSyncFlushForceRenderAndWaitForBatch_0.c)
 *     IsSetPointerSupported_0 @ 0x1C0002160 (IsSetPointerSupported_0.c)
 *     SetPointer_0 @ 0x1C0002168 (SetPointer_0.c)
 *     IsModerncorePowerOnMonitorSupported_0 @ 0x1C0002170 (IsModerncorePowerOnMonitorSupported_0.c)
 *     ModerncorePowerOnMonitor_0 @ 0x1C0002178 (ModerncorePowerOnMonitor_0.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0002180 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0002188 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     IsxxxRefreshDisplayOrientationSupported_0 @ 0x1C0002190 (IsxxxRefreshDisplayOrientationSupported_0.c)
 *     xxxRefreshDisplayOrientation_0 @ 0x1C0002198 (xxxRefreshDisplayOrientation_0.c)
 *     PowerUnDimMonitor @ 0x1C000A57C (PowerUnDimMonitor.c)
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     UserReferenceDwmApiPort @ 0x1C000B010 (UserReferenceDwmApiPort.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C006AB94 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 result; // rax
  int v3; // ebx
  BOOL v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // rsi
  int v14; // ecx
  LARGE_INTEGER v15; // rdi
  int v16; // r8d

  result = gpbInHiberBoot;
  v3 = 0;
  v4 = gPowerTransitionsState == 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    if ( !gPowerTransitionsState )
    {
      if ( !gProtocolType )
      {
        if ( gptiCurrent )
        {
          v5 = *((_QWORD *)gptiCurrent + 52);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v5 + 8);
            if ( v6 )
            {
              if ( (*(_DWORD *)(v6 + 260) & 1) != 0 )
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
                v9 = 0LL;
                while ( 1 )
                {
                  v10 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                  if ( v10 )
                    v9 = *v10;
                  if ( (unsigned int)IsCurrentProcessDwm()
                    || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
                  {
                    break;
                  }
                  if ( gbRITBlockedOnDIT )
                  {
                    if ( v9 == gptiRit )
                      break;
                    ++gcRITBlockedOnDITWaiters;
                    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                    v12 = gpsemRITBlockedOnDITWaiters;
                  }
                  else
                  {
                    if ( gbDITInHitTest != 1 || v9 == gptiRit )
                      break;
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                    v12 = gpsemDITHitTestWaiters;
                  }
                  KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
                }
                v13 = PsGetCurrentThreadWin32Thread(v11);
                if ( v13 )
                {
                  v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
                  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                    && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                    && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                    && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                  {
                    LOBYTE(v14) = byte_1C00FEA58 - 1;
                    Template_xqx(
                      v14,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v16,
                      v15.LowPart,
                      0,
                      gullUserCritAcquireToken);
                  }
                  if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                    && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                  {
                    Template_xqx(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v16,
                      0,
                      1000 * v15.QuadPart / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
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
        DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 8), 1LL);
        DisplayRestoreVidPnJournalFinalize();
        if ( (int)IsModerncorePowerOnMonitorSupported_0() >= 0 )
          ModerncorePowerOnMonitor_0();
        if ( grpdeskRitInput && (int)IsSetPointerSupported_0() >= 0 )
          SetPointer_0();
        if ( gSqmIsOptedIn )
          SqmPowerState();
      }
      v3 = 1;
    }
    result = PowerUnDimMonitor();
    if ( dword_1C00FFF88 == 2 )
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
