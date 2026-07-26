/*
 * XREFs of ndisInitModeTimeoutWorkItem @ 0x1C00AD360
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00AA828 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AD3D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xAu, &WPP_f3fd5fb2e5ac37818b120db3b0dd368d_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols((__int64)a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)a2);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xBu, &WPP_f3fd5fb2e5ac37818b120db3b0dd368d_Traceguids, (__int64)a2);
}
