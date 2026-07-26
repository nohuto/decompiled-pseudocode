/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C0097EE8 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00CD138 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00CD218 (ndisPnPQueryRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00CDE10 (NdisMNetPnPEvent.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C5C8 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C0098194 (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A5754 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // esi
  int *v5; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _QWORD *HigherFilterWithPnpRef; // rax
  _QWORD *v9; // rsi
  unsigned int v10; // edi
  struct _NET_PNP_EVENT_NOTIFICATION v12; // [rsp+20h] [rbp-D8h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  v5 = *(int **)(a3 + 16);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x3Fu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)a1, v3);
  ndisInitializeNetPnPEvent(&v12, 0LL);
  ndisShallowCopyNetPnPEvent(&v12, a3);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_12;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_12;
  if ( !v3 && *v5 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12.Flags |= 1u;
  HigherFilterWithPnpRef = (_QWORD *)ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL);
  v9 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_12:
    v10 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v10 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, &v12);
    ndisDereferenceRef(v9 + 39, 7u);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x40u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)a1);
  return v10;
}
