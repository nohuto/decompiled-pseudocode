/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007DF10
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031BE0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(struct _LIST_ENTRY *a1, unsigned int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // rbx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v20; // rax
  struct _SURFOBJ *v21; // rdx
  PRKSEMAPHORE v22; // rcx
  struct _LIST_ENTRY *v23; // [rsp+50h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v22 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v22 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v22, UserRequest, 0, 0, 0LL);
  }
  v10 = PsGetCurrentThreadWin32Thread(v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v11) = byte_1C0118B28 - 1;
      Template_xqx(v11, (unsigned int)&AcquiredSharedUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
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
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  for ( i = 0LL; ; i = (struct _LIST_ENTRY *)v18 )
  {
    v17 = hdevEnumerate(i, v14, v15);
    v18 = (__int64)v17;
    if ( !v17 )
      break;
    v23 = v17;
    Blink = v17[162].Blink;
    if ( Blink && (*(_DWORD *)(v18 + 56) & 0x20400) == 0 && Blink[16].Flink == a1 && LODWORD(Blink[17].Flink) < a2 )
    {
      GreLockDisplayDevice(v18);
      v20 = *(_QWORD *)(v18 + 2576);
      if ( v20 )
        v21 = (struct _SURFOBJ *)(v20 + 24);
      else
        v21 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v23, v21, 0LL, 0xEu);
    }
  }
}
