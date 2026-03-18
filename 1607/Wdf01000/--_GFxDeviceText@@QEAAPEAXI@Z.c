/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0071FA8
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C00202C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0036A80 (imp_WdfPdoInitAddDeviceText.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0078EA4 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
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
