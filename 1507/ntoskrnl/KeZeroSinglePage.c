/*
 * XREFs of KeZeroSinglePage @ 0x140186BB0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     ViGrowPoolAllocation @ 0x140736AA0 (ViGrowPoolAllocation.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MxMarkActiveDriverBits @ 0x1407CD2B4 (MxMarkActiveDriverBits.c)
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
