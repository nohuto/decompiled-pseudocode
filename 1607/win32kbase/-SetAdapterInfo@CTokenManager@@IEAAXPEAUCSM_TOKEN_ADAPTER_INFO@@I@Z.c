/*
 * XREFs of ?SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C001A48C
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001A2A0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::SetAdapterInfo(CTokenManager *this, struct CSM_TOKEN_ADAPTER_INFO *a2, int a3)
{
  KeEnterCriticalRegion();
  CTokenManager::AcquireTokenManagerLock(this);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 20) = a3;
  ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
  KeLeaveCriticalRegion();
}
