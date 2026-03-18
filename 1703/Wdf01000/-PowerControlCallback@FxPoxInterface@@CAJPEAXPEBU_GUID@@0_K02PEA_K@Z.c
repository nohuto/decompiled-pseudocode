/*
 * XREFs of ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C00A15F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002DD7C (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
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
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  int _a3; // eax
  unsigned int v19; // ebx
  FxPkgPnp *v20; // r11
  _FX_DRIVER_GLOBALS *v21; // rcx
  FxDeviceBase *v22; // r11
  unsigned __int16 v23; // r9
  __int64 m_DeviceObject; // r10
  const void *v25; // r11

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
  v19 = _a3;
  v20 = Context->m_PkgPnp;
  v21 = v20->m_Globals;
  if ( v21->FxVerboseOn )
  {
    v22 = v20->m_DeviceBase;
    v23 = v22->m_ObjectSize;
    m_DeviceObject = (__int64)v22->m_DeviceObject.m_DeviceObject;
    v25 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23 )
      v25 = 0LL;
    WPP_IFR_SF_qid(v21, 5u, 0xCu, 0x11u, WPP_PoxInterfaceKm_cpp_Traceguids, v25, m_DeviceObject, _a3);
  }
  return v19;
}
