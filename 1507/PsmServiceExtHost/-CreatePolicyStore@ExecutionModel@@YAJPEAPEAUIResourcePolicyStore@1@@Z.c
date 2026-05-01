/*
 * XREFs of ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180021FE4
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 * Callees:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x18002245C (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::CreatePolicyStore(
        ExecutionModel *this,
        struct ExecutionModel::IResourcePolicyStore **a2)
{
  __int64 result; // rax
  ExecutionModel::Internal *v4; // rbx
  int DeviceTierName; // edi
  struct ExecutionModel::IResourcePolicyStore **v6; // r8
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  result = RpsGetDeviceTierName(0LL, &v7);
  if ( (int)result >= 0 )
  {
    v4 = (ExecutionModel::Internal *)malloc(saturated_mul(v7, 2uLL));
    DeviceTierName = RpsGetDeviceTierName(v4, &v7);
    if ( DeviceTierName >= 0 )
      DeviceTierName = ExecutionModel::CreatePolicyStore((LPCWSTR)v4, (const unsigned __int16 *)this, v6);
    operator delete(v4);
    return (unsigned int)DeviceTierName;
  }
  return result;
}
