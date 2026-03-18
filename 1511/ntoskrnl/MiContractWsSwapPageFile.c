/*
 * XREFs of MiContractWsSwapPageFile @ 0x1403B592C
 * Callers:
 *     MmInSwapWorkingSet @ 0x140001BC8 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x14062AF6C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x14001358C (MiNumberWsSwapPagefiles.c)
 *     MiWsSwapPageFileNumber @ 0x1400F5DE0 (MiWsSwapPageFileNumber.c)
 */

void __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // eax
  __int64 v3; // r11
  _QWORD *v4; // rcx

  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    v2 = MiWsSwapPageFileNumber(v1);
    v4 = *(_QWORD **)(v3 + 8LL * v2 + 5728);
    if ( v4[3] >= 0x10000uLL
      && v4[6] >= 0x10000uLL
      && (unsigned __int64)(*v4 - 0x10000LL) >= v4[2]
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1040), 1, 0) )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 1008), NormalWorkQueue);
    }
  }
}
