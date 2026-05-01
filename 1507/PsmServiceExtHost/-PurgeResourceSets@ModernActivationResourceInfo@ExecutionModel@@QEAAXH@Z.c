/*
 * XREFs of ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D044 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::PurgeResourceSets(
        ExecutionModel::ModernActivationResourceInfo *this,
        int a2)
{
  char *v3; // rsi
  char *v4; // rdi
  ExecutionModel::ResourceSet *v5; // rbx
  ExecutionModel::ResourceSet *v6; // rcx
  unsigned int (__fastcall *v7)(ExecutionModel::ResourceSet *__hidden); // rbp
  ExecutionModel::ResourceSet *v8; // rbx
  unsigned int (__fastcall *v9)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v10; // rbx
  ExecutionModel::ResourceSet *v11; // rcx
  unsigned int (__fastcall *v12)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    while ( *(ExecutionModel::ModernActivationResourceInfo **)this != this )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v13,
        *(_QWORD *)(*(_QWORD *)this + 16LL));
      v8 = v13;
      ExecutionModel::ResourceSet::PerformReleaseResources(v13);
      if ( v8 )
      {
        v9 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v8 + 16LL);
        if ( v9 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v8);
        else
          v9(v8);
      }
    }
  }
  v3 = (char *)this + 24;
  while ( *(char **)v3 != v3 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v13,
      *(_QWORD *)(*(_QWORD *)v3 + 16LL));
    v5 = v13;
    v6 = v13;
    *((_BYTE *)v13 + 12) = 0;
    ExecutionModel::ResourceSet::PerformReleaseResources(v6);
    v7 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v5 + 16LL);
    if ( v7 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v5);
    else
      v7(v5);
  }
  v4 = (char *)this + 48;
  while ( *(char **)v4 != v4 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v13,
      *(_QWORD *)(*(_QWORD *)v4 + 16LL));
    v10 = v13;
    v11 = v13;
    *((_BYTE *)v13 + 12) = 0;
    ExecutionModel::ResourceSet::PerformReleaseResources(v11);
    v12 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v12 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v10);
    else
      v12(v10);
  }
}
