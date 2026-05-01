/*
 * XREFs of ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033524
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x1800330DC (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x1800332A8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
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
