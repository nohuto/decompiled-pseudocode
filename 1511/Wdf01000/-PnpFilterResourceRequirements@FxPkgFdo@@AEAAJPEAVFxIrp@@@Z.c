/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00186C8
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0033FD0 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C00141C8 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0028F64 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0029134 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
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
  unsigned __int64 v15; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v17; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  unsigned __int64 v20; // rbp
  _IO_RESOURCE_REQUIREMENTS_LIST *v21; // r14
  FxIoResReqList *v22; // rax
  FxIoResReqList *v23; // rbx
  FxDeviceBase *v24; // rcx
  unsigned __int64 v25; // rcx
  int (__fastcall *v26)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *v27; // rax
  unsigned __int64 v28; // rbp
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
      v15 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v17 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v17 = 0LL;
    m_Method = this->m_DeviceFilterRemoveResourceRequirements.m_Method;
    if ( m_Method )
      _a1 = m_Method((WDFDEVICE__ *)v17, (WDFIORESREQLIST__ *)v15);
    else
      _a1 = 0;
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
        if ( v24->m_ObjectSize )
          v25 = (unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v25 = 0LL;
        v26 = this->m_DeviceFilterAddResourceRequirements.m_Method;
        if ( v26 )
          _a1 = v26((WDFDEVICE__ *)v25, reqlist);
        else
          _a1 = 0;
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
