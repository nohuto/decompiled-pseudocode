/*
 * XREFs of ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003FEAC
 * Callers:
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800117E0 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800354E4 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z @ 0x180038A70 (-RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z.c)
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ @ 0x18000E4D0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(HANDLE *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 178);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(this + 178));
  CloseHandle(this[173]);
  this[173] = 0LL;
  if ( this[183] )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE))(**((_QWORD **)this[3] + 16) + 32LL))(*((_QWORD *)this[3] + 16), this[183]);
    this[183] = 0LL;
  }
  v3 = ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests((ExecutionModel::BaseResourceSet *)this);
  RtlLeaveCriticalSection(v1);
  return v3;
}
