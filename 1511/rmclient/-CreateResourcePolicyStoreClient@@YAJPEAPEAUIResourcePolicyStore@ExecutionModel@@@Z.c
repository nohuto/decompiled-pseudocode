/*
 * XREFs of ?CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z @ 0x180006A60
 * Callers:
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x180010B20 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType.c)
 * Callees:
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180007ABC (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CreateResourcePolicyStoreClient(struct ExecutionModel::IResourcePolicyStore **a1)
{
  int Instance; // ebx
  struct ExecutionModel::IResourcePolicyStore **v3; // rcx
  __int64 v4; // rsi

  Instance = 0;
  EnterCriticalSection(&ExecutionModel::s_csProxy);
  v4 = qword_180024800;
  if ( !qword_180024800 )
  {
    *a1 = 0LL;
    Instance = ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(v3);
    if ( Instance < 0 )
      goto LABEL_3;
    v4 = qword_180024800;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = (struct ExecutionModel::IResourcePolicyStore *)qword_180024800;
LABEL_3:
  LeaveCriticalSection(&ExecutionModel::s_csProxy);
  return (unsigned int)Instance;
}
