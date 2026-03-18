/*
 * XREFs of ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C001A54C
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0019C64 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0019D24 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0019D60 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::DeleteAllTokensInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  CTokenManager::DeleteAllLegacyTokenBuffers(v1);
  CTokenManager::DeleteAllTokenQueues(v1);
  CTokenManager::DeleteAllCompositionTokens(v1);
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
