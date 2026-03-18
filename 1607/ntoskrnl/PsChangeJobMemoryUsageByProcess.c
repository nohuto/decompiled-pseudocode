/*
 * XREFs of PsChangeJobMemoryUsageByProcess @ 0x14068008C
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x140430960 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     <none>
 */

char __fastcall PsChangeJobMemoryUsageByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  return PspChangeJobMemoryUsageByProcess(16, a2, a3, 0LL);
}
