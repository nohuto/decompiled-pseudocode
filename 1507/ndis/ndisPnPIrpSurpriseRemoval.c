/*
 * XREFs of ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0
 * Callers:
 *     ndisPnPDispatch @ 0x1C009FAA0 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D3570 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C000E9F0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009A97C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB9A8 (ndisDevicePnPEventNotifyMiniport.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C0085310 >= 4u )
    WPP_SF_qZ(0x29u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2, *(__int64 **)(a2 + 3912));
  NdisTraceLoggingDeviceRemoved((const struct _TlgProvider_t *)a2);
  ndisLogMiniportEvent(a2, 0x24u);
  v8 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 120) |= 4u;
  *(_DWORD *)(a2 + 124) = v8 & 0xFFFEFFEF | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
    && *(_DWORD *)(a2 + 1520) == 1
    && (*(_DWORD *)(a2 + 124) & 0x4000) == 0 )
  {
    ndisDevicePnPEventNotifyMiniport(a2, 2LL, 0LL);
  }
  ndisReferenceMiniportNoCheck(a2, 0x1Bu);
  v9 = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a2 + 1520) = 5;
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(a2 + 33) >= 0x28u )
  {
    *(_QWORD *)(a2 + 5032) = 0LL;
    *(_QWORD *)(a2 + 5048) = ndisQueuedPnPIrpSurpriseRemoval;
    *(_QWORD *)(a2 + 5056) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 5032), CriticalWorkQueue);
  }
  else
  {
    ndisPnPIrpSurpriseRemovalInner((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  if ( a3 )
    *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  result = 0LL;
  *a4 = 0;
  return result;
}
