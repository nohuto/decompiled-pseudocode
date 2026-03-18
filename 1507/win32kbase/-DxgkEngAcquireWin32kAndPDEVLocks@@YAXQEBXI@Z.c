/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0081BD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0034590 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(const void *a1, unsigned int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  LARGE_INTEGER v14; // rbx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // r8
  struct PDEV *i; // rcx
  struct PDEV *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _SURFOBJ *v23; // rdx
  PVOID v24; // rcx
  struct PDEV *v25; // [rsp+50h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v24 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v24 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v24, UserRequest, 0, 0, 0LL);
  }
  v12 = PsGetCurrentThreadWin32Thread(v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v13) = byte_1C00FEA58 - 1;
      Template_xqx(v13, (unsigned int)&AcquiredSharedUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v15,
        0,
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  for ( i = 0LL; ; i = (struct PDEV *)v20 )
  {
    v19 = hdevEnumerate(i, v16, v17);
    v20 = (__int64)v19;
    if ( !v19 )
      break;
    v25 = v19;
    v21 = *((_QWORD *)v19 + 325);
    if ( v21
      && (*(_DWORD *)(v20 + 56) & 0x20400) == 0
      && *(const void **)(v21 + 256) == a1
      && *(_DWORD *)(v21 + 272) < a2 )
    {
      GreLockDisplayDevice(v20);
      v22 = *(_QWORD *)(v20 + 2576);
      if ( v22 )
        v23 = (struct _SURFOBJ *)(v22 + 24);
      else
        v23 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v25, v23, 0LL, 0xEu);
    }
  }
}
