/*
 * XREFs of MmInSwapVirtualAddresses @ 0x1406A94C8
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140259E80 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400DE920 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int16 *ProcessPartition; // rdi
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
