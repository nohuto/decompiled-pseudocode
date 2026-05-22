/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs_____ptr64___lambda_57e85dab0dd03ee3bbab2fe8e68defed__2_1___lambda_57e85dab0dd03ee3bbab2fe8e68defed___ @ 0x1800531D0
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationCompletedEventArgs@2345@@Foundation@Windows@@VMPCSpatialGestureRecognizerHandler@@PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationCompletedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationCompletedEventArgs@2345@@Foundation@Windows@@@01@PEAVMPCSpatialGestureRecognizerHandler@@P83@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@5678@@Z@Z @ 0x180052788 (--$Callback@U-$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Win_ea_180052788.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs_____ptr64___lambda_57e85dab0dd03ee3bbab2fe8e68defed__2_1___lambda_57e85dab0dd03ee3bbab2fe8e68defed___(
        volatile signed __int32 **a1,
        __int128 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  __int128 v7; // xmm0
  volatile signed __int32 *v8; // rcx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *a2;
    *(_QWORD *)v5 = off_1800A70C0;
    *((_OWORD *)v5 + 1) = v7;
    v8 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v8 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = v5;
  }
  return a1;
}
