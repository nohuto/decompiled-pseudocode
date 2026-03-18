/*
 * XREFs of ExLockHandleTableEntry @ 0x140079FA4
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ExQueryProcessHandleInformation @ 0x140517158 (ExQueryProcessHandleInformation.c)
 *     ObpAuditObjectAccess @ 0x14062DC14 (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x14066CAC8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
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
