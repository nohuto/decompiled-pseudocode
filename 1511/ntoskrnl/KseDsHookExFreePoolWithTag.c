/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1401CD7EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  qword_1402D2DE8();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
