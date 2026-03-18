/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C0026560
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020120 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0029B6C (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this)
{
  struct _IO_WORKITEM *WorkItem; // rax
  int _a1; // edi
  int v4; // esi
  struct _IO_WORKITEM *v5; // rax
  struct _IO_WORKITEM *v6; // rax
  unsigned __int16 v8; // r9

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)FxLibraryGlobals.DriverObject);
  this->m_PnpMachine.m_WorkItem.m_WorkItem = WorkItem;
  _a1 = -1073741670;
  v4 = -1073741670;
  if ( WorkItem )
    v4 = 0;
  if ( v4 < 0 )
  {
    v8 = 29;
LABEL_16:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, v8, WPP_FxPkgPnp_cpp_Traceguids, v4);
    return (unsigned int)v4;
  }
  this->m_PowerMachine.m_PkgPnp = this;
  this->m_PowerMachine.m_EventWorker = FxPkgPnp::_PowerProcessEventInner;
  this->m_PowerMachine.m_EventWorkerContext = 0LL;
  v5 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_PowerMachine.m_WorkItem.m_WorkItem = v5;
  v4 = -1073741670;
  if ( v5 )
    v4 = 0;
  if ( v4 >= 0 )
    v4 = 0;
  if ( v4 < 0 )
  {
    v8 = 30;
    goto LABEL_16;
  }
  this->m_PowerPolicyMachine.m_PkgPnp = this;
  this->m_PowerPolicyMachine.m_EventWorker = FxPkgPnp::_PowerPolicyProcessEventInner;
  this->m_PowerPolicyMachine.m_EventWorkerContext = 0LL;
  v6 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem = v6;
  if ( v6 )
    _a1 = 0;
  if ( _a1 < 0 )
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_FxPkgPnp_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
