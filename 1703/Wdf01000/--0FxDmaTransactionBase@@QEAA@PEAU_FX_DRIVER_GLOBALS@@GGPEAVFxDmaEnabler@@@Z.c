/*
 * XREFs of ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C006DE08
 * Callers:
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C006AB7C (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C006CAAC (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001B770 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C006EDE0 (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 */

void __fastcall FxDmaTransactionBase::FxDmaTransactionBase(
        FxDmaTransactionBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  unsigned __int16 v8; // cx

  if ( ExtraSize )
    v8 = ((ExtraSize + 15) & 0xFFF0) + ((ObjectSize + 15) & 0xFFF0);
  else
    v8 = ObjectSize;
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1401, v8, FxDriverGlobals);
  this->__vftable = (FxDmaTransactionBase_vtbl *)FxDmaTransactionBase::`vftable';
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
  this->m_DmaEnabler = DmaEnabler;
  this->m_EncodedRequest = 0LL;
  FxDmaTransactionBase::Reset(this);
  this->m_State = FxDmaTransactionStateCreated;
  if ( ExtraSize )
    this->m_TransferContext = (char *)this + ((unsigned __int16)(ObjectSize + 15) & 0xFFF0);
  else
    this->m_TransferContext = 0LL;
  this->m_ObjectFlags |= 0x800u;
}
