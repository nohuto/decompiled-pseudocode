/*
 * XREFs of ViGetAdapterInformationInternal @ 0x14073E33C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x14073ADC0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14073AE64 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x14073AEF0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14073AF7C (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x14073B770 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14073B908 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x14073C424 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x14073E9E0 (ViHookDmaAdapter.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14073A5A0 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(struct _LIST_ENTRY *a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *i; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

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
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Lock);
  }
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Lock, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)&Lock, 0LL);
      __writecr8(CurrentIrql);
      return 0LL;
    }
    if ( a1 == i[1].Flink )
      break;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Lock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&Lock, 0LL);
  __writecr8(CurrentIrql);
  if ( a2 && SHIDWORD(i[2].Flink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_14032317C,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(230, 24, (int)a1, (int)i, 0LL, byte_14032317C);
  }
  return i;
}
