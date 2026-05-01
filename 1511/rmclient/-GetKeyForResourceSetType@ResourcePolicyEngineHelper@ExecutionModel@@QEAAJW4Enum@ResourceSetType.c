/*
 * XREFs of ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x180010B20
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x180010D40 (-NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType.c)
 * Callees:
 *     ?CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z @ 0x180006A60 (-CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z.c)
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x180010B84 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(
        struct ExecutionModel::IResourcePolicyStore **a1,
        unsigned int a2,
        _DWORD *a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  *a3 = 57;
  if ( a2 > 0x38 )
    return 2147942487LL;
  if ( *a1 )
    return ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(*a1, a2, a3);
  result = CreateResourcePolicyStoreClient(a1);
  if ( (int)result >= 0 )
    return ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(*a1, a2, a3);
  return result;
}
