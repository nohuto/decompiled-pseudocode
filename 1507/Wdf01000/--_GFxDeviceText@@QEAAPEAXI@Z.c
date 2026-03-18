/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C006B1B8
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C002E2F0 (imp_WdfPdoInitAddDeviceText.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0075C2C (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  wchar_t *m_Description; // rcx
  wchar_t *m_LocationInformation; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
  {
    FxPoolFree(m_Description);
    this->m_Description = 0LL;
  }
  m_LocationInformation = this->m_LocationInformation;
  if ( m_LocationInformation )
  {
    FxPoolFree(m_LocationInformation);
    this->m_LocationInformation = 0LL;
  }
  FxPoolFree(this);
  return this;
}
