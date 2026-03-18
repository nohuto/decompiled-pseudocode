/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001110 (imp_WdfTimerStop.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C00012C0 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0001350 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfTimerStart @ 0x1C0001560 (imp_WdfTimerStart.c)
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     imp_WdfRegistryQueryValue @ 0x1C00036B0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C00038C0 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRequestGetParameters @ 0x1C00039B0 (imp_WdfRequestGetParameters.c)
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     imp_WdfSpinLockAcquire @ 0x1C0003E00 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0003EB0 (imp_WdfSpinLockRelease.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003F50 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C0004070 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C00040C0 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0004130 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfCollectionGetItem @ 0x1C0004320 (imp_WdfCollectionGetItem.c)
 *     imp_WdfWaitLockAcquire @ 0x1C0004410 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfTimerGetParentObject @ 0x1C00044F0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWaitLockRelease @ 0x1C0004870 (imp_WdfWaitLockRelease.c)
 *     imp_WdfCollectionGetCount @ 0x1C00048E0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0004970 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0004A90 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0004CE0 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfInterruptGetDevice @ 0x1C0004D50 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfIoQueueGetState @ 0x1C0005010 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C00050C0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfRequestSetInformation @ 0x1C0005120 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C00051A0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00059B0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0005C00 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0006160 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestGetFileObject @ 0x1C0006650 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00068C0 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0006980 (imp_WdfRequestComplete.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     FxIoTargetFormatIoctl @ 0x1C0011C80 (FxIoTargetFormatIoctl.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0019010 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfWorkItemCreate @ 0x1C001BCD0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfObjectCreate @ 0x1C001C530 (imp_WdfObjectCreate.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0022070 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     FxIoTargetSendIoctl @ 0x1C00287A0 (FxIoTargetSendIoctl.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0033C60 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRequestReuse @ 0x1C0034B40 (imp_WdfRequestReuse.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00358B0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0036720 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0036D80 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0037260 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0037880 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfRequestGetStatus @ 0x1C0037A80 (imp_WdfRequestGetStatus.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0037B00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfIoQueueCreate @ 0x1C0037D20 (imp_WdfIoQueueCreate.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C0038120 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1C0038DD0 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x1C0038E20 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C007FEE0 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
