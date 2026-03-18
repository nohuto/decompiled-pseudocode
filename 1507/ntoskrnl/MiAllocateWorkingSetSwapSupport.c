/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1400DCE20
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400DCDD0 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x1400DDB48 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
