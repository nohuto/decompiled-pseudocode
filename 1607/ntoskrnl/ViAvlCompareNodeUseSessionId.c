/*
 * XREFs of ViAvlCompareNodeUseSessionId @ 0x1400ADDA0
 * Callers:
 *     <none>
 * Callees:
 *     ViAvlCompareNode @ 0x1400ADDE4 (ViAvlCompareNode.c)
 */

__int64 __fastcall ViAvlCompareNodeUseSessionId(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx

  result = ViAvlCompareNode(a1);
  if ( (_DWORD)result == 2 )
  {
    v6 = a2[4];
    v7 = a3[4];
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
