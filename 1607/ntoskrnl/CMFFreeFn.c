/*
 * XREFs of CMFFreeFn @ 0x1404F1544
 * Callers:
 *     XpressDecodeClose @ 0x14023E4B4 (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
