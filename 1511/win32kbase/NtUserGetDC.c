/*
 * XREFs of NtUserGetDC @ 0x1C0042DC0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ValidateHwndEx @ 0x1C0043480 (ValidateHwndEx.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetDC(void *a1)
{
  int v2; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  LARGE_INTEGER v8; // rbx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 DCEx; // rdi
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void **v16; // rcx
  void *v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  HRGN RectRgnIndirect; // rbx
  __int64 v22; // r8
  struct tagTHREADINFO *v23; // rbx
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  DWORD LowPart; // eax
  int v28; // r8d

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0LL, 1LL);
  v6 = PsGetCurrentThreadWin32Thread(v4);
  if ( v6 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v9 = (unsigned __int8)byte_1C01020C8;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v9) = byte_1C01020C8 - 1;
        Template_xqx(v9, (unsigned int)&AcquiredSharedUserCritEvent, v7, v8.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v7,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    v10 = ValidateHwndEx(a1);
    if ( !v10 )
    {
      DCEx = 0LL;
      goto LABEL_37;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v7);
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v12 + 440) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15) + 376)
                              + 728LL)
                  + 24LL) & 1) != 0 )
  {
    if ( !v10 )
    {
      v16 = *(void ***)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15) + 408)
                                  + 8LL)
                      + 16LL);
      if ( v16 )
        v17 = *v16;
      else
        v17 = 0LL;
      if ( !ValidateHwndEx(v17) )
        v2 = 0;
      goto LABEL_29;
    }
LABEL_36:
    DCEx = GetDCEx(v10, 0LL, 0x10000LL);
    goto LABEL_37;
  }
  if ( v10 )
    goto LABEL_36;
LABEL_29:
  v18 = 0LL;
  v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v14, v15);
  if ( v19 )
    v18 = *v19;
  v20 = *(_QWORD *)(v18 + 408);
  if ( v20 )
    DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)gpDispInfo);
    GreSelectVisRgn(DCEx, (__int64)RectRgnIndirect, 1u);
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  }
LABEL_37:
  v22 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v23 = 0LL;
  v24 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v22);
  if ( v24 )
    v23 = *v24;
  if ( v23 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x200000010000000LL) != 0
    && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
  {
    v26 = PsGetCurrentThreadWin32Thread(v25);
    if ( v26 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v26 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v28,
          LowPart - *(_DWORD *)(v26 + 8),
          0,
          *(_QWORD *)(v26 + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return DCEx;
}
