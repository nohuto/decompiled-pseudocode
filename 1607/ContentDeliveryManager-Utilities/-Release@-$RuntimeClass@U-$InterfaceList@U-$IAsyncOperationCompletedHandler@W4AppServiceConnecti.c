/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010FF0
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180018050 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@PEAVStorageFile@Stor.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@@01@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Z @ 0x18002C1E4 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVAppS.c)
 *     ??$Make@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$01@Details@WRL@Microsoft@@AEAV_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$01@Details@WRL@Microsoft@@@12@AEAV_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@@Z @ 0x18002E200 (--$Make@U-$InvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 9);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 9, i - 1, i);
        i = *((_DWORD *)a1 + 9) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
