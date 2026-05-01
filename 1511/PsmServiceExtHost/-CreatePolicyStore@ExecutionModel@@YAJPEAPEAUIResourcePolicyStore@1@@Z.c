/*
 * XREFs of ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180025954
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 * Callees:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x180024A64 (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180025EEC (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::CreatePolicyStore(
        ExecutionModel *this,
        struct ExecutionModel::IResourcePolicyStore **a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rax
  ExecutionModel::Internal *v5; // rbx
  int DeviceTierName; // edi
  struct ExecutionModel::IResourcePolicyStore **v7; // r8
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  result = RpsGetDeviceTierName(0LL, &v8);
  if ( (int)result >= 0 )
  {
    v4 = 2LL * v8;
    if ( !is_mul_ok(v8, 2uLL) )
      v4 = -1LL;
    v5 = (ExecutionModel::Internal *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
    DeviceTierName = RpsGetDeviceTierName(v5, &v8);
    if ( DeviceTierName >= 0 )
      DeviceTierName = ExecutionModel::CreatePolicyStore((LPCWSTR)v5, (unsigned __int16 *)this, v7);
    operator delete(v5);
    return (unsigned int)DeviceTierName;
  }
  return result;
}
