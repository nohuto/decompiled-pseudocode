/*
 * XREFs of KseDsHookExFreePool @ 0x14020CB28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  qword_140321F68();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
