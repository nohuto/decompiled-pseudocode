/*
 * XREFs of DpiEnableD3Requests @ 0x1C0005A7C
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00949E0 (DpiGetDxgAdapterSafe.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00B4260 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 *     DpiFdoHandleSystemPower @ 0x1C00BC1D0 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStartDevice @ 0x1C00D7A80 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00D8A20 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoDispatchPnp @ 0x1C00DA410 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00DADF0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPdoHandleStartDevice @ 0x1C00DF3A0 (DpiPdoHandleStartDevice.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0167580 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0167F30 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01681A0 (DpiFdoInvalidateChildWorkItem.c)
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
 *     <none>
 */

__int64 __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedDecrement((volatile signed __int32 *)(result + 2680));
  return result;
}
