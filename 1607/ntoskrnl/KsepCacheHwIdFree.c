/*
 * XREFs of KsepCacheHwIdFree @ 0x1401DCF20
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140485BF8 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
