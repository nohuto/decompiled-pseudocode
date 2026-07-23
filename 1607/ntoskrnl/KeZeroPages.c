/*
 * XREFs of KeZeroPages @ 0x1401623C0
 * Callers:
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     MiZeroLargePage @ 0x14008A8C0 (MiZeroLargePage.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MxMapVa @ 0x14079747C (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
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
