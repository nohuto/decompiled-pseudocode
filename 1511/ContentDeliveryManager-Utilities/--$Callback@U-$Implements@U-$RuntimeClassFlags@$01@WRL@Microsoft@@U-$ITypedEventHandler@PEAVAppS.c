/*
 * XREFs of ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@@01@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Z @ 0x180019F58
 * Callers:
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@?A0x15bf3041@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@@WRL@Microsoft@@$$QEAV_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Z @ 0x180018C70 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Make@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@$01@Details@WRL@Microsoft@@AEAV_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@$01@Details@WRL@Microsoft@@@12@AEAV_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Z @ 0x18001B124 (--$Make@U-$InvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHand.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdi
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a2;
  v3 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_,2>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_ &>(
                    &v8,
                    &v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v8;
  *a1 = v4;
  if ( v5 )
  {
    v8 = 0LL;
    if ( _InterlockedExchangeAdd(v5 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return a1;
}
