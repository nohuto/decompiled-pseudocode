/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1400F5CF8
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x1400F55A8 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400F5CA8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
