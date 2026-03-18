/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00152F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rdi
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // rbp
  int v7; // ecx
  LARGE_INTEGER v8; // rsi
  int v9; // r8d
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // rsi
  int v16; // ecx
  LARGE_INTEGER v17; // rdi
  int v18; // r8d

  if ( (_DWORD)a1 )
  {
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
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v5 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v2 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v5 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v5, UserRequest, 0, 0, 0LL);
    }
    v6 = PsGetCurrentThreadWin32Thread(v4);
    if ( v6 )
    {
      v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v7) = byte_1C00FEA58 - 1;
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v8.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
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
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
  }
  else
  {
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
      if ( v12 )
        v11 = *v12;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v11 == gptiRit )
          break;
        _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v11 == gptiRit )
          break;
        _InterlockedAdd(&gcDITHitTestWaiters, 1u);
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
    }
    v15 = PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
    {
      v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v16) = byte_1C00FEA58 - 1;
        Template_xqx(v16, (unsigned int)&AcquiredSharedUserCritEvent, v18, v17.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v18,
          0,
          1000 * v17.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
}
