/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140709738
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407065B8 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14070665C (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066E8 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706774 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140706EC8 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140707060 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1407072B0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707964 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140707AE4 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x140709CA4 (ViHookDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140706010 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(struct _LIST_ENTRY *a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *i; // rbx

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
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      KeReleaseSpinLock(&Lock, v4);
      return 0LL;
    }
    if ( a1 == i[1].Flink )
      break;
  }
  KeReleaseSpinLock(&Lock, v4);
  if ( a2 && SHIDWORD(i[2].Flink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_1402F99BC,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(230, 24, (int)a1, (int)i, 0LL, byte_1402F99BC);
  }
  return i;
}
