/*
 * XREFs of KsepCacheHwIdFree @ 0x14020C600
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
