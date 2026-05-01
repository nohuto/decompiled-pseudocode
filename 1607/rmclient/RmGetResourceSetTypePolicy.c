/*
 * XREFs of RmGetResourceSetTypePolicy @ 0x18000AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180004460 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000A6E8 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000D0B0 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 */

__int64 __fastcall RmGetResourceSetTypePolicy(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // sf
  ResourceManagerProxy *v6; // [rsp+40h] [rbp+18h] BYREF
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v7; // [rsp+48h] [rbp+20h] BYREF

  result = GetResourceManagerProxy(&v6);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::GetResourceSetTypeConverter(v6, &v7);
    v5 = (int)result < 0;
    if ( (int)result >= 0 )
    {
      result = ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(v7, a1, a2);
      v5 = (int)result < 0;
    }
    if ( !v5 )
      return 0LL;
  }
  return result;
}
