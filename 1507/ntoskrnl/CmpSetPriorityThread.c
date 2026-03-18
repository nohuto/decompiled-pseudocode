/*
 * XREFs of CmpSetPriorityThread @ 0x1401309D4
 * Callers:
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14065BA18 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall CmpSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  return KeSetPriorityThread(Thread, Priority);
}
