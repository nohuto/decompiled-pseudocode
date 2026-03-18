/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140663550
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14022211C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400B6F90 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiContractWsSwapPageFile @ 0x1404F1C0C (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1404F271C (EtwTraceWorkingSetSwap.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  int *ProcessPartition; // rdi
  _DWORD v6[10]; // [rsp+20h] [rbp-38h] BYREF

  v6[0] = 2;
  EtwTraceWorkingSetSwap(Process, 3, (__int64)v6);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile((__int64)ProcessPartition);
  v6[8] = 0;
  EtwTraceWorkingSetSwap(Process, 1, (__int64)v6);
  return 0LL;
}
