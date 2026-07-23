/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x140092020
 * Callers:
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     HvpTruncateBins @ 0x140480798 (HvpTruncateBins.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  return (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == KeGetCurrentThread();
}
