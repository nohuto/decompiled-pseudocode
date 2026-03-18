/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C002E150
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002DDF8 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C00325A0 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003260C (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C0032768 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A15C0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rbx
  int v6; // eax
  int v7; // edi
  unsigned int v8; // edx
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned __int16 v11; // r9
  FxDeviceBase *m_DeviceBase; // r8
  __int64 m_DeviceObject; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v15; // r8
  FxDeviceBase *v16; // r10
  __int64 v17; // r8
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // r10
  FxDeviceBase *v20; // r8
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // r8
  void *_a1; // [rsp+28h] [rbp-20h]
  __int64 _a2; // [rsp+30h] [rbp-18h]
  int _a3; // [rsp+38h] [rbp-10h]
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
  if ( !v5 )
  {
    v7 = -1073741670;
    m_PkgPnp = this->m_PkgPnp;
    v11 = 10;
    _a3 = -1073741670;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_DeviceObject = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v15 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = m_DeviceObject;
    if ( !m_ObjectSize )
      v15 = 0LL;
    _a1 = (void *)v15;
    goto LABEL_19;
  }
  v6 = FxEventQueue::Initialize(v5, v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v11 = 11;
    _a3 = v6;
    v16 = m_PkgPnp->m_DeviceBase;
    v17 = (__int64)v16->m_DeviceObject.m_DeviceObject;
    v18 = v16->m_ObjectSize;
    v19 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = v17;
    if ( !v18 )
      v19 = 0LL;
    _a1 = (void *)v19;
    goto LABEL_19;
  }
  v7 = FxThreadedEventQueue::Init(v5, this->m_PkgPnp, FxDevicePwrRequirementMachine::_ProcessEventInner, 0LL);
  if ( v7 < 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v11 = 12;
    _a3 = v7;
    v20 = m_PkgPnp->m_DeviceBase;
    v21 = (__int64)v20->m_DeviceObject.m_DeviceObject;
    v22 = v20->m_ObjectSize;
    v23 = (unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = v21;
    if ( !v22 )
      v23 = 0LL;
    _a1 = (void *)v23;
LABEL_19:
    WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, v11, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
    goto $exit_8;
  }
  this->m_DevicePowerRequirementMachine = v5;
  v7 = 0;
$exit_8:
  if ( v7 < 0 && v5 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5, v8);
  return (unsigned int)v7;
}
