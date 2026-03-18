/*
 * XREFs of PsGetIoPriorityThread @ 0x140070170
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     KiAbTryIncrementIoWaiterCount @ 0x140031E90 (KiAbTryIncrementIoWaiterCount.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     CcCopyWriteWontFlush @ 0x140070FC0 (CcCopyWriteWontFlush.c)
 *     IoRetrievePriorityInfo @ 0x140072690 (IoRetrievePriorityInfo.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     FsRtlpWaitForIoAtEof @ 0x140101EB4 (FsRtlpWaitForIoAtEof.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     EtwpTraceThreadRundown @ 0x14011FAD4 (EtwpTraceThreadRundown.c)
 *     MiLogRelocationRva @ 0x1403C71B0 (MiLogRelocationRva.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404B7048 (MmPrefetchVirtualAddresses.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404E23A0 (PspBoostJobIoPriorityCallback.c)
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1788) )
      return 2LL;
  }
  return result;
}
