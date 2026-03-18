/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x14012A410
 * Callers:
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 *i; // rdx

  result = *(_QWORD *)(a1 + 2816);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 2824) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9));
  for ( i = (__int64 *)(result + 8 * (v4 + 2 * (v4 + 1))); i; i = (__int64 *)(result + 8) )
  {
    result = *i;
    if ( !*i )
      break;
    if ( (_DWORD *)result == a2 )
    {
      result = *(_QWORD *)(result + 8);
      *i = result;
      return result;
    }
  }
  return result;
}
