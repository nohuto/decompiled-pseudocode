/*
 * XREFs of ExUnlockHandleTableEntry @ 0x1403F7084
 * Callers:
 *     PspHandleTableWalker @ 0x1400BBFC0 (PspHandleTableWalker.c)
 *     IopCheckHandleForRevocation @ 0x1401BC064 (IopCheckHandleForRevocation.c)
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x1403E2FE4 (ObInheritObjectHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x1403F1ED8 (PspClearProcessThreadCidRefs.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1403F6EC0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObQueryObjectAuditingByHandle @ 0x140483618 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1404AA8BC (ObSetHandleAttributes.c)
 *     ExQueryProcessHandleInformation @ 0x140517158 (ExQueryProcessHandleInformation.c)
 *     IopIsFileOpenOrSection @ 0x1405FB9AC (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140602BBC (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x14062D478 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14062D940 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14062DC14 (ObpAuditObjectAccess.c)
 *     PspSetFileHandleFlow @ 0x140642630 (PspSetFileHandleFlow.c)
 *     EtwpObjectHandleEnumCallback @ 0x14066577C (EtwpObjectHandleEnumCallback.c)
 *     ExpSnapShotHandleTables @ 0x14066CAC8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  NTSTATUS result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
