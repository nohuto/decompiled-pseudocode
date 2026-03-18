/*
 * XREFs of vTrustedFontFileTableCleanup @ 0x140329ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@TrustedFontFileTable@@SAXXZ @ 0x140329E24 (-Uninitialize@TrustedFontFileTable@@SAXXZ.c)
 */

void vTrustedFontFileTableCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)UserIsServiceSession() )
    TrustedFontFileTable::Uninitialize(v1, v0);
}
