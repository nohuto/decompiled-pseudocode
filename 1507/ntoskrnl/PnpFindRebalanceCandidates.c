/*
 * XREFs of PnpFindRebalanceCandidates @ 0x140680B9C
 * Callers:
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x140680C44 (PnpQueryRebalance.c)
 */

void __fastcall PnpFindRebalanceCandidates(int a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rbx

  v7 = a2;
  if ( a1 || !a2 )
  {
    PnpQueryRebalance(IopRootDeviceNode, a3, a4, 0, 0LL, a5);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 300) != 776 )
      v7 = *(_QWORD *)(a2 + 16);
    for ( ; v7; v7 = *(_QWORD *)(v7 + 16) )
    {
      if ( (unsigned int)PnpQueryRebalance(v7, a3, a4, 0, 0LL, a5) != 281 )
        break;
    }
  }
}
