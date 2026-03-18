/*
 * XREFs of ExfUnblockPushLock @ 0x140150264
 * Callers:
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     RtlQueryAtomInAtomTable @ 0x14045FFD0 (RtlQueryAtomInAtomTable.c)
 *     ObpEnumFindHandleProcedure @ 0x140480EE0 (ObpEnumFindHandleProcedure.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     MiLockImageSection @ 0x140498AE4 (MiLockImageSection.c)
 *     CmpWorkerEngineWorker @ 0x140498C90 (CmpWorkerEngineWorker.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     CmpEnumerateCallback @ 0x1404C4F20 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405DD69C (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
