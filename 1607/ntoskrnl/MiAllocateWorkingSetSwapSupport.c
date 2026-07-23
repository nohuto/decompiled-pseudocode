/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1400B52F8
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x1400B40E8 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400B52A8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F76C4 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a1 + 2), 0x53576D4Du);
  if ( result )
  {
    result[2] = 0LL;
    result[1] = a1;
    result[3] = 0LL;
    *result = ((unsigned __int64)result + 39) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
