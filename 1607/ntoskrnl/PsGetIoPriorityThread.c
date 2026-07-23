/*
 * XREFs of PsGetIoPriorityThread @ 0x1400E5CD0
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140022E20 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14006BE50 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     EtwpTraceThreadRundown @ 0x1400732C4 (EtwpTraceThreadRundown.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IoRetrievePriorityInfo @ 0x1400E96E0 (IoRetrievePriorityInfo.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x140457500 (PspBoostJobIoPriorityCallback.c)
 *     EtwTraceThread @ 0x1404597E4 (EtwTraceThread.c)
 *     CmpBoostActiveHiveWriter @ 0x14047C198 (CmpBoostActiveHiveWriter.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404D77A0 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
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
