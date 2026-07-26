/*
 * XREFs of ndisLogMiniportEvent @ 0x1C0017694
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C000FC80 (ndisSetDevicePowerOnComplete.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010CB0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C005B968 (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C005F28C (ndisMReenumerateFailedAdapterInternal.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00677E0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0068DA0 (ndisSetPowerResumeComplete.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisRequestDeviceLowPower @ 0x1C009BD90 (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpStartDevice @ 0x1C009FF2C (ndisPnPIrpStartDevice.c)
 *     ndisInitializeAdapter @ 0x1C00AC230 (ndisInitializeAdapter.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D49C4 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00D4A98 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00D4C18 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00D4CF4 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     Template_jqxzq @ 0x1C005F59C (Template_jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_dq(147LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2, a1);
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
