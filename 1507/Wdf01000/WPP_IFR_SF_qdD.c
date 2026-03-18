/*
 * XREFs of WPP_IFR_SF_qdd @ 0x1C0067ED4
 * Callers:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00064C4 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C000A660 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0010330 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0016660 (imp_WdfRegistryQueryValue.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0017710 (imp_WdfRegistryOpenKey.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0020590 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C00215BC (FxIoTargetValidateOpenParams.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDeviceQueryProperty @ 0x1C0025A30 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0025B20 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0028290 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0028620 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0028DE0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryULong @ 0x1C002B090 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C002B220 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C002B500 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002B800 (imp_WdfPdoInitAddHardwareID.c)
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002B930 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C002C6C0 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C002C9A0 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfRegistryAssignValue @ 0x1C002CAB0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C002CBA0 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C002D230 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C002D330 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfStringCreate @ 0x1C002D430 (imp_WdfStringCreate.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C002E140 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C002E2F0 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C002E4E0 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C002FEB0 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceListRemove @ 0x1C0030260 (imp_WdfIoResourceListRemove.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0032CBC (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C006A3B0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C006B9D0 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C006BFC0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceGetDeviceState @ 0x1C0071210 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0071D60 (imp_WdfDeviceSetDeviceState.c)
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C0072100 (imp_WdfDeviceStopIdleNoTrack.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0073CF0 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C00742C0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0074580 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C007C360 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C007C6C0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C007CA60 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C007CD20 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C007CF60 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007D2B0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C007DA70 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C007DF40 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfCmResourceListRemove @ 0x1C007E5F0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C007EC40 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C007F950 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0082D70 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x1C0083150 (imp_WdfIoTargetQueryTargetProperty.c)
 *     imp_WdfUsbTargetDeviceGetInterface @ 0x1C00874E0 (imp_WdfUsbTargetDeviceGetInterface.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C0087670 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0089670 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089A00 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A990 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008ACC0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     imp_WdfInterruptGetInfo @ 0x1C0098540 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C00989E0 (imp_WdfInterruptSetExtendedPolicy.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009D8D0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qdd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        int _a2,
        int _a3)
{
  int v12; // eax
  unsigned __int64 v13; // rbx

  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (flags - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        4LL,
        &_a3,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 4LL, &_a3, 4LL, 0LL);
}
