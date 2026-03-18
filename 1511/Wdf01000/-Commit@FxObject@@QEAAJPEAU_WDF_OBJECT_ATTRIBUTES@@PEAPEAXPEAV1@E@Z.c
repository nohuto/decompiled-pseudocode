/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001A10 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011DD0 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011F08 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00186C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0019370 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0022D9C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     imp_WdfSpinLockCreate @ 0x1C0023660 (imp_WdfSpinLockCreate.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0023B6C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00240C4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0024670 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C00248C0 (imp_WdfCollectionCreate.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C00254A8 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfStringCreate @ 0x1C00278F0 (imp_WdfStringCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002A650 (imp_WdfDmaEnablerCreate.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C002E058 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C002EB90 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0031FE4 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0034CF0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x1C00353E0 (imp_WdfMemoryCreateFromLookaside.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0059580 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005C780 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005C8A4 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005CA5C (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x1C005E9B0 (imp_WdfChildListCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C00609E0 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0067450 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C00681E0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C00685B0 (imp_WdfLookasideListCreate.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0069060 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C00692DC (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0069FB4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C006B670 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0071140 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0071350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfIoResourceListCreate @ 0x1C0071DA0 (imp_WdfIoResourceListCreate.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0077CD4 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0078200 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007B05C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B404 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B624 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::Commit(
        FxObject *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ObjectHandle,
        FxObject *Parent,
        unsigned __int8 AssignDriverAsDefaultParent)
{
  int v5; // r15d
  FxObject *flags; // rdi
  unsigned __int64 globals; // rbp
  __int64 v12; // rcx
  FxObject_vtbl *v13; // rax
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  KIRQL v17; // al
  KIRQL v18; // r12
  KIRQL v19; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  unsigned __int16 m_ObjectSize; // ax
  char *v23; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  void *v26; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v29; // al
  const _GUID *v30; // [rsp+20h] [rbp-68h]
  FxObject **v31; // [rsp+50h] [rbp-38h] BYREF
  __int16 v32; // [rsp+58h] [rbp-30h]
  __int16 v33; // [rsp+5Ah] [rbp-2Eh]
  FxObject *v34; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  flags = 0LL;
  v34 = 0LL;
  if ( !this->m_ObjectSize )
    return 3221225480LL;
  if ( Attributes && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    v29 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v29);
    flags = v34;
  }
  if ( Parent )
  {
    flags = Parent;
    v34 = Parent;
  }
  else if ( Attributes && (globals = (unsigned __int64)Attributes->ParentObject) != 0 )
  {
    flags = (FxObject *)(~globals & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v12) = 0;
    if ( (globals & 1) != 0 )
    {
      v12 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v12);
    }
    if ( flags->m_Type == 4096 )
    {
      v34 = flags;
    }
    else
    {
      v34 = 0LL;
      v31 = &v34;
      v13 = flags->__vftable;
      v33 = v12;
      v32 = 4096;
      if ( v13->QueryInterface(flags, (FxQueryInterfaceParams *)&v31) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v14, v15, v16, v30, (const void *)globals, 0x1000u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, globals, 0x1000uLL);
      }
      flags = v34;
    }
  }
  else if ( AssignDriverAsDefaultParent )
  {
    if ( !this->m_ParentObject )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->Driver != this )
      {
        flags = m_Globals->Driver;
        v34 = flags;
      }
    }
  }
  if ( !flags )
    goto LABEL_22;
  v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v18 = v17;
  if ( this->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
    return (unsigned int)-1073741738;
  }
  if ( this->m_ParentObject )
  {
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v17);
    return (unsigned int)-1071644147;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
  if ( flags->m_ObjectState == 1 )
  {
    Blink = flags->m_ChildListHead.Blink;
    p_m_ChildEntry = &this->m_ChildEntry;
    this->m_ChildEntry.Flink = &flags->m_ChildListHead;
    this->m_ChildEntry.Blink = Blink;
    if ( Blink->Flink != &flags->m_ChildListHead )
      __fastfail(3u);
    Blink->Flink = p_m_ChildEntry;
    flags->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !this->m_DeviceBase )
      this->m_DeviceBase = flags->m_DeviceBase;
    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v19);
    this->m_ParentObject = flags;
  }
  else
  {
    FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v19);
    v5 = -1073741738;
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
  if ( v5 < 0 )
    return (unsigned int)v5;
LABEL_22:
  if ( Attributes )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize )
      v23 = (char *)this + m_ObjectSize;
    else
      v23 = 0LL;
    EvtDestroyCallback = Attributes->EvtDestroyCallback;
    if ( EvtDestroyCallback )
      *((_QWORD *)v23 + 3) = EvtDestroyCallback;
    EvtCleanupCallback = Attributes->EvtCleanupCallback;
    if ( EvtCleanupCallback )
    {
      *((_QWORD *)v23 + 2) = EvtCleanupCallback;
      this->m_ObjectFlags |= 0x400u;
    }
  }
  this->m_ObjectFlags |= 8u;
  if ( this->m_ObjectSize )
    v26 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v26 = 0LL;
  if ( ObjectHandle )
    *ObjectHandle = v26;
  return 0LL;
}
