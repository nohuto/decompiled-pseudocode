/*
 * XREFs of ?AddRef@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180018B80
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WCA@EAAKXZ @ 0x18001B070 (-AddRef@ContentManagementService@ContentManagement@@WCA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x18001B0A0 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x18001B1E0 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x18001B220 (-AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x18001B390 (-AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x18001B530 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::AddRef(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
