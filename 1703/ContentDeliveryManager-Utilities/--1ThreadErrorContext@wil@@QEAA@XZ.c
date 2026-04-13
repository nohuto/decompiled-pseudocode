/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180003938
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x18007068F (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _ContentManagement::LaunchManager::LaunchUriAsync_::_1_::dtor$0 @ 0x18007089F (_ContentManagement--LaunchManager--LaunchUriAsync_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x180074EC0 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
