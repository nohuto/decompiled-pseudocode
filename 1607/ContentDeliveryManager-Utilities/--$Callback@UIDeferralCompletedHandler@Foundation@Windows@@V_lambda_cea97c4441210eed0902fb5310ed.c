/*
 * XREFs of ??$Callback@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@WRL@Microsoft@@YA?AV?$ComPtr@UIDeferralCompletedHandler@Foundation@Windows@@@01@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@Z @ 0x180043D10
 * Callers:
 *     ?GetDeferral@?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z @ 0x180042610 (-GetDeferral@-$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentMana.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??$Make@U?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@AEAV_lambda_cea97c4441210eed0902fb5310eddefb_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@@12@AEAV_lambda_cea97c4441210eed0902fb5310eddefb_@@@Z @ 0x180044364 (--$Make@U-$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_,0>,_lambda_cea97c4441210eed0902fb5310eddefb_ &>(&v9);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v9;
  *a1 = v5;
  if ( v6 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
  }
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
