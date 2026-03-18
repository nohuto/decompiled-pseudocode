/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A99A4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0002248 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2)
{
  char v2; // si
  ULONG v3; // ebx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rbx
  int v10; // r8d
  PVOID Object[3]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a1;
  while ( 1 )
  {
    v3 = 0;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      v3 = 1;
      Object[0] = gpevtVideoportCallout;
    }
    if ( gfMonitorPowerInProgress )
    {
      a1 = v3++;
      Object[a1] = gpevtMonitorPowerWaiter;
    }
    if ( v2 && (int)IsxxxSetCsrssThreadDesktopSupported_0() >= 0 && !grpdeskRitInput )
    {
      a1 = v3++;
      Object[a1] = (PVOID)gpevtRitReadyForCallOut;
    }
    if ( !v3 )
      break;
    UserSessionSwitchLeaveCrit(a1, a2);
    KeWaitForMultipleObjects(v3, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    v2 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v8 = PsGetCurrentThreadWin32Thread(v7);
    if ( v8 )
    {
      v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        LOBYTE(a1) = byte_1C01020C8 - 1;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(a1, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
        }
      }
      if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v10,
          0,
          1000 * v9.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
  }
}
