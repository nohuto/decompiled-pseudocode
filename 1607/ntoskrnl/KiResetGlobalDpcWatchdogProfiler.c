/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1401D1EAC
 * Callers:
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042CC0 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     KiRetireDpcList @ 0x140058280 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x140059280 (KiExecuteAllDpcs.c)
 *     KeShouldYieldProcessor @ 0x1400956C0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1400AF74C (KiDpcWatchdog.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     KeAccumulateTicks @ 0x1400DC3C0 (KeAccumulateTicks.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 *     KiProcessExpiredTimerList @ 0x14010CEBC (KiProcessExpiredTimerList.c)
 *     KeRelaxTimingConstraints @ 0x1401D1D98 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 25000);
  if ( v1 && *(void **)(a1 + 25008) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 22644);
    if ( *(_DWORD *)(a1 + 22636) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
