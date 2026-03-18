/*
 * XREFs of ViExCheckAPCLevelOrBelow @ 0x140751F8C
 * Callers:
 *     ViExAcquireFastMutexCommon @ 0x140751EEC (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x140752060 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCLevelOrBelow(__int64 a1, ULONG_PTR a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 && CurrentIrql > 1u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x33uLL, CurrentIrql, a2, 0LL);
  return CurrentIrql;
}
