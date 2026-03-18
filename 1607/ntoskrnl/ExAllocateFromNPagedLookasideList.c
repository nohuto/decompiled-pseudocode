/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14006FEB0
 * Callers:
 *     CcAllocateVacbLevels @ 0x14006D910 (CcAllocateVacbLevels.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     IoSetOplockPrivateFoExt @ 0x140078384 (IoSetOplockPrivateFoExt.c)
 *     VfAvlReserveNode @ 0x1400842D8 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x14008C724 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x14008D484 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x14008D4D8 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14008D544 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlSplitLocks @ 0x1400AB520 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400B25C0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlPrivateLock @ 0x1400C4BA8 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1400C4EB4 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C4F94 (FsRtlPrivateInsertSharedLock.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C6770 (LZNT1DecompressChunkNewThread.c)
 *     PopCreateDynamicIrpWorker @ 0x140124D50 (PopCreateDynamicIrpWorker.c)
 *     PopAllocateIrp @ 0x14012AD80 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x14012DE98 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x140133160 (IoSetOplockKeyContext.c)
 *     MiAddMdlTracker @ 0x1401E2B60 (MiAddMdlTracker.c)
 *     AlpcpAllocateBlob @ 0x14040D624 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041DB70 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     AlpcInitializeHandleTable @ 0x1404B3964 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1404B58C0 (AlpcpInitializePort.c)
 *     FsRtlAddToTunnelCache @ 0x1405030D8 (FsRtlAddToTunnelCache.c)
 *     WmipAllocEntry @ 0x140537E68 (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140559C9C (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14055A570 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140704964 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x140705A54 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x14070BEA8 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140714A40 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140715670 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x140716E88 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140717840 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1407179C0 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
