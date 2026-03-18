/*
 * XREFs of ExMapHandleToPointer @ 0x14050DF14
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x14045E358 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14045E6E8 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x14045ED5C (PspClearProcessThreadCidRefs.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1404A3624 (RtlpFreeHandleForAtom.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x1404A3D90 (ExMapHandleToPointerEx.c)
 *     RtlpInsertStringAtom @ 0x1404D5B38 (RtlpInsertStringAtom.c)
 *     ObpCloseHandle @ 0x14050C774 (ObpCloseHandle.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400D1730 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140451390 (ExpLookupHandleTableEntry.c)
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
