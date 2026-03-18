/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C0014990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  Win32FreePool(Buffer);
}
