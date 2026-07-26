/*
 * XREFs of ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0064C24
 * Callers:
 *     ndisPostSetMiniportRSSParameters @ 0x1C001FD64 (ndisPostSetMiniportRSSParameters.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPcwGetCpu(struct NDIS_PCW_CONTEXT *a1)
{
  if ( a1->CurrentCpu == -1 )
    a1->CurrentCpu = KeGetPcr()->Prcb.Number;
  return a1->CurrentCpu;
}
