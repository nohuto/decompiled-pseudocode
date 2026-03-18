/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140498ABC
 * Callers:
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x14008E230 (ExFastReferenceHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     RtlQueryAtomInAtomTable @ 0x14045FFD0 (RtlQueryAtomInAtomTable.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
