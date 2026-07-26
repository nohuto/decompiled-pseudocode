/*
 * XREFs of ?ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A840C
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A5F3C (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIN.c)
 */

void __fastcall Ndis::BindRegistry::ComputeDelta(
        _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3,
        struct Ndis::BindStack *a4)
{
  char v6; // bp

  v6 = (char)a4;
  Ndis::BindRegistry::UpdateProtocols(this, (__int64)&a2->NextMiniport, (__int64)&a3->Protocols, (char)a4);
  Ndis::BindRegistry::UpdateFilters(this, (__int64)&a2->32, (__int64)&a3->Filters, v6);
}
