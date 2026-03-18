/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001920 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRequestCreate @ 0x1C0002A20 (imp_WdfRequestCreate.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0014998 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0014EC8 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfStringCreate @ 0x1C00164A0 (imp_WdfStringCreate.c)
 *     imp_WdfDriverCreate @ 0x1C00173E0 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C0019200 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019450 (imp_WdfSpinLockCreate.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0019EB0 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001A21C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001AB44 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001BAE0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001CCA0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0029A3C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002A4C4 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C180 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C290 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002D380 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C002F690 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0030700 (imp_WdfDmaEnablerCreate.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00362C0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00398D0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x1C003A110 (imp_WdfMemoryCreateFromLookaside.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0066580 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0068760 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0069B8C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006A244 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x1C006C0B0 (imp_WdfChildListCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006D050 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0073A30 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x1C0076A70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0076EC0 (imp_WdfDeviceMiniportCreate.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077C40 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077EBC (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0078764 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0079E50 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007EC40 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007FBB0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007FDC0 (imp_WdfRegistryQueryMemory.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0087144 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0087670 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008B16C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B514 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B734 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
  __int64 (__fastcall *QueryInterface)(FxDevice *, FxQueryInterfaceParams *); // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v19; // al
  KIRQL v20; // r12
  KIRQL v21; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v25; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  void *v28; // rbx
  KIRQL v30; // al
  const _GUID *v31; // [rsp+20h] [rbp-68h]
  FxObject **v32; // [rsp+50h] [rbp-38h] BYREF
  __int16 v33; // [rsp+58h] [rbp-30h]
  __int16 v34; // [rsp+5Ah] [rbp-2Eh]
  FxObject *v35; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  flags = 0LL;
  v35 = 0LL;
  if ( !this->m_ObjectSize )
    return 3221225480LL;
  if ( Attributes && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    v30 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v30);
    flags = v35;
  }
  if ( Parent )
  {
    flags = Parent;
    v35 = Parent;
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
      v35 = flags;
    }
    else
    {
      v35 = 0LL;
      v32 = &v35;
      v13 = flags->__vftable;
      v34 = v12;
      v33 = 4096;
      QueryInterface = (__int64 (__fastcall *)(FxDevice *, FxQueryInterfaceParams *))v13->QueryInterface;
      if ( QueryInterface == FxDevice::QueryInterface )
      {
        v35 = flags;
      }
      else
      {
        if ( (int)QueryInterface((FxDevice *)flags, (FxQueryInterfaceParams *)&v32) < 0 )
        {
          WPP_IFR_SF_qDqD(flags->m_Globals, v15, v16, v17, v31, (const void *)globals, 0x1000u, flags, flags->m_Type);
          FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, globals, 0x1000uLL);
        }
        flags = v35;
      }
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
        v35 = flags;
      }
    }
  }
  if ( flags )
  {
    v19 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    v20 = v19;
    if ( this->m_ObjectState == 1 )
    {
      if ( this->m_ParentObject )
      {
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
        return (unsigned int)-1071644147;
      }
      else
      {
        v21 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
        if ( flags->m_ObjectState == 1 )
        {
          Blink = flags->m_ChildListHead.Blink;
          p_m_ChildEntry = &this->m_ChildEntry;
          if ( Blink->Flink != &flags->m_ChildListHead )
            __fastfail(3u);
          p_m_ChildEntry->Flink = &flags->m_ChildListHead;
          this->m_ChildEntry.Blink = Blink;
          Blink->Flink = p_m_ChildEntry;
          flags->m_ChildListHead.Blink = p_m_ChildEntry;
          if ( !this->m_DeviceBase )
            this->m_DeviceBase = flags->m_DeviceBase;
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v21);
          this->m_ParentObject = flags;
        }
        else
        {
          FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v21);
          v5 = -1073741738;
        }
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
        if ( v5 >= 0 )
          goto LABEL_27;
      }
    }
    else
    {
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
      return (unsigned int)-1073741738;
    }
    return (unsigned int)v5;
  }
LABEL_27:
  if ( Attributes )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize )
      v25 = (char *)this + m_ObjectSize;
    else
      v25 = 0LL;
    EvtDestroyCallback = Attributes->EvtDestroyCallback;
    if ( EvtDestroyCallback )
      *((_QWORD *)v25 + 3) = EvtDestroyCallback;
    EvtCleanupCallback = Attributes->EvtCleanupCallback;
    if ( EvtCleanupCallback )
    {
      *((_QWORD *)v25 + 2) = EvtCleanupCallback;
      this->m_ObjectFlags |= 0x400u;
    }
  }
  this->m_ObjectFlags |= 8u;
  if ( this->m_ObjectSize )
    v28 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v28 = 0LL;
  if ( ObjectHandle )
    *ObjectHandle = v28;
  return 0LL;
}
