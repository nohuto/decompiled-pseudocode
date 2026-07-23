/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1406AD68C
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14051C094 (ExpFreeHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
