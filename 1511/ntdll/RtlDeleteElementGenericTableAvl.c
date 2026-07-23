/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1800686F0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800688E4 (FindNodeOrParent.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x180068990 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  if ( (unsigned int)FindNodeOrParent(Table, Buffer) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
