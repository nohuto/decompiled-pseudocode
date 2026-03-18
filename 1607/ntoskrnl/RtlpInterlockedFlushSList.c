/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140166E80
 * Callers:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400046D0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1400067EC (PfFbBufferListFlushStandby.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     ExpFlushGeneralLookaside @ 0x1400A878C (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1400A87FC (ExFlushLookasideListEx.c)
 *     MiDrainZeroLookasides @ 0x1400A8C34 (MiDrainZeroLookasides.c)
 *     MiDeleteNoBlockStacks @ 0x1400BE128 (MiDeleteNoBlockStacks.c)
 *     MiFreePageFileHashPfns @ 0x1400BE8F8 (MiFreePageFileHashPfns.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013D78C (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x1401FC7EC (MiInsertPteTracker.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1403E7CC0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1403E8030 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x140531D38 (ExDrainPoolLookasideList.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x140667D9C (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140668864 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x1406A9B44 (EtwpFreeStackCache.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B30 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
