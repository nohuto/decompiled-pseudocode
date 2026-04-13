/*
 * XREFs of ?GetIids@NotificationManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000A580
 * Callers:
 *     ?GetIids@NotificationManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180017E80 (-GetIids@NotificationManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::GetIids(
        ContentManagement::NotificationManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::INotificationManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
