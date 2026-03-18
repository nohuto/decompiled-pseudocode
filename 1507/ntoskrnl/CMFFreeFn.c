/*
 * XREFs of CMFFreeFn @ 0x14055D258
 * Callers:
 *     XpressDecodeClose @ 0x1402728EC (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
