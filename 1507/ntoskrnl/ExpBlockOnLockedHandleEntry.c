/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1404EEB50
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x140407034 (ExQueryProcessHandleInformation.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     RtlQueryAtomInAtomTable @ 0x140504970 (RtlQueryAtomInAtomTable.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x1406F02E4 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
