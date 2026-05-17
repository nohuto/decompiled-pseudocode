/*
 * XREFs of LdrpFindTlsEntry @ 0x1800451A0
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
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
