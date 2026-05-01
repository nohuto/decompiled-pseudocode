/*
 * XREFs of ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 * Callees:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180018020 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::AcquireResourceSet(
        __int64 a1,
        unsigned int a2,
        ExecutionModel::ResourceSetImpl *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        unsigned int a7,
        struct _AppModelActivationId *a8,
        int *a9,
        _QWORD *a10)
{
  _QWORD *v10; // r15
  int v14; // edx
  struct _AppModelActivationId *v15; // rbp
  ExecutionModel::HostResources *v16; // r14
  struct _AppModelActivationId *v17; // rax
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForAppId; // rax
  int v19; // edi
  _BYTE v21[72]; // [rsp+50h] [rbp-48h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v10 = a10;
  *a10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v15 = a8;
  v16 = *(ExecutionModel::HostResources **)(a1 + 80);
  v17 = (struct _AppModelActivationId *)*((_QWORD *)a8 + 2);
  if ( v17 == (struct _AppModelActivationId *)-1LL
    || ((a10 = 0LL,
         a8 = v17,
         utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
           (_DWORD)v16 + 16,
           v14,
           (unsigned int)&a8,
           (unsigned int)&a10,
           (__int64)v21,
           (__int64)&v22),
         a10 == (_QWORD *)((char *)v16 + 16))
     || (HostResourceInfoForAppId = (struct ExecutionModel::HostResourceInfo *)a10[4]) == 0LL)
    && (HostResourceInfoForAppId = ExecutionModel::HostResources::CreateHostResourceInfoForAppId(
                                     v16,
                                     a7,
                                     a6,
                                     v15,
                                     (struct ExecutionModel::ResourcePolicyEngine *)a1)) == 0LL )
  {
    v19 = -2147024882;
    goto LABEL_9;
  }
  v19 = ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
          (__int64)HostResourceInfoForAppId,
          v23,
          a3,
          a4,
          a5,
          0,
          a9,
          0LL,
          v10);
  if ( v19 < 0 )
LABEL_9:
    ExecutionModel::HostResources::CleanUpHostResourceInfo(*(ExecutionModel::HostResources **)(a1 + 80), v15, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  return (unsigned int)v19;
}
