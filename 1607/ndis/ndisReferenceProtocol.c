/*
 * XREFs of ndisReferenceProtocol @ 0x1C0015C20
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7204 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00AA828 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00CEFE0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD208 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisPDStartup @ 0x1C00E1020 (NdisPDStartup.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C00F43A4 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     WPP_SF_DqlD @ 0x1C005AC34 (WPP_SF_DqlD.c)
 */

char __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rdx
  char v4; // bl
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v4 = ndisReferenceRef((PKSPIN_LOCK)(a1 + 32));
  if ( (unsigned __int8)byte_1C00895CC >= 4u )
    WPP_SF_DqlD(v6, v3, a2, &v6, *(unsigned __int16 *)(v6 + 40), *(unsigned __int8 *)(v6 + 42));
  return v4;
}
