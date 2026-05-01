/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180022E94
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x1800237D0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18002390C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DC2C (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        ExecutionModel *this,
        struct IResourceEnforcer *a2,
        struct IModernResourceEnforcer *a3,
        struct ExecutionModel::IRMExecServicesProvider *a4)
{
  ExecutionModel::ResourceManager *v8; // rax
  ExecutionModel::ResourceManager *v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax

  v8 = (ExecutionModel::ResourceManager *)malloc(0x148uLL);
  if ( v8 )
    v9 = (ExecutionModel::ResourceManager *)ExecutionModel::ResourceManager::ResourceManager(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = ExecutionModel::ResourceManager::Initialize(v9, this, a2, a3);
    if ( v10 >= 0 )
    {
      v11 = *(_QWORD *)v9;
      *(_QWORD *)a4 = v9;
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(v11 + 8))(v9);
      RtlEnterCriticalSection(&RmpGlobalLock);
      v12 = RmSvcGlobals;
      v13 = *((_DWORD *)RmSvcGlobals + 436);
      *((_QWORD *)RmSvcGlobals + 262) = v9;
      if ( v12[397] && (v13 & 2) != 0 )
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v9, (unsigned int)v12[397]);
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
