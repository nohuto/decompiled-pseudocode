/*
 * XREFs of ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0009374
 * Callers:
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C00093BC (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064C70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaEnabler::ConfigureDmaAdapter(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        int ConfigDirection)
{
  $E625912F367ED84F5D18F5529B8651D4 *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  v4 = &this->184;
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    v4 = ($E625912F367ED84F5D18F5529B8651D4 *)((char *)v4 + 96 * ConfigDirection);
  v5 = *(_OWORD *)&DeviceDescription->DmaChannel;
  *(_OWORD *)&v4->m_SimplexAdapterInfo.DeviceDescription.Version = *(_OWORD *)&DeviceDescription->Version;
  v6 = *(_OWORD *)&DeviceDescription->MaximumLength;
  *(_OWORD *)&v4->m_DuplexAdapterInfo[0].DeviceDescription.DmaChannel = v5;
  v7 = *(_OWORD *)&DeviceDescription->DmaRequestLine;
  *(_OWORD *)&v4->m_DuplexAdapterInfo[0].DeviceDescription.MaximumLength = v6;
  *(_OWORD *)&v4->m_DuplexAdapterInfo[0].DeviceDescription.DmaRequestLine = v7;
  return FxDmaEnabler::InitializeResources(this, &v4->m_SimplexAdapterInfo);
}
