/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1404DCEB8
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x1404DB060 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404DAA78 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    PfLockExclusiveAcquire(&qword_140305890);
    v2 = *(_QWORD *)a1;
    v3 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305890, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305890);
    KeAbPostRelease((ULONG_PTR)&qword_140305890);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( (*(_DWORD *)(a1 + 68) & 1) != 0 )
  {
    ExReleaseRundownProtection_0(&stru_140305880);
    *(_DWORD *)(a1 + 68) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((*(_DWORD *)(a1 + 68) & 2) != 0);
  result = *(unsigned int *)(a1 + 68);
  if ( (result & 8) != 0 )
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
