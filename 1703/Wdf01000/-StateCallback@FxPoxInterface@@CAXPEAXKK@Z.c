/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C00A1720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002DD7C (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v13; // rbx
  FxPkgPnp *v14; // r11
  _FX_DRIVER_GLOBALS *v15; // rcx
  FxDeviceBase *v16; // r11
  _DEVICE_OBJECT *m_DeviceObject; // r10
  unsigned __int16 v18; // ax
  const void *v19; // r11

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
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xAu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, _a2);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v13 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleStateCallback )
  {
    v14 = Context->m_PkgPnp;
    v15 = v14->m_Globals;
    if ( v15->FxVerboseOn )
    {
      v16 = v14->m_DeviceBase;
      m_DeviceObject = v16->m_DeviceObject.m_DeviceObject;
      v18 = v16->m_ObjectSize;
      v19 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        v19 = 0LL;
      WPP_IFR_SF_qq(v15, 5u, 0xCu, 0xBu, WPP_PoxInterfaceKm_cpp_Traceguids, v19, m_DeviceObject);
    }
    v13->ComponentIdleStateCallback(v13->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
