/*
 * XREFs of ExMapHandleToPointer @ 0x1404F0EA4
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045D228 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045D5B8 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x14045DC2C (PspClearProcessThreadCidRefs.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x1404B913C (RtlpInsertStringAtom.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 *     RtlpFreeHandleForAtom @ 0x14051BA24 (RtlpFreeHandleForAtom.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x14051C190 (ExMapHandleToPointerEx.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 */

_QWORD *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // rbx

  if ( (a2 & 0x3FC) != 0
    && (v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2), (v4 = v2) != 0LL)
    && ExLockHandleTableEntry(v3, v2) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
