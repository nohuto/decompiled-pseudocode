/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264
 * Callers:
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     PowerDimMonitor @ 0x1C00A9BD0 (PowerDimMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     PowerInputEvent @ 0x1C007EBB0 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C0085580 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00855A0 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // di
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // ecx
  LARGE_INTEGER v16; // rbx
  int v17; // r8d
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-48h] BYREF
  bool v20; // [rsp+4Ch] [rbp-3Ch]
  char v21; // [rsp+4Dh] [rbp-3Bh]
  char v22; // [rsp+4Eh] [rbp-3Ah]

  gPowerDisplayState = gSessionId;
  v5 = dword_1C0104734;
  dword_1C0104734 = a1;
  dword_1C0104730 = v5;
  v7 = 0xFFFFF78000000004uLL;
  dword_1C0104714 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                  - dword_1C0104718;
  dword_1C0104718 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = (unsigned __int16)gProtocolType;
  word_1C0104738 = gProtocolType == 0;
  InputBuffer[0] = gSessionId;
  v20 = gProtocolType == 0;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v22 = a3;
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C010476C = 0LL;
    goto LABEL_9;
  }
  gPowerTransitionsState = 0;
  if ( a2 == MonitorRequestReasonGracePeriod )
  {
    LODWORD(qword_1C010476C) = 1;
  }
  else
  {
    qword_1C010476C = 0x100000000LL;
    if ( a2 == MonitorRequestReasonNearProximity )
      goto LABEL_6;
  }
  HIDWORD(qword_1C010476C) = 0;
LABEL_6:
  if ( !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  if ( (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v10 = 0;
    if ( !a3 )
      goto LABEL_18;
  }
  else
  {
    v10 = 1;
    if ( a1 != 2 )
    {
      v18[0] = 0LL;
      v18[1] = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), v18);
    }
  }
  v21 = v10;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
LABEL_18:
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v13);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v15) = byte_1C01020C8 - 1;
      Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v16.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
