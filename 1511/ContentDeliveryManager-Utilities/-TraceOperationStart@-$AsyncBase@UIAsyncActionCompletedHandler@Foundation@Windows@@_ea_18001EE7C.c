/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18001EE7C
 * Callers:
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18001D510 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18001D510.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180002640 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  HRESULT v2; // eax
  GUID v3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v4; // [rsp+50h] [rbp-48h]
  HSTRING_HEADER v5; // [rsp+58h] [rbp-40h] BYREF
  HSTRING v6; // [rsp+70h] [rbp-28h] BYREF

  v4 = -2LL;
  if ( Microsoft::WRL::gCausality )
  {
    v6 = 0LL;
    v2 = WindowsCreateStringReference(
           L"ContentManagement.ContentManagementService.EnableLockScreenOverlayAsync",
           0x47u,
           &v5,
           &v6);
    if ( v2 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    v3 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, HSTRING, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
      Microsoft::WRL::gCausality,
      0LL,
      2LL,
      &v3,
      a1,
      v6,
      *(unsigned int *)(a1 + 48));
  }
}
