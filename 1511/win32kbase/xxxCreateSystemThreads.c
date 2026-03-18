/*
 * XREFs of xxxCreateSystemThreads @ 0x1C0063FE0
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxDesktopThreadSupported_0 @ 0x1C0002410 (IsxxxDesktopThreadSupported_0.c)
 *     xxxDesktopThread_0 @ 0x1C0002418 (xxxDesktopThread_0.c)
 *     IsRawInputThreadSupported_0 @ 0x1C0002420 (IsRawInputThreadSupported_0.c)
 *     RawInputThread_0 @ 0x1C0002428 (RawInputThread_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C0064194 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ecx
  LARGE_INTEGER v10; // rbx
  int v11; // r8d
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+48h] [rbp+10h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1, a2) == gpepCSRSS && (unsigned int)CSTPop(&v13, &v14) )
  {
    UserSessionSwitchLeaveCrit(v3, v2);
    switch ( v13 )
    {
      case 1u:
        if ( (int)IsxxxDesktopThreadSupported_0() >= 0 )
          xxxDesktopThread_0();
        break;
      case 2u:
        if ( (int)IsRawInputThreadSupported_0() >= 0 )
          RawInputThread_0();
        break;
      case 4u:
        VideoPortCalloutThread(v14);
        break;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v8 = PsGetCurrentThreadWin32Thread(v7);
    if ( v8 )
    {
      v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v9) = byte_1C01020C8 - 1;
        Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v11,
          0,
          1000 * v10.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
  }
  return 1LL;
}
