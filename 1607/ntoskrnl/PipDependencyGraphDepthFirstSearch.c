/*
 * XREFs of PipDependencyGraphDepthFirstSearch @ 0x140124E28
 * Callers:
 *     PipFindDependencyNodePath @ 0x140124DB0 (PipFindDependencyNodePath.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x140124E28 (PipDependencyGraphDepthFirstSearch.c)
 * Callees:
 *     PipDependencyGraphDepthFirstSearch @ 0x140124E28 (PipDependencyGraphDepthFirstSearch.c)
 */

char __fastcall PipDependencyGraphDepthFirstSearch(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h]
  __int64 v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  *a3 = 0;
  *a4 = 0;
  if ( a1 != a2 )
  {
    v6 = (_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 16);
    while ( 1 )
    {
      if ( v7 == v6 )
        return 0;
      v9 = v7;
      v7 = (_QWORD *)*v7;
      v10 = v9;
      if ( (unsigned __int8)PipDependencyGraphDepthFirstSearch(v9[4], a2, a3, a4) )
        break;
      a2 = v11;
    }
    ++*a3;
    *a4 = *((_DWORD *)v10 + 12);
  }
  return 1;
}
