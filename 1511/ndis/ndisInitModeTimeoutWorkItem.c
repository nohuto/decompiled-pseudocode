/*
 * XREFs of ndisInitModeTimeoutWorkItem @ 0x1C00A96D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A9740 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0xAu, &WPP_ae5fc3bcf975bfa51711a086aa3de00d_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols((__int64)a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)a2, 0x15u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0xBu, &WPP_ae5fc3bcf975bfa51711a086aa3de00d_Traceguids, (__int64)a2);
}
