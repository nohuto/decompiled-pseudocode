/*
 * XREFs of ??1?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAA@XZ @ 0x180014F24
 * Callers:
 *     ??1?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@UIAsyncAction@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001549C (--1-$RuntimeClass@U-$InterfaceList@V-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Fou.c)
 *     ??_E?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180016390 (--_E-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$0.c)
 *     ??_E?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180017700 (--_E-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCausalityOptions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
        __int64 a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  GUID v5; // [rsp+50h] [rbp-18h] BYREF
  signed __int32 v6; // [rsp+78h] [rbp+10h] BYREF

  result = &Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable';
  *(_QWORD *)a1 = &Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable';
  if ( !*(_DWORD *)(a1 + 8) && Microsoft::WRL::gCausality )
  {
    _InterlockedCompareExchange(&v6, *(_DWORD *)(a1 + 40), v6);
    v5 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    result = (void **)(*(__int64 (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
                        Microsoft::WRL::gCausality,
                        0LL,
                        2LL,
                        &v5,
                        a1,
                        v6);
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
