/*
 * XREFs of KeZeroPages @ 0x140186BF0
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 *     MxMapVa @ 0x1407C5B80 (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x1407C8220 (MiMapBBTMemory.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(int *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si32(a1, 0);
    _mm_stream_si32(a1 + 2, 0);
    _mm_stream_si32(a1 + 4, 0);
    _mm_stream_si32(a1 + 6, 0);
    _mm_stream_si32(a1 + 8, 0);
    _mm_stream_si32(a1 + 10, 0);
    _mm_stream_si32(a1 + 12, 0);
    _mm_stream_si32(a1 + 14, 0);
    a1 += 32;
    _mm_stream_si32(a1 - 16, 0);
    _mm_stream_si32(a1 - 14, 0);
    _mm_stream_si32(a1 - 12, 0);
    _mm_stream_si32(a1 - 10, 0);
    _mm_stream_si32(a1 - 8, 0);
    _mm_stream_si32(a1 - 6, 0);
    _mm_stream_si32(a1 - 4, 0);
    _mm_stream_si32(a1 - 2, 0);
    --v3;
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
