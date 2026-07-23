/*
 * XREFs of ViGetAdapterInformationInternal @ 0x1406BD6B0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1406BA514 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1406BA5B8 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1406BA644 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1406BA6D0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1406BAFBC (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1406BB20C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x1406BBA40 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1406BBDF4 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x1406BDC1C (ViHookDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1406B9F6C (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
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
      byte_1402D404C,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(230, 24, (int)a1, (int)i, 0LL, byte_1402D404C);
  }
  return i;
}
