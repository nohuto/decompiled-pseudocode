/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C00A4890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C00A3DB4 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v12; // rbx
  FxPkgPnp *v13; // rcx
  _FX_DRIVER_GLOBALS *v14; // rax
  FxDeviceBase *v15; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v17; // rcx

  m_PkgPnp = Context->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xAu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, _a2);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v12 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleStateCallback )
  {
    v13 = Context->m_PkgPnp;
    v14 = v13->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = v13->m_DeviceBase;
      m_DeviceObject = v15->m_DeviceObject.m_DeviceObject;
      if ( v15->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xCu, 0xBu, WPP_PoxInterfaceKm_cpp_Traceguids, v17, m_DeviceObject);
    }
    v12->ComponentIdleStateCallback(v12->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
