/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C005E310
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // r15
  __int64 v5; // rcx
  LONGLONG v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  char v11; // al

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v5);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    v6 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
        || (qword_1C01020B0 & 0x200000010000000LL) == 0
        || (v11 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
      {
        v11 = 0;
      }
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v6 = 1000 * v9.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
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
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( gbVideoInitialized )
    v3 = xxxEnumDisplayMonitors(a1, 0);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v3;
}
