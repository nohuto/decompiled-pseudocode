/*
 * XREFs of ExfUnblockPushLock @ 0x140159E30
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140424810 (RtlpAtomMapAtomToHandleEntry.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     ObpEnumFindHandleProcedure @ 0x14045D4A0 (ObpEnumFindHandleProcedure.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     NtSetInformationObject @ 0x14049A550 (NtSetInformationObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     MiLockImageSection @ 0x1404AEF68 (MiLockImageSection.c)
 *     CmpTransInitializeTransaction @ 0x1404BDABC (CmpTransInitializeTransaction.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     CmpWorkerEngineWorker @ 0x1405179C8 (CmpWorkerEngineWorker.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmpEnumerateCallback @ 0x14054C9A8 (CmpEnumerateCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB5CC (CmpFreeCallbackObjectContexts.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA744 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
