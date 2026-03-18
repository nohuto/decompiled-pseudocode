/*
 * XREFs of PpmBeginProfileAccumulation @ 0x14055D370
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 2824) = a2;
}
