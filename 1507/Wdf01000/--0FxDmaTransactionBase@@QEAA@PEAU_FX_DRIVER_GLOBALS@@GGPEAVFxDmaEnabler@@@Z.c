/*
 * XREFs of ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C00603DC
 * Callers:
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0060378 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063754 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  this->m_EncodedRequest = 0LL;
  this->__vftable = (FxDmaTransactionBase_vtbl *)&FxDmaTransactionBase::`vftable';
  this->m_DmaEnabler = DmaEnabler;
  this->m_MaxFragmentLength = 0LL;
  *(_QWORD *)&this->m_State = 1LL;
  this->m_DmaAcquiredContext = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_StartOffset = 0LL;
  this->m_StartMdl = 0LL;
  this->m_Remaining = 0LL;
  this->m_CurrentFragmentLength = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_Transferred = 0LL;
  this->m_Flags = 0;
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
  if ( ExtraSize )
    this->m_TransferContext = (char *)this + ((unsigned __int16)(ObjectSize + 15) & 0xFFF0);
  else
    this->m_TransferContext = 0LL;
  this->m_ObjectFlags |= 0x800u;
}
