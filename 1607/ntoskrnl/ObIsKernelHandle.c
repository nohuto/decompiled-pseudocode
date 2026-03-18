/*
 * XREFs of ObIsKernelHandle @ 0x140126C74
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
