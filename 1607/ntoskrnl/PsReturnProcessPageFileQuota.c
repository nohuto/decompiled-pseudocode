/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x14042D29C
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2u, a2);
  return result;
}
