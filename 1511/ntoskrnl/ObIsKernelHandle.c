/*
 * XREFs of ObIsKernelHandle @ 0x140107604
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
