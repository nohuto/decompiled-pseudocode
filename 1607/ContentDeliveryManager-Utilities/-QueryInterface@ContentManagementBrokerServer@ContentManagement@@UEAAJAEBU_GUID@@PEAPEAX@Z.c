/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018AB0
 * Callers:
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B300 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B480 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B4D0 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        ContentManagement::ContentManagementBrokerServer *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContentManagementBroker,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
