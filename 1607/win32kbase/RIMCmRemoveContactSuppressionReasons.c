/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C00E134C
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C00DC054 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C00DDB9C (rimNullXYPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // r10d
  int v5; // r8d

  v3 = *(_DWORD *)(a2 + 8);
  v4 = 0;
  v5 = v3 & ~a3;
  *(_DWORD *)(a2 + 8) = v5;
  if ( v3 && !v5 )
  {
    v4 = 1;
    ++*(_DWORD *)(a1 + 1572);
  }
  return v4;
}
