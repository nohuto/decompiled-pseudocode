/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x14049B4BC
 * Callers:
 *     ExLockHandleTableEntry @ 0x1400D1730 (ExLockHandleTableEntry.c)
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     ExEnumHandleTable @ 0x14045E4D0 (ExEnumHandleTable.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400872BC (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
