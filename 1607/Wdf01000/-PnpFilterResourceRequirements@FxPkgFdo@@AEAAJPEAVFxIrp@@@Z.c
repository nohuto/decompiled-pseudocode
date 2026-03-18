/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0029A3C
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002C4F0 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0014578 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0014D44 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0024C4C (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 *     ?Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z @ 0x1C0038CC0 (-Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // edi
  int v7; // eax
  unsigned __int8 v8; // r8
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // r14
  FxIoResReqList *v13; // rax
  FxIoResReqList *v14; // rbx
  WDFIORESREQLIST__ *v15; // r8
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v17; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  unsigned __int64 v19; // rbp
  _IO_RESOURCE_REQUIREMENTS_LIST *v20; // r14
  FxIoResReqList *v21; // rax
  FxIoResReqList *v22; // rbx
  FxDeviceBase *v23; // rdx
  WDFDEVICE__ *v24; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *v25; // rax
  unsigned __int64 v26; // rbp
  WDFIORESREQLIST__ *reqlist; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( this->m_DeviceFilterRemoveResourceRequirements.m_Method )
  {
    _a1 = -1073741670;
    Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
    v13 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
    v14 = v13;
    if ( !v13 )
      goto LABEL_10;
    FxObject::Commit(v13, 0LL, (void **)&reqlist, 0LL, 1u);
    if ( v14->m_ObjectSize )
      v15 = (WDFIORESREQLIST__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v17 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(&this->m_DeviceFilterRemoveResourceRequirements, v17, v15);
    if ( _a1 >= 0 && v14->m_Changed )
    {
      WdmList = FxIoResReqList::CreateWdmList(v14);
      v19 = (unsigned __int64)WdmList;
      if ( WdmList )
      {
        if ( Information )
        {
          WdmList->BusNumber = Information->BusNumber;
          ExFreePoolWithTag(Information, 0);
        }
        Irp->m_Irp->IoStatus.Information = v19;
      }
      else
      {
        _a1 = -1073741670;
      }
    }
    v14->DeleteObject(v14);
  }
  else
  {
    _a1 = 0;
  }
  if ( _a1 >= 0 && (_a1 = this->SendIrpSynchronously(this, Irp), _a1 >= 0) || _a1 == -1073741637 )
  {
    v7 = FxPkgPnp::FilterResourceRequirements(
           this,
           (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
    if ( v7 < 0 )
    {
      _a1 = v7;
    }
    else if ( this->m_DeviceFilterAddResourceRequirements.m_Method )
    {
      v20 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
      v21 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v20, v8);
      v22 = v21;
      if ( v21 )
      {
        FxObject::Commit(v21, 0LL, (void **)&reqlist, 0LL, 1u);
        v23 = this->m_DeviceBase;
        if ( v23->m_ObjectSize )
          v24 = (WDFDEVICE__ *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v24 = 0LL;
        _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(&this->m_DeviceFilterAddResourceRequirements, v24, reqlist);
        if ( _a1 >= 0 && v22->m_Changed )
        {
          v25 = FxIoResReqList::CreateWdmList(v22);
          v26 = (unsigned __int64)v25;
          if ( v25 )
          {
            if ( v20 )
            {
              v25->BusNumber = v20->BusNumber;
              ExFreePoolWithTag(v20, 0);
            }
            Irp->m_Irp->IoStatus.Information = v26;
          }
          else
          {
            _a1 = -1073741670;
          }
        }
        v22->DeleteObject(v22);
      }
      else
      {
        _a1 = -1073741670;
      }
    }
  }
LABEL_10:
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = _a1;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
    WPP_IFR_SF_d(v10, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
