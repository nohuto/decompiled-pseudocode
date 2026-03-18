/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C0077B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  Win32FreePool();
}
