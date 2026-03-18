/*
 * XREFs of KseDsHookExAllocatePool @ 0x1401CD724
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1401CE260 (KsepDsEventPoolAllocate.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(int a1, int a2)
{
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = qword_1402D2E08();
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, a1, a2, 78);
  return v4;
}
