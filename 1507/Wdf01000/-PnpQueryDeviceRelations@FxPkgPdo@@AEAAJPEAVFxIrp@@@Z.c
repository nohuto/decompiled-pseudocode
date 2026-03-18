/*
 * XREFs of ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002088
 * Callers:
 *     ?_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0002080 (-_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C080 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009D8D0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryDeviceRelations(FxPkgPdo *this, FxIrp *Irp)
{
  unsigned int Status; // esi
  unsigned int Length; // ecx
  _QWORD *PoolWithTag; // rsi
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IRP *m_Irp; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  FxRelatedDeviceList *m_RemovalDeviceList; // r8

  Status = Irp->m_Irp->IoStatus.Status;
  Length = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 1 || Length == 3 )
    {
      if ( Length == 3 )
        m_RemovalDeviceList = this->m_RemovalDeviceList;
      else
        m_RemovalDeviceList = this->m_EjectionDeviceList;
      Status = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, m_RemovalDeviceList);
      if ( Status == -1073741637 )
        Status = Irp->m_Irp->IoStatus.Status;
    }
    else if ( Length == 4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, this->m_Globals->Tag);
      if ( PoolWithTag )
      {
        m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
        ObfReferenceObject(m_DeviceObject);
        *(_DWORD *)PoolWithTag = 1;
        PoolWithTag[1] = m_DeviceObject;
        Irp->m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
        Status = 0;
      }
      else
      {
        Status = -1073741670;
        Irp->m_Irp->IoStatus.Information = 0LL;
        m_DeviceBase = this->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxPkgPdo_cpp_Traceguids, _a1, -1073741670);
      }
    }
  }
  else
  {
    Status = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
