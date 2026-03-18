/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x1400C6A60
 * Callers:
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     HvpTruncateBins @ 0x140487FD4 (HvpTruncateBins.c)
 *     VerifierExIsResourceAcquiredExclusiveLite @ 0x1406C03D0 (VerifierExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  return (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == KeGetCurrentThread();
}
