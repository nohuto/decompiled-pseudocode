/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1406F01F4
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x140505270 (ExpFreeHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 4 * v3;
  else
    return 0LL;
}
