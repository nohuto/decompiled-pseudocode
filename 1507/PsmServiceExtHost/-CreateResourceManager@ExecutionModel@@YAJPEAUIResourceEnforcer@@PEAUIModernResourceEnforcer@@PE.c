/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180021514
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x180020044 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180020158 (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct ExecutionModel::IRMExecServicesProvider *a4)
{
  ExecutionModel::ResourceManager *v8; // rax
  struct IUnknown **v9; // rdi
  int v10; // esi
  struct IUnknown *v11; // rcx

  v8 = (ExecutionModel::ResourceManager *)malloc(0x138uLL);
  if ( v8 )
    v9 = (struct IUnknown **)ExecutionModel::ResourceManager::ResourceManager(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = ExecutionModel::ResourceManager::Initialize(v9, this, a2, a3);
    if ( v10 >= 0 )
    {
      v11 = *v9;
      *(_QWORD *)a4 = v9;
      ((void (__fastcall *)(struct IUnknown **))v11[1].lpVtbl)(v9);
      *((_QWORD *)RmSvcGlobals + 260) = v9;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
