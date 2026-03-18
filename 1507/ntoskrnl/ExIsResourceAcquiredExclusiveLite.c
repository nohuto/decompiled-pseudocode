/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x1400FED50
 * Callers:
 *     HvpTruncateBins @ 0x14044D444 (HvpTruncateBins.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     VerifierExIsResourceAcquiredExclusiveLite @ 0x140741BC4 (VerifierExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  return (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == KeGetCurrentThread();
}
