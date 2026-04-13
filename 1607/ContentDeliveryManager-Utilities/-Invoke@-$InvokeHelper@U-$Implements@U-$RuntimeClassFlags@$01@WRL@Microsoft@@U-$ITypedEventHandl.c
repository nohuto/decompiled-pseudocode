/*
 * XREFs of ?Invoke@?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIAppServiceClosedEventArgs@678@@Z @ 0x18002C340
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180021380 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_,2>::Invoke(
        __int64 a1,
        PVOID a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *(RTL_SRWLOCK **)(a1 + 40);
  if ( a2 == v2[12].Ptr )
    ContentManagement::ContentManagementService::CloseConnection(v2);
  return 0LL;
}
