/*
 * XREFs of ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008ACD0
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017D80 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C008AB10 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPowerPolicyMachine::InitUsbSS(FxPowerPolicyMachine *this)
{
  FxUsbIdleInfo *v3; // rbx
  FxPkgPnp *m_PkgPnp; // rax
  PIRP Irp; // rax
  void *Caller; // [rsp+38h] [rbp+0h]

  if ( this->m_Owner->m_UsbIdle )
    return 0LL;
  v3 = (FxUsbIdleInfo *)FxPoolAllocator(
                          this->m_PkgPnp->m_Globals,
                          &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
                          ExDefaultNonPagedPoolType,
                          0x28uLL,
                          this->m_PkgPnp->m_Globals->Tag,
                          Caller);
  if ( v3 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v3->m_IdleCallbackEvent = 0LL;
    v3->m_IdleIrp.m_Irp = 0LL;
    v3->m_CallbackInfo.IdleCallback = FxUsbIdleInfo::_UsbIdleCallback;
    v3->m_CallbackInfo.IdleContext = m_PkgPnp;
    v3->m_EventDropped = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3->m_CallbackInfo.IdleContext + 12) + 152LL) + 76LL), 0);
    if ( Irp )
    {
      v3->m_IdleIrp.m_Irp = Irp;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Owner->m_UsbIdle, (signed __int64)v3, 0LL) )
        FxUsbIdleInfo::`scalar deleting destructor'(v3);
      return 0LL;
    }
    FxUsbIdleInfo::`scalar deleting destructor'(v3);
  }
  return 3221225626LL;
}
