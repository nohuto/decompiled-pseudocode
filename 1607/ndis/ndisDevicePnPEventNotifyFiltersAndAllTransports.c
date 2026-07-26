/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003F114 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003F694 (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D2E68 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00D2F48 (ndisPnPQueryRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00D3DD0 (NdisMNetPnPEvent.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 * Callees:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0015B70 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C009CE00 (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A8598 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _QWORD *HigherFilterWithPnpRef; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // edi
  struct _NET_PNP_EVENT_NOTIFICATION v11; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x3Fu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)a1, v2);
  ndisInitializeNetPnPEvent(&v11, 0LL);
  ndisShallowCopyNetPnPEvent(&v11, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_11;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_11;
  if ( !v2 && *v4 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v11.Flags |= 1u;
  HigherFilterWithPnpRef = (_QWORD *)ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL);
  v8 = HigherFilterWithPnpRef;
  if ( HigherFilterWithPnpRef )
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, &v11);
    ndisDereferenceRef(v8 + 39, 7u);
  }
  else
  {
LABEL_11:
    v9 = ndisPnPNotifyAllTransports(a1);
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x40u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)a1);
  return v9;
}
