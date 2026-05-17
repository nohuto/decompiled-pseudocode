/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1800608D0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180060AC4 (FindNodeOrParent.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x180060B70 (RtlDeleteElementGenericTableAvlEx.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(a1, a2, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(a1, v4);
  return 1;
}
