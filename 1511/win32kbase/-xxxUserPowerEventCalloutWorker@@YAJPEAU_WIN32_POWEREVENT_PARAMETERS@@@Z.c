/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C000BDB0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C50 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C58 (SetTimerCoalescingTolerance_0.c)
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001D20 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001D28 (SetForegroundPriority_0.c)
 *     _PostMessage_0 @ 0x1C0001FB8 (_PostMessage_0.c)
 *     PostPlaySoundMessage_0 @ 0x1C0002090 (PostPlaySoundMessage_0.c)
 *     IsxxxSendMessageBSMSupported_0 @ 0x1C00020F0 (IsxxxSendMessageBSMSupported_0.c)
 *     xxxSendMessageBSM_0 @ 0x1C00020F8 (xxxSendMessageBSM_0.c)
 *     IsPowerOffGdiSupported_0 @ 0x1C0002100 (IsPowerOffGdiSupported_0.c)
 *     PowerOffGdi_0 @ 0x1C0002108 (PowerOffGdi_0.c)
 *     IsPowerOnGdiSupported_0 @ 0x1C0002110 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0002118 (PowerOnGdi_0.c)
 *     IsIsHungWindowSupported_0 @ 0x1C0002120 (IsIsHungWindowSupported_0.c)
 *     IsHungWindow_0 @ 0x1C0002128 (IsHungWindow_0.c)
 *     IsStartScreenSaverSupported_0 @ 0x1C0002130 (IsStartScreenSaverSupported_0.c)
 *     StartScreenSaver_0 @ 0x1C0002138 (StartScreenSaver_0.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PowerInputEvent @ 0x1C007EBB0 (PowerInputEvent.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C007EC58 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     EtwTraceIdleActionExpiration @ 0x1C007F4A0 (EtwTraceIdleActionExpiration.c)
 *     PostWinlogonMessage @ 0x1C0080870 (PostWinlogonMessage.c)
 *     PowerResumeSuspendEvent @ 0x1C0084E00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     PowerDimMonitor @ 0x1C00A9BD0 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00A9D30 (PowerIsDisplayRequired.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  LARGE_INTEGER *v12; // rbx
  struct tagTHREADINFO *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r15
  int v16; // ecx
  int v17; // r8d
  LARGE_INTEGER v18; // r14
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  struct tagTHREADINFO *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // ecx
  int v25; // r8d
  LARGE_INTEGER v26; // r14
  NTSTATUS v27; // eax
  LARGE_INTEGER *v28; // r14
  struct tagTHREADINFO *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r15
  int v34; // ecx
  LARGE_INTEGER v35; // r14
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // [rsp+30h] [rbp-40h] BYREF
  __int64 v44; // [rsp+34h] [rbp-3Ch]
  char v45; // [rsp+3Ch] [rbp-34h]
  __int64 v46; // [rsp+40h] [rbp-30h]
  int v47; // [rsp+48h] [rbp-28h]
  int v48; // [rsp+4Ch] [rbp-24h]
  BOOL v49; // [rsp+A0h] [rbp+30h]
  char InputBuffer; // [rsp+A8h] [rbp+38h] BYREF
  bool v51; // [rsp+A9h] [rbp+39h]
  POWER_MONITOR_REQUEST_REASON v52; // [rsp+ACh] [rbp+3Ch]
  unsigned __int64 OutputBuffer; // [rsp+B0h] [rbp+40h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  if ( !gbPowerCalloutsReady )
    return 3221225473LL;
  v6 = *(unsigned int *)a1;
  if ( (int)v6 > 6 )
  {
    v38 = v6 - 7;
    if ( !v38 )
    {
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        return v4;
      if ( dword_1C0104760 )
        return v4;
      if ( !gPowerTransitionsState )
        return v4;
      PowerDimMonitor();
      if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
        return v4;
      goto LABEL_137;
    }
    v39 = (unsigned int)(v38 - 1);
    if ( (_DWORD)v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 1 )
            {
              PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v3);
              return v4;
            }
            return (unsigned int)-1073741822;
          }
          if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
            goto LABEL_121;
          PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v3);
          if ( !gProtocolType && (int)IsPowerOffGdiSupported_0() >= 0 )
            PowerOffGdi_0();
          if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 || (_DWORD)v3 == 17 )
          {
LABEL_121:
            UserSessionSwitchBlock_End();
            return v4;
          }
        }
        else
        {
          if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && !dword_1C0104760 )
          {
            if ( !gbGDIOn && (int)IsPowerOnGdiSupported_0() >= 0 )
              PowerOnGdi_0();
            PowerOnMonitor((enum POWER_MONITOR_REQUEST_REASON)v3);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
            goto LABEL_121;
        }
        SetTimerCoalescingTolerance_0();
        goto LABEL_121;
      }
      v39 = 0LL;
    }
    else
    {
      LODWORD(v39) = 1;
    }
    PowerInputEvent(v39);
    return v4;
  }
  if ( (_DWORD)v6 == 6 )
  {
    v36 = glinp;
    if ( dword_1C01030D8 != glinp )
    {
      EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
      v36 = glinp;
      dword_1C01030D8 = glinp;
    }
    if ( (gPowerTransitionsState || (*(_DWORD *)gpsi & 0x200) != 0 && dword_1C01030D4 != v36)
      && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets) )
    {
      if ( gppiScreenSaver )
      {
        v37 = *(_DWORD *)(gppiScreenSaver + 12);
        if ( (v37 & 0x400000) == 0 )
        {
          *(_DWORD *)(gppiScreenSaver + 12) = v37 | 0x400000;
          if ( (int)IsSetForegroundPrioritySupported_0() >= 0 )
          {
            if ( *(_QWORD *)(gppiScreenSaver + 304) )
              SetForegroundPriority_0();
          }
        }
      }
      else if ( gpqForeground
             && *(_QWORD *)(gpqForeground + 80)
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
  }
  if ( !(_DWORD)v6 )
  {
    if ( !gProtocolType && gPowerAdaptiveState )
    {
      LOBYTE(v6) = 1;
      gPowerAdaptiveState = 0;
      PowerInputEvent(v6);
    }
    if ( !gbRemoteSession )
    {
      LOBYTE(a3) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, a3) )
      {
        v43 = 0;
        v44 = 7LL;
        v46 = 0LL;
        v45 = 0;
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v43, 0x18u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v21 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
        v23 = PsGetCurrentThreadWin32Thread(v22);
        if ( v23 )
        {
          v26 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
            && (qword_1C01020B0 & 0x200000010000000LL) != 0
            && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v24) = byte_1C01020C8 - 1;
            Template_xqx(
              v24,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v25,
              v26.LowPart,
              0,
              gullUserCritAcquireToken);
          }
          if ( v26.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v25,
              0,
              1000 * v26.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v21;
        gbValidateHandleForIL = 1;
      }
    }
    UserSessionSwitchLeaveCrit();
    v27 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
    v49 = v27 == 0;
    v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27 == 0);
    if ( v28 )
      v28[1] = KeQueryPerformanceCounter(0LL);
    v29 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v33 = PsGetCurrentThreadWin32Thread(v30);
    if ( v33 )
    {
      v35 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v33 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v34) = byte_1C01020C8 - 1;
        Template_xqx(v34, (unsigned int)&AcquiredExclusiveUserCritEvent, v32, v35.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v35.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v32,
          0,
          1000 * v35.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v33 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v29;
    gbValidateHandleForIL = 1;
    if ( !v49 || gSessionCreationTime < OutputBuffer )
    {
      LOBYTE(v32) = 1;
      LOBYTE(v31) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v31, v32) )
      {
        v47 = 16;
        v48 = 0x20000000;
        if ( (int)IsxxxSendMessageBSMSupported_0() >= 0 )
          xxxSendMessageBSM_0();
      }
    }
LABEL_24:
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
      return v4;
    goto LABEL_137;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = PostWinlogonMessage(256LL, v3);
    if ( !v4 )
      PostPlaySoundMessage_0();
    return v4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( !gbRemoteSession )
    {
      v43 = 0;
      v44 = 10LL;
      v46 = 0LL;
      v45 = 0;
      UserSessionSwitchLeaveCrit();
      ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v43, 0x18u, 0LL, 0);
      v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
      if ( v12 )
        v12[1] = KeQueryPerformanceCounter(0LL);
      v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v15 = PsGetCurrentThreadWin32Thread(v14);
      if ( v15 )
      {
        v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v16) = byte_1C01020C8 - 1;
          Template_xqx(
            v16,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v17,
            v18.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
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
    v47 = 16;
    v48 = 16;
    if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
      return v4;
    goto LABEL_44;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v47 = 16;
    v48 = 16;
    if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
      return v4;
LABEL_44:
    xxxSendMessageBSM_0();
    return v4;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && !dword_1C0104760 )
    {
      InputBuffer = 1;
      v51 = gProtocolType == 0;
      v52 = (int)v3;
      v4 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
      if ( v4 == 259 )
        return 0;
      if ( !gbGDIOn && (int)IsPowerOnGdiSupported_0() >= 0 )
        PowerOnGdi_0();
      PowerOnMonitor((enum POWER_MONITOR_REQUEST_REASON)v3);
    }
    goto LABEL_24;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741822;
  if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    InputBuffer = 0;
    v51 = gProtocolType == 0;
    v52 = (int)v3;
    v4 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    if ( v4 == 259 )
      return 0;
    PowerOffMonitor(v52);
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 || v52 == MonitorRequestReasonGracePeriod )
      return v4;
LABEL_137:
    SetTimerCoalescingTolerance_0();
  }
  return v4;
}
