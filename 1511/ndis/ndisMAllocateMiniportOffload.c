/*
 * XREFs of ndisMAllocateMiniportOffload @ 0x1C0017208
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisMSetOffloadAttributes @ 0x1C009A5AC (ndisMSetOffloadAttributes.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00D06A4 (ndisGetMiniportOffloadCapability.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMAllocateMiniportOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(12LL, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A8uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 4152) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4A8uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(13LL, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, *(_QWORD *)(a1 + 4152));
  return v2;
}
