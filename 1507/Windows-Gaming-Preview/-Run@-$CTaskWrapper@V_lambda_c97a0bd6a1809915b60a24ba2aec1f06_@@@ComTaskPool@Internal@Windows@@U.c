/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_c97a0bd6a1809915b60a24ba2aec1f06_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18001C150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c97a0bd6a1809915b60a24ba2aec1f06_>::Run(
        __int64 a1)
{
  return Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(*(_QWORD *)(a1 + 24) + 8LL);
}
