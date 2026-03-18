/*
 * XREFs of ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00996A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C00678A0 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C009A6D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventPdoRemovedOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rsi
  FxDeviceDescriptionEntry *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  this->m_CanBeDeleted = 1;
  if ( m_DeviceBase[1].m_SpinLock.m_Lock )
  {
    if ( *(_WORD *)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized )
      IoDeleteSymbolicLink((PUNICODE_STRING)&m_DeviceBase[1].m_SpinLock);
    FxPoolFree((_QWORD *)m_DeviceBase[1].m_SpinLock.m_Lock);
    *(_QWORD *)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    m_DeviceBase[1].m_SpinLock.m_Lock = 0LL;
  }
  FxPkgPnp::PnpEventRemovedCommonCode(this);
  _a1 = this->m_Description;
  if ( _a1 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x13u, WPP_FxPkgPdo_cpp_Traceguids, _a1, this);
    FxDeviceDescriptionEntry::ProcessDeviceRemoved(this->m_Description);
    this->m_Description = 0LL;
  }
  return 309LL;
}
