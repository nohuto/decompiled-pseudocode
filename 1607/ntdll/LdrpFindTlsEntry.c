/*
 * XREFs of LdrpFindTlsEntry @ 0x180012628
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall LdrpFindTlsEntry(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)LdrpTlsList; result != &LdrpTlsList; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
