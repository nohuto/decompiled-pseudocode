/*
 * XREFs of KseDsHookExAllocatePoolWithTag @ 0x14020CAD4
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x14020D5C4 (KsepDsEventPoolAllocate.c)
 */

__int64 __fastcall KseDsHookExAllocatePoolWithTag(int a1, int a2, char a3)
{
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = qword_140321F08();
  KsepDsEventPoolAllocate(v6, (_DWORD)retaddr, a1, a2, a3);
  return v6;
}
