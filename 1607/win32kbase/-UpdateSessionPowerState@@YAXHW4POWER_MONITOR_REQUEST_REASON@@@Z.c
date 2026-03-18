/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B267C
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2178 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     PowerInputEvent @ 0x1C0070550 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C0086950 (EtwTraceDisplayChange.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  char v2; // bl
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v13; // rbx
  union _LARGE_INTEGER v14; // rdx
  __int64 InputBuffer; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+38h] [rbp-30h]
  char v17; // [rsp+3Ch] [rbp-2Ch]
  bool v18; // [rsp+3Dh] [rbp-2Bh]
  enum POWER_MONITOR_REQUEST_REASON v19; // [rsp+40h] [rbp-28h]

  gPowerDisplayState = gSessionId;
  v2 = a1;
  dword_1C011BB0C = dword_1C011BB10;
  dword_1C011BB10 = a1 != 0;
  qword_1C011BAD8 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C011BAE0;
  qword_1C011BAE0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C011BB14 = gProtocolType == 0;
  gPowerTransitionsState = a1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit();
  v18 = gProtocolType == 0;
  InputBuffer = 19LL;
  v16 = gSessionId;
  v17 = v2;
  v19 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v7);
  if ( v10 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = 0x200000010000000LL;
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v9) = byte_1C0118B28 - 1;
      if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v13, 0, gullUserCritAcquireToken);
      }
    }
    if ( v13 >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v13 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  EtwTraceDisplayChange(v9, v8, v11);
  CitDisplayPowerChange((__int64)&gPowerDisplayState, v14);
}
