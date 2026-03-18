/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140079F84
 * Callers:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140091EE4 (LZNT1DecompressChunkWorkItem.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     IoSetOplockPrivateFoExt @ 0x1400CAF20 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlEmptyFreePoolList @ 0x1400CD560 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400CD5B0 (FsRtlFreeTunnelNode.c)
 *     FsRtlPrivateInsertLock @ 0x1400CDA14 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400CDAF4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400CDD14 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400CDE70 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlAddEntry @ 0x1400D77E4 (FsRtlAddEntry.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1400E0C5C (CcSetVacbLargeOffset.c)
 *     CcFreeUnusedVacbLevels @ 0x1400E0FF4 (CcFreeUnusedVacbLevels.c)
 *     FsRtlUninitializeLargeMcb @ 0x1400E6CD8 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400E6D08 (FsRtlUninitializeBaseMcb.c)
 *     WmipDeregisterRegEntry @ 0x1400EA5DC (WmipDeregisterRegEntry.c)
 *     FsRtlFreeFileLock @ 0x1400F2900 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1400F2924 (FsRtlUninitializeFileLock.c)
 *     PopFreeIrp @ 0x140120D98 (PopFreeIrp.c)
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x140125DA8 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14012BCAC (IoSetOplockKeyContext.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401ACB60 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x1401D2CB0 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14020B140 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140422F98 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcpDestroyBlob @ 0x1404253D4 (AlpcpDestroyBlob.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     AlpcAddHandleTableEntry @ 0x14047CAB0 (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyPort @ 0x14047EA48 (AlpcpDestroyPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404A9B68 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlDeleteTunnelCache @ 0x1404EC09C (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x14052E4C8 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1406B8910 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1406B9950 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1406BC414 (ViAdapterCallback.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1406C8634 (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x1406C8F7C (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1406C90AC (ViPacketNotificationCallback.c)
 *     ViDeadlockFree @ 0x1406CD68C (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1406CD888 (ViDeadlockPopulateLookasideCache.c)
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
