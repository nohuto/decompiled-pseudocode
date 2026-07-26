/*
 * XREFs of ndisReferenceProtocol @ 0x1C0019A3C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6AFC (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisPDStartup @ 0x1C00E1430 (NdisPDStartup.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E72A4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     ndisReferenceProtocolByName @ 0x1C00EB9E4 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     WPP_SF_DqlD @ 0x1C00565A0 (WPP_SF_DqlD.c)
 */

char __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  char v4; // di
  KIRQL v5; // bp
  unsigned __int16 v6; // cx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v2 = a1 + 32;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  if ( !*(_BYTE *)(v2 + 10) )
  {
    v6 = *(_WORD *)(v2 + 8);
    if ( v6 < 0xFFEBu )
    {
      v4 = 1;
      *(_WORD *)(v2 + 8) = v6 + 1;
      ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 16), a2);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_DqlD(
      v8,
      *(unsigned __int8 *)(v8 + 42),
      a2,
      &v8,
      *(unsigned __int16 *)(v8 + 40),
      *(unsigned __int8 *)(v8 + 42));
  return v4;
}
