/*
 * XREFs of PfpPrefetchSharedStart @ 0x1404DCF90
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404DAA78 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection(&stru_140305880) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  PfLockExclusiveAcquire(&qword_140305890);
  if ( (dword_1403058A8 & 1) == 0 )
  {
    v4 = qword_140305898;
    *(_QWORD *)BugCheckParameter2 = qword_140305898;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_140305898;
    if ( *(__int64 **)(v4 + 8) != &qword_140305898 )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = BugCheckParameter2;
    qword_140305898 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305890, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305890);
  KeAbPostRelease((ULONG_PTR)&qword_140305890);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v5 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 128) = v5;
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 136) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
