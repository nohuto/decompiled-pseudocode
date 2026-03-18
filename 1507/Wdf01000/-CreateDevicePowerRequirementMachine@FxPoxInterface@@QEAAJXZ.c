/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00A3BEC
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001E8B0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C005CFEC (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005D04C (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A1B9C (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C00A3EA0 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rdi
  int _a3; // ebx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  __int64 _a2; // rdx
  const void *_a1; // rax
  FxPkgPnp *v11; // rcx
  FxDeviceBase *v12; // rax
  __int64 m_DeviceObject; // rdx
  const void *v14; // rax
  unsigned __int16 v15; // r9
  FxDeviceBase *v16; // rax
  _LIST_ENTRY *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (FxDevicePwrRequirementMachine *)FxPoolAllocator(
                                          this->m_PkgPnp->m_Globals,
                                          (_LIST_ENTRY *)&this->m_PkgPnp->m_Globals->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0xC8uLL,
                                          this->m_PkgPnp->m_Globals->Tag,
                                          retaddr);
  if ( v2 )
  {
    FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(v2, this);
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    _a3 = -1073741670;
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, -1073741670);
    return (unsigned int)_a3;
  }
  _a3 = FxEventQueue::Initialize(v5, v3);
  if ( _a3 < 0 )
  {
    v11 = this->m_PkgPnp;
    v12 = v11->m_DeviceBase;
    m_DeviceObject = (__int64)v12->m_DeviceObject.m_DeviceObject;
    if ( v12->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    v15 = 11;
LABEL_19:
    WPP_IFR_SF_qid(v11->m_Globals, 2u, 0xCu, v15, WPP_PoxInterface_cpp_Traceguids, v14, m_DeviceObject, _a3);
    goto $exit_13;
  }
  _a3 = FxThreadedEventQueue::Init(v5, this->m_PkgPnp, FxDevicePwrRequirementMachine::_ProcessEventInner, 0LL);
  if ( _a3 < 0 )
  {
    v11 = this->m_PkgPnp;
    v16 = v11->m_DeviceBase;
    m_DeviceObject = (__int64)v16->m_DeviceObject.m_DeviceObject;
    if ( v16->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    v15 = 12;
    goto LABEL_19;
  }
  this->m_DevicePowerRequirementMachine = v5;
  _a3 = 0;
$exit_13:
  if ( _a3 < 0 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5);
  return (unsigned int)_a3;
}
