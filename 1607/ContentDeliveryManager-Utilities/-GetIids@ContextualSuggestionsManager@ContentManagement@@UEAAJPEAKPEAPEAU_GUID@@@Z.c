/*
 * XREFs of ?GetIids@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000A0B0
 * Callers:
 *     ?GetIids@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180018200 (-GetIids@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::GetIids(
        ContentManagement::ContextualSuggestionsManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContextualSuggestionsManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
