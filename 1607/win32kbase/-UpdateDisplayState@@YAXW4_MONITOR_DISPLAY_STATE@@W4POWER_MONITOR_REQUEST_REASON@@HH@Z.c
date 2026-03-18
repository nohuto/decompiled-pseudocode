/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     PowerInputEvent @ 0x1C0070550 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C0086950 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0086970 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B22E8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00B24D4 (-SetProximityBlocking@@YAXXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3, int a4)
{
  char v7; // si
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  LARGE_INTEGER v14; // rbx
  int v15; // r8d
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-20h] BYREF
  bool v19; // [rsp+4Ch] [rbp-14h]
  char v20; // [rsp+4Dh] [rbp-13h]
  char v21; // [rsp+4Eh] [rbp-12h]
  char v22; // [rsp+4Fh] [rbp-11h]

  gPowerDisplayState = gSessionId;
  dword_1C011BB0C = dword_1C011BB10;
  dword_1C011BB10 = a1;
  qword_1C011BAD8 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C011BAE0;
  qword_1C011BAE0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C011BB14 = gProtocolType == 0;
  if ( a4 )
  {
    if ( a1 )
    {
      gPowerTransitionsState = 1;
      qword_1C011BB6C = 0LL;
    }
    else
    {
      gPowerTransitionsState = 0;
      if ( a2 == MonitorRequestReasonGracePeriod )
      {
        LODWORD(qword_1C011BB6C) = 1;
      }
      else
      {
        LODWORD(qword_1C011BB6C) = 0;
        if ( a2 == MonitorRequestReasonNearProximity )
          SetProximityBlocking();
      }
    }
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( !a1 && !gPowerAdaptiveState )
    {
      gPowerAdaptiveState = 1;
      PowerInputEvent(0);
    }
    UserSessionSwitchLeaveCrit();
    if ( !gbTtmEnabled
      && (unsigned int)(a1 - 1) > 1
      && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      if ( a1 != 2 )
      {
        v17[0] = 0LL;
        v17[1] = 0LL;
        xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), v17);
      }
    }
    v19 = gProtocolType == 0;
    InputBuffer[0] = gSessionId;
    InputBuffer[1] = a1;
    InputBuffer[2] = a2;
    v20 = v7;
    v21 = a3;
    if ( gPowerTransitionsState || (_DWORD)qword_1C011BB6C || (v22 = 0, HIDWORD(qword_1C011BB6C)) )
      v22 = 1;
    ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
    if ( gSystemIsAoAc )
    {
      if ( (gPowerTransitionsState || (_DWORD)qword_1C011BB6C) && !HIDWORD(qword_1C011BB6C) )
        v16 = 0LL;
      else
        v16 = 2LL;
      SetInputMode(v16);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v12 = PsGetCurrentThreadWin32Thread(v11);
    if ( v12 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13) = byte_1C0118B28 - 1;
        Template_xqx(v13, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v15,
          0,
          1000 * v14.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
  }
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
