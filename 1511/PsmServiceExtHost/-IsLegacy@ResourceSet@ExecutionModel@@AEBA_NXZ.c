/*
 * XREFs of ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800112FC (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180036330 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x18003BF1C (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003D984 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18003E654 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800457A0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 *     ?SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z @ 0x180045BF0 (-SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsLegacy(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 175);
  return !v1 || *(_DWORD *)(v1 + 40) == 1;
}
