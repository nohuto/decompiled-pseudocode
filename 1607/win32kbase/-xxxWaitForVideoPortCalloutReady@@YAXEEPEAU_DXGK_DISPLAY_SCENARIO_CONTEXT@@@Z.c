/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2C54
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsPowerOnGdiSupported_0 @ 0x1C0001C40 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0001C48 (PowerOnGdi_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0001DA8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(char a1, char a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  ULONG v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  LARGE_INTEGER v14; // rbx
  int v15; // r8d
  PVOID Object[3]; // [rsp+40h] [rbp-48h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v5 = 0;
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        v5 = 1;
        Object[0] = gpevtVideoportCallout;
      }
      if ( gfMonitorPowerInProgress )
      {
        v6 = v5++;
        Object[v6] = gpevtMonitorPowerWaiter;
      }
      if ( a1 && (int)IsxxxSetCsrssThreadDesktopSupported_0() >= 0 && !grpdeskRitInput )
      {
        v7 = v5++;
        Object[v7] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v5 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForMultipleObjects(v5, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      a1 = 0;
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
          Template_xqx(
            v13,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v15,
            v14.LowPart,
            0,
            gullUserCritAcquireToken);
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
    if ( !a2 || gbGDIOn || (int)IsPowerOnGdiSupported_0() < 0 )
      break;
    PowerOnGdi_0();
  }
}
