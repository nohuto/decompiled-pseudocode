/*
 * XREFs of ?CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z @ 0x180006A40
 * Callers:
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x18000FF80 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType.c)
 * Callees:
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180006AD4 (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CreateResourcePolicyStoreClient(struct ExecutionModel::IResourcePolicyStore **a1)
{
  int Instance; // ebx
  struct ExecutionModel::IResourcePolicyStore **v3; // rcx
  ExecutionModel::ResourcePolicyStoreProxy *v4; // rsi

  Instance = 0;
  EnterCriticalSection(&ExecutionModel::s_csProxy);
  v4 = qword_180022798;
  if ( !qword_180022798 )
  {
    *a1 = 0LL;
    Instance = ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(v3);
    if ( Instance < 0 )
      goto LABEL_3;
    v4 = qword_180022798;
  }
  (*(void (__fastcall **)(ExecutionModel::ResourcePolicyStoreProxy *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = qword_180022798;
LABEL_3:
  LeaveCriticalSection(&ExecutionModel::s_csProxy);
  return (unsigned int)Instance;
}
