/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C0021860
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F170 (NtUserEnumDisplayDevices.c)
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004BF80 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplaySettings @ 0x1C0050B70 (NtUserEnumDisplaySettings.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0082480 (NtGdiDestroyOPMProtectedOutput.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  LARGE_INTEGER v8; // rbx
  int v9; // r8d
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *v13; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v4 = PsGetCurrentThreadWin32Thread(v3);
    v7 = v4;
    if ( v4 )
    {
      v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v6) = byte_1C01020C8 - 1;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
        }
      }
      if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v9,
          0,
          1000 * v8.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gbValidateHandleForIL = 1;
    gptiCurrent = v2;
    if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      break;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
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
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v13 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
      v13[1] = KeQueryPerformanceCounter(0LL);
  }
  return 0LL;
}
