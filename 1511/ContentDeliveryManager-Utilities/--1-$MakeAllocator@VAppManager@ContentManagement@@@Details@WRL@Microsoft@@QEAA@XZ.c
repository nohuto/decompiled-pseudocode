/*
 * XREFs of ??1?$MakeAllocator@VAppManager@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800055C8
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_AppManager_::_1_::dtor$2 @ 0x1800287D8 (_ContentManagement--ContentManagementBrokerServer--get_AppManager_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$2 @ 0x180028802 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_180028802.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::AppManager>::~MakeAllocator<ContentManagement::AppManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
