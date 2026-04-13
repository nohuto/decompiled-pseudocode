/*
 * XREFs of ??$Make@U?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@AEAV_lambda_cea97c4441210eed0902fb5310eddefb_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@@12@AEAV_lambda_cea97c4441210eed0902fb5310eddefb_@@@Z @ 0x180044364
 * Callers:
 *     ??$Callback@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@WRL@Microsoft@@YA?AV?$ComPtr@UIDeferralCompletedHandler@Foundation@Windows@@@01@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@Z @ 0x180043D10 (--$Callback@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310ed.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_,0>,_lambda_cea97c4441210eed0902fb5310eddefb_ &>(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  bool v6; // zf

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IDeferralCompletedHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = &Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_,0>::`vftable';
    *((_QWORD *)v4 + 2) = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v4;
  }
  return a1;
}
