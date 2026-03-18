/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1404C69C4
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x14076C6CC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 2824) = a2;
}
