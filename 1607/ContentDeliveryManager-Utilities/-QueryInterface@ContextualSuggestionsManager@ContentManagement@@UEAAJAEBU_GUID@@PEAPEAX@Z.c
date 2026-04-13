/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A0C0
 * Callers:
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800178B0 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017C40 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017CA0 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::QueryInterface(
        ContentManagement::ContextualSuggestionsManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContextualSuggestionsManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
