/*
 * XREFs of ??$Make@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@12@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x1800208B4
 * Callers:
 *     ??$MakeSessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@@V_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x18001F1E8 (--$MakeSessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@YA-AV-$ComPtr@V-$Sessio.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007F40 (-Release@-$RuntimeClass@U-$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>,_lambda_d51462a882575f844d514d7510b2bd27_ &>(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rbp
  __int64 v9; // [rsp+20h] [rbp-18h]

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    v9 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v7 = a2[1];
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v5 = v9;
    }
    *(_QWORD *)v4 = &SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>::`vftable';
    *((_QWORD *)v4 + 2) = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)v4 + 3) = v7;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IOleWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v4;
  }
  return a1;
}
