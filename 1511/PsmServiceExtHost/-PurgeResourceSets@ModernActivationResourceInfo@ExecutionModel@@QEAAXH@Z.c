/*
 * XREFs of ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x18000A0A0
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::PurgeResourceSets(
        ExecutionModel::ModernActivationResourceInfo *this,
        int a2)
{
  char *v3; // rdi
  ExecutionModel::ResourceSet *v4; // rbx
  ExecutionModel::ResourceSet *v5; // rcx
  unsigned int (__fastcall *v6)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v7; // rbx
  unsigned int (__fastcall *v8)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    while ( *(ExecutionModel::ModernActivationResourceInfo **)this != this )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v9,
        *(_QWORD *)(*(_QWORD *)this + 16LL));
      v7 = v9;
      ExecutionModel::ResourceSet::PerformReleaseResources(v9, 0);
      if ( v7 )
      {
        v8 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v7 + 16LL);
        if ( v8 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v7);
        else
          v8(v7);
      }
    }
  }
  v3 = (char *)this + 24;
  while ( *(char **)v3 != v3 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v9,
      *(_QWORD *)(*(_QWORD *)v3 + 16LL));
    v4 = v9;
    v5 = v9;
    *((_BYTE *)v9 + 12) = 0;
    ExecutionModel::ResourceSet::PerformReleaseResources(v5, 0);
    v6 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v6 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v4);
    else
      v6(v4);
  }
}
