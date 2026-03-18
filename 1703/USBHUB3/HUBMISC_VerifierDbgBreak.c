/*
 * XREFs of HUBMISC_VerifierDbgBreak @ 0x1C0029B74
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002AA0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003370 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003510 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004168 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x1C00044DC (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C0004640 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C00047CC (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004ACC (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C0005420 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006960 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0007250 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C00073B0 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C40C (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C00118D0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00123D4 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0013BC0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001C5B0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001E650 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0021A00 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C0022638 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C00261F8 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0026280 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogResetTimeout @ 0x1C002A6F4 (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002A990 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x1C002AA30 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_sq @ 0x1C0025F24 (WPP_RECORDER_SF_sq.c)
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
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 2488LL), v4, 3u, 0x55u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !hub_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 2488LL));
      break;
    case 3000:
LABEL_5:
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL), v4, 4u, 0x56u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !port_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL));
      break;
    case 4000:
      WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL), v4, 4u, 0x57u, v7, a1);
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
