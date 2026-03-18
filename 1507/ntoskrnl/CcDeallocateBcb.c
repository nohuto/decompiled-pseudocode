/*
 * XREFs of CcDeallocateBcb @ 0x1400F29AC
 * Callers:
 *     CcDeleteMbcb @ 0x1400F1CB4 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140139D58 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 */

void __fastcall CcDeallocateBcb(char *a1)
{
  if ( *(_WORD *)a1 == 765 )
    ExDeleteResourceLite((PERESOURCE)(a1 + 72));
  ExFreePoolWithTag(a1, 0);
}
