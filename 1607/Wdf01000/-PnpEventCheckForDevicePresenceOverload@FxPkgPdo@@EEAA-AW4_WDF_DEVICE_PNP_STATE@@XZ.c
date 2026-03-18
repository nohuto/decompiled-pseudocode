/*
 * XREFs of ?PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0092280
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C006D824 (-IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventCheckForDevicePresenceOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
    return 277 - (unsigned int)(FxDeviceDescriptionEntry::IsDeviceRemoved(m_Description) != 0);
  else
    return 276LL;
}
