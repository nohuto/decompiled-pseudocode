/*
 * XREFs of ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C00813BC
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C00812D0 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0081308 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0081344 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 */

void __fastcall CTokenManager::DeleteAllTokensInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx

  v1 = g_pTokenManager;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  CTokenManager::DeleteAllLegacyTokenBuffers(v1);
  CTokenManager::DeleteAllTokenQueues(v1);
  CTokenManager::DeleteAllCompositionTokens(v1);
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
