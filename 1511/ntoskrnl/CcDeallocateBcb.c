/*
 * XREFs of CcDeallocateBcb @ 0x14000D7C8
 * Callers:
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140107150 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 */

void __fastcall CcDeallocateBcb(char *a1)
{
  if ( *(_WORD *)a1 == 765 )
    ExDeleteResourceLite((PERESOURCE)(a1 + 72));
  ExFreePoolWithTag(a1, 0);
}
