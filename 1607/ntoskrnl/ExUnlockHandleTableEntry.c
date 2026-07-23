/*
 * XREFs of ExUnlockHandleTableEntry @ 0x14045DCA4
 * Callers:
 *     PspHandleTableWalker @ 0x140074EC0 (PspHandleTableWalker.c)
 *     IopCheckHandleForRevocation @ 0x1401C9D3C (IopCheckHandleForRevocation.c)
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045D228 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045D5B8 (ObSetHandleAttributes.c)
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x14045DB84 (ObInheritObjectHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x14045DC2C (PspClearProcessThreadCidRefs.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     ExQueryProcessHandleInformation @ 0x14054BE88 (ExQueryProcessHandleInformation.c)
 *     IopIsFileOpenOrSection @ 0x140625694 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x14062CFEC (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140665668 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140665B30 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
 *     ExpSnapShotHandleTables @ 0x1406AD780 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  LONG result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
