/*
 * XREFs of ?QueryInterface@NotificationManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000CAB0
 * Callers:
 *     ?QueryInterface@NotificationManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EDD0 (-QueryInterface@NotificationManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NotificationManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F080 (-QueryInterface@NotificationManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NotificationManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F110 (-QueryInterface@NotificationManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::QueryInterface(
        ContentManagement::NotificationManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::INotificationManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
