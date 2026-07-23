/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401673F0
 * Callers:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004844 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfFbBufferListFlushStandby @ 0x14000695C (PfFbBufferListFlushStandby.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     ExpFlushGeneralLookaside @ 0x1400A6D04 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1400A6D74 (ExFlushLookasideListEx.c)
 *     MiDrainZeroLookasides @ 0x1400A71B4 (MiDrainZeroLookasides.c)
 *     MiDeleteNoBlockStacks @ 0x1400BBFB8 (MiDeleteNoBlockStacks.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013DCFC (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1403E92F0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1403E9660 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x140532278 (ExDrainPoolLookasideList.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140668948 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x1406A9C7C (EtwpFreeStackCache.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B60 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
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
