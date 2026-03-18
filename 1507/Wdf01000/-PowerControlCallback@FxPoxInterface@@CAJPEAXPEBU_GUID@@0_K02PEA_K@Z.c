/*
 * XREFs of ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C00A45B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C00A3DB4 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

__int64 __fastcall FxPoxInterface::PowerControlCallback(
        FxPoxInterface *Context,
        const _GUID *PowerControlCode,
        void *InBuffer,
        unsigned __int64 InBufferSize,
        void *OutBuffer,
        unsigned __int64 OutBufferSize,
        unsigned __int64 *BytesReturned)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned int _a3; // ebx
  FxPkgPnp *v18; // rcx
  _FX_DRIVER_GLOBALS *v19; // r10
  FxDeviceBase *v20; // rcx
  __int64 m_DeviceObject; // rax
  const void *v22; // rcx

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
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x10u, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, _a2);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  _a3 = PowerFrameworkSettings->PowerControlCallback(
          PowerFrameworkSettings->PoFxDeviceContext,
          PowerControlCode,
          InBuffer,
          InBufferSize,
          OutBuffer,
          OutBufferSize,
          BytesReturned);
  v18 = Context->m_PkgPnp;
  v19 = v18->m_Globals;
  if ( v19->FxVerboseOn )
  {
    v20 = v18->m_DeviceBase;
    m_DeviceObject = (__int64)v20->m_DeviceObject.m_DeviceObject;
    if ( v20->m_ObjectSize )
      v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_qid(v19, 5u, 0xCu, 0x11u, WPP_PoxInterfaceKm_cpp_Traceguids, v22, m_DeviceObject, _a3);
  }
  return _a3;
}
