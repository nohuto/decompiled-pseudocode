/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_69543c600983595f9ac4771eb9207c9c_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18000DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_69543c600983595f9ac4771eb9207c9c_>::Run(
        __int64 a1)
{
  return Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(*(_QWORD *)(a1 + 24) + 8LL);
}
