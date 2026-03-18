/*
 * XREFs of KseDsHookExAllocatePool @ 0x14020CA88
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x14020D5C4 (KsepDsEventPoolAllocate.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(int a1, int a2)
{
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = qword_140321F48();
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, a1, a2, 78);
  return v4;
}
