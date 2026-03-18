/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1400BB7D4
 * Callers:
 *     VfAvlReserveNode @ 0x1400025E4 (VfAvlReserveNode.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400BB770 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x1400CAF20 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x1400CD704 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1400CDA14 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400CDAF4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x1400CEBCC (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CEC98 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x1400D6D10 (FsRtlTruncateBaseMcb.c)
 *     CcAllocateVacbLevels @ 0x1400E1048 (CcAllocateVacbLevels.c)
 *     FsRtlInitializeLargeMcb @ 0x1400F08DC (FsRtlInitializeLargeMcb.c)
 *     FsRtlAllocateFileLock @ 0x1400F2494 (FsRtlAllocateFileLock.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400FFF44 (LZNT1DecompressChunkNewThread.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x140123DB8 (WmipAllocRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x140125DA8 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14012BCAC (IoSetOplockKeyContext.c)
 *     MiAddMdlTracker @ 0x1401D2A9C (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x14046C500 (AlpcpInitializePort.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x14047D5D0 (AlpcInitializeHandleTable.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14047D620 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCache @ 0x140492590 (FsRtlAddToTunnelCache.c)
 *     WmipAllocEntry @ 0x140502690 (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x14052D7DC (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14052E0B8 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1406B88D8 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1406B99E0 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1406BFE50 (VfIrpAllocateCallDriverData.c)
 *     ViWdBeforeCallDriver @ 0x1406C84E0 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1406C8E70 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1406C8FF4 (VfPacketCreateAndLock.c)
 *     ViDeadlockAllocate @ 0x1406CCC60 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1406CD888 (ViDeadlockPopulateLookasideCache.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
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
