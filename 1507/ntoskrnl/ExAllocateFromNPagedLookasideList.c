/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140030738
 * Callers:
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400306D4 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     CcAllocateVacbLevels @ 0x140078A84 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400D59B4 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140104D44 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140106180 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlSplitLocks @ 0x1401062B4 (FsRtlSplitLocks.c)
 *     FsRtlTruncateBaseMcb @ 0x140106844 (FsRtlTruncateBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x14012EB28 (FsRtlInitializeLargeMcb.c)
 *     FsRtlAllocateFileLock @ 0x14012FD0C (FsRtlAllocateFileLock.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     WmipAllocRegEntry @ 0x140157134 (WmipAllocRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x140159898 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     FsRtlAddToTunnelCache @ 0x140439F9C (FsRtlAddToTunnelCache.c)
 *     AlpcpInitializePort @ 0x140472328 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1404724E8 (AlpcInitializeHandleTable.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140472540 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140472610 (FsRtlAllocateExtraCreateParameterList.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     WmipAllocEntry @ 0x14057C21C (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x1405A015C (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x1405A0A38 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140738DFC (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x14073A014 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140741644 (VfIrpAllocateCallDriverData.c)
 *     ViWdBeforeCallDriver @ 0x14074AFA4 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14074BA70 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x14074BBF4 (VfPacketCreateAndLock.c)
 *     ViDeadlockAllocate @ 0x1407504EC (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140751218 (ViDeadlockPopulateLookasideCache.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
