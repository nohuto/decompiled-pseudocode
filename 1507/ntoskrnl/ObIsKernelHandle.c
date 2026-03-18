/*
 * XREFs of ObIsKernelHandle @ 0x140131C00
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
      && (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL;
}
