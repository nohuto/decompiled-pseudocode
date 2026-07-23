/*
 * XREFs of CMFFreeFn @ 0x1404D3638
 * Callers:
 *     XpressDecodeClose @ 0x14023E398 (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
