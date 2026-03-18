/*
 * XREFs of ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C0030A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxSyncRequest::SelfDestruct(FxSyncRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xCu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
  KeSetEvent(&this->m_DestroyedEvent.m_Event.m_Event, 0, 0);
}
