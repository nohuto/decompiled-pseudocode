/*
 * XREFs of MiContractWsSwapPageFile @ 0x1404D43A0
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400B5144 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140663634 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x1400B4D80 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x1400BC72C (MiNumberWsSwapPagefiles.c)
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
    v4 = *(_QWORD **)(v3 + 8LL * v2 + 6304);
    if ( v4[3] >= 0x10000uLL
      && v4[6] >= 0x10000uLL
      && (unsigned __int64)(*v4 - 0x10000LL) >= v4[2]
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1032), 1, 0) )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 1000), NormalWorkQueue);
    }
  }
}
