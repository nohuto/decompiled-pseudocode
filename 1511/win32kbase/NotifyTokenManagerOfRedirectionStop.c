/*
 * XREFs of NotifyTokenManagerOfRedirectionStop @ 0x1C00E1A00
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E2504 (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E25C8 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 */

void __fastcall NotifyTokenManagerOfRedirectionStop(CTokenManager *a1)
{
  CTokenManager *v1; // rcx

  if ( g_pTokenManager )
  {
    CTokenManager::NotifyQueuesOfRedirectionStop(a1);
    CTokenManager::NotifyCompositionTokensOfRedirectionStop(v1);
  }
}
