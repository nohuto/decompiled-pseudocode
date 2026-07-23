/*
 * XREFs of MiUpdateShareCount @ 0x1400231B0
 * Callers:
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateShareCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) ^= (result ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  return result;
}
