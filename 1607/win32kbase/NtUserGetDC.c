/*
 * XREFs of NtUserGetDC @ 0x1C00210B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

HDC __fastcall NtUserGetDC(void *a1)
{
  int v2; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rcx
  HDC DCEx; // rdi
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  PRKSEMAPHORE v24; // rcx
  _QWORD *v25; // rcx

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v8) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v4 == gptiRit )
        break;
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v24 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        break;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v24 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v24, UserRequest, 0, 0, 0LL);
  }
  v9 = PsGetCurrentThreadWin32Thread(v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v10) = byte_1C0118B28 - 1;
      Template_xqx(v10, (unsigned int)&AcquiredSharedUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v12,
        0,
        1000 * v11.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    v13 = ValidateHwndEx(a1, 1, 0);
    if ( !v13 )
    {
      DCEx = 0LL;
      goto LABEL_27;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v14 + 440) & 0x20000000) != 0 )
    v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 376) + 720LL) + 24LL) & 1;
  else
    v16 = 0;
  if ( !v16 )
  {
LABEL_22:
    if ( v13 )
    {
LABEL_23:
      v17 = 0x10000LL;
      v18 = v13;
LABEL_24:
      DCEx = (HDC)GetDCEx(v18, 0LL, v17);
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  if ( v13 )
    goto LABEL_23;
  v25 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 16LL);
  if ( v25 )
    v25 = (_QWORD *)*v25;
  if ( !ValidateHwndEx(v25, 1, 0) )
  {
    v2 = 0;
    goto LABEL_22;
  }
LABEL_29:
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v23 = *(_QWORD *)(v21 + 408);
  if ( v23 )
  {
    v17 = 3LL;
    v18 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL);
    goto LABEL_24;
  }
  DCEx = 0LL;
LABEL_25:
  if ( !v2 )
  {
    GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)gpDispInfo);
    GreSelectVisRgnShared(DCEx);
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit();
  return DCEx;
}
