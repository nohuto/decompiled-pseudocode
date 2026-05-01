/*
 * XREFs of ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x1800208AC
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 * Callees:
 *     ?Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@2@PEAUIResourcePolicyStore@2@PEAUIRMExecServicesProvider@2@@Z @ 0x180020A94 (-Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIRes.c)
 *     ??0ResourcePolicyEngine@ExecutionModel@@IEAA@XZ @ 0x180020B08 (--0ResourcePolicyEngine@ExecutionModel@@IEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z @ 0x180047040 (--_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::CreatePolicyEngine(
        ExecutionModel *this,
        struct IResourceManager *a2,
        struct IResourceManager *a3,
        struct ExecutionModel::IResourcePolicyStore *a4,
        struct ExecutionModel::IRMExecServicesProvider *a5)
{
  struct ExecutionModel::IRMExecServicesProvider *v5; // rsi
  ExecutionModel::ResourcePolicyEngine *v10; // rax
  unsigned int v11; // edx
  ExecutionModel::ResourcePolicyEngine *v12; // rdi
  int v13; // ebx
  __int64 (__fastcall **v14)(ExecutionModel::ResourcePolicyEngine *, GUID *, struct ExecutionModel::IRMExecServicesProvider **); // rax

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v10 = (ExecutionModel::ResourcePolicyEngine *)malloc(0x58uLL);
  if ( v10 )
    v12 = (ExecutionModel::ResourcePolicyEngine *)ExecutionModel::ResourcePolicyEngine::ResourcePolicyEngine(v10);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v13 = -2147024882;
LABEL_7:
    if ( v13 >= 0 )
      return (unsigned int)v13;
    goto LABEL_10;
  }
  v13 = ExecutionModel::ResourcePolicyEngine::Initialize(
          v12,
          this,
          a2,
          (struct ExecutionModel::IResourcePolicyStore *)a3,
          a4);
  if ( v13 >= 0 )
  {
    v14 = *(__int64 (__fastcall ***)(ExecutionModel::ResourcePolicyEngine *, GUID *, struct ExecutionModel::IRMExecServicesProvider **))v12;
    a5 = 0LL;
    v13 = (*v14)(v12, &GUID_2fef24b9_1ab9_4527_9b3f_f617508ff1eb, &a5);
    if ( v13 >= 0 )
    {
      *(_QWORD *)v5 = a5;
      goto LABEL_7;
    }
  }
LABEL_10:
  if ( v12 )
    ExecutionModel::ResourcePolicyEngine::`scalar deleting destructor'(v12, v11);
  return (unsigned int)v13;
}
