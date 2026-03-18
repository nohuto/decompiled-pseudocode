/*
 * XREFs of ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00A4C58
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgGeneral::OnShutdown(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned int v3; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v6; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  _IRP *m_Irp; // rax

  v3 = 0;
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v6 = 0LL;
  m_Method = this->m_EvtDeviceShutdown.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v6);
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v3;
}
