/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1404F4A28
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14050A4E0 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B188 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PsSetCurrentThreadPrefetching @ 0x14050AC5C (PsSetCurrentThreadPrefetching.c)
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
    FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_140328690);
    v5 = *(_QWORD *)a1;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328690, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328690);
    KeAbPostRelease((ULONG_PTR)&qword_140328690);
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
