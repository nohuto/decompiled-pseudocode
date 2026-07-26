/*
 * XREFs of ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019438
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMDoesMiniportNeedCoNdisNdProxy(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (a1->Flags & 0x20000) != 0 && !ndisMediaTypeCl[a1->MediaType] && (a1->MiniportAttributes & 0x400) == 0;
}
