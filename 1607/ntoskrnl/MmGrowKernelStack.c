/*
 * XREFs of MmGrowKernelStack @ 0x1401E6678
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
