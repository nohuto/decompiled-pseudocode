/*
 * XREFs of RtlpInterlockedFlushSList @ 0x14018B4C0
 * Callers:
 *     MiDeleteNoBlockStacks @ 0x140012424 (MiDeleteNoBlockStacks.c)
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     PfFbBufferListFlushStandby @ 0x1400D7AC8 (PfFbBufferListFlushStandby.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DBB4C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     ExFlushLookasideListEx @ 0x140122F68 (ExFlushLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x140122FA0 (ExDeleteNPagedLookasideList.c)
 *     ExDeletePagedLookasideList @ 0x140122FE8 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x140123030 (ExDeleteLookasideListEx.c)
 *     ExpWorkerFactoryManagerThread @ 0x1401654EC (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1404F7870 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1404F7BD0 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x140567C44 (ExDrainPoolLookasideList.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1406ADCDC (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1406AE860 (ObpStopRuntimeStackTrace.c)
 *     EtwpFreeStackCache @ 0x1406EAFB0 (EtwpFreeStackCache.c)
 *     VerifierExpInterlockedFlushSList @ 0x140741C4C (VerifierExpInterlockedFlushSList.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14074636C (ViPoolDelayFreeTrimThreadRoutine.c)
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
