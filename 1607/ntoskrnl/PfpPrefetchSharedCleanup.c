/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1404D79B4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x1404ED470 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404EDBEC (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_1403286D0);
    v5 = *(_QWORD *)a1;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403286D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403286D0);
    KeAbPostRelease((ULONG_PTR)&qword_1403286D0);
    KeLeaveCriticalRegion();
  }
  if ( (*(_DWORD *)(a1 + 68) & 1) != 0 )
  {
    ExReleaseRundownProtection(&RunRef);
    *(_DWORD *)(a1 + 68) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((*(_DWORD *)(a1 + 68) & 2) != 0);
  result = *(unsigned int *)(a1 + 68);
  if ( (result & 8) != 0 )
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), a2, a3, a4);
  return result;
}
