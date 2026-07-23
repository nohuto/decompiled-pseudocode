/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8
 * Callers:
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1400ADCB4 (KiDpcWatchdog.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     KeRelaxTimingConstraints @ 0x1401D1BC4 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
