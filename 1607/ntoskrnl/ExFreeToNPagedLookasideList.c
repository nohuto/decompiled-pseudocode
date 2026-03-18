/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x14000F4A4
 * Callers:
 *     CcSetVacbLargeOffset @ 0x14006CBF0 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14006CF18 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14006D344 (CcFreeUnusedVacbLevels.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     IoSetOplockPrivateFoExt @ 0x140078384 (IoSetOplockPrivateFoExt.c)
 *     CcDeleteMbcb @ 0x140088410 (CcDeleteMbcb.c)
 *     FsRtlAddEntry @ 0x14008D2B0 (FsRtlAddEntry.c)
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeLargeMcb @ 0x1400A530C (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400A533C (FsRtlUninitializeBaseMcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400AB1A8 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400AB4CC (FsRtlPrivateCheckWaitingLocks.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400AF318 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlFreeFileLock @ 0x1400B4128 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1400B414C (FsRtlUninitializeFileLock.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C4630 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400C4694 (FsRtlFreeTunnelNode.c)
 *     FsRtlPrivateInsertLock @ 0x1400C4EB4 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C4F94 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C51B4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C530C (FsRtlFastUnlockSingleShared.c)
 *     PopCreateDynamicIrpWorker @ 0x140124D50 (PopCreateDynamicIrpWorker.c)
 *     WmipDeregisterRegEntry @ 0x140125060 (WmipDeregisterRegEntry.c)
 *     PopAllocateIrp @ 0x14012AD80 (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x14012B6E4 (PopFreeIrp.c)
 *     PopIrpWorker @ 0x14012BB74 (PopIrpWorker.c)
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     IoSetOplockKeyContext @ 0x140133160 (IoSetOplockKeyContext.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401B9098 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x1401E2D74 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140222BFC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x14040AD94 (AlpcpDestroyPort.c)
 *     AlpcAddHandleTableEntry @ 0x14040BE50 (AlpcAddHandleTableEntry.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140414F98 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404150D0 (FsRtlFreeExtraCreateParameter.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404CA684 (AlpcConnectionDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x140505084 (WmipUnreferenceEntry.c)
 *     AlpcpDestroyBlob @ 0x14050FCC4 (AlpcpDestroyBlob.c)
 *     FsRtlDeleteTunnelCache @ 0x14052A1FC (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x14055A998 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x14070499C (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1407058C8 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1407059C4 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140706D70 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070CC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070716C (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140707338 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140708310 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140708488 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x14070DA90 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x140715474 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140715670 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140716FDC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x140717948 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x140717A78 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) < Lookaside->L.Depth )
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
