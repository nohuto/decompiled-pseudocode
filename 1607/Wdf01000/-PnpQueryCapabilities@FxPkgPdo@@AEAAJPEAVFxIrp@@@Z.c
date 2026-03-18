/*
 * XREFs of ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002BC88
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002B6E0 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C002B200 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C002B8B0 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C002C3EC (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002F4F8 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryCapabilities(FxPkgPdo *this, FxIrp *Irp)
{
  int StackCapabilities; // edi
  _DEVICE_CAPABILITIES *Capabilities; // rbx
  bool v6; // zf
  void *v7; // r8
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  _DEVICE_OBJECT *v13; // rcx
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-98h] BYREF
  _STACK_DEVICE_CAPABILITIES parentStackCapabilities; // [rsp+30h] [rbp-88h] BYREF

  memset(&parentStackCapabilities, 0, sizeof(parentStackCapabilities));
  StackCapabilities = -1073741823;
  Capabilities = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities;
  if ( Capabilities->Version != 1 || Capabilities->Size < 0x40u )
    goto LABEL_6;
  v6 = Mx::MxHasEnoughRemainingThreadStack() == 0;
  m_DeviceBase = this->m_DeviceBase;
  if ( !v6 )
  {
    m_Globals = this->m_Globals;
    parentDeviceObject.m_DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 144LL);
    StackCapabilities = GetStackCapabilities(m_Globals, &parentDeviceObject, 0LL, &parentStackCapabilities);
    if ( StackCapabilities >= 0 )
    {
      FxPkgPdo::HandleQueryCapabilities(this, Capabilities, &parentStackCapabilities.DeviceCaps);
      StackCapabilities = 0;
    }
    goto LABEL_6;
  }
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  parentDeviceObject.m_DeviceObject = 0LL;
  if ( MxWorkItem::Allocate((MxWorkItem *)&parentDeviceObject, m_DeviceObject, v7) < 0 )
  {
    StackCapabilities = -1073741670;
LABEL_6:
    m_Irp = Irp->m_Irp;
    Irp->m_Irp->IoStatus.Status = StackCapabilities;
    IofCompleteRequest(Irp->m_Irp, 0);
    Irp->m_Irp = 0LL;
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
    return (unsigned int)StackCapabilities;
  }
  v13 = parentDeviceObject.m_DeviceObject;
  Irp->m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (_LIST_ENTRY *)parentDeviceObject.m_DeviceObject;
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoQueueWorkItem((PIO_WORKITEM)v13, FxPkgPdo::_QueryCapsWorkItem, DelayedWorkQueue, Irp->m_Irp);
  return 259LL;
}
