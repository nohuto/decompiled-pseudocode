/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C0024A4C
 * Callers:
 *     ndisFIndicateOffloadChange @ 0x1C00163C8 (ndisFIndicateOffloadChange.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001B438 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(14LL, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB4uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 800) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB4uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(15LL, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, *(_QWORD *)(a1 + 800));
  return v2;
}
