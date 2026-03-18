/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x14041AE70
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2u, a2);
  return result;
}
