/*
 * XREFs of ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0013FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0022A90 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPoxInterface::ComponentActiveCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v7; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  FxPkgPnp *v11; // rcx
  _FX_DRIVER_GLOBALS *v12; // rax
  FxDeviceBase *v13; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v15; // rcx

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
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xCu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, _a2);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v7 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentActiveConditionCallback )
  {
    v11 = Context->m_PkgPnp;
    v12 = v11->m_Globals;
    if ( v12->FxVerboseOn )
    {
      v13 = v11->m_DeviceBase;
      m_DeviceObject = v13->m_DeviceObject.m_DeviceObject;
      if ( v13->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      WPP_IFR_SF_qq(v12, 5u, 0xCu, 0xDu, WPP_PoxInterfaceKm_cpp_Traceguids, v15, m_DeviceObject);
    }
    v7->ComponentActiveConditionCallback(v7->PoFxDeviceContext, Component);
  }
}
