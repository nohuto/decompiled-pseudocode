/*
 * XREFs of PsChangeJobMemoryUsageByProcess @ 0x140680170
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     <none>
 */

char __fastcall PsChangeJobMemoryUsageByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  return PspChangeJobMemoryUsageByProcess(16, a2, a3, 0LL);
}
