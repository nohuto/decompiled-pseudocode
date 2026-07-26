/*
 * XREFs of ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D29F0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0012C54 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(0x29u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
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
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
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
