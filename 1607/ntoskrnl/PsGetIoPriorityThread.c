/*
 * XREFs of PsGetIoPriorityThread @ 0x1400E7E30
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x1400232A0 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B550 (CcBoostLowPriorityWorkerThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006C0E4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14006C2D0 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x14006EE10 (CcScheduleReadAheadEx.c)
 *     EtwpTraceThreadRundown @ 0x140073744 (EtwpTraceThreadRundown.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400A4594 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C71EC (FsRtlpWaitForIoAtEof.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
 *     IoRetrievePriorityInfo @ 0x1400EB870 (IoRetrievePriorityInfo.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A0F4 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     PfSnBeginScenario @ 0x1403E6ED0 (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x140458630 (PspBoostJobIoPriorityCallback.c)
 *     EtwTraceThread @ 0x14045A914 (EtwTraceThread.c)
 *     CmpBoostActiveHiveWriter @ 0x14047D444 (CmpBoostActiveHiveWriter.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404F4814 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x140525BF0 (MiLogRelocationRva.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1728) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1784) )
      return 2LL;
  }
  return result;
}
