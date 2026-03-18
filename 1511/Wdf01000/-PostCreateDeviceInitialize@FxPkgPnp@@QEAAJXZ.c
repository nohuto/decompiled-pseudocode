/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C001823C
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00192DC (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C128 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this)
{
  struct _IO_WORKITEM *WorkItem; // rax
  struct _IO_WORKITEM *v3; // rax
  struct _IO_WORKITEM *v4; // rax
  unsigned __int16 v6; // r9

  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  this->m_PnpMachine.m_EventWorker = FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_PkgPnp = this;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)FxLibraryGlobals.DriverObject);
  this->m_PnpMachine.m_WorkItem.m_WorkItem = WorkItem;
  if ( WorkItem )
  {
    this->m_PowerMachine.m_EventWorkerContext = 0LL;
    this->m_PowerMachine.m_EventWorker = FxPkgPnp::_PowerProcessEventInner;
    this->m_PowerMachine.m_PkgPnp = this;
    v3 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    this->m_PowerMachine.m_WorkItem.m_WorkItem = v3;
    if ( v3 )
    {
      this->m_PowerPolicyMachine.m_EventWorkerContext = 0LL;
      this->m_PowerPolicyMachine.m_EventWorker = FxPkgPnp::_PowerPolicyProcessEventInner;
      this->m_PowerPolicyMachine.m_PkgPnp = this;
      v4 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
      this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem = v4;
      if ( v4 )
        return 0LL;
      v6 = 31;
    }
    else
    {
      v6 = 30;
    }
  }
  else
  {
    v6 = 29;
  }
  WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, v6, WPP_FxPkgPnp_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
