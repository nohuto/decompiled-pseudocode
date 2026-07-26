/*
 * XREFs of ndisMIndicateReceiveNblsWithThrottling @ 0x1C0026420
 * Callers:
 *     <none>
 * Callees:
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C0062CF0 (ndisPeriodicReceivesGetMaxNblCount.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int MaxNblCount; // eax
  struct _NDIS_FILTER_BLOCK *v7; // r10
  int v8; // r11d

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
  {
    ndisMQueueReceiveNetBufferLists(a1, a2, a3, a4, a5);
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
    ndisMIndicateSplitNblChain(v7, a2, v8, MaxNblCount);
  }
}
