/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C000C824
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000C890 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C000CCE0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkInvalidateDeviceState @ 0x1C0028564 (DxgkInvalidateDeviceState.c)
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00B4260 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 *     DpiFdoHandleSystemPower @ 0x1C00BC1D0 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C00D7A80 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00D8A20 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoDispatchPnp @ 0x1C00DA410 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00DADF0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleStartDevice @ 0x1C00DF3A0 (DpiPdoHandleStartDevice.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0167580 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0167F30 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0169234 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C016AD10 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C016AE50 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C016B0F0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C016B240 (DpiFdoThermalPassiveCooling.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C016B480 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016B640 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C016D4E0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleStopDevice @ 0x1C016DB60 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C016DD50 (DpiPdoPollingWorkItem.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C016F6B0 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C016F870 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017000C (DpiLdaUnLinkDeviceFromChain.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  bool v2; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2672), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2680));
  v2 = *(_DWORD *)(a1 + 2712) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 2680LL));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 2688), Executive, 0, 0, 0LL);
}
