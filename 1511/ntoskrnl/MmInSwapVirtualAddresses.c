/*
 * XREFs of MmInSwapVirtualAddresses @ 0x14062AF6C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14020A930 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140001D18 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
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
