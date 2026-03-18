/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C004579C
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046E18 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(struct CompositionSurfaceObject *a1)
{
  unsigned int v2; // ebx

  v2 = -1073741823;
  if ( g_pTokenManager )
  {
    ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
    v2 = CTokenManager::EnsureTokenQueue(g_pTokenManager, a1, 0LL);
    ExReleasePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  }
  return v2;
}
