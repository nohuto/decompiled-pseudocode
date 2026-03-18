/*
 * XREFs of ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C0030208
 * Callers:
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C002F620 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C002FD3C (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1C0030230 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0066854 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0066C04 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006ADD0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     <none>
 */

$573AD7123BB726F3889E56BBEE799ACF *__fastcall FxDmaEnabler::GetWriteDmaDescription(FxDmaEnabler *this)
{
  $573AD7123BB726F3889E56BBEE799ACF *result; // rax

  result = ($573AD7123BB726F3889E56BBEE799ACF *)&this->m_DuplexAdapterInfo[1];
  if ( (*((_BYTE *)this + 380) & 0x10) == 0 )
    return &this->184;
  return result;
}
