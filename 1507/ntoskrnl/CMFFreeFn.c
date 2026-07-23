/*
 * XREFs of CMFFreeFn @ 0x14055D258
 * Callers:
 *     XpressDecodeClose @ 0x1402728EC (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
