/*
 * XREFs of ?GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x1800057E0
 * Callers:
 *     Srv_GetResourcePolicyInformation @ 0x180005760 (Srv_GetResourcePolicyInformation.c)
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // rdi
  _OWORD *v6; // rdx
  __int64 result; // rax

  v3 = a2;
  if ( !a3 )
    return 2147942487LL;
  memset_0(a3, 0, 0x70uLL);
  if ( (int)v3 < 58 || (int)v3 >= *(_DWORD *)(a1 + 64) )
    return 2147942487LL;
  v6 = *(_OWORD **)(*(_QWORD *)(a1 + 56) + 24 * (v3 - 58) + 16);
  result = 0LL;
  *a3 = *v6;
  a3[1] = v6[1];
  a3[2] = v6[2];
  a3[3] = v6[3];
  a3[4] = v6[4];
  a3[5] = v6[5];
  a3[6] = v6[6];
  return result;
}
