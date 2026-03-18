/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00252E8
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C003B960 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C002E324 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // esi
  _PO_FX_COMPONENT_IDLE_STATE *v6; // r15
  _PO_FX_COMPONENT_V1 *Component; // rax
  SIZE_T v8; // rdx
  unsigned int v9; // eax
  int _a3; // ebx
  _PO_FX_COMPONENT_IDLE_STATE *PoolWithTag; // rax
  _POX_SETTINGS *v12; // rbx
  FxDeviceBase *v14; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 v17; // ax
  const void *_a1; // r8
  unsigned __int16 v19; // r9
  FxDeviceBase *v20; // rdx
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  const void *v23; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  __int64 m_DeviceObject; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v27; // r8
  unsigned int v28; // eax
  _PO_FX_COMPONENT_V1 *v29; // rcx
  _PO_FX_COMPONENT_V1 *v30; // rax

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = 0LL;
  if ( FxLibraryGlobals.PoxRegisterDevice )
  {
    Component = PowerFrameworkSettings->Component;
    v8 = 0xFFFFFFFFLL;
    if ( Component )
    {
      v4 = 24LL * Component->IdleStateCount;
      if ( v4 > 0xFFFFFFFF )
      {
        LODWORD(v4) = -1;
        _a3 = -1073741675;
      }
      else
      {
        _a3 = 0;
      }
      if ( _a3 < 0 )
      {
        v19 = 81;
        goto LABEL_22;
      }
      v28 = v4 + 32;
      v5 = -1;
      if ( (int)v4 + 32 >= (unsigned int)v4 )
        v5 = v4 + 32;
      _a3 = v28 < (unsigned int)v4 ? 0xC0000095 : 0;
      if ( v28 < (unsigned int)v4 )
      {
        v19 = 82;
        goto LABEL_22;
      }
    }
    v9 = v5 + 64;
    if ( v5 + 64 >= v5 )
      v8 = v9;
    _a3 = v9 < v5 ? 0xC0000095 : 0;
    if ( v9 >= v5 )
    {
      PoolWithTag = (_PO_FX_COMPONENT_IDLE_STATE *)ExAllocatePoolWithTag(
                                                     ExDefaultNonPagedPoolType,
                                                     v8,
                                                     this->m_Globals->Tag);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = (_POX_SETTINGS *)((char *)PoolWithTag + v5);
        v12->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
        v12->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
        v12->Component = PowerFrameworkSettings->Component;
        v12->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
        v12->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
        v12->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
        v12->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
        v12->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
        if ( PowerFrameworkSettings->Component )
        {
          v29 = (_PO_FX_COMPONENT_V1 *)((char *)PoolWithTag + (unsigned int)v4);
          v12->Component = v29;
          v30 = PowerFrameworkSettings->Component;
          v29->Id = v30->Id;
          *(_OWORD *)&v29->IdleStateCount = *(_OWORD *)&v30->IdleStateCount;
          v12->Component->IdleStates = v6;
          memmove(v12->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v4);
        }
        _a3 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
                &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                this->m_Globals,
                v12);
        if ( _a3 >= 0 )
          _a3 = 0;
      }
      else
      {
        _a3 = -1073741670;
        m_DeviceBase = this->m_DeviceBase;
        m_DeviceObject = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v27 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v27 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x54u, WPP_FxPkgPnp_cpp_Traceguids, v27, m_DeviceObject, -1073741670);
      }
$exit_3:
      if ( _a3 < 0 )
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      return (unsigned int)_a3;
    }
    v19 = 83;
LABEL_22:
    v20 = this->m_DeviceBase;
    v21 = (__int64)v20->m_DeviceObject.m_DeviceObject;
    v22 = v20->m_ObjectSize;
    v23 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22 )
      v23 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, v19, WPP_FxPkgPnp_cpp_Traceguids, v23, v21, _a3);
    goto $exit_3;
  }
  v14 = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  _a2 = v14->m_DeviceObject.m_DeviceObject;
  v17 = v14->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v17 )
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x50u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return 0LL;
}
