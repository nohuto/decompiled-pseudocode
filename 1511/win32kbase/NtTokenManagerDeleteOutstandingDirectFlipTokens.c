/*
 * XREFs of NtTokenManagerDeleteOutstandingDirectFlipTokens @ 0x1C00E1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9CC (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

__int64 NtTokenManagerDeleteOutstandingDirectFlipTokens()
{
  CTokenManager *v0; // rcx
  __int64 result; // rax

  if ( g_pTokenManager )
  {
    CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
    CTokenManager::DeleteOutstandingDirectFlipTokensInternal(g_pTokenManager);
    v0 = g_pTokenManager;
    *(_QWORD *)g_pTokenManager = 0LL;
    return ExReleasePushLockExclusiveEx((char *)v0 + 64);
  }
  return result;
}
