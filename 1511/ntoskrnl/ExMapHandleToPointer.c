/*
 * XREFs of ExMapHandleToPointer @ 0x1403F7030
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x1403F1ED8 (PspClearProcessThreadCidRefs.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x1403F2EDC (ExMapHandleToPointerEx.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1403F6EC0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     RtlpInsertStringAtom @ 0x14046033C (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1404603E4 (RtlpFreeHandleForAtom.c)
 *     ObQueryObjectAuditingByHandle @ 0x140483618 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1404AA8BC (ObSetHandleAttributes.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3, v4);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
