/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0007710 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011B90 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011CC8 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0012DDC (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0013A90 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001F628 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0020C1C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0023194 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0025C18 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0029810 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfCollectionCreate @ 0x1C002CFC0 (imp_WdfCollectionCreate.c)
 *     imp_WdfStringCreate @ 0x1C002D430 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C002DAF0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C00600C0 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063640 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063754 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063964 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x1C0065BB0 (imp_WdfChildListCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C00683E8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0072FD0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x1C00737A0 (imp_WdfMemoryCreateFromLookaside.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C00742C0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0074580 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0076AA0 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007D2B0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007E8E0 (imp_WdfIoResourceListCreate.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0086364 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0086910 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 */

__int64 __fastcall FxObject::Commit(
        FxObject *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ObjectHandle,
        FxObject *Parent,
        unsigned __int8 AssignDriverAsDefaultParent)
{
  int v5; // r15d
  unsigned __int64 flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v12; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v14; // r12
  KIRQL v15; // al
  unsigned __int16 v16; // dx
  KIRQL v17; // r13
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  unsigned __int16 m_ObjectSize; // ax
  char *v21; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  void *v24; // rbx
  unsigned __int64 globals; // rbp
  __int64 v27; // rcx
  FxObject_vtbl *v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // r8d
  unsigned __int16 v31; // r9
  KIRQL v32; // al
  const void *v33; // rcx
  const void *v34; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  FxObject **v36; // [rsp+50h] [rbp-38h] BYREF
  __int16 v37; // [rsp+58h] [rbp-30h]
  __int16 v38; // [rsp+5Ah] [rbp-2Eh]
  FxObject *v39; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  flags = 0LL;
  v39 = 0LL;
  if ( !this->m_ObjectSize )
    return 3221225480LL;
  if ( Attributes && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    v32 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v32);
    flags = (unsigned __int64)v39;
  }
  if ( Parent )
  {
    flags = (unsigned __int64)Parent;
    v39 = Parent;
  }
  else if ( Attributes && (globals = (unsigned __int64)Attributes->ParentObject) != 0 )
  {
    flags = ~globals & 0xFFFFFFFFFFFFFFF8uLL;
    LOWORD(v27) = 0;
    if ( (globals & 1) != 0 )
    {
      v27 = *(unsigned __int16 *)flags;
      flags -= v27;
    }
    if ( *(_WORD *)(flags + 8) == 4096 )
    {
      v39 = (FxObject *)flags;
    }
    else
    {
      v39 = 0LL;
      v36 = &v39;
      v28 = *(FxObject_vtbl **)flags;
      v38 = v27;
      v37 = 4096;
      if ( v28->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&v36) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *(_FX_DRIVER_GLOBALS **)(flags + 16),
          v29,
          v30,
          v31,
          traceGuid,
          (const void *)globals,
          0x1000u,
          (const void *)flags,
          *(unsigned __int16 *)(flags + 8));
        FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, globals, 0x1000uLL);
      }
      flags = (unsigned __int64)v39;
    }
  }
  else if ( AssignDriverAsDefaultParent )
  {
    if ( !this->m_ParentObject )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->Driver != this )
      {
        flags = (unsigned __int64)m_Globals->Driver;
        v39 = (FxObject *)flags;
      }
    }
  }
  if ( !flags )
    goto LABEL_20;
  v12 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v14 = v12;
  if ( m_ObjectState != 1 )
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      if ( this->m_ObjectSize )
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v33 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v33, m_ObjectState, 0);
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
    return (unsigned int)-1073741738;
  }
  if ( this->m_ParentObject )
  {
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v12);
    return (unsigned int)-1071644147;
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(flags + 56));
  v16 = *(_WORD *)(flags + 26);
  v17 = v15;
  if ( v16 == 1 )
  {
    v18 = *(_LIST_ENTRY **)(flags + 40);
    p_m_ChildEntry = &this->m_ChildEntry;
    this->m_ChildEntry.Flink = (_LIST_ENTRY *)(flags + 32);
    this->m_ChildEntry.Blink = v18;
    if ( v18->Flink != (_LIST_ENTRY *)(flags + 32) )
      __fastfail(3u);
    v18->Flink = p_m_ChildEntry;
    *(_QWORD *)(flags + 40) = p_m_ChildEntry;
    if ( !this->m_DeviceBase )
      this->m_DeviceBase = *(FxDeviceBase **)(flags + 96);
    KeReleaseSpinLock((PKSPIN_LOCK)(flags + 56), v17);
    this->m_ParentObject = (FxObject *)flags;
  }
  else
  {
    if ( (*(_WORD *)(flags + 24) & 0x200) != 0 )
    {
      if ( *(_WORD *)(flags + 10) )
        v34 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v34 = 0LL;
      WPP_IFR_SF_qqLL(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        4u,
        0x14u,
        0xBu,
        WPP_FxObject_hpp_Traceguids,
        (const void *)flags,
        v34,
        v16,
        1u);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(flags + 56), v17);
    v5 = -1073741738;
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
  if ( v5 < 0 )
    return (unsigned int)v5;
LABEL_20:
  if ( Attributes )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize )
      v21 = (char *)this + m_ObjectSize;
    else
      v21 = 0LL;
    EvtDestroyCallback = Attributes->EvtDestroyCallback;
    if ( EvtDestroyCallback )
      *((_QWORD *)v21 + 3) = EvtDestroyCallback;
    EvtCleanupCallback = Attributes->EvtCleanupCallback;
    if ( EvtCleanupCallback )
    {
      *((_QWORD *)v21 + 2) = EvtCleanupCallback;
      this->m_ObjectFlags |= 0x400u;
    }
  }
  this->m_ObjectFlags |= 8u;
  if ( this->m_ObjectSize )
    v24 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v24 = 0LL;
  if ( ObjectHandle )
    *ObjectHandle = v24;
  return 0LL;
}
