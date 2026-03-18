/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     IopBoostThreadCallback @ 0x1400D6F18 (IopBoostThreadCallback.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D79C8 (MmFreeAccessPfnBuffer.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     CcGetDirtyPages @ 0x1400F1FE0 (CcGetDirtyPages.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     ExReinitializeResourceLite @ 0x140113E08 (ExReinitializeResourceLite.c)
 *     ExReturnPoolQuota @ 0x140119294 (ExReturnPoolQuota.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     CcPerfLogFlushCache @ 0x140126F18 (CcPerfLogFlushCache.c)
 *     MmChangeSectionBackingFile @ 0x14012753C (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401276BC (CcChangeBackingFileObject.c)
 *     CcPerfLogFlushSection @ 0x1401288B4 (CcPerfLogFlushSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     PfpServiceMainThreadUnboost @ 0x140148AD0 (PfpServiceMainThreadUnboost.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     KiMonitorCacheErrata @ 0x14020A054 (KiMonitorCacheErrata.c)
 *     PopSetSpecialRequest @ 0x140409CAC (PopSetSpecialRequest.c)
 *     PopClearSpecialRequest @ 0x14040A1E8 (PopClearSpecialRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     PopDisablePowerExecutionRequest @ 0x1404E61DC (PopDisablePowerExecutionRequest.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x14055A9FC (PsReleaseProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
