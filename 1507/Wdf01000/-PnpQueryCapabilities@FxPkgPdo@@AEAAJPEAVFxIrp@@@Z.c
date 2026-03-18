/*
 * XREFs of ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011648
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00110A0 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0011270 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0012450 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryCapabilities(FxPkgPdo *this, FxIrp *Irp)
{
  int StackCapabilities; // edi
  _DEVICE_CAPABILITIES *Capabilities; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rbx
  _LIST_ENTRY *WorkItem; // rax
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 HighLimit; // [rsp+28h] [rbp-A0h] BYREF
  _STACK_DEVICE_CAPABILITIES parentStackCapabilities; // [rsp+30h] [rbp-98h] BYREF

  memset(&parentStackCapabilities, 0, sizeof(parentStackCapabilities));
  StackCapabilities = -1073741823;
  Capabilities = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities;
  if ( Capabilities->Version != 1 || Capabilities->Size < 0x40u )
    goto LABEL_6;
  IoGetStackLimits((PULONG_PTR)&parentDeviceObject, &HighLimit);
  m_DeviceBase = this->m_DeviceBase;
  if ( (unsigned __int64)((char *)&HighLimit - (char *)parentDeviceObject.m_DeviceObject) >= 0x3000 )
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
  WorkItem = (_LIST_ENTRY *)IoAllocateWorkItem(m_DeviceBase->m_DeviceObject.m_DeviceObject);
  if ( !WorkItem )
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
  Irp->m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = WorkItem;
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoQueueWorkItem((PIO_WORKITEM)WorkItem, FxPkgPdo::_QueryCapsWorkItem, DelayedWorkQueue, Irp->m_Irp);
  return 259LL;
}
