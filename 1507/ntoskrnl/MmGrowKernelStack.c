/*
 * XREFs of MmGrowKernelStack @ 0x140217120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MmGrowKernelStackEx(a1, 24576LL, a3, a4);
}
