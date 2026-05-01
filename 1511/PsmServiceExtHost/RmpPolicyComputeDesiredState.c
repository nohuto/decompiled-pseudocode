/*
 * XREFs of RmpPolicyComputeDesiredState @ 0x180009058
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DIGEST@@@Z @ 0x180006694 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DI.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006DA4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     RmpActivityHostGetStateDigest @ 0x18000AB60 (RmpActivityHostGetStateDigest.c)
 */

char __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  int v1; // ebp
  int v3; // eax
  char v4; // bl
  unsigned int StateDigest; // edi
  char *v6; // rbp
  int v7; // r11d

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 || (v3 = *(_DWORD *)(a1 + 584), v3 == 2) )
  {
    StateDigest = RmpActivityHostGetStateDigest();
    v4 = 0;
    if ( v1 == 1 )
    {
      if ( (StateDigest & 0x28) == 0x20 || (*(_BYTE *)(a1 + 776) & 8) != 0 )
        v4 = 1;
      v4 = (v4 & 1) << 6;
    }
    if ( (StateDigest & 0x89) == 0x80
      || v1 == 1 && (StateDigest & 2) == 0 && ((StateDigest & 0x10) != 0 || (StateDigest & 0x20) != 0) )
    {
      v6 = (char *)RmSvcGlobals + 208;
      v4 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, a1, 0) | (v4 ^ (8 * v6[1368])) & 8 ^ v4;
      if ( !v7 )
        v4 |= RmpPolicyGetDesiredEmptyOptimizationsForHost((__int64)v6, a1);
      if ( (unsigned int)RmpPolicyIsHostCommitSaveEligible((__int64)v6, a1, StateDigest) )
        return (v4 ^ (16 * (*((_DWORD *)v6 + 343) >> 3))) & 0x10 ^ v4;
    }
  }
  else
  {
    v4 = 0;
    if ( v3 == 4 && (*(_BYTE *)(a1 + 776) & 8) != 0 )
      return 64;
  }
  return v4;
}
