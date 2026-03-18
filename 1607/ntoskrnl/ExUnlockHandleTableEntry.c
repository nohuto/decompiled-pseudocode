/*
 * XREFs of ExUnlockHandleTableEntry @ 0x14045EDD4
 * Callers:
 *     PspHandleTableWalker @ 0x140074E40 (PspHandleTableWalker.c)
 *     IopCheckHandleForRevocation @ 0x1401C9E9C (IopCheckHandleForRevocation.c)
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045E358 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045E6E8 (ObSetHandleAttributes.c)
 *     ExDupHandleTable @ 0x14045E7E0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x14045ECB4 (ObInheritObjectHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x14045ED5C (PspClearProcessThreadCidRefs.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     ExQueryProcessHandleInformation @ 0x14054B948 (ExQueryProcessHandleInformation.c)
 *     IopIsFileOpenOrSection @ 0x1406255E0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x14062CF38 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140665584 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140665A4C (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x140665D20 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A717C (EtwpObjectHandleEnumCallback.c)
 *     ExpSnapShotHandleTables @ 0x1406AD648 (ExpSnapShotHandleTables.c)
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
