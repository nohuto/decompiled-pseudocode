/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C180
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002C9F0 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0014D44 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0015954 (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0027938 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C009BA1C (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, _FX_DRIVER_GLOBALS *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  NTSTATUS _a3; // ebp
  _SINGLE_LIST_ENTRY *i; // rsi
  _WDF_OBJECT_ATTRIBUTES *v7; // r8
  unsigned __int8 v8; // r9
  _IRP *Flink; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  __int64 _a2; // rcx
  const void *_a1; // rax
  unsigned int v14; // r8d
  int v15; // ebx
  FxIoResReqList *v16; // rsi
  FxDeviceBase *v17; // rcx
  unsigned __int64 v18; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxIoResReqList *pIoResReqList; // [rsp+70h] [rbp+8h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+18h] BYREF

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  pIoResReqList = 0LL;
  _a3 = 0;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, Irp, 0LL);
  LOBYTE(this->m_DeviceBase[1].m_ChildEntry.Blink) = 1;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( i[-1].Next )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)&i[-2]);
      i[-2].Next = 0LL;
      i[-1].Next = 0LL;
    }
    _a3 = FxDeviceInterface::Register((FxDeviceInterface *)&i[-6], this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    if ( _a3 < 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdoKM_cpp_Traceguids, _a1, _a2, _a3);
      break;
    }
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( _a3 < 0 )
  {
    v14 = _a3;
  }
  else
  {
    if ( !this->m_DeviceResourceRequirementsQuery.m_Method )
    {
      Flink = (_IRP *)Irp->Linkage.Flink;
      LODWORD(Irp->Linkage.Flink[3].Flink) = _a3;
      IofCompleteRequest((PIRP)Irp->Linkage.Flink, 0);
      Irp->Linkage.Flink = 0LL;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Flink, 0x20u);
      return (unsigned int)_a3;
    }
    v15 = FxIoResReqList::_CreateAndInit(&pIoResReqList, this->m_Globals, v7, v8);
    if ( v15 >= 0 )
    {
      v16 = pIoResReqList;
      FxObject::Commit(pIoResReqList, 0LL, (void **)&reqlist, 0LL, 1u);
      v17 = this->m_DeviceBase;
      if ( v17->m_ObjectSize )
        v18 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v18 = 0LL;
      m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
      if ( m_Method )
        v15 = m_Method((WDFDEVICE__ *)v18, reqlist);
      else
        v15 = 0;
      if ( v15 >= 0 )
      {
        if ( v16->m_Count )
        {
          WdmList = FxIoResReqList::CreateWdmList(v16);
          if ( WdmList )
            Irp->Linkage.Flink[3].Blink = (_LIST_ENTRY *)WdmList;
          else
            v15 = -1073741670;
        }
        else
        {
          v15 = (int)Irp->Linkage.Flink[3].Flink;
        }
      }
      v16->DeleteObject(v16);
    }
    v14 = v15;
  }
  return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, v14);
}
