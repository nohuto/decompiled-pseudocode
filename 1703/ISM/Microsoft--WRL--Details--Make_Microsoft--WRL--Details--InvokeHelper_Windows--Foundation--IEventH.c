/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::UINavigationController_____ptr64___lambda_5d6c310c79ad0c200369a5b3f85ef648__2_1___lambda_5d6c310c79ad0c200369a5b3f85ef648___ @ 0x180061BB0
 * Callers:
 *     ??$Callback@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z@Z @ 0x180061A28 (--$Callback@U-$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Window.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::UINavigationController_____ptr64___lambda_5d6c310c79ad0c200369a5b3f85ef648__2_1___lambda_5d6c310c79ad0c200369a5b3f85ef648___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  volatile signed __int32 *v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Gaming::Input::UINavigationController *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = off_1800A7948;
    v7 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = v5;
  }
  return a1;
}
