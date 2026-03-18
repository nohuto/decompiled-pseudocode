/*
 * XREFs of ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C000A06C (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C000C430 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000D780 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FEE4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0010330 (imp_WdfPdoInitAddCompatibleID.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001088C (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00142DC (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxObject@@IEAA@GGPEAU_FX_DRIVER_GLOBALS@@W4FxObjectType@@@Z @ 0x1C00156DC (--0FxObject@@IEAA@GGPEAU_FX_DRIVER_GLOBALS@@W4FxObjectType@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001576C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0017710 (imp_WdfRegistryOpenKey.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C001C620 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C001D9A0 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00242B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C007A938 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

void __fastcall FxObject::Vf_VerifyConstruct(
        FxObject *this,
        _FX_DRIVER_GLOBALS *Embedded,
        unsigned __int8 FxDriverGlobals)
{
  if ( this->m_Globals->FxVerifierHandle )
  {
    if ( !FxDriverGlobals )
    {
      this->m_ObjectFlags |= 0x80u;
      this[-1].m_DisposeSingleEntry.Next = 0LL;
      LODWORD(this[-1].m_DeviceBase) = 0;
      LOBYTE(this[-1].m_DisposeSingleEntry.Next) = 1;
      FxObject::AllocateTagTracker(this, this->m_Type);
    }
  }
}
