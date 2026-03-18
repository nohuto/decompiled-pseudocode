/*
 * XREFs of PnpFindRebalanceCandidates @ 0x140605DF8
 * Callers:
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x140605EEC (PnpQueryRebalance.c)
 */

__int64 __fastcall PnpFindRebalanceCandidates(int a1, __int64 a2, int a3, unsigned int *a4, char a5, __int64 a6)
{
  __int64 v8; // rbx
  bool v9; // zf
  _DWORD *v10; // rdi
  int Rebalance; // eax
  __int64 result; // rax

  v8 = a2;
  if ( a1 || !a2 )
  {
    PnpQueryRebalance(IopRootDeviceNode, a3, (_DWORD)a4, 0, 0LL, a5);
    v10 = (_DWORD *)a6;
    *(_QWORD *)(a6 + 16) = IopRootDeviceNode;
    *(_BYTE *)(a6 + 24) = 1;
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 300) == 776;
    v10 = (_DWORD *)a6;
    *(_QWORD *)(a6 + 32) = a2;
    if ( v9 )
    {
      *(_DWORD *)(a6 + 4) = 1;
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a6 + 4) = 2;
    }
    if ( v8 )
    {
      do
      {
        Rebalance = PnpQueryRebalance(v8, a3, (_DWORD)a4, 0, 0LL, a5);
        if ( Rebalance != 281 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v8 );
      if ( v8 )
      {
        *(_QWORD *)(a6 + 16) = v8;
        *(_BYTE *)(a6 + 24) = Rebalance >= 0;
      }
    }
  }
  result = *a4;
  *v10 = result;
  return result;
}
