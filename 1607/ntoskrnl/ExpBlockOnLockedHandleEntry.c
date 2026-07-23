/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1404AF024
 * Callers:
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140424810 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x14049A550 (NtSetInformationObject.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14009DC4C (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
