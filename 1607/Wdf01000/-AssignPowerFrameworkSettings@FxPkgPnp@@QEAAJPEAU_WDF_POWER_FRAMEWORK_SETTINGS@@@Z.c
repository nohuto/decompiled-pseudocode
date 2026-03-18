/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00964B0
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C0074630 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C009977C (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  FxDeviceBase *v6; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  _PO_FX_COMPONENT_V1 *Component; // rax
  int v11; // edi
  FxDeviceBase *v12; // rcx
  __int64 m_DeviceObject; // rdx
  const void *v14; // rcx
  unsigned __int16 v15; // r9
  FxDeviceBase *m_DeviceBase; // rcx
  SIZE_T v17; // rdx
  _PO_FX_COMPONENT_IDLE_STATE *PoolWithTag; // rax
  _PO_FX_COMPONENT_IDLE_STATE *v19; // r14
  FxDeviceBase *v20; // rax
  __int64 v21; // rcx
  const void *v22; // rax
  _POX_SETTINGS *v23; // rsi
  _PO_FX_COMPONENT_V1 *v24; // rcx
  _PO_FX_COMPONENT_V1 *v25; // rax
  FxDeviceBase *v26; // rcx

  LODWORD(v4) = 0;
  v5 = 0LL;
  if ( FxLibraryGlobals.PoxRegisterDevice )
  {
    Component = PowerFrameworkSettings->Component;
    if ( !Component )
      goto LABEL_17;
    v4 = 24LL * Component->IdleStateCount;
    if ( v4 > 0xFFFFFFFF )
    {
      v11 = -1073741675;
      m_DeviceBase = this->m_DeviceBase;
      m_DeviceObject = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      v15 = 81;
      goto LABEL_32;
    }
    v5 = (unsigned int)(v4 + 32);
    if ( (unsigned int)v5 < (unsigned int)v4 )
    {
      v11 = -1073741675;
      v12 = this->m_DeviceBase;
      m_DeviceObject = (__int64)v12->m_DeviceObject.m_DeviceObject;
      if ( v12->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      v15 = 82;
    }
    else
    {
LABEL_17:
      v17 = (unsigned int)(v5 + 64);
      if ( (unsigned int)v17 >= (unsigned int)v5 )
      {
        PoolWithTag = (_PO_FX_COMPONENT_IDLE_STATE *)ExAllocatePoolWithTag(
                                                       ExDefaultNonPagedPoolType,
                                                       v17,
                                                       this->m_Globals->Tag);
        v19 = PoolWithTag;
        if ( PoolWithTag )
        {
          v23 = (_POX_SETTINGS *)((char *)PoolWithTag + v5);
          v23->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
          v23->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
          v23->Component = PowerFrameworkSettings->Component;
          v23->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
          v23->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
          v23->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
          v23->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
          v23->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
          if ( PowerFrameworkSettings->Component )
          {
            v24 = (_PO_FX_COMPONENT_V1 *)((char *)PoolWithTag + (unsigned int)v4);
            v23->Component = v24;
            v25 = PowerFrameworkSettings->Component;
            v24->Id = v25->Id;
            *(_OWORD *)&v24->IdleStateCount = *(_OWORD *)&v25->IdleStateCount;
            v23->Component->IdleStates = v19;
            memmove(v23->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v4);
          }
          v11 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
                  &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                  this->m_Globals,
                  v23);
          if ( v11 < 0 )
            ExFreePoolWithTag(v19, 0);
          else
            return 0;
        }
        else
        {
          v11 = -1073741670;
          v20 = this->m_DeviceBase;
          v21 = (__int64)v20->m_DeviceObject.m_DeviceObject;
          if ( v20->m_ObjectSize )
            v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v22 = 0LL;
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x54u, WPP_FxPkgPnp_cpp_Traceguids, v22, v21, -1073741670);
        }
        return (unsigned int)v11;
      }
      v11 = -1073741675;
      v26 = this->m_DeviceBase;
      m_DeviceObject = (__int64)v26->m_DeviceObject.m_DeviceObject;
      if ( v26->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      v15 = 83;
    }
LABEL_32:
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, v15, WPP_FxPkgPnp_cpp_Traceguids, v14, m_DeviceObject, -1073741675);
    return (unsigned int)v11;
  }
  v6 = this->m_DeviceBase;
  _a2 = v6->m_DeviceObject.m_DeviceObject;
  if ( v6->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x50u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return 0LL;
}
