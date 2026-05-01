/*
 * XREFs of RmGetResourceSetInfoPolicy @ 0x18000F010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000EA20 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180014338 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall RmGetResourceSetInfoPolicy(unsigned int a1, __int64 a2)
{
  ResourceManagerProxy *ResourceManagerProxy; // rax
  __int64 result; // rax
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v6; // [rsp+40h] [rbp+18h] BYREF

  ResourceManagerProxy = GetResourceManagerProxy();
  if ( !ResourceManagerProxy )
    return 2147500037LL;
  result = ResourceManagerProxy::GetResourceSetTypeConverter(ResourceManagerProxy, &v6);
  if ( (int)result >= 0 )
  {
    result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(v6, a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
