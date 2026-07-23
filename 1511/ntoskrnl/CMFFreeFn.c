/*
 * XREFs of CMFFreeFn @ 0x1404C6970
 * Callers:
 *     XpressDecodeClose @ 0x140222A14 (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
