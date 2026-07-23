/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x14000F024
 * Callers:
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14006CEC4 (CcFreeUnusedVacbLevels.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     IoSetOplockPrivateFoExt @ 0x140078404 (IoSetOplockPrivateFoExt.c)
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeLargeMcb @ 0x1400A3884 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400A38B4 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C (FsRtlPrivateCheckWaitingLocks.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400AD880 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlFreeFileLock @ 0x1400B1FA8 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1400B1FCC (FsRtlUninitializeFileLock.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C24D0 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400C2534 (FsRtlFreeTunnelNode.c)
 *     FsRtlPrivateInsertLock @ 0x1400C2D54 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C3054 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C31AC (FsRtlFastUnlockSingleShared.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     PopCreateDynamicIrpWorker @ 0x1401252C0 (PopCreateDynamicIrpWorker.c)
 *     WmipDeregisterRegEntry @ 0x1401255D0 (WmipDeregisterRegEntry.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x14012BC54 (PopFreeIrp.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401B8CDC (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x1401E2BA0 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140222A28 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x140409C54 (AlpcpDestroyPort.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140413E58 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404B0404 (AlpcConnectionDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     AlpcpDestroyBlob @ 0x1404F2C54 (AlpcpDestroyBlob.c)
 *     FsRtlDeleteTunnelCache @ 0x14052A73C (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1407049CC (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1407059F4 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
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
