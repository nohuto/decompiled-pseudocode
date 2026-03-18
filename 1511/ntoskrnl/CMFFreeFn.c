/*
 * XREFs of CMFFreeFn @ 0x1404C6970
 * Callers:
 *     XpressDecodeClose @ 0x140222A14 (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
