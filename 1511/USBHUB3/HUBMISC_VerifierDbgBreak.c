/*
 * XREFs of HUBMISC_VerifierDbgBreak @ 0x1C00275A4
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C00029C0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003260 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C00033F0 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004014 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x1C0004340 (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C00044A0 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004628 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C00048D0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00051C4 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006680 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0006F30 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0007070 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010790 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00112B0 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012A40 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001A7C0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001C5B0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C001F800 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C0020404 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C0023D0C (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0023D90 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogResetTimeout @ 0x1C0027DFC (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0028080 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x1C0028110 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0062160 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_sq @ 0x1C0023A54 (WPP_RECORDER_SF_sq.c)
 */

BOOLEAN __fastcall HUBMISC_VerifierDbgBreak(const char *a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  BOOLEAN result; // al
  int v7; // [rsp+20h] [rbp-28h]

  DbgPrint("USB Hardware Verifier Break for %s\n", a1);
  v5 = *(_DWORD *)(a2 + 984);
  switch ( v5 )
  {
    case 2000:
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 2464LL), v4, 3u, 0x52u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !hub_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 2464LL));
      break;
    case 3000:
LABEL_5:
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL), v4, 4u, 0x53u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !port_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL));
      break;
    case 4000:
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL), v4, 4u, 0x54u, v7, a1);
      DbgPrint(
        "Run !rcdrlogdump usbhub3 -a 0x%p, !device_info 0x%p\n",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL));
      break;
    case 5000:
      goto LABEL_5;
    default:
      break;
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
    __debugbreak();
  return result;
}
