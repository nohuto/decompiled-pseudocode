/*
 * XREFs of ViAvlCompareNodeUseSessionId @ 0x1400AF838
 * Callers:
 *     <none>
 * Callees:
 *     ViAvlCompareNode @ 0x1400AF87C (ViAvlCompareNode.c)
 */

__int64 __fastcall ViAvlCompareNodeUseSessionId(
        struct _RTL_AVL_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx

  result = ViAvlCompareNode(Table);
  if ( (_DWORD)result == 2 )
  {
    v6 = FirstStruct[4];
    v7 = SecondStruct[4];
    if ( v6 < v7 )
    {
      return 0LL;
    }
    else if ( v6 > v7 )
    {
      return 1LL;
    }
  }
  return result;
}
