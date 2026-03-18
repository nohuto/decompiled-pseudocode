/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508
 * Callers:
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     PowerDimMonitor @ 0x1C00A5298 (PowerDimMonitor.c)
 * Callees:
 *     PowerInputEvent @ 0x1C000A630 (PowerInputEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C006A8E0 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C006A900 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  __int64 v6; // rcx
  char v7; // di
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rcx
  __int64 v14; // rsi
  int v15; // ecx
  LARGE_INTEGER v16; // rdi
  int v17; // r8d
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-48h] BYREF
  bool v20; // [rsp+4Ch] [rbp-3Ch]
  char v21; // [rsp+4Dh] [rbp-3Bh]
  char v22; // [rsp+4Eh] [rbp-3Ah]

  gPowerDisplayState = gSessionId;
  dword_1C00FFF84 = dword_1C00FFF88;
  dword_1C00FFF88 = a1;
  qword_1C00FFF58 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C00FFF60;
  qword_1C00FFF60 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C00FFF8C = gProtocolType == 0;
  InputBuffer[0] = gSessionId;
  v20 = gProtocolType == 0;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v22 = a3;
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C00FFFC4 = 0LL;
    goto LABEL_9;
  }
  gPowerTransitionsState = 0;
  if ( a2 == MonitorRequestReasonGracePeriod )
  {
    LODWORD(qword_1C00FFFC4) = 1;
  }
  else
  {
    qword_1C00FFFC4 = 0x100000000LL;
    if ( a2 == MonitorRequestReasonNearProximity )
      goto LABEL_6;
  }
  HIDWORD(qword_1C00FFFC4) = 0;
LABEL_6:
  if ( !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit();
  if ( (unsigned int)(a1 - 1) <= 1
    || !a1 && a2 != MonitorRequestReasonGracePeriod && a2 != MonitorRequestReasonNearProximity )
  {
    v7 = 1;
    if ( a1 != 2 )
    {
      v18[0] = 0LL;
      v18[1] = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), v18);
    }
    goto LABEL_17;
  }
  v7 = 0;
  if ( a3 )
  {
LABEL_17:
    v21 = v7;
    ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
  }
  v14 = PsGetCurrentThreadWin32Thread(v12);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v15) = byte_1C00FEA58 - 1;
      Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v16.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v17,
        0,
        1000 * v16.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
