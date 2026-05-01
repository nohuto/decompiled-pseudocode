/*
 * XREFs of ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 * Callees:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180019A70 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        unsigned int a7,
        struct _AppModelActivationId *a8,
        int *a9,
        struct ExecutionModel::IResourceSet *a10,
        _QWORD *a11)
{
  _QWORD *v11; // r15
  int v15; // edx
  struct _AppModelActivationId *v16; // rbp
  ExecutionModel::HostResources *v17; // r14
  struct _AppModelActivationId *v18; // rax
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForAppId; // rax
  int v20; // edi
  _BYTE v22[72]; // [rsp+50h] [rbp-48h] BYREF
  char v23; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h]

  v24 = a2;
  v11 = a11;
  *a11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v16 = a8;
  v17 = *(ExecutionModel::HostResources **)(a1 + 80);
  v18 = (struct _AppModelActivationId *)*((_QWORD *)a8 + 2);
  if ( v18 == (struct _AppModelActivationId *)-1LL
    || ((a11 = 0LL,
         a8 = v18,
         utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
           (_DWORD)v17 + 16,
           v15,
           (unsigned int)&a8,
           (unsigned int)&a11,
           (__int64)v22,
           (__int64)&v23),
         a11 == (_QWORD *)((char *)v17 + 16))
     || (HostResourceInfoForAppId = (struct ExecutionModel::HostResourceInfo *)a11[4]) == 0LL)
    && (HostResourceInfoForAppId = ExecutionModel::HostResources::CreateHostResourceInfoForAppId(
                                     v17,
                                     a7,
                                     a6,
                                     v16,
                                     (struct ExecutionModel::ResourcePolicyEngine *)a1)) == 0LL )
  {
    v20 = -2147024882;
    goto LABEL_8;
  }
  v20 = ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
          (__int64)HostResourceInfoForAppId,
          v24,
          a3,
          a4,
          a5,
          0,
          a9,
          a10,
          v11);
  if ( v20 < 0 )
LABEL_8:
    ExecutionModel::HostResources::CleanUpHostResourceInfo(*(ExecutionModel::HostResources **)(a1 + 80), v16, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  return (unsigned int)v20;
}
