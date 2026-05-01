/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001B2FC
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@@Z @ 0x18001BEA0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001BF6C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        ExecutionModel *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct IResourceEnforcer *a3,
        struct IModernResourceEnforcer *a4)
{
  ExecutionModel::ResourceManager *v8; // rax
  ExecutionModel::ResourceManager *v9; // rbx
  int v10; // edi

  v8 = (ExecutionModel::ResourceManager *)operator new(0x130uLL);
  if ( v8 )
    v9 = (ExecutionModel::ResourceManager *)ExecutionModel::ResourceManager::ResourceManager(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = ExecutionModel::ResourceManager::Initialize(v9, this, a2, a3);
    if ( v10 >= 0 )
    {
      *(_QWORD *)a4 = v9;
      v9 = 0LL;
      v10 = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
