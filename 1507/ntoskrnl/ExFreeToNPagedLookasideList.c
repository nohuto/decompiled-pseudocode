/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140033280
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400330E8 (FsRtlUninitializeBaseMcb.c)
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
 *     CcFreeUnusedVacbLevels @ 0x140078A30 (CcFreeUnusedVacbLevels.c)
 *     CcDeleteMbcb @ 0x1400F1CB4 (CcDeleteMbcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertLock @ 0x140104D44 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1401050D8 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlEmptyFreePoolList @ 0x140105744 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140105794 (FsRtlFreeTunnelNode.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlAddEntry @ 0x140107328 (FsRtlAddEntry.c)
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140128B60 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlFreeFileLock @ 0x14012EC44 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x14012EC68 (FsRtlUninitializeFileLock.c)
 *     FsRtlUninitializeLargeMcb @ 0x14012FD84 (FsRtlUninitializeLargeMcb.c)
 *     PopFreeIrp @ 0x140136730 (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     PopIrpWorker @ 0x140156584 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x140159898 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E2A7C (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140213FEC (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14025A6B4 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     AlpcpDestroyPort @ 0x1404A3360 (AlpcpDestroyPort.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x140533124 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlDeleteTunnelCache @ 0x14056050C (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x1405A0E48 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     ViFreeContextTable @ 0x140738E34 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x140739F84 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14073CEBC (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14074B138 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x14074BB7C (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x14074BCAC (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 *     ViDeadlockFree @ 0x14075101C (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140751218 (ViDeadlockPopulateLookasideCache.c)
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
