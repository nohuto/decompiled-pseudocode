/*
 * XREFs of ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001BA10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001C260 (-PutOnComplete@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCausa.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::put_Completed(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi

  v2 = a1 - 128;
  if ( a1 != 128 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(a1 - 128);
  v4 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
         v2,
         a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v4;
}
