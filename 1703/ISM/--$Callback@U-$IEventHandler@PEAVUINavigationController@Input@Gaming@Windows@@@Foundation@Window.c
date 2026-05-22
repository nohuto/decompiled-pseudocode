/*
 * XREFs of ??$Callback@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z@Z @ 0x180061A28
 * Callers:
 *     ?StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800612E0 (-StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::UINavigationController_____ptr64___lambda_5d6c310c79ad0c200369a5b3f85ef648__2_1___lambda_5d6c310c79ad0c200369a5b3f85ef648___ @ 0x180061BB0 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--IEventH.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::UINavigationController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IUINavigationController *>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 *v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  volatile signed __int32 *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a3;
  v9 = a2;
  v10 = v3;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::UINavigationController_____ptr64___lambda_5d6c310c79ad0c200369a5b3f85ef648__2_1___lambda_5d6c310c79ad0c200369a5b3f85ef648___(
                    &v11,
                    &v9);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  *a1 = v6;
  if ( v7 )
  {
    v11 = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
