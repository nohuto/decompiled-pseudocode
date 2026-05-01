/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_e447ac7d6730eeac4929d9ad0d3fdb95_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18001C170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e447ac7d6730eeac4929d9ad0d3fdb95_>::Run(
        __int64 a1)
{
  return Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(*(_QWORD *)(a1 + 24) + 8LL);
}
