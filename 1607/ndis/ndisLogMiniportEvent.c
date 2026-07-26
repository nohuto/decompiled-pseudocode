/*
 * XREFs of ndisLogMiniportEvent @ 0x1C001A108
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012780 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012970 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C005F518 (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0062BCC (ndisMReenumerateFailedAdapterInternal.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006B9B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C006C890 (ndisSetPowerResumeComplete.c)
 *     ndisRequestDeviceLowPower @ 0x1C009C64C (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpStartDevice @ 0x1C009DE9C (ndisPnPIrpStartDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisInitializeAdapter @ 0x1C00AC974 (ndisInitializeAdapter.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D4114 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00D41E8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00D4368 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00D4444 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     Template_jqxzq @ 0x1C0062EEC (Template_jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_dq(148LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (Microsoft_Windows_NDISEnableBits & 0x80000000000LL) == 0 )
      return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4536));
    v5 = &MiniportFatalError;
LABEL_9:
    Template_jqxzq(
      *(_QWORD *)(a1 + 3912),
      v5,
      a1 + 4064,
      a1 + 4064,
      *(_DWORD *)(a1 + 4112),
      *(_QWORD *)(a1 + 4080),
      *(_QWORD *)(*(_QWORD *)(a1 + 3912) + 8LL),
      a2);
    return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4536));
  }
  if ( (Microsoft_Windows_NDISEnableBits & 0x40000000000LL) != 0 )
  {
    v5 = &MiniportEvent;
    goto LABEL_9;
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4536));
}
