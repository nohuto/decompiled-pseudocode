/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C006F920 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsxxxSendMessageBSMSupported_0 @ 0x1C0001C30 (IsxxxSendMessageBSMSupported_0.c)
 *     xxxSendMessageBSM_0 @ 0x1C0001C38 (xxxSendMessageBSM_0.c)
 *     IsPowerOnGdiSupported_0 @ 0x1C0001C40 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0001C48 (PowerOnGdi_0.c)
 *     ProcessDelayedSdc_0 @ 0x1C0001C50 (ProcessDelayedSdc_0.c)
 *     IsWakeRITForConfigSwitchSupported_0 @ 0x1C0001C98 (IsWakeRITForConfigSwitchSupported_0.c)
 *     WakeRITForConfigSwitch_0 @ 0x1C0001CA0 (WakeRITForConfigSwitch_0.c)
 *     IsPowerStateTasksAllowedSupported_0 @ 0x1C0001D58 (IsPowerStateTasksAllowedSupported_0.c)
 *     PowerStateTasksAllowed_0 @ 0x1C0001D60 (PowerStateTasksAllowed_0.c)
 *     IsPowerOffGdiSupported_0 @ 0x1C0001D68 (IsPowerOffGdiSupported_0.c)
 *     PowerOffGdi_0 @ 0x1C0001D70 (PowerOffGdi_0.c)
 *     IsInitKeyboardStateSupported_0 @ 0x1C0001D78 (IsInitKeyboardStateSupported_0.c)
 *     InitKeyboardState_0 @ 0x1C0001D80 (InitKeyboardState_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     WinSqmIncrementDWORD @ 0x1C00707F0 (WinSqmIncrementDWORD.c)
 *     UpdateLastInput @ 0x1C0071150 (UpdateLastInput.c)
 *     PowerResumeSuspendEvent @ 0x1C0086240 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0086970 (xxxSendWinlogonPowerMessage.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C0086AF0 (EtwTraceWinlogonSleepStartEvent.c)
 *     RIMSendLatencyMgtRequest @ 0x1C0086B00 (RIMSendLatencyMgtRequest.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C0086F40 (EtwTraceWinlogonSleepEndEvent.c)
 *     DrvStopPresenterView @ 0x1C0088D10 (DrvStopPresenterView.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  int v0; // ebx
  unsigned int v1; // r14d
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  bool v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // ecx
  LARGE_INTEGER v25; // rdi
  int v26; // r8d
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  signed __int32 v30[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v32; // [rsp+30h] [rbp-D8h]
  _QWORD SystemInformation[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v35[10]; // [rsp+98h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C4h] [rbp-44h]
  __int16 v38; // [rsp+CCh] [rbp-3Ch]
  _DWORD v39[10]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40[8]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v40, 0, sizeof(v40));
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v0 = dword_1C011BBE8;
  v40[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[4]) = dword_1C011BBE8;
  LODWORD(v40[3]) = 17;
  v1 = IsPowerStateTasksAllowedSupported_0();
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  v1 = PowerStateTasksAllowed_0();
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  v3 = v0 - 1;
  if ( !v3 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 81);
LABEL_26:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    return v1;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    dword_1C011BB60 = 1;
    _InterlockedOr(v30, 0);
    RIMSendLatencyMgtRequest(1LL);
    PowerOffMonitor(dword_1C011BBEC);
    v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C011BB80 = v15;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v16) = 1;
      xxxSendWinlogonPowerMessage(v16, 262LL, &dword_1C011BBD8);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v14) = 1;
    LOBYTE(v15) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v15, v14, 0LL) && (int)IsxxxSendMessageBSMSupported_0() >= 0 )
    {
      LODWORD(v32) = 1;
      dword_1C011BBB0 = 16;
      dword_1C011BBB4 = 40;
      *(_QWORD *)OutputBufferLength = &dword_1C011BBB0;
      xxxSendMessageBSM_0();
    }
    if ( dword_1C011BBDC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_46:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        goto LABEL_26;
      }
      if ( (dword_1C011BBE0 & 8) != 0 )
      {
        if ( (unsigned __int8)DrvStopPresenterView() && grpdeskRitInput )
        {
          LODWORD(v32) = 0;
          OutputBufferLength[0] = 2191;
          xxxUserSetDisplayConfig(
            0,
            0LL,
            0,
            0LL,
            *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)OutputBufferLength,
            v32,
            0,
            grpdeskRitInput,
            0,
            0LL,
            0LL,
            (__int64)v40);
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        xxxSendWinlogonPowerMessage(v17, 259LL, &dword_1C011BBD8);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported_0() >= 0 )
      PowerOffGdi_0();
    goto LABEL_46;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( !v6 )
    {
      UpdateLastInput(
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4u);
      if ( (int)IsWakeRITForConfigSwitchSupported_0() >= 0 )
        WakeRITForConfigSwitch_0();
      v7 = dword_1C011BBDC == 5;
      if ( gSessionId )
      {
        if ( dword_1C011BBDC == 5 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          memset(v39, 0, 0x20uLL);
          v39[4] &= ~1u;
          SystemInformation[2] = v39;
          SystemInformation[0] = 0x6B7568430000002DLL;
          LODWORD(SystemInformation[1]) = 10;
          LODWORD(SystemInformation[3]) = 32;
          v39[0] = 4;
          v39[1] = 1;
          v39[2] = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        LOBYTE(v8) = 1;
        v34[0] = 0x100000000LL;
        v34[1] = 0LL;
        v1 = xxxSendWinlogonPowerMessage(v8, 262LL, v34);
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( v7 )
        {
          v9 = SystemInformation[2];
          *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
          *(_DWORD *)(v9 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported_0() >= 0 )
        PowerOnGdi_0();
      dword_1C011BB60 = 0;
      _InterlockedOr(v30, 0);
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
        dword_1C011BB64 = 1;
      }
      if ( gSqmIsOptedIn )
        WinSqmIncrementDWORD(
          0LL,
          0xFADu,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C011BB80)
        / 0x3E8);
      memset(SystemInformation, 0, sizeof(SystemInformation));
      memset(v39, 0, 0x20uLL);
      v39[4] &= ~1u;
      SystemInformation[0] = 0x6B7568430000002DLL;
      LODWORD(SystemInformation[1]) = 10;
      SystemInformation[2] = v39;
      LODWORD(SystemInformation[3]) = 32;
      v39[0] = 4;
      v39[1] = 1;
      v39[2] = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      LOBYTE(v10) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v10, 0LL) && (int)IsxxxSendMessageBSMSupported_0() >= 0 )
      {
        LODWORD(v32) = 1;
        *(_QWORD *)OutputBufferLength = v35;
        v35[0] = 16;
        v35[1] = 0x20000000;
        xxxSendMessageBSM_0();
      }
      v11 = SystemInformation[2];
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
      *(_DWORD *)(v11 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      return v1;
    }
    v13 = v6 - 1;
    if ( v13 )
    {
      v27 = v13 - 4;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
            PowerOffMonitor(MonitorRequestReasonSxTransition);
        }
        else
        {
          v29 = 0;
          if ( (int)IsPowerOnGdiSupported_0() >= 0 )
          {
            PowerOnGdi_0();
            v29 = 1;
          }
          if ( (gPowerState & 0x20) != 0 )
            PowerOnMonitor(MonitorRequestReasonDP, (__int64)v40, 2u);
          if ( v29 )
            ProcessDelayedSdc_0();
        }
      }
      else
      {
        gPowerState = gPowerState & 0xFFFFFFDF | (32 * (gPowerTransitionsState != 0));
        PowerOffMonitor(MonitorRequestReasonDP);
        if ( (int)IsPowerOffGdiSupported_0() >= 0 )
          PowerOffGdi_0();
      }
    }
    else
    {
      if ( (int)IsInitKeyboardStateSupported_0() >= 0 )
        InitKeyboardState_0();
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        InputBuffer = 0;
        v37 = 18LL;
        v38 = 1;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
LABEL_51:
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v21 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v23 = PsGetCurrentThreadWin32Thread(v22);
        if ( v23 )
        {
          v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
            && (qword_1C0118B10 & 0x200000010000000LL) != 0
            && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v24) = byte_1C0118B28 - 1;
            Template_xqx(
              v24,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v26,
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
              v26,
              0,
              1000 * v25.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v21;
        gbValidateHandleForIL = 1;
      }
    }
  }
  else
  {
    v18 = dword_1C011BBD8;
    if ( dword_1C011BBDC == 5 )
      v18 = 3;
    InputBuffer = v18;
    LOBYTE(v2) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v2, 0LL, 0LL) )
    {
      v37 = 4LL;
      v38 = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      goto LABEL_51;
    }
  }
  return v1;
}
