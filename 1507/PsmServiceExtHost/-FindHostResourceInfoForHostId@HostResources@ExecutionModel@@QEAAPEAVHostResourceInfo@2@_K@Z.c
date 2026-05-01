/*
 * XREFs of ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x180018850
 * Callers:
 *     ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800029E8 (-FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@K.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResources::FindHostResourceInfoForHostId(
        ExecutionModel::HostResources *this,
        __int64 a2)
{
  char *v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int16 *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  char v9; // cl
  unsigned __int64 v10; // r10
  char *v11; // rax
  char *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v15; // [rsp+18h] [rbp+10h] BYREF

  v15 = a2;
  if ( a2 == -1 )
    return 0LL;
  v3 = (char *)this + 16;
  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    goto LABEL_14;
  v5 = 0LL;
  v6 = (unsigned __int16 *)&v15;
  v7 = 4LL;
  do
  {
    v8 = *v6++;
    v5 = (1025 * (v5 + v8)) ^ ((1025 * (v5 + v8)) >> 6);
    --v7;
  }
  while ( v7 );
  v9 = v3[32];
  v10 = 32769 * ((9 * v5) ^ ((9 * v5) >> 11));
  v11 = *(char **)(v4 + 16 * (v10 & ((8LL << v9) - 1)));
  if ( v11 && (v12 = **(char ***)(v4 + 16 * (v10 & ((8LL << v9) - 1)) + 8), v11 != v12) )
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)v11 + 2);
      if ( v13 >= v10 )
      {
        if ( v13 > v10 )
          goto LABEL_14;
        if ( a2 == *((_QWORD *)v11 + 3) )
          break;
      }
      v11 = *(char **)v11;
      if ( v11 == v12 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v11 = v3;
  }
  if ( v11 == v3 )
    return 0LL;
  else
    return (struct ExecutionModel::HostResourceInfo *)*((_QWORD *)v11 + 4);
}
