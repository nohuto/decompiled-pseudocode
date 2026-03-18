/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C000EA98
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000EDF0 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C000F200 (DpiEnterSystemDisplay.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C002AB74 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C002F484 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiPdoHandleStatusIndication @ 0x1C002F8D0 (DpiPdoHandleStatusIndication.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00D8440 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C00D85F0 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00DF320 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DF444 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C00DFB38 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDispatchPnp @ 0x1C00F8480 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00F8690 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoHandleStartDevice @ 0x1C00F8A00 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00FB6D8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C00FC930 (DpiPdoHandleStartDevice.c)
 *     DpiPollDisplayChildren @ 0x1C0193460 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01948A0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0195330 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01961C8 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0196380 (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C01998F0 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C0199A40 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C0199B70 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0199DD0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0199F20 (DpiFdoThermalPassiveCooling.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C019B8E0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleStopDevice @ 0x1C019C000 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C019C1F0 (DpiPdoPollingWorkItem.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C019DAFC (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C019E24C (DpiLdaUnLinkDeviceFromChain.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C0010C28 (DpiRequestDevicePowerState.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  bool v2; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3864), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3872LL));
  v2 = *(_DWORD *)(a1 + 3928) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL) + 3872LL));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 3880), Executive, 0, 0, 0LL);
}
