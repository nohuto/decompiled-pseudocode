/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180073ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x180073F10 (RtlDeleteElementGenericTableAvlEx.c)
 *     FindNodeOrParent_0 @ 0x1800742BC (FindNodeOrParent_0.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
