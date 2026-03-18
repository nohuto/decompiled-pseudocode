/*
 * XREFs of ExMapHandleToPointer @ 0x140425030
 * Callers:
 *     PspClearProcessThreadCidRefs @ 0x140420C64 (PspClearProcessThreadCidRefs.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404240F0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x140504DC4 (RtlpFreeHandleForAtom.c)
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x14050538C (ExMapHandleToPointerEx.c)
 *     ObSetHandleAttributes @ 0x140533E6C (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14053A484 (ObQueryObjectAuditingByHandle.c)
 *     RtlpInsertStringAtom @ 0x14054223C (RtlpInsertStringAtom.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int16 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry();
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
      ExpBlockOnLockedHandleEntry(a1, v3);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
