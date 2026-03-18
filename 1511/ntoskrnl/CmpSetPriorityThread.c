/*
 * XREFs of CmpSetPriorityThread @ 0x1400F3184
 * Callers:
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x1405E4B04 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall CmpSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  return KeSetPriorityThread(Thread, Priority);
}
