/*
 * XREFs of CmpSetPriorityThread @ 0x1400B4CE8
 * Callers:
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14060405C (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall CmpSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  return KeSetPriorityThread(Thread, Priority);
}
