/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C00256F0
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C001A534 (ndisIndicateInitialStateToFilter.c)
 *     ndisFIndicateOffloadChange @ 0x1C0024DF0 (ndisFIndicateOffloadChange.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(14LL, &WPP_fde93b4b8ac33b470d75b3ac150a1f69_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB4uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 800) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB4uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(15LL, &WPP_fde93b4b8ac33b470d75b3ac150a1f69_Traceguids, *(_QWORD *)(a1 + 800));
  return v2;
}
