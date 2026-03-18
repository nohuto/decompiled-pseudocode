/*
 * XREFs of ExLockHandleTableEntry @ 0x1400D1730
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ExDupHandleTable @ 0x14045E7E0 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointer @ 0x14050DF14 (ExMapHandleToPointer.c)
 *     ExQueryProcessHandleInformation @ 0x14054B948 (ExQueryProcessHandleInformation.c)
 *     ObpAuditObjectAccess @ 0x140665D20 (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x1406AD648 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14049B4BC (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      ExpBlockOnLockedHandleEntry(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
