/*
 * XREFs of CcDeallocateBcb @ 0x140088578
 * Callers:
 *     CcDeleteMbcb @ 0x140088410 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140111D74 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 */

void __fastcall CcDeallocateBcb(char *a1)
{
  if ( *(_WORD *)a1 == 765 )
    ExDeleteResourceLite((PERESOURCE)(a1 + 72));
  ExFreePoolWithTag(a1, 0);
}
