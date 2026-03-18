/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00095A0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C30 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C38 (SetTimerCoalescingTolerance_0.c)
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001D00 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001D08 (SetForegroundPriority_0.c)
 *     _PostMessage_0 @ 0x1C0001F88 (_PostMessage_0.c)
 *     PostPlaySoundMessage_0 @ 0x1C0002060 (PostPlaySoundMessage_0.c)
 *     IsxxxSendMessageBSMSupported_0 @ 0x1C00020C0 (IsxxxSendMessageBSMSupported_0.c)
 *     xxxSendMessageBSM_0 @ 0x1C00020C8 (xxxSendMessageBSM_0.c)
 *     IsPowerOffGdiSupported_0 @ 0x1C00020D0 (IsPowerOffGdiSupported_0.c)
 *     PowerOffGdi_0 @ 0x1C00020D8 (PowerOffGdi_0.c)
 *     IsPowerOnGdiSupported_0 @ 0x1C00020E0 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C00020E8 (PowerOnGdi_0.c)
 *     IsIsHungWindowSupported_0 @ 0x1C00020F0 (IsIsHungWindowSupported_0.c)
 *     IsHungWindow_0 @ 0x1C00020F8 (IsHungWindow_0.c)
 *     IsStartScreenSaverSupported_0 @ 0x1C0002100 (IsStartScreenSaverSupported_0.c)
 *     StartScreenSaver_0 @ 0x1C0002108 (StartScreenSaver_0.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     PowerInputEvent @ 0x1C000A630 (PowerInputEvent.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0019520 (EtwTraceIdleActionExpiration.c)
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     PowerResumeSuspendEvent @ 0x1C006E920 (PowerResumeSuspendEvent.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A4AD8 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     PowerDimMonitor @ 0x1C00A5298 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00A53D0 (PowerIsDisplayRequired.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  LARGE_INTEGER *v12; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // rsi
  int v18; // ecx
  LARGE_INTEGER v19; // rdi
  int v20; // r8d
  __int64 v21; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v23; // rbx
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rcx
  PVOID v26; // rcx
  __int64 v27; // rsi
  int v28; // ecx
  LARGE_INTEGER v29; // rdi
  int v30; // r8d
  BOOL v31; // r13d
  __int64 v32; // rcx
  LARGE_INTEGER *v33; // rbx
  struct tagTHREADINFO *v34; // rbx
  struct tagTHREADINFO **v35; // rax
  __int64 v36; // rcx
  PVOID v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r8
  int v41; // ecx
  LARGE_INTEGER v42; // rdi
  __int64 v43; // rdx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // [rsp+30h] [rbp-40h] BYREF
  __int64 v51; // [rsp+34h] [rbp-3Ch]
  char v52; // [rsp+3Ch] [rbp-34h]
  __int64 v53; // [rsp+40h] [rbp-30h]
  int v54; // [rsp+48h] [rbp-28h]
  int v55; // [rsp+4Ch] [rbp-24h]
  char InputBuffer; // [rsp+A0h] [rbp+30h] BYREF
  bool v57; // [rsp+A1h] [rbp+31h]
  POWER_MONITOR_REQUEST_REASON v58; // [rsp+A4h] [rbp+34h]
  unsigned __int64 OutputBuffer; // [rsp+A8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  if ( !gbPowerCalloutsReady )
    return 3221225473LL;
  v6 = *(unsigned int *)a1;
  if ( (int)v6 > 6 )
  {
    v45 = v6 - 7;
    if ( !v45 )
    {
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
        return v4;
      if ( dword_1C00FFFB8 )
        return v4;
      if ( !gPowerTransitionsState )
        return v4;
      PowerDimMonitor();
      if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
        return v4;
      goto LABEL_176;
    }
    v46 = (unsigned int)(v45 - 1);
    if ( (_DWORD)v46 )
    {
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 == 1 )
            {
              PowerDisplayBurst(MonitorRequestReasonUserDisplayBurst);
              return v4;
            }
            return (unsigned int)-1073741822;
          }
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
            goto LABEL_160;
          PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v3);
          if ( !gProtocolType && (int)IsPowerOffGdiSupported_0() >= 0 )
            PowerOffGdi_0();
          if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 || (_DWORD)v3 == 17 )
          {
LABEL_160:
            UserSessionSwitchBlock_End();
            return v4;
          }
        }
        else
        {
          if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) && !dword_1C00FFFB8 )
          {
            if ( !gbGDIOn && (int)IsPowerOnGdiSupported_0() >= 0 )
              PowerOnGdi_0();
            PowerOnMonitor((enum POWER_MONITOR_REQUEST_REASON)v3);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
            goto LABEL_160;
        }
        SetTimerCoalescingTolerance_0();
        goto LABEL_160;
      }
      v46 = 0LL;
    }
    else
    {
      LODWORD(v46) = 1;
    }
    PowerInputEvent(v46);
    return v4;
  }
  if ( (_DWORD)v6 == 6 )
  {
    v43 = glinp;
    if ( qword_1C00FFD00 != glinp )
    {
      EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
      v43 = glinp;
      qword_1C00FFD00 = glinp;
    }
    if ( (gPowerTransitionsState || (*(_DWORD *)gpsi & 0x200) != 0 && qword_1C00FFCF8 != v43)
      && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets) )
    {
      if ( gppiScreenSaver )
      {
        v44 = *(_DWORD *)(gppiScreenSaver + 12);
        if ( (v44 & 0x400000) == 0 )
        {
          *(_DWORD *)(gppiScreenSaver + 12) = v44 | 0x400000;
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
        v50 = 0;
        v51 = 7LL;
        v53 = 0LL;
        v52 = 0;
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v50, 0x18u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v23 = 0LL;
        while ( 1 )
        {
          v24 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
          if ( v24 )
            v23 = *v24;
          if ( (unsigned int)IsCurrentProcessDwm()
            || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest )
          {
            break;
          }
          if ( gbRITBlockedOnDIT )
          {
            if ( v23 == gptiRit )
              break;
            ++gcRITBlockedOnDITWaiters;
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v26 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v23 == gptiRit )
              break;
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v26 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v26, UserRequest, 0, 0, 0LL);
        }
        v27 = PsGetCurrentThreadWin32Thread(v25);
        if ( v27 )
        {
          v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
            && (qword_1C00FEA40 & 0x200000010000000LL) != 0
            && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v28) = byte_1C00FEA58 - 1;
            Template_xqx(
              v28,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v30,
              v29.LowPart,
              0,
              gullUserCritAcquireToken);
          }
          if ( v29.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v30,
              0,
              1000 * v29.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v27 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v23;
        gbValidateHandleForIL = 1;
      }
    }
    UserSessionSwitchLeaveCrit();
    v31 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
    v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32);
    if ( v33 )
      v33[1] = KeQueryPerformanceCounter(0LL);
    v34 = 0LL;
    while ( 1 )
    {
      v35 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v35 )
        v34 = *v35;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v34 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v34 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v37 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v34 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v37 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v37, UserRequest, 0, 0, 0LL);
    }
    v39 = PsGetCurrentThreadWin32Thread(v36);
    if ( v39 )
    {
      v42 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v39 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v41) = byte_1C00FEA58 - 1;
        Template_xqx(v41, (unsigned int)&AcquiredExclusiveUserCritEvent, v40, v42.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v42.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v40,
          0,
          1000 * v42.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v39 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v34;
    gbValidateHandleForIL = 1;
    if ( !v31 || gSessionCreationTime < OutputBuffer )
    {
      LOBYTE(v40) = 1;
      LOBYTE(v38) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v38, v40) )
      {
        v54 = 16;
        v55 = 0x20000000;
        if ( (int)IsxxxSendMessageBSMSupported_0() >= 0 )
          xxxSendMessageBSM_0();
      }
    }
LABEL_24:
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 )
      return v4;
    goto LABEL_176;
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
      v50 = 0;
      v51 = 10LL;
      v53 = 0LL;
      v52 = 0;
      UserSessionSwitchLeaveCrit();
      ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v50, 0x18u, 0LL, 0);
      v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
      if ( v12 )
        v12[1] = KeQueryPerformanceCounter(0LL);
      v13 = 0LL;
      while ( 1 )
      {
        v14 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v14 )
          v13 = *v14;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v13 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v16 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v13 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v16 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v16, UserRequest, 0, 0, 0LL);
      }
      v17 = PsGetCurrentThreadWin32Thread(v15);
      if ( v17 )
      {
        v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v18) = byte_1C00FEA58 - 1;
          Template_xqx(
            v18,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v20,
            v19.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v20,
            0,
            1000 * v19.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
    }
    v54 = 16;
    v55 = 16;
    if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
      return v4;
    goto LABEL_57;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v54 = 16;
    v55 = 16;
    if ( (int)IsxxxSendMessageBSMSupported_0() < 0 )
      return v4;
LABEL_57:
    xxxSendMessageBSM_0();
    return v4;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) && !dword_1C00FFFB8 )
    {
      InputBuffer = 1;
      v57 = gProtocolType == 0;
      v58 = (int)v3;
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
  if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    InputBuffer = 0;
    v57 = gProtocolType == 0;
    v58 = (int)v3;
    v4 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    if ( v4 == 259 )
      return 0;
    PowerOffMonitor(v58);
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() < 0 || v58 == MonitorRequestReasonGracePeriod )
      return v4;
LABEL_176:
    SetTimerCoalescingTolerance_0();
  }
  return v4;
}
