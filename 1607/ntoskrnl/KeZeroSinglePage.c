/*
 * XREFs of KeZeroSinglePage @ 0x140162380
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     ViGrowPoolAllocation @ 0x140702640 (ViGrowPoolAllocation.c)
 *     MxMarkActiveDriverBits @ 0x1407A6134 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroSinglePage(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = 64;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1 += 8;
    *(a1 - 5) = 0LL;
    *(a1 - 4) = 0LL;
    --v2;
    *(a1 - 3) = 0LL;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
