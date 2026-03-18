/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14066C9D8
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ExpFreeHandleTableEntry @ 0x1403F21B0 (ExpFreeHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x14062DC14 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
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
