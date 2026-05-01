/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W44PendType@2@PEA_N5PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003574
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180044678 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x1800032C0 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003708 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800414E8 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     RmpPolicyGenerateRevokeListForCommit @ 0x1800416F4 (RmpPolicyGenerateRevokeListForCommit.c)
 */

int __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        int a7,
        char *a8,
        char *a9,
        __int64 a10)
{
  char *v10; // r15
  char *v11; // r14
  unsigned int v13; // r12d
  int result; // eax
  char v16; // bl
  char v17; // al
  int v18; // esi
  unsigned int v19; // r13d
  __int64 v20; // rbp
  int v21; // esi
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  int v26; // eax
  unsigned __int64 v27; // r8
  __int64 v28; // r10
  unsigned __int64 v29; // r11
  int v30; // ecx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // [rsp+28h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  unsigned int v39; // [rsp+B8h] [rbp+10h] BYREF
  int v40; // [rsp+C8h] [rbp+20h]

  v40 = a4;
  v10 = a9;
  v11 = a8;
  v13 = *(_DWORD *)(a2 + 1152);
  v38 = a10;
  v37 = (__int64)a9;
  v36 = (__int64)a8;
  *a9 = 0;
  *v11 = 0;
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(a1, v13, 1, v36, v37, v38);
  if ( result >= 0 )
  {
    v16 = *v10;
    v17 = *v11;
    v18 = a7;
    LOBYTE(a9) = *v11;
    if ( v16 )
    {
      if ( !v17 )
      {
        v19 = v40;
        if ( ExecutionModel::BaseResourceSet::HigherPriorityPending((__int64)a1, v13, (unsigned int *)a2, v40)
          || ExecutionModel::BaseResourceSet::HigherPriorityPending(
               (__int64)a1,
               *(_DWORD *)(a2 + 1232),
               (unsigned int *)(a2 + 1160),
               v19) )
        {
          *v11 = 1;
        }
LABEL_6:
        if ( v16 )
        {
          if ( !*v11
            && (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, __int64))(*(_QWORD *)a1 + 40LL))(
                 a1,
                 v13,
                 a2) < 0 )
          {
            *v11 = 1;
          }
          if ( *v10 && *(_DWORD *)(a2 + 1232) )
          {
            v20 = *((_QWORD *)RmSvcGlobals + 195);
            v39 = *((_DWORD *)RmSvcGlobals + 392);
            if ( v18 )
            {
              v21 = v18 - 1;
              if ( v21 )
              {
                if ( v21 == 1 )
                  v22 = 2LL;
                else
                  v22 = 0xFFFFFFFFLL;
              }
              else
              {
                v22 = 1LL;
              }
            }
            else
            {
              v22 = 0LL;
            }
            v23 = *(_QWORD *)(a2 + 1168) + *(_QWORD *)(a2 + 1240);
            if ( !v23 )
            {
LABEL_16:
              v24 = 0LL;
LABEL_17:
              if ( !(_BYTE)a9 )
              {
                if ( (_DWORD)v24 )
                {
                  v35 = RmpPolicyAddAppliedResourceSetsFromActivityHostsToList(v20, v24, a10, v22);
                  if ( v35 < 0 )
                    return v35 | 0x10000000;
                }
              }
              return 0;
            }
            v25 = a5;
            if ( v23 + a5[2] >= v23 )
            {
              v26 = RmpEmPriorityCompare(v19, *((unsigned int *)RmSvcGlobals + 396), v23, v22);
              v30 = 1;
              if ( v26 > 0 )
                v30 = 3;
              v31 = *(_QWORD *)(a6 + 8LL * v30 + 16);
              if ( v29 < v31 )
                goto LABEL_16;
              if ( *v25 - *(_QWORD *)(a6 + 112) >= v27 && (_DWORD)v22 != 2 )
              {
                v32 = *v25 - v31;
                v33 = v32 + v27 + 1;
                if ( v33 >= v32 )
                {
                  v34 = *(_QWORD *)(v28 + 1552);
                  LODWORD(a8) = *(_DWORD *)(v28 + 1568);
                  RmpPolicyPopulateActivityHostMetricsTable(
                    v19,
                    &a8,
                    v34,
                    1LL,
                    RmpPolicyFilterActivityHostWithFlags,
                    3LL);
                  RmpPolicyGenerateRevokeListForCommit(v34, (unsigned int)a8, v33, v25[1], v20, &v39);
                  v24 = v39;
                  *v11 = 1;
                  goto LABEL_17;
                }
              }
            }
            *v10 = 0;
            *v11 = 0;
          }
        }
        return 0;
      }
LABEL_26:
      v19 = v40;
      goto LABEL_6;
    }
    if ( a7 != 1 )
      goto LABEL_26;
    result = ExecutionModel::BaseResourceSet::CheckPoolResources(a1, v13, 0, (__int64)&a8, (__int64)v10, 0LL);
    if ( result >= 0 )
    {
      v16 = *v10;
      if ( !*v10 )
        return 0;
      *v11 = 1;
      goto LABEL_26;
    }
  }
  return result;
}
