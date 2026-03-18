/*
 * XREFs of ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0066C04
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002FFD4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C0066B10 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 * Callees:
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C0030208 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C0066B44 (-FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z.c)
 */

void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  $573AD7123BB726F3889E56BBEE799ACF *v2; // rax
  FxDmaEnabler *v3; // rcx

  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  v2 = FxDmaEnabler::GetWriteDmaDescription(this);
  FxDmaEnabler::FreeResources(v3, &v2->m_SimplexAdapterInfo);
  *((_BYTE *)this + 380) &= ~2u;
}
