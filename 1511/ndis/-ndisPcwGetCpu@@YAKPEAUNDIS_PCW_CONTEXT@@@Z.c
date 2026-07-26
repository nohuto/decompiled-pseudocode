/*
 * XREFs of ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0011E28
 * Callers:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C0023808 (ndisPostSetMiniportRSSParameters.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPcwGetCpu(struct NDIS_PCW_CONTEXT *a1)
{
  if ( a1->CurrentCpu == -1 )
    a1->CurrentCpu = KeGetPcr()->Prcb.Number;
  return a1->CurrentCpu;
}
