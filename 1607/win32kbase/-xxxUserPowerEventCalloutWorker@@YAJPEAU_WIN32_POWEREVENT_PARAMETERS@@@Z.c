/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C006F920 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C20 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C28 (SetTimerCoalescingTolerance_0.c)
 *     IsxxxSendMessageBSMSupported_0 @ 0x1C0001C30 (IsxxxSendMessageBSMSupported_0.c)
 *     xxxSendMessageBSM_0 @ 0x1C0001C38 (xxxSendMessageBSM_0.c)
 *     IsPowerOnGdiSupported_0 @ 0x1C0001C40 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0001C48 (PowerOnGdi_0.c)
 *     ProcessDelayedSdc_0 @ 0x1C0001C50 (ProcessDelayedSdc_0.c)
 *     PostPlaySoundMessage_0 @ 0x1C0001C58 (PostPlaySoundMessage_0.c)
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001C60 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001C68 (SetForegroundPriority_0.c)
 *     IsIsHungWindowSupported_0 @ 0x1C0001C70 (IsIsHungWindowSupported_0.c)
 *     IsHungWindow_0 @ 0x1C0001C78 (IsHungWindow_0.c)
 *     IsStartScreenSaverSupported_0 @ 0x1C0001C80 (IsStartScreenSaverSupported_0.c)
 *     StartScreenSaver_0 @ 0x1C0001C88 (StartScreenSaver_0.c)
 *     _PostMessage_0 @ 0x1C0001C90 (_PostMessage_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C007003C (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0070410 (PowerUnDimMonitor.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00704F4 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerInputEvent @ 0x1C0070550 (PowerInputEvent.c)
 *     PostWinlogonMessage @ 0x1C0071B40 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0072080 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00828A0 (EtwTraceIdleActionExpiration.c)
 *     PowerResumeSuspendEvent @ 0x1C0086240 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B20AC (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2178 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00B24F8 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C00B2EF0 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00B3090 (PowerIsDisplayRequired.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r12d
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER *v12; // rdi
  struct tagTHREADINFO *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r15
  int v16; // ecx
  int v17; // r8d
  LARGE_INTEGER v18; // r14
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // ecx
  int v24; // r8d
  LARGE_INTEGER v25; // r14
  NTSTATUS v26; // eax
  LARGE_INTEGER *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r15
  int v32; // ecx
  LARGE_INTEGER v33; // r14
  __int64 v34; // rdx
  int v35; // eax
  enum _MONITOR_DISPLAY_STATE v36; // ecx
  bool InputBuffer[4]; // [rsp+38h] [rbp-79h] BYREF
  POWER_MONITOR_REQUEST_REASON v38; // [rsp+3Ch] [rbp-75h]
  struct tagTHREADINFO *v39; // [rsp+40h] [rbp-71h]
  struct tagTHREADINFO *v40; // [rsp+48h] [rbp-69h]
  unsigned __int64 OutputBuffer; // [rsp+50h] [rbp-61h] BYREF
  int v42; // [rsp+58h] [rbp-59h]
  int v43; // [rsp+5Ch] [rbp-55h]
  int v44; // [rsp+80h] [rbp-31h] BYREF
  __int64 v45; // [rsp+84h] [rbp-2Dh]
  __int16 v46; // [rsp+8Ch] [rbp-25h]
  _QWORD v47[8]; // [rsp+98h] [rbp-19h] BYREF

  memset(v47, 0, sizeof(v47));
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v4 = 0;
  v5 = *(_DWORD *)a1;
  v6 = *((_QWORD *)a1 + 1);
  v47[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v47[3]) = 16;
  if ( gbPowerCalloutsReady )
  {
    if ( v5 > 8 )
    {
      v10 = (unsigned int)(v5 - 9);
      if ( v5 != 9 )
      {
        switch ( v5 )
        {
          case 10:
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v6);
            return v4;
          case 11:
            if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext)
              && !dword_1C011BB60
              && dword_1C011BB10 == (_DWORD)v6
              && (!gbTtmEnabled || gbBuiltinPanelOn) )
            {
              if ( (_DWORD)v6 == 1 )
              {
                PowerUnDimMonitor();
              }
              else if ( (_DWORD)v6 == 2 )
              {
                PowerDimMonitor();
              }
            }
            return v4;
          case 12:
LABEL_9:
            DisarmPowerWatchdog(gpRequestQueueWatchdog);
            if ( --gPowerOnRequestCount )
              ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
            if ( v5 == 12 )
              UserSessionSwitchBlock_End();
            if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && !dword_1C011BB60 )
            {
              v38 = (int)v6;
              InputBuffer[0] = gProtocolType == 0;
              if ( HIDWORD(qword_1C011BB6C) && !gProtocolType && (_DWORD)v6 != 22 )
              {
                if ( (_DWORD)v6 != 1 || !ShouldEscapeProximity() )
                  return v4;
                HIDWORD(qword_1C011BB6C) = 0;
              }
              ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
              gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, InputBuffer, 8u, 0LL, 0);
              DisarmPowerWatchdog(gpRequestWorkerWatchdog);
              if ( gLastResumeResult == 259 )
              {
                if ( !gWakeInProgress )
                {
                  gWakeInProgressReason = v38;
                  gWakeInProgress = 1;
                  UserSessionSwitchBlock_Start();
                }
                return v4;
              }
              if ( gLastResumeResult == -1073741823 )
                return v4;
              v8 = 0;
              if ( !gbGDIOn && (int)IsPowerOnGdiSupported_0() >= 0 )
              {
                ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                PowerOnGdi_0();
                DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                v8 = 1;
              }
              PowerOnMonitor(v38);
              if ( v8 )
                ProcessDelayedSdc_0();
            }
            goto LABEL_21;
          case 13:
            PowerOnSession((unsigned int)v6);
            break;
          case 14:
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v6, v2);
            break;
          case 15:
            if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) || dword_1C011BB60 )
              return v4;
            if ( v6 == 1 )
            {
              gbBuiltinPanelOn = 1;
              PowerUnDimMonitor();
              v36 = PowerMonitorOn;
            }
            else
            {
              if ( v6 != 2 )
              {
                gbBuiltinPanelOn = 0;
                return v4;
              }
              gbBuiltinPanelOn = 1;
              PowerDimMonitor();
              v36 = PowerMonitorDim;
            }
            UpdateDisplayState(v36, MonitorRequestReasonUnknown, 1, 0);
            return v4;
          default:
            return (unsigned int)-1073741822;
        }
        UserSessionSwitchBlock_End();
        return v4;
      }
    }
    else
    {
      if ( v5 != 8 )
      {
        v7 = (unsigned int)v5;
        switch ( v5 )
        {
          case 0:
            if ( !gProtocolType && gPowerAdaptiveState )
            {
              LOBYTE(v7) = 1;
              gPowerAdaptiveState = 0;
              PowerInputEvent(v7);
            }
            if ( !gbRemoteSession )
            {
              LOBYTE(v3) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v3) )
              {
                v44 = 0;
                v45 = 7LL;
                v46 = 0;
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit();
                ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v44, 0x10u, 0LL, 0);
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v39 = EnterCritAvoidingDitHitTestHazard(0, 1);
                v22 = PsGetCurrentThreadWin32Thread(v21);
                if ( v22 )
                {
                  v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
                  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                    && (qword_1C0118B10 & 0x200000010000000LL) != 0
                    && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                    && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                  {
                    LOBYTE(v23) = byte_1C0118B28 - 1;
                    Template_xqx(
                      v23,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v24,
                      v25.LowPart,
                      0,
                      gullUserCritAcquireToken);
                  }
                  if ( v25.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                    && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                  {
                    Template_xqx(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v24,
                      0,
                      1000 * v25.QuadPart / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
                gptiCurrent = v39;
                gbValidateHandleForIL = 1;
              }
            }
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit();
            v26 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
            LODWORD(v39) = v26 == 0;
            v27 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v26 == 0);
            if ( v27 )
              v27[1] = KeQueryPerformanceCounter(0LL);
            v40 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v31 = PsGetCurrentThreadWin32Thread(v28);
            if ( v31 )
            {
              v33 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v31 + 8));
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                && (qword_1C0118B10 & 0x200000010000000LL) != 0
                && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v32) = byte_1C0118B28 - 1;
                Template_xqx(
                  v32,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v30,
                  v33.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v33.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v30,
                  0,
                  1000 * v33.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v31 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            gptiCurrent = v40;
            gbValidateHandleForIL = 1;
            if ( !(_DWORD)v39 || gSessionCreationTime < OutputBuffer )
            {
              LOBYTE(v30) = 1;
              LOBYTE(v29) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v29, v30) )
              {
                v42 = 16;
                v43 = 0x20000000;
                if ( (int)IsxxxSendMessageBSMSupported_0() >= 0 )
                  xxxSendMessageBSM_0();
              }
            }
LABEL_21:
            if ( (int)IsSetTimerCoalescingToleranceSupported_0() >= 0 )
LABEL_22:
              SetTimerCoalescingTolerance_0();
            return v4;
          case 1:
            v4 = PostWinlogonMessage(256LL, v6);
            if ( !v4 )
              PostPlaySoundMessage_0();
            return v4;
          case 2:
            if ( !gbRemoteSession )
            {
              v44 = 0;
              v45 = 10LL;
              v46 = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit();
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v44, 0x10u, 0LL, 0);
              v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
              if ( v12 )
                v12[1] = KeQueryPerformanceCounter(0LL);
              v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v15 = PsGetCurrentThreadWin32Thread(v14);
              if ( v15 )
              {
                v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                  && (qword_1C0118B10 & 0x200000010000000LL) != 0
                  && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v16,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v17,
                    v18.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v18.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v17,
                    0,
                    1000 * v18.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v13;
              gbValidateHandleForIL = 1;
            }
            v42 = 16;
            v43 = 16;
            if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
              return v4;
            break;
          case 3:
            v42 = 16;
            v43 = 16;
            if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
              return v4;
            break;
          case 4:
            goto LABEL_9;
          case 5:
            if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
              return v4;
            v38 = (int)v6;
            PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v6);
            if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 || v38 == MonitorRequestReasonGracePeriod )
              return v4;
            goto LABEL_22;
          case 6:
            v34 = glinp;
            if ( qword_1C011A4D0 != glinp )
            {
              EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
              v34 = glinp;
              qword_1C011A4D0 = glinp;
            }
            if ( (gPowerTransitionsState || (*(_DWORD *)gpsi & 0x200) != 0 && qword_1C011A4C8 != v34)
              && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets) )
            {
              if ( gppiScreenSaver )
              {
                v35 = *(_DWORD *)(gppiScreenSaver + 12);
                if ( (v35 & 0x400000) == 0 )
                {
                  *(_DWORD *)(gppiScreenSaver + 12) = v35 | 0x400000;
                  if ( (int)IsSetForegroundPrioritySupported_0() >= 0 )
                  {
                    if ( *(_QWORD *)(gppiScreenSaver + 296) )
                      SetForegroundPriority_0();
                  }
                }
              }
              else if ( gpqForeground
                     && *(_QWORD *)(gpqForeground + 88)
                     && (int)IsIsHungWindowSupported_0() >= 0
                     && !(unsigned int)IsHungWindow_0() )
              {
                if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported_0() >= 0 )
                  StartScreenSaver_0();
                PostMessage_0();
              }
              else if ( (int)IsStartScreenSaverSupported_0() >= 0 )
              {
                StartScreenSaver_0();
              }
            }
            return v4;
          case 7:
            if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) || dword_1C011BB60 || !gPowerTransitionsState )
              return v4;
            PowerDimMonitor();
            if ( !gProtocolType )
              UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, 1);
            if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
              return v4;
            goto LABEL_22;
          default:
            return (unsigned int)-1073741822;
        }
        xxxSendMessageBSM_0();
        return v4;
      }
      v10 = 1LL;
    }
    PowerInputEvent(v10);
    return v4;
  }
  return 3221225473LL;
}
