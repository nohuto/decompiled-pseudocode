/*
 * XREFs of ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180015EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180006328 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        volatile signed __int32 *a1)
{
  struct Windows::Internal::IAsyncFireCompletion *v1; // rdx

  v1 = 0LL;
  if ( _InterlockedIncrement(a1 + 58) == 2 )
  {
    if ( a1 != (volatile signed __int32 *)8 )
      v1 = (struct Windows::Internal::IAsyncFireCompletion *)(a1 + 44);
    LODWORD(v1) = Windows::Internal::ComTaskPoolHandler::FireCompletion((Windows::Internal::ComTaskPoolHandler *)a1, v1);
  }
  return (unsigned int)v1;
}
