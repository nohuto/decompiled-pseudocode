/*
 * XREFs of CcGetFlushedValidData @ 0x1400A96D8
 * Callers:
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     CcDecrementOpenCount @ 0x140073698 (CcDecrementOpenCount.c)
 *     CcFindBitmapRangeToClean @ 0x1400CC834 (CcFindBitmapRangeToClean.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rsi
  LARGE_INTEGER v5; // rbx
  __int64 v7; // rcx
  __int64 BitmapRangeToClean; // rax
  char *v9; // rdx
  __int64 i; // rcx
  __int64 v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // di

  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  }
  else
  {
    v12 = KeAcquireQueuedSpinLock(5uLL);
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
    if ( !SharedCacheMap )
    {
      KeReleaseQueuedSpinLock(5uLL, v12);
      return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
    }
    ++*((_DWORD *)SharedCacheMap + 1);
    KeReleaseQueuedSpinLock(5uLL, v12);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
  }
  v5 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v7 = *((_QWORD *)SharedCacheMap + 20);
    if ( v7 && *(_DWORD *)(v7 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v7, 0LL);
      v5.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
    }
    v9 = SharedCacheMap + 16;
    for ( i = *((_QWORD *)SharedCacheMap + 2); ; i = *(_QWORD *)(v11 + 16) )
    {
      v11 = i - 16;
      if ( (char *)(v11 + 16) == v9 || *(_WORD *)v11 == 765 && *(_BYTE *)(v11 + 2) )
        break;
    }
    if ( (char *)(v11 + 16) != v9 && *(_QWORD *)(v11 + 8) < v5.QuadPart )
      v5 = *(LARGE_INTEGER *)(v11 + 8);
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
    v13 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    KeReleaseQueuedSpinLock(5uLL, v13);
  }
  return v5;
}
