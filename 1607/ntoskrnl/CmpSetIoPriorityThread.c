/*
 * XREFs of CmpSetIoPriorityThread @ 0x1400B4CE0
 * Callers:
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14060405C (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
