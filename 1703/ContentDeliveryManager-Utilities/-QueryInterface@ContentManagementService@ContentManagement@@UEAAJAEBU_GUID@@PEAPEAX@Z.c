/*
 * XREFs of ?QueryInterface@ContentManagementService@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FA30
 * Callers:
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022700 (-QueryInterface@ContentManagementService@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800228B0 (-QueryInterface@ContentManagementService@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022A10 (-QueryInterface@ContentManagementService@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022A50 (-QueryInterface@ContentManagementService@ContentManagement@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022B30 (-QueryInterface@ContentManagementService@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022B70 (-QueryInterface@ContentManagementService@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::QueryInterface(
        ContentManagement::ContentManagementService *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
