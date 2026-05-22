/*
 * XREFs of ?GetTrustLevel@?$RuntimeClass@U?$InterfaceList@UISpatialInteractionDevice@@U?$InterfaceList@U?$CloakedIid@UISpatialInteractionDevicePrivate@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180064FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialInteractionDevice,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetTrustLevel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  return InputDeliveryServer::InputDeliveryServerConversationHost::OnIDFreed(
           (InputDeliveryServer::InputDeliveryServerConversationHost *)(a1 - 16),
           a2,
           a3,
           a4);
}
