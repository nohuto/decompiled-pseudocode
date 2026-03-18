/*
 * XREFs of xxxCreateSystemThreads @ 0x1C006DBA0
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxDesktopThreadSupported_0 @ 0x1C00023E8 (IsxxxDesktopThreadSupported_0.c)
 *     xxxDesktopThread_0 @ 0x1C00023F0 (xxxDesktopThread_0.c)
 *     IsRawInputThreadSupported_0 @ 0x1C00023F8 (IsRawInputThreadSupported_0.c)
 *     RawInputThread_0 @ 0x1C0002400 (RawInputThread_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C006DCE0 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) == gpepCSRSS && (unsigned int)CSTPop(&v10, &v11) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    switch ( v10 )
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
        VideoPortCalloutThread(v11);
        break;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v5 = PsGetCurrentThreadWin32Thread(v4);
    if ( v5 )
    {
      v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v6) = byte_1C0118B28 - 1;
        Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v7.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v8,
          0,
          1000 * v7.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
  }
  return 1LL;
}
