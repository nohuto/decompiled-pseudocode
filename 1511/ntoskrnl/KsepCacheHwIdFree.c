/*
 * XREFs of KsepCacheHwIdFree @ 0x1401CD29C
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
