/*
 * XREFs of ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C005DECC
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0029EC4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C005DE40 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 * Callees:
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C005DE74 (-FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z.c)
 */

void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  $4E78FAD6283A805B24C30083E98044BF *v2; // rax
  FxDmaEnabler *v3; // rcx

  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  v2 = FxDmaEnabler::GetWriteDmaDescription(this);
  FxDmaEnabler::FreeResources(v3, &v2->m_SimplexAdapterInfo);
  *((_BYTE *)this + 380) &= ~2u;
}
