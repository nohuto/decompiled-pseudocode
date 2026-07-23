/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x140022050
 * Callers:
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_BYTE *P)
{
  unsigned int v1; // ebp
  int v2; // esi
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = 0;
  v2 = P[72] & 1;
  v3 = P;
  do
  {
    v4 = (_QWORD *)*v3;
    v5 = MiPfCompletePrefetchIos(v3 + 11, 0LL, 0LL);
    MiReleaseReadListResources(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v2 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
