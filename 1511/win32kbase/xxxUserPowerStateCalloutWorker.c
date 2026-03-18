/*
 * XREFs of xxxUserPowerStateCalloutWorker @ 0x1C00846A4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C000BDB0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsxxxSendMessageBSMSupported_0 @ 0x1C00020F0 (IsxxxSendMessageBSMSupported_0.c)
 *     xxxSendMessageBSM_0 @ 0x1C00020F8 (xxxSendMessageBSM_0.c)
 *     IsPowerOffGdiSupported_0 @ 0x1C0002100 (IsPowerOffGdiSupported_0.c)
 *     PowerOffGdi_0 @ 0x1C0002108 (PowerOffGdi_0.c)
 *     IsPowerOnGdiSupported_0 @ 0x1C0002110 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0002118 (PowerOnGdi_0.c)
 *     IsPowerStateTasksAllowedSupported_0 @ 0x1C00021F0 (IsPowerStateTasksAllowedSupported_0.c)
 *     PowerStateTasksAllowed_0 @ 0x1C00021F8 (PowerStateTasksAllowed_0.c)
 *     IsSendPTPLatencyMgtRequestSupported_0 @ 0x1C0002200 (IsSendPTPLatencyMgtRequestSupported_0.c)
 *     SendPTPLatencyMgtRequest_0 @ 0x1C0002208 (SendPTPLatencyMgtRequest_0.c)
 *     IsWakeRITForConfigSwitchSupported_0 @ 0x1C0002210 (IsWakeRITForConfigSwitchSupported_0.c)
 *     WakeRITForConfigSwitch_0 @ 0x1C0002218 (WakeRITForConfigSwitch_0.c)
 *     IsInitKeyboardStateSupported_0 @ 0x1C0002220 (IsInitKeyboardStateSupported_0.c)
 *     InitKeyboardState_0 @ 0x1C0002228 (InitKeyboardState_0.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     UpdateLastInput @ 0x1C000E9A0 (UpdateLastInput.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     WinSqmIncrementDWORD @ 0x1C0063110 (WinSqmIncrementDWORD.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     PowerResumeSuspendEvent @ 0x1C0084E00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00855A0 (xxxSendWinlogonPowerMessage.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C0085790 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00857A0 (EtwTraceWinlogonSleepEndEvent.c)
 *     DrvStopPresenterView @ 0x1C0085C10 (DrvStopPresenterView.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 xxxUserPowerStateCalloutWorker()
{
  int v0; // ebx
  unsigned int v1; // esi
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // ecx
  LARGE_INTEGER v24; // rdi
  int v25; // r8d
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  signed __int32 v31[8]; // [rsp+8h] [rbp-C9h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-A9h]
  int v33; // [rsp+30h] [rbp-A1h]
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-79h] BYREF
  int InputBuffer; // [rsp+78h] [rbp-59h] BYREF
  __int64 v36; // [rsp+7Ch] [rbp-55h]
  char v37; // [rsp+84h] [rbp-4Dh]
  struct _KEVENT *p_Event; // [rsp+88h] [rbp-49h]
  _QWORD v39[2]; // [rsp+90h] [rbp-41h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-31h] BYREF
  _DWORD v41[10]; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v42[8]; // [rsp+E0h] [rbp+Fh] BYREF

  v0 = dword_1C01047E8;
  v1 = IsPowerStateTasksAllowedSupported_0();
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  v1 = PowerStateTasksAllowed_0();
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  v2 = v0 - 1;
  if ( !v2 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    ::Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 81);
    goto LABEL_79;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    dword_1C0104760 = 1;
    _InterlockedOr(v31, 0);
    if ( (int)IsSendPTPLatencyMgtRequestSupported_0() >= 0 )
      SendPTPLatencyMgtRequest_0();
    PowerOffMonitor(dword_1C01047EC);
    v27 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C0104780 = v27;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v28) = 1;
      xxxSendWinlogonPowerMessage(v28, 262LL, &dword_1C01047D8);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v26) = 1;
    LOBYTE(v27) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v27, v26, 0LL) && (int)IsxxxSendMessageBSMSupported_0() >= 0 )
    {
      v33 = 1;
      dword_1C01047B0 = 16;
      dword_1C01047B4 = 40;
      *(_QWORD *)OutputBufferLength = &dword_1C01047B0;
      xxxSendMessageBSM_0();
    }
    if ( dword_1C01047DC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_77:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        ::Event = 0LL;
LABEL_79:
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        return v1;
      }
      if ( (dword_1C01047E0 & 8) != 0 )
      {
        if ( (unsigned __int8)DrvStopPresenterView() && grpdeskRitInput )
        {
          OutputBufferLength[0] = 2191;
          xxxUserSetDisplayConfig(
            0,
            0LL,
            0,
            0LL,
            *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)OutputBufferLength,
            0,
            0,
            grpdeskRitInput,
            0,
            0LL);
        }
      }
      else
      {
        LOBYTE(v29) = 1;
        xxxSendWinlogonPowerMessage(v29, 259LL, &dword_1C01047D8);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported_0() >= 0 )
      PowerOffGdi_0();
    goto LABEL_77;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 4;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              PowerOffMonitor(MonitorRequestReasonSxTransition);
          }
          else
          {
            if ( (int)IsPowerOnGdiSupported_0() >= 0 )
              PowerOnGdi_0();
            if ( (gPowerState & 0x20) != 0 )
              PowerOnMonitor(MonitorRequestReasonDP);
          }
        }
        else
        {
          gPowerState = gPowerState & 0xFFFFFFDF | (32 * (gPowerTransitionsState != 0));
          PowerOffMonitor(MonitorRequestReasonDP);
          if ( (int)IsPowerOffGdiSupported_0() >= 0 )
            PowerOffGdi_0();
        }
        return v1;
      }
      if ( (int)IsInitKeyboardStateSupported_0() >= 0 )
        InitKeyboardState_0();
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        InputBuffer = 0;
        v37 = 1;
        v36 = 18LL;
        p_Event = 0LL;
LABEL_46:
        UserSessionSwitchLeaveCrit(v10, v9);
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x18u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v22 = PsGetCurrentThreadWin32Thread(v21);
        if ( v22 )
        {
          v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
            && (qword_1C01020B0 & 0x200000010000000LL) != 0
            && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v23) = byte_1C01020C8 - 1;
            Template_xqx(
              v23,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v25,
              v24.LowPart,
              0,
              gullUserCritAcquireToken);
          }
          if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v25,
              0,
              1000 * v24.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v20;
        gbValidateHandleForIL = 1;
      }
    }
    else
    {
      UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 4u);
      if ( (int)IsWakeRITForConfigSwitchSupported_0() >= 0 )
        WakeRITForConfigSwitch_0();
      v11 = dword_1C01047DC == 5;
      if ( gSessionId )
      {
        if ( dword_1C01047DC == 5 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          memset(v42, 0, sizeof(v42));
          v42[4] &= ~1u;
          SystemInformation[2] = v42;
          SystemInformation[0] = 0x6B7568430000002DLL;
          LODWORD(SystemInformation[1]) = 10;
          LODWORD(SystemInformation[3]) = 32;
          v42[0] = 4;
          v42[1] = 1;
          v42[2] = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        LOBYTE(v12) = 1;
        v39[0] = 0x100000000LL;
        v39[1] = 0LL;
        v1 = xxxSendWinlogonPowerMessage(v12, 262LL, v39);
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( v11 )
        {
          v13 = SystemInformation[2];
          *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
          *(_DWORD *)(v13 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported_0() >= 0 )
        PowerOnGdi_0();
      dword_1C0104760 = 0;
      _InterlockedOr(v31, 0);
      if ( gbPendingSleepInput )
      {
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      }
      else
      {
        dword_1C0104764 = 1;
      }
      if ( gSqmIsOptedIn )
        WinSqmIncrementDWORD(
          0LL,
          0xFADu,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C0104780)
        / 0x3E8);
      memset(SystemInformation, 0, sizeof(SystemInformation));
      memset(v42, 0, sizeof(v42));
      v42[4] &= ~1u;
      SystemInformation[0] = 0x6B7568430000002DLL;
      LODWORD(SystemInformation[1]) = 10;
      SystemInformation[2] = v42;
      LODWORD(SystemInformation[3]) = 32;
      v42[0] = 4;
      v42[1] = 1;
      v42[2] = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      LOBYTE(v14) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v14, 0LL) && (int)IsxxxSendMessageBSMSupported_0() >= 0 )
      {
        v33 = 1;
        *(_QWORD *)OutputBufferLength = v41;
        v41[0] = 16;
        v41[1] = 0x20000000;
        xxxSendMessageBSM_0();
      }
      v15 = SystemInformation[2];
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
      *(_DWORD *)(v15 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
    }
  }
  else
  {
    v16 = 3LL;
    v17 = dword_1C01047D8;
    if ( dword_1C01047DC == 5 )
      v17 = 3;
    InputBuffer = v17;
    LOBYTE(v16) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v16, 0LL, 0LL) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v36 = 4LL;
      p_Event = &Event;
      v37 = 0;
      goto LABEL_46;
    }
  }
  return v1;
}
