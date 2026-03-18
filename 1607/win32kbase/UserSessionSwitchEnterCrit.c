/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C001F9D0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0016030 (NtUserEnumDisplayDevices.c)
 *     NtUserQueryDisplayConfig @ 0x1C0049810 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0049BD0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplaySettings @ 0x1C0062A40 (NtUserEnumDisplaySettings.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0083EC0 (NtGdiDestroyOPMProtectedOutput.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *v13; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  while ( 1 )
  {
    v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v4 = PsGetCurrentThreadWin32Thread(v3);
    v6 = v4;
    if ( v4 )
    {
      v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v5) = byte_1C0118B28 - 1;
        if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(v5, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
        }
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
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gbValidateHandleForIL = 1;
    gptiCurrent = v2;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      break;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
      && !gbRITBlockedOnDIT
      && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v11);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v13 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
      v13[1] = KeQueryPerformanceCounter(0LL);
  }
  return 0LL;
}
