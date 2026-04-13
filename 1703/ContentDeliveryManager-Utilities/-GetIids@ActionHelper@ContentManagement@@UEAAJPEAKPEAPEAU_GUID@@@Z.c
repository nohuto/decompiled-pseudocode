/*
 * XREFs of ?GetIids@ActionHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000ECB0
 * Callers:
 *     ?GetIids@ActionHelper@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E8E0 (-GetIids@ActionHelper@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ActionHelper::GetIids(
        ContentManagement::ActionHelper *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IActionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
