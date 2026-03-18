/*
 * XREFs of NtUserGetDC @ 0x1C0033CE0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndEx @ 0x1C0033450 (ValidateHwndEx.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetDC(void *a1)
{
  int v2; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rbx
  __int64 DCEx; // rdi
  __int64 v17; // rdi
  __int64 *ThreadWin32Thread; // rax
  void **v19; // rcx
  void *v20; // rcx
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 RectRgnIndirect; // rbx
  struct tagTHREADINFO *v25; // rbx
  struct tagTHREADINFO **v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  DWORD LowPart; // eax
  int v30; // r8d

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v4 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v11 = PsGetCurrentThreadWin32Thread(v10);
  if ( v11 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)byte_1C00FEA58;
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v14) = byte_1C00FEA58 - 1;
        Template_xqx(v14, (unsigned int)&AcquiredSharedUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    v15 = ValidateHwndEx(a1, 1LL, 0);
    if ( !v15 )
    {
      DCEx = 0LL;
      goto LABEL_50;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v17 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v17 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v17 + 448) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 384) + 728LL) + 24LL) & 1) != 0 )
  {
    if ( !v15 )
    {
      v19 = *(void ***)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416) + 8LL) + 16LL);
      if ( v19 )
        v20 = *v19;
      else
        v20 = 0LL;
      if ( !ValidateHwndEx(v20, 1LL, 0) )
        v2 = 0;
      goto LABEL_42;
    }
LABEL_49:
    DCEx = GetDCEx(v15, 0LL, 0x10000LL);
    goto LABEL_50;
  }
  if ( v15 )
    goto LABEL_49;
LABEL_42:
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v23 = *(_QWORD *)(v21 + 416);
  if ( v23 )
    DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((ERECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)gpDispInfo);
    GreSelectVisRgn(DCEx, RectRgnIndirect, 1LL);
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  }
LABEL_50:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v25 = 0LL;
  v26 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v26 )
    v25 = *v26;
  if ( v25 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
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
    v28 = PsGetCurrentThreadWin32Thread(v27);
    if ( v28 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v28 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v30,
          LowPart - *(_DWORD *)(v28 + 8),
          0,
          *(_QWORD *)(v28 + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return DCEx;
}
