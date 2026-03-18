/*
 * XREFs of CmpSetIoPriorityThread @ 0x1400F317C
 * Callers:
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x1405E4B04 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, __int64 a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
