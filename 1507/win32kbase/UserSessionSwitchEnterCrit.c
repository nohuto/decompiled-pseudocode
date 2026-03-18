/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C0010820
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001E670 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplaySettings @ 0x1C001FF60 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayDevices @ 0x1C0020A80 (NtUserEnumDisplayDevices.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00677C0 (NtGdiDestroyOPMProtectedOutput.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00688C0 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  PVOID CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  DWORD LowPart; // eax
  int v15; // r8d
  __int64 v16; // rcx
  LARGE_INTEGER *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  PVOID v19; // rcx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v3 )
      v2 = *v3;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v2 == gptiRit )
        goto LABEL_16;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v5 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v2 == gptiRit )
        goto LABEL_16;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v5 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v5, UserRequest, 0, 0, 0LL);
  }
  while ( 1 )
  {
LABEL_16:
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v7 = v6;
    if ( v6 )
    {
      v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v8) = byte_1C00FEA58 - 1;
        Template_xqx(v8, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
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
      *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gbValidateHandleForIL = 1;
    gptiCurrent = v2;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
      return 0LL;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        return 0LL;
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
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
    {
      v13 = PsGetCurrentThreadWin32Thread(v12);
      if ( v13 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(v13 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v15,
            LowPart - *(_DWORD *)(v13 + 8),
            0,
            *(_QWORD *)(v13 + 16));
      }
    }
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v17 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
    if ( v17 )
      v17[1] = KeQueryPerformanceCounter(0LL);
    v2 = 0LL;
    while ( 1 )
    {
      v18 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v18 )
        v2 = *v18;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v2 == gptiRit )
          goto LABEL_16;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v19 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v2 == gptiRit )
          goto LABEL_16;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v19 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v19, UserRequest, 0, 0, 0LL);
    }
  }
}
