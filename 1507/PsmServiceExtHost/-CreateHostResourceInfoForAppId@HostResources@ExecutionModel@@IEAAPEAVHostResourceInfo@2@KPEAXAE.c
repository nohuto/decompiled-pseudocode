/*
 * XREFs of ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C
 * Callers:
 *     ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800029E8 (-FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@K.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ??0HostResourceInfo@ExecutionModel@@QEAA@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x1800141C4 (--0HostResourceInfo@ExecutionModel@@QEAA@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngin.c)
 *     ??$_InsertImpl@U?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@U?$integral_constant@_N$0A@@1@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@$$QEAU?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@1@@Z @ 0x180018130 (--$_InsertImpl@U-$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@-$_HashTable@_KU-$pair@$$CB.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800185B8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GHostResourceInfo@ExecutionModel@@QEAAPEAXI@Z @ 0x18002EC70 (--_GHostResourceInfo@ExecutionModel@@QEAAPEAXI@Z.c)
 */

struct ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResources::CreateHostResourceInfoForAppId(
        ExecutionModel::HostResources *this,
        int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct ExecutionModel::ResourcePolicyEngine *a5)
{
  __int64 v5; // r12
  __int64 v10; // rdi
  ExecutionModel::HostResourceInfo *v11; // rcx
  __int64 v12; // r8
  ExecutionModel::HostResourceInfo *v13; // rbx
  unsigned int v14; // edx
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+48h] [rbp-20h]

  v5 = *((_QWORD *)a4 + 2);
  v10 = 0LL;
  v11 = (ExecutionModel::HostResourceInfo *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
    v13 = ExecutionModel::HostResourceInfo::HostResourceInfo(v11, a2, a3, a4, a5);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v16[0] = v5;
    v16[1] = v13;
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_InsertImpl<utl::pair<unsigned __int64,ExecutionModel::HostResourceInfo *>>(
      (__int64)this + 16,
      (__int64)&v17,
      v12,
      0LL,
      (__int64)v16);
    if ( v18 )
    {
      v10 = *(_QWORD *)(v17 + 32);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v13 = 0LL;
      if ( !*(_DWORD *)a4 )
        return (struct ExecutionModel::HostResourceInfo *)v10;
      ExecutionModel::HostResources::IncrementPackageHostCount(this, a2, a3, *((const unsigned __int16 **)a4 + 1));
    }
    if ( v13 )
      ExecutionModel::HostResourceInfo::`scalar deleting destructor'(v13, v14);
  }
  return (struct ExecutionModel::HostResourceInfo *)v10;
}
