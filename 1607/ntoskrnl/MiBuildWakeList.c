/*
 * XREFs of MiBuildWakeList @ 0x140026D70
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x140021518 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x140021958 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140026064 (MiReferenceControlArea.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiDecrementModifiedWriteCount @ 0x14008F084 (MiDecrementModifiedWriteCount.c)
 *     MiReferencePfBackedSection @ 0x14008FB80 (MiReferencePfBackedSection.c)
 *     MiPrepareSegmentForDeletion @ 0x140090154 (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
