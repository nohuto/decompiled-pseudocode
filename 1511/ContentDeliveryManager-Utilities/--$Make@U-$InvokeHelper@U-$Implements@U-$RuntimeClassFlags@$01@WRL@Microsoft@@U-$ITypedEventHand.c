/*
 * XREFs of ??$Make@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@$01@Details@WRL@Microsoft@@AEAV_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@$01@Details@WRL@Microsoft@@@12@AEAV_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Z @ 0x18001B124
 * Callers:
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@@01@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@@Z @ 0x180019F58 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVAppS.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_,2>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_ &>(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  bool v6; // zf
  volatile signed __int32 *v7; // rsi

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 1));
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>'};
    v4[1] = &Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_DWORD *)v4 + 9) = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4[5] = v5;
    *v4 = &Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_,2>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>'};
    v4[1] = &Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_56d50dfc534731ff4c42e8df5d1b2182_,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v7 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v7 + 9, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    *a1 = (volatile signed __int32 *)v4;
  }
  return a1;
}
