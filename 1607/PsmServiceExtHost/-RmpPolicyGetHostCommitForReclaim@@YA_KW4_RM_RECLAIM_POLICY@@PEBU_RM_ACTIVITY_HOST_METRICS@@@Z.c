/*
 * XREFs of ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033DC4
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180033BA4 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyGetHostCommitForReclaim(int a1, _QWORD *a2)
{
  int v2; // ecx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( !v2 )
      return a2[5];
    if ( v2 != 1 )
      return 0LL;
  }
  return *a2;
}
