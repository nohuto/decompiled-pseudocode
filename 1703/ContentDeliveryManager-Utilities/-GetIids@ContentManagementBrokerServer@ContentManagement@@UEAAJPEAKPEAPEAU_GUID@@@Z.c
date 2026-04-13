/*
 * XREFs of ?GetIids@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001F9D0
 * Callers:
 *     ?GetIids@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800229A0 (-GetIids@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetIids(
        ContentManagement::ContentManagementBrokerServer *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContentManagementBroker,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
