/*
 * XREFs of CmpSetPriorityThread @ 0x1400B2B20
 * Callers:
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x140604110 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall CmpSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  return KeSetPriorityThread(Thread, Priority);
}
