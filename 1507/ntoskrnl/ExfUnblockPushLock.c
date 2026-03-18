/*
 * XREFs of ExfUnblockPushLock @ 0x14017E9A0
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x140407034 (ExQueryProcessHandleInformation.c)
 *     PspClearProcessThreadCidRefs @ 0x140420C64 (PspClearProcessThreadCidRefs.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404240F0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     MiLockImageSection @ 0x1404251F4 (MiLockImageSection.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpWorkerEngineWorker @ 0x1404EDFFC (CmpWorkerEngineWorker.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     RtlQueryAtomInAtomTable @ 0x140504970 (RtlQueryAtomInAtomTable.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     ObpEnumFindHandleProcedure @ 0x140521E88 (ObpEnumFindHandleProcedure.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x140523C8C (ObInheritObjectHandle.c)
 *     ObSetHandleAttributes @ 0x140533E6C (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14053A484 (ObQueryObjectAuditingByHandle.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmpEnumerateCallback @ 0x14058E31C (CmpEnumerateCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140652BC8 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x1406760DC (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x14067D9E4 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1406AAF08 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1406AB418 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 *     PspSetFileHandleFlow @ 0x1406C4B64 (PspSetFileHandleFlow.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406E8870 (EtwpObjectHandleEnumCallback.c)
 *     ExUnlockHandleTableEntry @ 0x1406F01C8 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x1406F02E4 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
