/*
 * XREFs of ?CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@PEAPEAUIUnknown@@@Z @ 0x180007854
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0HostResourceInfo@ExecutionModel@@QEAA@PEAVApplicationPackageInfo@1@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x180013748 (--0HostResourceInfo@ExecutionModel@@QEAA@PEAVApplicationPackageInfo@1@AEBU_AppModelActivationId@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::CreateInstance(
        struct ExecutionModel::ApplicationPackageInfo *a1,
        const struct _AppModelActivationId *a2,
        struct ExecutionModel::ResourcePolicyEngine *a3,
        struct IUnknown **a4)
{
  unsigned int v6; // ebx
  ExecutionModel::HostResourceInfo *v9; // rax
  struct IUnknown *v10; // rax
  struct IUnknown *v12; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v12 = 0LL;
  v9 = (ExecutionModel::HostResourceInfo *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
    v10 = (struct IUnknown *)ExecutionModel::HostResourceInfo::HostResourceInfo(v9, a1, a2, a3);
  else
    v10 = 0LL;
  if ( v10 && (ATL::AtlComPtrAssign(&v12, v10), v12) )
    *a4 = v12;
  else
    return (unsigned int)-2147467259;
  return v6;
}
