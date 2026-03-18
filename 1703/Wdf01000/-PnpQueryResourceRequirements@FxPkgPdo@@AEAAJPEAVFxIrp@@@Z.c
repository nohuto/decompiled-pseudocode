/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002BF9C
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002E3A0 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0016EB4 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00276AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0031BEC (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00A04D4 (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, FxIrp *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  int _a3; // ebp
  _SINGLE_LIST_ENTRY *i; // r14
  _WDF_OBJECT_ATTRIBUTES *v7; // r8
  unsigned __int8 v8; // r9
  _IRP *m_Irp; // rbx
  FxDeviceBase *m_DeviceBase; // r8
  __int64 _a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  unsigned int v15; // r8d
  int Status; // ebx
  FxIoResReqList *v17; // r14
  FxDeviceBase *v18; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxIoResReqList *pIoResReqList; // [rsp+70h] [rbp+8h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+18h] BYREF

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  pIoResReqList = 0LL;
  _a3 = 0;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_DeviceInterfaceLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_DeviceInterfaceLock->m_OwningThread = KeGetCurrentThread();
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
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
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
    v15 = _a3;
  }
  else
  {
    if ( !this->m_DeviceResourceRequirementsQuery.m_Method )
    {
      m_Irp = Irp->m_Irp;
      Irp->m_Irp->IoStatus.Status = _a3;
      IofCompleteRequest(Irp->m_Irp, 0);
      Irp->m_Irp = 0LL;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
      return (unsigned int)_a3;
    }
    Status = FxIoResReqList::_CreateAndInit(&pIoResReqList, this->m_Globals, v7, v8);
    if ( Status >= 0 )
    {
      v17 = pIoResReqList;
      FxObject::Commit(pIoResReqList, 0LL, (void **)&reqlist, 0LL, 1u);
      v18 = this->m_DeviceBase;
      m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
      v20 = v18->m_ObjectSize;
      if ( m_Method )
      {
        v21 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v20 )
          v21 = 0LL;
        Status = m_Method((WDFDEVICE__ *)v21, reqlist);
      }
      else
      {
        Status = 0;
      }
      if ( Status >= 0 )
      {
        if ( v17->m_Count )
        {
          WdmList = FxIoResReqList::CreateWdmList(v17);
          if ( WdmList )
            Irp->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
          else
            Status = -1073741670;
        }
        else
        {
          Status = Irp->m_Irp->IoStatus.Status;
        }
      }
      v17->DeleteObject(v17);
    }
    v15 = Status;
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, v15);
}
