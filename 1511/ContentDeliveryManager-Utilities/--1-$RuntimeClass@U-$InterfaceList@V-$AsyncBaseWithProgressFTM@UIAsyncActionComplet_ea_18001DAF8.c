/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@UIAsyncAction@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001DAF8
 * Callers:
 *     ??_E?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@EEAAPEAXI@Z @ 0x18001E298 (--_E-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandle_ea_18001E298.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UIAsyncAction@Foundation@6@UIAsyncOperationLocal@56@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAA@XZ @ 0x18001E3B0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$AsyncBaseWithProgressF_ea_18001E3B0.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UIAsyncAction@Foundation@6@UIAsyncOperationLocal@56@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180020E50 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$AsyncBaseWithProgress_ea_180020E50.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncAction,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncAction,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
        __int64 a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rsi

  v1 = *(_QWORD *)(a1 + 168);
  if ( v1 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v1);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(a1);
}
