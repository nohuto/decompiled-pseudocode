/*
 * XREFs of ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0064F40
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0009624 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C0064EA0 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 * Callees:
 *     ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C0064ED4 (-FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z.c)
 */

void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  $E625912F367ED84F5D18F5529B8651D4 *v1; // rdi
  FxDmaEnabler *v3; // rcx

  v1 = &this->184;
  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    v1 = ($E625912F367ED84F5D18F5529B8651D4 *)&this->m_DuplexAdapterInfo[1];
  FxDmaEnabler::FreeResources(v3, &v1->m_SimplexAdapterInfo);
  *((_BYTE *)this + 380) &= ~2u;
}
