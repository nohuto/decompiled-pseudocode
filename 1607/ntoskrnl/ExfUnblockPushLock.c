/*
 * XREFs of ExfUnblockPushLock @ 0x1401598C0
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     ObpEnumFindHandleProcedure @ 0x14045E5D0 (ObpEnumFindHandleProcedure.c)
 *     ExUnlockHandleTableEntry @ 0x14045EDD4 (ExUnlockHandleTableEntry.c)
 *     MiLockImageSection @ 0x140499ABC (MiLockImageSection.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpWorkerEngineWorker @ 0x14049F5BC (CmpWorkerEngineWorker.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     CmpTransInitializeTransaction @ 0x1404DA4B8 (CmpTransInitializeTransaction.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     CmpCommitLightWeightTransaction @ 0x14053A870 (CmpCommitLightWeightTransaction.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmpEnumerateCallback @ 0x14054C468 (CmpEnumerateCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB518 (CmpFreeCallbackObjectContexts.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA60C (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
