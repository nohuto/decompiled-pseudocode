/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14006FA30
 * Callers:
 *     CcAllocateVacbLevels @ 0x14006D490 (CcAllocateVacbLevels.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     IoSetOplockPrivateFoExt @ 0x140078404 (IoSetOplockPrivateFoExt.c)
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x14008BE84 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x14008CBE8 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x14008CC3C (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14008CCA8 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlSplitLocks @ 0x1400A9AA0 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400B0500 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlPrivateLock @ 0x1400C2A48 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1400C2D54 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C4610 (LZNT1DecompressChunkNewThread.c)
 *     PopCreateDynamicIrpWorker @ 0x1401252C0 (PopCreateDynamicIrpWorker.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041CA30 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     AlpcInitializeHandleTable @ 0x14049DD44 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x14049FCA0 (AlpcpInitializePort.c)
 *     FsRtlAddToTunnelCache @ 0x1404E6068 (FsRtlAddToTunnelCache.c)
 *     WmipAllocEntry @ 0x1405383A8 (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x14055A1DC (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14055AAB0 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140704994 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x140705A84 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x14070BED8 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140714A40 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140715670 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x140716E88 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140717840 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1407179C0 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
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
