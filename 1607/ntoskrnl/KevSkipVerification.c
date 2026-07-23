/*
 * XREFs of KevSkipVerification @ 0x14023E224
 * Callers:
 *     ExFreePoolSanityChecks @ 0x140721350 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 KevSkipVerification()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v2; // r8d

  if ( KeGetCurrentIrql() < 2u )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  if ( !CurrentPrcb->DpcRoutineActive || (CurrentPrcb->DpcRequestSummary & 8) == 0 )
    return 0LL;
  LOBYTE(v2) = CurrentPrcb->LastTimerHand + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18);
  return v2;
}
