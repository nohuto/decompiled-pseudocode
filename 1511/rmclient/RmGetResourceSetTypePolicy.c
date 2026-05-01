/*
 * XREFs of RmGetResourceSetTypePolicy @ 0x18000F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000F2A0 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800153CC (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 */

__int64 __fastcall RmGetResourceSetTypePolicy(unsigned int a1, __int64 a2)
{
  int ResourceSetTypeConverter; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v7; // [rsp+40h] [rbp+18h] BYREF

  ResourceSetTypeConverter = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
  {
    ResourceSetTypeConverter = ResourceManagerProxy::GetResourceSetTypeConverter(ResourceManagerProxy, &v7);
    if ( ResourceSetTypeConverter >= 0 )
      return (unsigned int)ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(v7, a1, a2);
  }
  return (unsigned int)ResourceSetTypeConverter;
}
