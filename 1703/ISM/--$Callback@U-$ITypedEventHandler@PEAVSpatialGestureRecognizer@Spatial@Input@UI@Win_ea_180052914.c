/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@VMPCSpatialGestureRecognizerHandler@@PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialNavigationUpdatedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@01@PEAVMPCSpatialGestureRecognizerHandler@@P83@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@5678@@Z@Z @ 0x180052914
 * Callers:
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180050B78 (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64___lambda_e156a27bd331df06d8399b9d8943173e__2_1___lambda_e156a27bd331df06d8399b9d8943173e___ @ 0x180053458 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Founda_ea_180053458.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>,MPCSpatialGestureRecognizerHandler,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp+8h] BYREF

  v7[0] = a2;
  v7[1] = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated;
  v3 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64___lambda_e156a27bd331df06d8399b9d8943173e__2_1___lambda_e156a27bd331df06d8399b9d8943173e___(
                    &v8,
                    v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v8;
  *a1 = v4;
  if ( v5 )
  {
    v8 = 0LL;
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
