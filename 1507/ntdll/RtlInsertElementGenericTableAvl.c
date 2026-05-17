/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180060910
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180060980 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x180060AC4 (FindNodeOrParent.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int NodeOrParent; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent = FindNodeOrParent(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], NodeOrParent);
}
