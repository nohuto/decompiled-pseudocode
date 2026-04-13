/*
 * XREFs of ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@@01@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Z @ 0x18002C1E4
 * Callers:
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___ @ 0x180029F64 (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010FF0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@W4AppServiceConnecti.c)
 *     ??$Make@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$01@Details@WRL@Microsoft@@AEAV_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$01@Details@WRL@Microsoft@@@12@AEAV_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Z @ 0x18002E200 (--$Make@U-$InvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHand.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_,2>,_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_ &>(
                    &v7,
                    &v8);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return a1;
}
