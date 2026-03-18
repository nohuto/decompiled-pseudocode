/*
 * XREFs of NtTokenManagerDeleteOutstandingDirectFlipTokens @ 0x1C00DFB10
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE80 (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 */

__int64 NtTokenManagerDeleteOutstandingDirectFlipTokens()
{
  __int64 result; // rax

  if ( g_pTokenManager )
  {
    ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
    CTokenManager::DeleteOutstandingDirectFlipTokensInternal(g_pTokenManager);
    return ExReleasePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  }
  return result;
}
