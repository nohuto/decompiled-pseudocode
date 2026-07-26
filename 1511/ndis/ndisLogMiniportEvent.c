/*
 * XREFs of ndisLogMiniportEvent @ 0x1C00194EC
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012E30 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012FB0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C005B6D8 (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C005EBEC (ndisMReenumerateFailedAdapterInternal.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00668B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0067E70 (ndisSetPowerResumeComplete.c)
 *     ndisRequestDeviceLowPower @ 0x1C0097E18 (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPIrpStartDevice @ 0x1C009BC58 (ndisPnPIrpStartDevice.c)
 *     ndisInitializeAdapter @ 0x1C00AA8C4 (ndisInitializeAdapter.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00CE154 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00CE228 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00CE3A8 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00CE484 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00CE52C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     Template_jqxzq @ 0x1C005EEFC (Template_jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_dq(147LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a2, a1);
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
