/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140709708
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140706588 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14070662C (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066B8 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706744 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B6C (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140706D70 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140706E98 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140707030 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407070CC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070716C (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140707280 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707338 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707934 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140707AB4 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140707CC0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E68 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x140708310 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x140709C74 (ViHookDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140705FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

ULONG_PTR __fastcall ViGetAdapterInformationInternal(__int64 a1, char a2)
{
  KIRQL v4; // al
  ULONG_PTR i; // rbx

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( ViVerifyDma )
      VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  if ( !ViVerifyDma && ViEnableAfterHibernate == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = ViAdapterList; ; i = *(_QWORD *)i )
  {
    if ( &ViAdapterList == (ULONG_PTR *)i )
    {
      KeReleaseSpinLock(&Lock, v4);
      return 0LL;
    }
    if ( a1 == *(_QWORD *)(i + 16) )
      break;
  }
  KeReleaseSpinLock(&Lock, v4);
  if ( a2 && *(int *)(i + 36) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_1402F99BC,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(230, 24, a1, i, 0LL, byte_1402F99BC);
  }
  return i;
}
