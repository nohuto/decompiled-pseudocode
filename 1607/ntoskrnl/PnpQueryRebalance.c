/*
 * XREFs of PnpQueryRebalance @ 0x1406301A0
 * Callers:
 *     PnpFindRebalanceCandidates @ 0x14063008C (PnpFindRebalanceCandidates.c)
 *     PnpQueryRebalance @ 0x1406301A0 (PnpQueryRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x1406301A0 (PnpQueryRebalance.c)
 *     PnpQueryRebalanceWorker @ 0x14063024C (PnpQueryRebalanceWorker.c)
 */

__int64 __fastcall PnpQueryRebalance(ULONG_PTR a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  _QWORD *v6; // rdi
  int v7; // ebx
  int v9; // eax
  ULONG_PTR v10; // rsi
  int Rebalance; // eax
  bool v13; // sf

  v6 = *(_QWORD **)(a1 + 8);
  v7 = 0;
  v9 = a2;
  v10 = a1;
  if ( !v6 )
    return (unsigned int)PnpQueryRebalanceWorker(v10, a5, a6);
  do
  {
    Rebalance = PnpQueryRebalance((_DWORD)v6, v9, a3, a4, a5, a6);
    v6 = (_QWORD *)*v6;
    v13 = Rebalance < 0;
    v9 = a2;
    if ( v13 )
      v7 = -1073741823;
  }
  while ( v6 );
  v10 = a1;
  if ( v7 >= 0 )
    return (unsigned int)PnpQueryRebalanceWorker(v10, a5, a6);
  return (unsigned int)v7;
}
