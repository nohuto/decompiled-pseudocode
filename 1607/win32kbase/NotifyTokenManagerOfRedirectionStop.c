/*
 * XREFs of NotifyTokenManagerOfRedirectionStop @ 0x1C00F40F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00F485C (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00F4924 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
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
