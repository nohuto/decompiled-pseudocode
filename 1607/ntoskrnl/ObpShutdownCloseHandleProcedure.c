/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x140665B30
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
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
