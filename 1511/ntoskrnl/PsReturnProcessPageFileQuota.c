/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1403E7BCC
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2, a2);
  return result;
}
