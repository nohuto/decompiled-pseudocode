/*
 * XREFs of RtlpInterlockedFlushSList @ 0x14015B9E0
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1400135E8 (MiFreePageFileHashPfns.c)
 *     MiDeleteNoBlockStacks @ 0x140014528 (MiDeleteNoBlockStacks.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x1400E92F0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1400E9368 (ExFlushLookasideListEx.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F6B00 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1400FAB90 (PfFbBufferListFlushStandby.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1404D3260 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1404D35C0 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x1404F3964 (ExDrainPoolLookasideList.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x14062FCB0 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14063076C (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140667C88 (EtwpFreeStackCache.c)
 *     VerifierExpInterlockedFlushSList @ 0x1406C0458 (VerifierExpInterlockedFlushSList.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1406C4AA8 (ViPoolDelayFreeTrimThreadRoutine.c)
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
