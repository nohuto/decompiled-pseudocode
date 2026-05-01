/*
 * XREFs of RmpPolicyEvaluateQueryableResourceRequest @ 0x180014F78
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@W4Enum@Priority@2@W45PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAVBaseResourceSet@2@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N8@Z @ 0x180012C6C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_B.c)
 * Callees:
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180015058 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUF.c)
 */

__int64 __fastcall RmpPolicyEvaluateQueryableResourceRequest(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        _DWORD *a10)
{
  unsigned int v10; // ebx
  char v12; // di
  int v13; // r9d
  int v14; // ecx
  int v15; // eax
  __int64 result; // rax
  _DWORD *v17; // rdx
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  v18 = 0;
  if ( !*(_DWORD *)(a2 + 1232) )
  {
    v12 = 0;
    *(_DWORD *)(a8 + 40) = 0;
    goto LABEL_8;
  }
  v12 = 1;
  if ( a4 )
  {
    v13 = a4 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        v14 = 2;
      else
        v14 = -1;
    }
    else
    {
      v14 = 1;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = RmpPolicyGenerateRevokeListForQueryableResources(a1, a2, a5, a3, v14, a6, a7, a8, &v18);
  if ( v15 == -1073741670 )
  {
LABEL_15:
    v12 = 0;
    v10 = -2147220992;
    goto LABEL_8;
  }
  if ( v15 )
  {
    if ( v15 == 259 )
      goto LABEL_8;
    goto LABEL_15;
  }
  v12 = 0;
LABEL_8:
  result = v10;
  v17 = a10;
  *a9 = v12;
  *v17 = v18;
  return result;
}
