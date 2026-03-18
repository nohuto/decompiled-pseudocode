/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002914C
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002C380 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0016EB4 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0024238 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0032EC4 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z @ 0x1C003C1A0 (-Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // edi
  int v7; // eax
  unsigned __int8 v8; // r8
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // rbp
  FxIoResReqList *v13; // rax
  FxIoResReqList *v14; // rbx
  FxDeviceBase *m_DeviceBase; // rdx
  WDFIORESREQLIST__ *v16; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v18; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  unsigned __int64 v20; // r15
  _IO_RESOURCE_REQUIREMENTS_LIST *v21; // rbp
  FxIoResReqList *v22; // rax
  FxIoResReqList *v23; // rbx
  FxDeviceBase *v24; // rdx
  unsigned __int16 v25; // r8
  WDFDEVICE__ *v26; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *v27; // rax
  unsigned __int64 v28; // r15
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
    m_DeviceBase = this->m_DeviceBase;
    v16 = (WDFIORESREQLIST__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !v14->m_ObjectSize )
      v16 = 0LL;
    v18 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v18 = 0LL;
    _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(&this->m_DeviceFilterRemoveResourceRequirements, v18, v16);
    if ( _a1 >= 0 && v14->m_Changed )
    {
      WdmList = FxIoResReqList::CreateWdmList(v14);
      v20 = (unsigned __int64)WdmList;
      if ( WdmList )
      {
        if ( Information )
        {
          WdmList->BusNumber = Information->BusNumber;
          ExFreePoolWithTag(Information, 0);
        }
        Irp->m_Irp->IoStatus.Information = v20;
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
      v21 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
      v22 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v21, v8);
      v23 = v22;
      if ( v22 )
      {
        FxObject::Commit(v22, 0LL, (void **)&reqlist, 0LL, 1u);
        v24 = this->m_DeviceBase;
        v25 = v24->m_ObjectSize;
        v26 = (WDFDEVICE__ *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v25 )
          v26 = 0LL;
        _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(&this->m_DeviceFilterAddResourceRequirements, v26, reqlist);
        if ( _a1 >= 0 && v23->m_Changed )
        {
          v27 = FxIoResReqList::CreateWdmList(v23);
          v28 = (unsigned __int64)v27;
          if ( v27 )
          {
            if ( v21 )
            {
              v27->BusNumber = v21->BusNumber;
              ExFreePoolWithTag(v21, 0);
            }
            Irp->m_Irp->IoStatus.Information = v28;
          }
          else
          {
            _a1 = -1073741670;
          }
        }
        v23->DeleteObject(v23);
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
