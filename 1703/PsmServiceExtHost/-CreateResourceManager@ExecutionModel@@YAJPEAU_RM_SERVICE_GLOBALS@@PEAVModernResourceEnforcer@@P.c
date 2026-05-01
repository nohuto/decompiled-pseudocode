/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001D4F4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D37C (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18001DF7C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001DFDC (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        ExecutionModel *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct ModernResourceEnforcer *a3,
        struct ExecutionModel::ResourceManager **a4)
{
  ExecutionModel::ResourceManager *v7; // rax
  ExecutionModel::ResourceManager *v8; // rbx
  int v9; // edi

  v7 = (ExecutionModel::ResourceManager *)operator new(0x120uLL);
  if ( v7 )
    v8 = (ExecutionModel::ResourceManager *)ExecutionModel::ResourceManager::ResourceManager(v7);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = ExecutionModel::ResourceManager::Initialize(v8, this, a2);
    if ( v9 >= 0 )
    {
      *(_QWORD *)a3 = v8;
      v8 = 0LL;
      v9 = 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
