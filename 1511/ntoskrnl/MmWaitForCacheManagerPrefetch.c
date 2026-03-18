/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1400FB914
 * Callers:
 *     CcFetchDataForRead @ 0x1400A3590 (CcFetchDataForRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400FBF2C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400387EC (MiPfCompletePrefetchIos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
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
