/*
 * XREFs of ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064F00
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaEnabler::InitializeTransferContext(
        FxDmaEnabler *this,
        void *Context,
        _WDF_DMA_DIRECTION Direction)
{
  $E625912F367ED84F5D18F5529B8651D4 *v3; // rcx

  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    v3 = ($E625912F367ED84F5D18F5529B8651D4 *)((char *)&this->184 + 96 * Direction);
  else
    v3 = &this->184;
  v3->m_SimplexAdapterInfo.AdapterObject->DmaOperations->InitializeDmaTransferContext(
    v3->m_SimplexAdapterInfo.AdapterObject,
    Context);
}
