/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1401DD23C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  qword_1402F4848();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
