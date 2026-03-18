/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0022DDC
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0022AF0 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C002E518 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E57C (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C002E6C4 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C009AEBC (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rdi
  int _a3; // ebx
  unsigned int v7; // edx
  FxPkgPnp *v9; // rcx
  FxDeviceBase *v10; // rax
  __int64 _a2; // rdx
  const void *_a1; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  __int64 m_DeviceObject; // rdx
  const void *v16; // rax
  unsigned __int16 v17; // r9
  FxDeviceBase *v18; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (FxDevicePwrRequirementMachine *)FxPoolAllocator(
                                          this->m_PkgPnp->m_Globals,
                                          &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
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
  if ( v5 )
  {
    _a3 = FxEventQueue::Initialize(v5, v3);
    if ( _a3 < 0 )
    {
      m_PkgPnp = this->m_PkgPnp;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      m_DeviceObject = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      v17 = 11;
    }
    else
    {
      _a3 = FxThreadedEventQueue::Init(v5, this->m_PkgPnp, FxDevicePwrRequirementMachine::_ProcessEventInner, 0LL);
      if ( _a3 >= 0 )
      {
        this->m_DevicePowerRequirementMachine = v5;
        _a3 = 0;
        goto $exit_3;
      }
      m_PkgPnp = this->m_PkgPnp;
      v18 = m_PkgPnp->m_DeviceBase;
      m_DeviceObject = (__int64)v18->m_DeviceObject.m_DeviceObject;
      if ( v18->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      v17 = 12;
    }
    WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, v17, WPP_PoxInterface_cpp_Traceguids, v16, m_DeviceObject, _a3);
$exit_3:
    if ( _a3 < 0 )
      FxWakeInterruptMachine::`scalar deleting destructor'(v5, v7);
    return (unsigned int)_a3;
  }
  _a3 = -1073741670;
  v9 = this->m_PkgPnp;
  v10 = v9->m_DeviceBase;
  _a2 = (__int64)v10->m_DeviceObject.m_DeviceObject;
  if ( v10->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qid(v9->m_Globals, 2u, 0xCu, 0xAu, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, -1073741670);
  return (unsigned int)_a3;
}
