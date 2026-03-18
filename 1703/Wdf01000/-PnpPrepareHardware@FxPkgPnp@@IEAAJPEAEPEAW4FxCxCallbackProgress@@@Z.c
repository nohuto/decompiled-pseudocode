/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002C390 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00977F0 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0097900 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C0025BA4 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0025C00 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C009DAFC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DB84 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DC10 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v4; // eax
  int matched; // esi
  unsigned __int8 v8; // r8
  FxDeviceBase *v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r8
  FxCmResList *m_Resources; // rax
  WDFCMRESLIST__ *v13; // rax
  FxCmResList *m_ResourcesRaw; // rcx
  WDFCMRESLIST__ *v15; // rcx
  FxDeviceBase *v16; // rdx
  WDFDEVICE__ *v17; // rdx
  FxPnpDevicePrepareHardware *p_m_DevicePrepareHardware; // rdi
  FxCxCallbackProgress v19; // bp
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDevicePrepareHardware *v21; // rcx
  FxDevice *m_Device; // r14
  unsigned __int8 v23; // r8
  FxDeviceBase *v24; // rdi
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v30; // rcx
  FxPnpDevicePrepareHardware *v31; // rcx
  FxVerifierLock *v32; // rcx
  FxVerifierLock *v33; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v35; // rdx
  FxDeviceBase *v36; // rcx
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  v4 = this->m_PnpStateAndCaps.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpStateAndCaps.Value = v4 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  if ( matched < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_InternalFailure = 1;
    *ResourcesMatched = 0;
    IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    this->m_PendingPnPIrp->IoStatus.Status = matched;
    return (unsigned int)matched;
  }
  *ResourcesMatched = 1;
  v9 = this->m_DeviceBase;
  if ( SLOBYTE(v9->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)v9[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v8);
    v10 = PreviousIrql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
  }
  LOBYTE(v9[1].m_Globals) |= 1u;
  if ( SLOBYTE(v9->m_ObjectFlags) < 0 && (v30 = (FxVerifierLock *)v9[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    FxVerifierLock::Unlock(v30, v10, v11);
  else
    KeReleaseSpinLock(&v9->m_NPLock.m_Lock, v10);
  m_Resources = this->m_Resources;
  if ( m_Resources->m_ObjectSize )
    v13 = (WDFCMRESLIST__ *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v13 = 0LL;
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw->m_ObjectSize )
    v15 = (WDFCMRESLIST__ *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v15 = 0LL;
  v16 = this->m_DeviceBase;
  if ( v16->m_ObjectSize )
    v17 = (WDFDEVICE__ *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v17 = 0LL;
  p_m_DevicePrepareHardware = &this->m_DevicePrepareHardware;
  v19 = FxCxCallbackProgressInitialized;
  this->m_DevicePrepareHardware.m_ResourcesTranslated = v13;
  m_PkgPnp = this->m_DevicePrepareHardware.m_PkgPnp;
  this->m_DevicePrepareHardware.m_ResourcesRaw = v15;
  v21 = &this->m_DevicePrepareHardware;
  this->m_DevicePrepareHardware.m_Device = v17;
  m_Device = m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    matched = p_m_DevicePrepareHardware->InvokeClient(v21);
    v19 = FxCxCallbackProgressClientCalled;
    if ( matched >= 0 )
      v19 = FxCxCallbackProgressClientSucceeded;
    goto LABEL_15;
  }
  matched = FxPrePostCallback::IssuePreCxCallbacksStateful(v21, m_Device);
  v31 = &this->m_DevicePrepareHardware;
  if ( matched < 0 )
  {
    FxPrePostCallback::IssueCleanupCxCallbacks(v31, m_Device);
    goto LABEL_34;
  }
  matched = p_m_DevicePrepareHardware->InvokeClient(v31);
  v19 = FxCxCallbackProgressClientCalled;
  if ( matched >= 0 )
  {
    v19 = FxCxCallbackProgressClientSucceeded;
LABEL_34:
    if ( matched >= 0 )
      matched = FxPrePostCallback::IssuePostCxCallbacks(&this->m_DevicePrepareHardware, m_Device);
  }
LABEL_15:
  v24 = this->m_DeviceBase;
  *Progress = v19;
  if ( SLOBYTE(v24->m_ObjectFlags) < 0 && (v32 = (FxVerifierLock *)v24[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(v32, &PreviousIrql, v23);
    v25 = PreviousIrql;
  }
  else
  {
    v25 = KeAcquireSpinLockRaiseToDpc(&v24->m_NPLock.m_Lock);
  }
  LOBYTE(v24[1].m_Globals) &= ~1u;
  if ( SLOBYTE(v24->m_ObjectFlags) < 0 && (v33 = (FxVerifierLock *)v24[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    FxVerifierLock::Unlock(v33, v25, v26);
  else
    KeReleaseSpinLock(&v24->m_NPLock.m_Lock, v25);
  if ( matched < 0 )
  {
    if ( matched == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
          || v35->FxVerifyDownlevel )
        {
          FxVerifierDbgBreakPoint(v35);
        }
      }
    }
    v36 = this->m_DeviceBase;
    this->m_InternalFailure = 1;
    IoInvalidateDeviceState(v36->m_PhysicalDevice.m_DeviceObject);
    this->m_PendingPnPIrp->IoStatus.Status = matched;
  }
  else
  {
    FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
    return 0;
  }
  return (unsigned int)matched;
}
