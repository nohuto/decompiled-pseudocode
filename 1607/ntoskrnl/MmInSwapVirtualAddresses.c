/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140663634
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140221F48 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400B4DB8 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiContractWsSwapPageFile @ 0x1404D43A0 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
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
