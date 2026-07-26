/*
 * XREFs of ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0010D5C
 * Callers:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00247F4 (ndisPostSetMiniportRSSParameters.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPcwGetCpu(struct NDIS_PCW_CONTEXT *a1)
{
  if ( a1->CurrentCpu == -1 )
    a1->CurrentCpu = KeGetPcr()->Prcb.Number;
  return a1->CurrentCpu;
}
