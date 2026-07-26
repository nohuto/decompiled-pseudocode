/*
 * XREFs of ndisMIndicateReceiveNblsWithThrottling @ 0x1C0063A60
 * Callers:
 *     <none>
 * Callees:
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C0064230 (ndisPeriodicReceivesGetMaxNblCount.c)
 */

__int64 __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  int MaxNblCount; // eax
  struct _NDIS_FILTER_BLOCK *v7; // r10
  int v8; // r11d

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
    return ndisMQueueReceiveNetBufferLists(a1, a5);
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
  return ndisMIndicateSplitNblChain(v7, a2, v8, MaxNblCount);
}
