/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003A9D8 (ndisPnPPortDeactivation.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009A97C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009B2D0 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D39A8 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00D3A88 (ndisPnPQueryRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00D4680 (NdisMNetPnPEvent.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 * Callees:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0017170 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C009B544 (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A1A00 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // esi
  int *v5; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v9; // rsi
  unsigned int v10; // edi
  _BYTE v12[160]; // [rsp+20h] [rbp-D8h] BYREF
  int v13; // [rsp+C0h] [rbp-38h]

  v3 = *(_DWORD *)(a3 + 8);
  v5 = *(int **)(a3 + 16);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x3Fu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)a1, v3);
  ndisInitializeNetPnPEvent(v12, 0LL);
  ndisShallowCopyNetPnPEvent(v12, a3);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_12;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_12;
  if ( !v3 && *v5 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v13 |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL, 7u);
  v9 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_12:
    v10 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v10 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v12);
    ndisDereferenceRef((PKSPIN_LOCK)(v9 + 312), 7u);
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x40u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)a1);
  return v10;
}
