/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x1400EB160
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 2816)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 2824) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
