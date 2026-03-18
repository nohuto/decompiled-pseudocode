/*
 * XREFs of KeZeroPages @ 0x140157480
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1400E4A68 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     MxMapVa @ 0x140747468 (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
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
