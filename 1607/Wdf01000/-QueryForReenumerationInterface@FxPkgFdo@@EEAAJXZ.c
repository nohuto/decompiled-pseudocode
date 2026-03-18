/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C0029E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0023590 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002B42C (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall FxPkgFdo::QueryForReenumerationInterface(FxPkgFdo *this)
{
  _REENUMERATE_SELF_INTERFACE_STANDARD *p_m_SurpriseRemoveAndReenumerateSelfInterface; // rsi
  FxDeviceBase *m_DeviceBase; // rcx
  PDEVICE_OBJECT m_DeviceObject; // rdi
  PIRP Irp; // rax
  _IRP *v6; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int _a1; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrp v11; // [rsp+50h] [rbp+8h] BYREF

  p_m_SurpriseRemoveAndReenumerateSelfInterface = &this->m_SurpriseRemoveAndReenumerateSelfInterface;
  if ( this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf )
    return 0LL;
  memset(
    &this->m_SurpriseRemoveAndReenumerateSelfInterface,
    0,
    sizeof(this->m_SurpriseRemoveAndReenumerateSelfInterface));
  *(_DWORD *)&p_m_SurpriseRemoveAndReenumerateSelfInterface->Size = 65576;
  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_AttachedDevice.m_DeviceObject;
  if ( m_DeviceObject )
    ObfReferenceObject(m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  else
    m_DeviceObject = IoGetAttachedDeviceReference(m_DeviceBase->m_DeviceObject.m_DeviceObject);
  Irp = IoAllocateIrp(m_DeviceObject->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = -1073741637;
    v11.m_Irp = Irp;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)p_m_SurpriseRemoveAndReenumerateSelfInterface;
    CurrentStackLocation[-1].Parameters.Create.Options = 65576;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
    FxIrp::SendIrpSynchronously(&v11, m_DeviceObject);
    IoFreeIrp(v6);
  }
  ObfDereferenceObject(m_DeviceObject);
  _a1 = 0;
  if ( p_m_SurpriseRemoveAndReenumerateSelfInterface->SurpriseRemoveAndReenumerateSelf )
  {
    m_Globals = this->m_Globals;
    _a1 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SurpriseRemoveAndReenumerateSelfWorkItem);
    if ( _a1 < 0 )
    {
      this->ReleaseReenumerationInterface(this);
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x18u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
    }
  }
  return (unsigned int)_a1;
}
