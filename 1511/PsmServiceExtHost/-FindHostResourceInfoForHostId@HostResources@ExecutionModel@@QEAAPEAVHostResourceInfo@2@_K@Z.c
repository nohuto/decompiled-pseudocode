/*
 * XREFs of ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110
 * Callers:
 *     ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800053C8 (-FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@K.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 *     Srv_ResourcePolicy_GetProcessGroupCount @ 0x18004C050 (Srv_ResourcePolicy_GetProcessGroupCount.c)
 *     Srv_ResourcePolicy_RevertProcessAffinityMask @ 0x18004C100 (Srv_ResourcePolicy_RevertProcessAffinityMask.c)
 *     ?GetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_KPEA_K@Z @ 0x18004CABC (-GetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_KPEA_K@Z.c)
 *     ?SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z @ 0x18004D02C (-SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z.c)
 *     ?TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z @ 0x18004D0A8 (-TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180019A70 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-.c)
 */

struct ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResources::FindHostResourceInfoForHostId(
        ExecutionModel::HostResources *this,
        __int64 a2)
{
  __int64 v2; // rdi
  char *v3; // rbx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a2;
  v2 = 0LL;
  if ( a2 != -1 )
  {
    v7 = 0LL;
    v3 = (char *)this + 16;
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
      (__int64)this + 16,
      a2,
      (unsigned __int16 *)&v6,
      &v7,
      v5,
      &v8);
    if ( (char *)v7 != v3 )
      return *(struct ExecutionModel::HostResourceInfo **)(v7 + 32);
  }
  return (struct ExecutionModel::HostResourceInfo *)v2;
}
