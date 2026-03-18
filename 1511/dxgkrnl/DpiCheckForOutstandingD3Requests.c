/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C000DC2C
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000D340 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C000D830 (DpiEnterSystemDisplay.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     DxgkInvalidateDeviceState @ 0x1C0028124 (DxgkInvalidateDeviceState.c)
 *     DpiPdoHandleStatusIndication @ 0x1C0028470 (DpiPdoHandleStatusIndication.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00C3B20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00C9644 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleStartDevice @ 0x1C00CDD30 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00CEAC8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00D02D0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoDispatchPnp @ 0x1C00E6FF0 (DpiFdoDispatchPnp.c)
 *     DpiPdoHandleStartDevice @ 0x1C00EA070 (DpiPdoHandleStartDevice.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C016BC30 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C016D9B4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C016F520 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C016F660 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C016F900 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C016FA50 (DpiFdoThermalPassiveCooling.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C016FC90 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016FE50 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleStopDevice @ 0x1C0172370 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C0172580 (DpiPdoPollingWorkItem.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01740A0 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017483C (DpiLdaUnLinkDeviceFromChain.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  bool v2; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2712), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2720));
  v2 = *(_DWORD *)(a1 + 2776) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 2720LL));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 2728), Executive, 0, 0, 0LL);
}
