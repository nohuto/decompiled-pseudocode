/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A7068
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisUpdateMinimumStackVersion @ 0x1C00A70E0 (ndisUpdateMinimumStackVersion.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0LL, 0LL);
  ndisUpdateNoPauseOnSuspend(a1);
}
