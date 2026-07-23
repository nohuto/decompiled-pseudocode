/*
 * XREFs of KseDsHookExFreePool @ 0x1401DD214
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  qword_1402F4888();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
