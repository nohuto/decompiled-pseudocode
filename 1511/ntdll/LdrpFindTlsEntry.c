/*
 * XREFs of LdrpFindTlsEntry @ 0x1800115E0
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
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
