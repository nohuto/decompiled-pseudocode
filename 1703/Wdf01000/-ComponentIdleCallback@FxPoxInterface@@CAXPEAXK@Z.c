/*
 * XREFs of ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C003BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002DD7C (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPoxInterface::ComponentIdleCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v7; // rbx
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  FxPkgPnp *v12; // r11
  _FX_DRIVER_GLOBALS *v13; // rcx
  FxDeviceBase *v14; // r11
  _DEVICE_OBJECT *m_DeviceObject; // r10
  unsigned __int16 v16; // ax
  const void *v17; // r11

  m_PkgPnp = Context->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xEu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, _a2);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v7 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleConditionCallback )
  {
    v12 = Context->m_PkgPnp;
    v13 = v12->m_Globals;
    if ( v13->FxVerboseOn )
    {
      v14 = v12->m_DeviceBase;
      m_DeviceObject = v14->m_DeviceObject.m_DeviceObject;
      v16 = v14->m_ObjectSize;
      v17 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16 )
        v17 = 0LL;
      WPP_IFR_SF_qq(v13, 5u, 0xCu, 0xFu, WPP_PoxInterfaceKm_cpp_Traceguids, v17, m_DeviceObject);
    }
    v7->ComponentIdleConditionCallback(v7->PoFxDeviceContext, Component);
  }
  else
  {
    PoFxCompleteIdleCondition(Context->m_PoHandle, Component);
  }
}
