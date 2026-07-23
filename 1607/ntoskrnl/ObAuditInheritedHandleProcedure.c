/*
 * XREFs of ObAuditInheritedHandleProcedure @ 0x140665668
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     SeAuditHandleDuplication @ 0x14068DD7C (SeAuditHandleDuplication.c)
 */

char __fastcall ObAuditInheritedHandleProcedure(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx

  v6 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (a2[1] & 0x2000000) != 0 )
    LOBYTE(v6) = v6 | 8;
  ExUnlockHandleTableEntry(a1, a2);
  if ( (v6 & 4) != 0 )
    SeAuditHandleDuplication(a3, a3, a4[1], *a4);
  return 0;
}
