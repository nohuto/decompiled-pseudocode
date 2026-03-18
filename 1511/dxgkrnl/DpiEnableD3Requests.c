/*
 * XREFs of DpiEnableD3Requests @ 0x1C000B7B0
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0079F0C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00B9580 (DpiGetDxgAdapterSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00C3B20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00C9644 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStartDevice @ 0x1C00CDD30 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00CEAC8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00D02D0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoDispatchPnp @ 0x1C00E6FF0 (DpiFdoDispatchPnp.c)
 *     DpiPdoHandleStartDevice @ 0x1C00EA070 (DpiPdoHandleStartDevice.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C016BC30 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C016C8D0 (DpiFdoInvalidateChildWorkItem.c)
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
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0173EE0 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01740A0 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017483C (DpiLdaUnLinkDeviceFromChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedDecrement((volatile signed __int32 *)(result + 2720));
  return result;
}
