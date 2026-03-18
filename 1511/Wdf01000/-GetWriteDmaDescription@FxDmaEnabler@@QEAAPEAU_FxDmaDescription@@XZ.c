/*
 * XREFs of ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8
 * Callers:
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0029C54 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C002A120 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1C002A5E0 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C005AA74 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C005B3C0 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DC60 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C005DECC (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

$4E78FAD6283A805B24C30083E98044BF *__fastcall FxDmaEnabler::GetWriteDmaDescription(FxDmaEnabler *this)
{
  $4E78FAD6283A805B24C30083E98044BF *result; // rax

  result = ($4E78FAD6283A805B24C30083E98044BF *)&this->m_DuplexAdapterInfo[1];
  if ( (*((_BYTE *)this + 380) & 0x10) == 0 )
    return &this->184;
  return result;
}
