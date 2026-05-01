/*
 * XREFs of ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WORK *a3)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((_DWORD *)a2 + 4) == 1 )
    *(_DWORD *)(a2[3] + 264LL) &= ~1u;
  ExecutionModel::BaseResourceSet::CheckAllPendingRequests((ExecutionModel::BaseResourceSet *)a2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
