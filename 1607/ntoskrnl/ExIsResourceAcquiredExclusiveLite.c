/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x1400928C0
 * Callers:
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 *     HvpTruncateBins @ 0x140481A44 (HvpTruncateBins.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  return (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == KeGetCurrentThread();
}
