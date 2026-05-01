/*
 * XREFs of ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180002FC4
 * Callers:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z @ 0x180001AE0 (-RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD60 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18003C414 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180003424 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(HANDLE *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 178);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(this + 178));
  CloseHandle(this[173]);
  this[173] = 0LL;
  if ( this[183] )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE))(**((_QWORD **)this[3] + 16) + 32LL))(*((_QWORD *)this[3] + 16), this[183]);
    this[183] = 0LL;
  }
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests((ExecutionModel::BaseResourceSet *)this);
  RtlLeaveCriticalSection(v1);
}
