/*
 * XREFs of WPP_SF_qZ @ 0x1C004ACEC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0067690 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00677E0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0068E90 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0069890 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006A778 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C006A9F0 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPIrpStartDevice @ 0x1C009FF2C (ndisPnPIrpStartDevice.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisQueryGuidDataSize @ 0x1C00A835C (ndisQueryGuidDataSize.c)
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00CDDB0 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CE160 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00D0150 (NdisDeregisterProtocolDriver.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D49C4 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00D4A98 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00D4C18 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00D4CF4 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ndisWmiFindInstanceName @ 0x1C00D6308 (ndisWmiFindInstanceName.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     NdisDeregisterProtocol @ 0x1C00F3570 (NdisDeregisterProtocol.c)
 *     ndisMShutdownMiniport @ 0x1C00F4FCC (ndisMShutdownMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZ(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  if ( a4 && a4[1] )
    v4 = *(unsigned __int16 *)a4;
  else
    v4 = 10LL;
  if ( !a4 || (v5 = (const wchar_t *)a4[1]) == 0LL )
    v5 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00241B0;
  ndisWppFastTraceMessage(a2, a1, &v6, 8LL, a4, 2LL, v5, v4, 0LL);
}
