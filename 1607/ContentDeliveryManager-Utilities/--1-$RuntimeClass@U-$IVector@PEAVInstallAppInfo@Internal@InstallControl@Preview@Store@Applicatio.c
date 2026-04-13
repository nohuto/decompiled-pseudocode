/*
 * XREFs of ??1?$RuntimeClass@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@234@VNil@Details@WRL@Microsoft@@V6789@V6789@V6789@V6789@V6789@V6789@V6789@@WRL@Microsoft@@UEAA@XZ @ 0x180010194
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18005A06A (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_18005A06A.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
