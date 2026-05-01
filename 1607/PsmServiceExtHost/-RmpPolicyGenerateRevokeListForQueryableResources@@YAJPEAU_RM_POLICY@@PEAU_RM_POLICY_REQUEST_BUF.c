/*
 * XREFs of ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180015058
 * Callers:
 *     RmpPolicyEvaluateQueryableResourceRequest @ 0x180014F78 (RmpPolicyEvaluateQueryableResourceRequest.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 */

__int64 __fastcall RmpPolicyGenerateRevokeListForQueryableResources(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        _QWORD *a6,
        int a7,
        __int64 a8,
        unsigned int *a9)
{
  __int64 v9; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // r11
  int v14; // ebp
  unsigned int v15; // r10d
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9

  v9 = *(_QWORD *)(a2 + 1240);
  v11 = *(_QWORD *)(a2 + 1168);
  v13 = v11 + v9;
  v14 = a1;
  if ( v13 < v11 )
    return (unsigned int)-1073741675;
  v15 = 0;
  if ( v13 )
  {
    if ( a6[3] + v13 + 1 < v13 )
    {
      *(_DWORD *)(a8 + 40) = 0;
      return (unsigned int)-1073741670;
    }
    if ( *a6 - a3[16] < v13 )
      return (unsigned int)-1073741670;
    if ( (int)RmpEmPriorityCompare(a4, *(_DWORD *)(a1 + 1420)) >= 0 || (v20 = a3[4], v21 = v19 + v18 - a6[2], v21 < v20) )
    {
      if ( v17 < a3[6] )
        goto LABEL_3;
      if ( a5 == 2 )
        return (unsigned int)-1073741670;
      RmpPolicyGenerateReclaimListForCommit(v14, a8, a7, v17 - *((_DWORD *)a3 + 12) + 1, a4, 2);
      *a9 = 2;
    }
    else
    {
      if ( a5 == 2 )
        return (unsigned int)-1073741670;
      RmpPolicyGenerateReclaimListForCommit(v14, a8, a7, v21 - v20, a4, 1);
      *a9 = 1;
    }
    return 259;
  }
LABEL_3:
  *a9 = v15;
  *(_DWORD *)(a8 + 40) = v15;
  return v15;
}
