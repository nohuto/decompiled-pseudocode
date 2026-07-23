/*
 * XREFs of ExLockHandleTableEntry @ 0x1400CF5D0
 * Callers:
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 *     ExQueryProcessHandleInformation @ 0x14054BE88 (ExQueryProcessHandleInformation.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x1406AD780 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
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
