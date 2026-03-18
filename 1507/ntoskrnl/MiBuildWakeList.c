/*
 * XREFs of MiBuildWakeList @ 0x140088660
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14008506C (MiPrepareSegmentForDeletion.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14008707C (MiReferenceControlAreaForCacheManager.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x1400FD148 (MiReferencePfBackedSection.c)
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
