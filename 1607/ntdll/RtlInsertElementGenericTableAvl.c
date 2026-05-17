/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180074120
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180074190 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent_0 @ 0x1800742CC (FindNodeOrParent_0.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int NodeOrParent_0; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent_0 = FindNodeOrParent_0(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], NodeOrParent_0);
}
