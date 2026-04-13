/*
 * XREFs of ??_G?$RuntimeClass@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180016550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[3];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
