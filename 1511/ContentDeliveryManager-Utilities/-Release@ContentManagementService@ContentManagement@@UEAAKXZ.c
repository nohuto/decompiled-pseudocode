/*
 * XREFs of ?Release@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x1800065E0
 * Callers:
 *     ?Release@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180007E30 (-Release@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180007E70 (-Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180007FB0 (-Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x1800080F0 (-Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WCA@EAAKXZ @ 0x180008190 (-Release@ContentManagementService@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x1800081B0 (-Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::Release(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
