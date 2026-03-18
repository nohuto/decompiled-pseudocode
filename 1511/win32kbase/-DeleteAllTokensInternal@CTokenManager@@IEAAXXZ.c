/*
 * XREFs of ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C003C9EC (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C003CAAC (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003CAE8 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::DeleteAllTokensInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  unsigned int v2; // edx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  CTokenManager::DeleteAllLegacyTokenBuffers(v1, v2);
  CTokenManager::DeleteAllTokenQueues(v1);
  CTokenManager::DeleteAllCompositionTokens(v1);
  *(_QWORD *)v1 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 64);
}
