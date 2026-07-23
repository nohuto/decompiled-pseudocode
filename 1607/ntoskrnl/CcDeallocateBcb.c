/*
 * XREFs of CcDeallocateBcb @ 0x14010C768
 * Callers:
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1401122D8 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 */

void __fastcall CcDeallocateBcb(char *a1)
{
  if ( *(_WORD *)a1 == 765 )
    ExDeleteResourceLite((PERESOURCE)(a1 + 72));
  ExFreePoolWithTag(a1, 0);
}
