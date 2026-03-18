/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002FB70 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085700 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085830 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C00158AC (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0015900 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0089634 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(FxPkgPnp *this, unsigned __int8 *ResourcesMatched)
{
  unsigned int v3; // eax
  int _a1; // esi
  unsigned __int8 v6; // r8
  FxDeviceBase *m_DeviceBase; // rdi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r8
  FxCmResList *m_Resources; // r8
  unsigned __int64 v11; // r8
  FxCmResList *m_ResourcesRaw; // rdx
  unsigned __int64 v13; // rdx
  FxDeviceBase *v14; // rcx
  unsigned __int64 v15; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  FxDeviceBase *v17; // rdi
  unsigned __int8 v18; // al
  unsigned __int8 v19; // r8
  FxVerifierLock *m_CallbackLockObjectPtr; // rcx
  FxVerifierLock *v22; // rcx
  FxVerifierLock *v23; // rcx
  FxVerifierLock *v24; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v26; // rdx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v3 = this->m_PnpStateAndCaps.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  this->m_PnpStateAndCaps.Value = v3 | 0xA20;
  _a1 = FxPkgPnp::PnpMatchResources(this);
  if ( _a1 < 0 )
  {
    *ResourcesMatched = 0;
    FxPkgPnp::SetInternalFailure(this);
    this->m_PendingPnPIrp->IoStatus.Status = _a1;
  }
  else
  {
    *ResourcesMatched = 1;
    m_DeviceBase = this->m_DeviceBase;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (m_CallbackLockObjectPtr = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
    {
      FxVerifierLock::Lock(m_CallbackLockObjectPtr, &PreviousIrql, v6);
      v8 = PreviousIrql;
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
    }
    LOBYTE(m_DeviceBase[1].m_Globals) |= 1u;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v22 = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
    {
      FxVerifierLock::Unlock(v22, v8, v9);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v8);
    }
    m_Resources = this->m_Resources;
    if ( m_Resources->m_ObjectSize )
      v11 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    m_ResourcesRaw = this->m_ResourcesRaw;
    if ( m_ResourcesRaw->m_ObjectSize )
      v13 = (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v13 = 0LL;
    v14 = this->m_DeviceBase;
    if ( v14->m_ObjectSize )
      v15 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    m_Method = this->m_DevicePrepareHardware.m_Method;
    if ( m_Method )
      _a1 = m_Method((WDFDEVICE__ *)v15, (WDFCMRESLIST__ *)v13, (WDFCMRESLIST__ *)v11);
    else
      _a1 = 0;
    v17 = this->m_DeviceBase;
    if ( SLOBYTE(v17->m_ObjectFlags) < 0 && (v23 = (FxVerifierLock *)v17[-1].m_CallbackLockObjectPtr) != 0LL )
    {
      FxVerifierLock::Lock(v23, &PreviousIrql, v11);
      v18 = PreviousIrql;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&v17->m_NPLock.m_Lock);
    }
    LOBYTE(v17[1].m_Globals) &= ~1u;
    if ( SLOBYTE(v17->m_ObjectFlags) < 0 && (v24 = (FxVerifierLock *)v17[-1].m_CallbackLockObjectPtr) != 0LL )
      FxVerifierLock::Unlock(v24, v18, v19);
    else
      KeReleaseSpinLock(&v17->m_NPLock.m_Lock, v18);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids, _a1);
      if ( _a1 == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PnpStateMachine_cpp_Traceguids);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
            || v26->FxVerifyDownlevel )
          {
            FxVerifierDbgBreakPoint(v26);
          }
        }
      }
      FxPkgPnp::SetInternalFailure(this);
      this->m_PendingPnPIrp->IoStatus.Status = _a1;
    }
    else
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
  }
  return (unsigned int)_a1;
}
