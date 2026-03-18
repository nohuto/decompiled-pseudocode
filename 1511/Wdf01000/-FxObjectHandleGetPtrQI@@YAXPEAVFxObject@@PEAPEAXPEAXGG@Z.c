/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8
 * Callers:
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001320 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRequestGetParameters @ 0x1C0001410 (imp_WdfRequestGetParameters.c)
 *     imp_WdfTimerStop @ 0x1C0001500 (imp_WdfTimerStop.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C00016A0 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0001790 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfSpinLockAcquire @ 0x1C0002000 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C00020B0 (imp_WdfSpinLockRelease.c)
 *     imp_WdfTimerStart @ 0x1C0002260 (imp_WdfTimerStart.c)
 *     imp_WdfRegistryClose @ 0x1C0002550 (imp_WdfRegistryClose.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C00025E0 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0002650 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfCollectionGetItem @ 0x1C00026C0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C0002AB0 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfCollectionGetCount @ 0x1C0002B70 (imp_WdfCollectionGetCount.c)
 *     imp_WdfWaitLockAcquire @ 0x1C0002C00 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0002CE0 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0002F90 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0003000 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfWaitLockRelease @ 0x1C0003250 (imp_WdfWaitLockRelease.c)
 *     imp_WdfInterruptGetDevice @ 0x1C00032C0 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfIoQueueGetState @ 0x1C0003330 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C00033E0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfRequestSetInformation @ 0x1C0003660 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C0003750 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0003820 (imp_WdfFileObjectGetDevice.c)
 *     FxIoTargetFormatIoctl @ 0x1C00047E0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0005380 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0005440 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestComplete @ 0x1C0005560 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0005620 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRegistryQueryValue @ 0x1C000BB90 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRequestGetFileObject @ 0x1C000D010 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C001ABE0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfIoQueueCreate @ 0x1C001D870 (imp_WdfIoQueueCreate.c)
 *     imp_WdfRequestReuse @ 0x1C0022160 (imp_WdfRequestReuse.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C002B250 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C002C4F0 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002CFB0 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C002DA10 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfRequestGetStatus @ 0x1C002DAE0 (imp_WdfRequestGetStatus.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C002E3A0 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C002F890 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1C002FE20 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x1C002FE70 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
