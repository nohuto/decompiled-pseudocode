/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C00E11D4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C00DC054 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C00DDB9C (rimNullXYPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  unsigned int v4; // r9d
  BOOL v5; // eax
  int v6; // r10d

  v3 = *(_DWORD *)(a2 + 8);
  v4 = 0;
  v5 = v3 != 0;
  v6 = a3 | v3;
  *(_DWORD *)(a2 + 8) = v6;
  if ( !v5 && v6 )
  {
    --*(_DWORD *)(a1 + 1572);
    return 1;
  }
  return v4;
}
