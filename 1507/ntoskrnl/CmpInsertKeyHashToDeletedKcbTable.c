/*
 * XREFs of CmpInsertKeyHashToDeletedKcbTable @ 0x14001B0F4
 * Callers:
 *     CmpMarkKcbDeletedAndCache @ 0x1404470AC (CmpMarkKcbDeletedAndCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInsertKeyHashToDeletedKcbTable(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = (unsigned int)(*(_DWORD *)(a1 + 2824) - 1) & ((unsigned int)(101027 * (*(_DWORD *)a2 ^ (*(_DWORD *)a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)a2 ^ (*(_DWORD *)a2 >> 9))) >> 9));
  v3 = *(_QWORD *)(a1 + 2816);
  result = *(_QWORD *)(v3 + 24 * v2 + 16);
  *(_QWORD *)(a2 + 8) = result;
  *(_QWORD *)(v3 + 24 * v2 + 16) = a2;
  return result;
}
