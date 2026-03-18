/*
 * XREFs of ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0019448
 * Callers:
 *     ?_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0030AC0 (-_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0019D10 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C5A8 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C002D8B4 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxPkgPnp::DispatchWaitWake(FxPkgPnp *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v6; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v8; // esi
  unsigned __int8 v9; // r8
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v12; // r14
  FxPkgPnp *v13; // rcx
  _IO_STACK_LOCATION *v14; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  m_Globals = this->m_Globals;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedWaitWakeIrp )
    {
      WPP_IFR_SF_qq(
        this->m_Globals,
        2u,
        0xCu,
        0x28u,
        WPP_FxPkgPnp_cpp_Traceguids,
        Irp->m_Irp,
        this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
      FxVerifierBugCheckWorker(
        this->m_Globals,
        WDF_POWER_MULTIPLE_PPO,
        (unsigned __int64)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        (unsigned __int64)Irp->m_Irp);
    }
    m_Owner->m_RequestedWaitWakeIrp = 0;
  }
  if ( this->m_SharedPower.m_WaitWakeOwner )
  {
    p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
    if ( this->m_SharedPower.m_WaitWakeIrp )
    {
      v8 = -1073741436;
      WPP_IFR_SF_qdq(
        this->m_Globals,
        2u,
        0xCu,
        0x29u,
        WPP_FxPkgPnp_cpp_Traceguids,
        Irp->m_Irp,
        -1073741436,
        this->m_SharedPower.m_WaitWakeIrp);
    }
    else
    {
      v8 = 259;
      _InterlockedExchange64(
        (volatile __int64 *)&Irp->m_Irp->CancelRoutine,
        (__int64)FxPkgPnp::_PowerWaitWakeCancelRoutine);
      if ( Irp->m_Irp->Cancel
        && (WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x2Au, WPP_FxPkgPnp_cpp_Traceguids, Irp->m_Irp),
            _InterlockedExchange64((volatile __int64 *)&Irp->m_Irp->CancelRoutine, 0LL)) )
      {
        v8 = -1073741536;
        Irp->m_Irp->IoStatus.Status = -1073741536;
      }
      else
      {
        Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        this->m_SharedPower.m_WaitWakeIrp = Irp->m_Irp;
      }
    }
    KeReleaseSpinLock(p_m_Lock, v12);
    v13 = this;
    if ( (v8 & 0x80000000) == 0 )
    {
      FxPkgPnp::PowerProcessEvent(this, 4u);
      if ( !this->m_PowerPolicyMachine.m_Owner )
        return v8;
      goto LABEL_10;
    }
LABEL_26:
    FxPkgPnp::CompletePowerRequest(v13, Irp, v8);
    return v8;
  }
  if ( !this->m_PowerPolicyMachine.m_Owner )
    return ((unsigned int (__fastcall *)(FxPkgPnp *))this->FireAndForgetIrp)(this);
  v6 = (const void *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)&this->m_SharedPower,
                       (signed __int64)Irp->m_Irp,
                       0LL);
  if ( v6 )
  {
    v8 = -1073741101;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x2Bu, WPP_FxPkgPnp_cpp_Traceguids, v6, (__int64)Irp->m_Irp, -1073741101);
    v13 = this;
    goto LABEL_26;
  }
  this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
         Irp->m_Irp,
         (PIO_COMPLETION_ROUTINE)FxPkgPnp::_PowerPolicyWaitWakeCompletionRoutine,
         this,
         1u,
         1u,
         1u) < 0 )
  {
    v14 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgPnp::_PowerPolicyWaitWakeCompletionRoutine;
    v14[-1].Context = this;
    v14[-1].Control = -32;
  }
  v8 = PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
LABEL_10:
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolWakeArrived, v9);
  return v8;
}
