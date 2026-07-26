/*
 * XREFs of NdisFreePacketPool @ 0x1C004B720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisFreePacketPool @ 0x1C004BA80 (ndisFreePacketPool_ea_1C004BA80.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(0xCu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, (__int64)PoolHandle);
  ndisFreePacketPool((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(0xDu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, (__int64)PoolHandle);
}
