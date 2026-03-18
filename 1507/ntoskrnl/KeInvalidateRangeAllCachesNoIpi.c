/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x1400E5C30
 * Callers:
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     KeInvalidateRangeAllCaches @ 0x14015A4C0 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx
  __int64 CFlushSize; // r8
  char *v4; // rax

  if ( a2 >= KiLargestCacheSize )
  {
    LOBYTE(v4) = KeInvalidateAllCaches();
  }
  else
  {
    v2 = a1 + a2;
    CFlushSize = KeGetCurrentPrcb()->CFlushSize;
    v4 = (char *)(a1 & ~(CFlushSize - 1));
    if ( (KeFeatureBits & 0x800000000LL) != 0 )
    {
      LOBYTE(v4) = KiFlushCacheLines(a1 & ~(CFlushSize - 1), (~(CFlushSize - 1) & (CFlushSize + v2 - 1)) - (_QWORD)v4);
    }
    else
    {
      for ( ; (unsigned __int64)v4 < v2; v4 += CFlushSize )
        _mm_clflush(v4);
    }
  }
  return (char)v4;
}
