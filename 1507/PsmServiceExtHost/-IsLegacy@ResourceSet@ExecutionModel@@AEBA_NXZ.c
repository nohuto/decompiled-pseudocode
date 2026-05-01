/*
 * XREFs of ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180001B50 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x180011440 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800378B4 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18003DF10 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800407D0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 *     ?SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z @ 0x180040FC0 (-SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsLegacy(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 175);
  return !v1 || *(_DWORD *)(v1 + 40) == 1;
}
