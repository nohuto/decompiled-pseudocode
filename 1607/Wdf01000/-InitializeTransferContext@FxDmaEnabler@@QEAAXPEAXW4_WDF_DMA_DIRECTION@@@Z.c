/*
 * XREFs of ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0066BAC
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006ADD0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

void __fastcall FxDmaEnabler::InitializeTransferContext(
        FxDmaEnabler *this,
        void *Context,
        _WDF_DMA_DIRECTION Direction)
{
  $573AD7123BB726F3889E56BBEE799ACF *DmaDescription; // rax
  void *v4; // r9

  DmaDescription = FxDmaEnabler::GetDmaDescription(this, Direction);
  DmaDescription->m_SimplexAdapterInfo.AdapterObject->DmaOperations->InitializeDmaTransferContext(
    DmaDescription->m_SimplexAdapterInfo.AdapterObject,
    v4);
}
