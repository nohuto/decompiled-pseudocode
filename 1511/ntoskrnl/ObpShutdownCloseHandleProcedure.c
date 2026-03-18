/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x14062D940
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 */

char __fastcall ObpShutdownCloseHandleProcedure(__int64 a1, volatile signed __int64 *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rbx

  v5 = *(__int64 *)a2 >> 16;
  ExUnlockHandleTableEntry(a1, a2);
  DbgPrint("\tFound object %p(handle %08lx)\n", (const void *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 48), a3);
  ++*a4;
  return 0;
}
