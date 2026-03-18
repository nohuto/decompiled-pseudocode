/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0039614
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C003C91C (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(struct CompositionSurfaceObject *a1)
{
  CTokenManager *v1; // rdi
  unsigned int v3; // ebx
  CTokenManager *v4; // rcx
  unsigned int v5; // eax
  CTokenManager *v6; // rcx

  v1 = g_pTokenManager;
  v3 = -1073741823;
  if ( g_pTokenManager )
  {
    ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 64, 0LL);
    v4 = g_pTokenManager;
    *(_QWORD *)v1 = KeGetCurrentThread();
    v5 = CTokenManager::EnsureTokenQueue(v4, a1, 0LL);
    v6 = g_pTokenManager;
    v3 = v5;
    *(_QWORD *)g_pTokenManager = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 64);
  }
  return v3;
}
