/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18000FBD4
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18000EDE0 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18000FB1C (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x1800332A8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        char *a7,
        _BYTE *a8)
{
  int v11; // r10d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  signed int v14; // r10d
  __int64 v15; // r15
  _BYTE *v16; // rbx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r10

  v11 = ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(a1, a3, a7, *(_QWORD **)(a6 + 8), (int *)(a6 + 32));
  if ( v11 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 1528);
    if ( v12 == -1LL || a2 == -1 )
    {
      v13 = -1LL;
      v14 = 0;
    }
    else
    {
      v13 = -1LL;
      if ( v12 + a2 >= v12 )
        v13 = v12 + a2;
      v14 = v12 + a2 < v12 ? 0xC0000095 : 0;
      if ( v12 + a2 >= v12 )
        goto LABEL_7;
    }
    if ( v14 < 0 )
      return (unsigned int)(v14 | 0x10000000);
LABEL_7:
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1384) + 112LL);
    if ( !v13 )
    {
LABEL_8:
      v16 = a8;
      *(_DWORD *)(a6 + 36) = 0;
      *(_DWORD *)(v15 + 184) = 0;
      *a8 = 0;
      goto LABEL_9;
    }
    if ( a5[2] + v13 + 1 < v13 )
    {
      *(_DWORD *)(v15 + 184) = 0;
      goto LABEL_21;
    }
    if ( a5[1] < v13 && *(_BYTE *)(a1 + 1450) < 0x80u )
      goto LABEL_21;
    if ( (int)RmpEmPriorityCompare(
                *(unsigned int *)(a1 + 1360),
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 208LL) + 516LL)) >= 0
      || (v23 = v20 + v21 - a5[4], v23 < *(_QWORD *)(a4 + 32)) )
    {
      if ( v22 < *(_QWORD *)(a4 + 48) )
        goto LABEL_8;
      if ( v19 == 2 )
      {
LABEL_21:
        *a8 = 0;
        return (unsigned int)-2147220992;
      }
      RmpPolicyGenerateReclaimListForCommit(
        v15,
        v15 + 144,
        *(_QWORD *)(a1 + 1392),
        v22 - *(_QWORD *)(a4 + 48) + 1,
        v18,
        2);
      *(_DWORD *)(a6 + 36) = 2;
    }
    else
    {
      if ( v19 == 2 )
        goto LABEL_21;
      RmpPolicyGenerateReclaimListForCommit(v15, v15 + 144, *(_QWORD *)(a1 + 1392), v23 - *(_QWORD *)(a4 + 32), v18, 1);
      *(_DWORD *)(a6 + 36) = 1;
    }
    v16 = a8;
    *a8 = 1;
LABEL_9:
    if ( *a7 )
    {
      *(_DWORD *)(v15 + 184) = 0;
      *(_DWORD *)(a6 + 36) = 0;
      *v16 = 0;
    }
    else if ( !*v16 )
    {
      if ( ExecutionModel::BaseResourceSet::HigherPriorityPending(
             *(_QWORD *)(a1 + 184),
             1u,
             (unsigned int *)(a1 + 1544),
             *(_DWORD *)(a1 + 1360)) )
      {
        if ( a3 == 1 )
        {
          *a7 = 1;
          return 0;
        }
      }
      else
      {
        if ( !ExecutionModel::BaseResourceSet::HigherPriorityPending(
                *(_QWORD *)(a1 + 184),
                1u,
                (unsigned int *)(a1 + 1520),
                *(_DWORD *)(a1 + 1360)) )
          return 0;
        if ( a3 == 1 )
        {
          *v16 = 1;
          return 0;
        }
      }
      return (unsigned int)-2147220992;
    }
    return 0;
  }
  return (unsigned int)v11;
}
