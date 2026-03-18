/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001000 (imp_WdfTimerStop.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C00011A0 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0001230 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfRegistryQueryValue @ 0x1C00023F0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0002700 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0002A20 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestGetFileObject @ 0x1C0002EA0 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestComplete @ 0x1C0003100 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00031C0 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003280 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     FxIoTargetFormatIoctl @ 0x1C000E7B0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestSend @ 0x1C000EAA0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestGetParameters @ 0x1C000F140 (imp_WdfRequestGetParameters.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C000FC30 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfSpinLockAcquire @ 0x1C000FC80 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfTimerStart @ 0x1C000FE40 (imp_WdfTimerStart.c)
 *     imp_WdfSpinLockRelease @ 0x1C00103A0 (imp_WdfSpinLockRelease.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C0010440 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C00104B0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00105C0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfCollectionGetItem @ 0x1C0010AE0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0010BD0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWaitLockAcquire @ 0x1C0010D20 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfCollectionGetCount @ 0x1C0010E00 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0010E90 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfWaitLockRelease @ 0x1C0010F00 (imp_WdfWaitLockRelease.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0011010 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0011080 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfInterruptGetDevice @ 0x1C00112D0 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfIoQueueGetState @ 0x1C0011340 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C00115A0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfRequestSetInformation @ 0x1C0011670 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C00116F0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestReuse @ 0x1C001AF10 (imp_WdfRequestReuse.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfIoQueueCreate @ 0x1C001C5E0 (imp_WdfIoQueueCreate.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C001E740 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C002F690 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C00314A0 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031BB0 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0032190 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0032490 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0033080 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0033300 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0033880 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfRequestGetStatus @ 0x1C0033C90 (imp_WdfRequestGetStatus.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C0034260 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1C0034970 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x1C00349C0 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxObjectHandleGetPtrQI(
        FxObject *Object,
        void **PPObject,
        void *Handle,
        unsigned __int16 Type,
        unsigned __int16 Offset)
{
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxQueryInterfaceParams params; // [rsp+50h] [rbp-18h] BYREF

  *PPObject = 0LL;
  params.Object = PPObject;
  params.Type = Type;
  params.Offset = Offset;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, Type, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, Type);
  }
}
