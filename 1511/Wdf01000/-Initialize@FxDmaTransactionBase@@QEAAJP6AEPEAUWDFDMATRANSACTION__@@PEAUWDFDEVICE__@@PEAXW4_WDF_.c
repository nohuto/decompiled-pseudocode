/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C005AA74
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C0058600 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0058840 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C005B110 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DEA0 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Initialize(
        FxDmaTransactionBase *this,
        unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned int Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  const void *v14; // rax
  unsigned __int64 v15; // rbx
  FxDmaEnabler *m_DmaEnabler; // r9
  $4E78FAD6283A805B24C30083E98044BF *v17; // rax
  unsigned __int64 MaximumFragmentLength; // rcx
  FxDmaEnabler *v19; // rcx
  int v20; // esi
  const void *v21; // rbx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  }
  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) > 1 && _a2 != FxDmaTransactionStateReleased )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransaction_cpp_Traceguids, v14, _a2);
    if ( this->m_ObjectSize )
      v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v15, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    v17 = FxDmaEnabler::GetWriteDmaDescription(this->m_DmaEnabler);
  else
    v17 = &m_DmaEnabler->184;
  this->m_AdapterInfo = &v17->m_SimplexAdapterInfo;
  MaximumFragmentLength = v17->m_SimplexAdapterInfo.MaximumFragmentLength;
  this->m_StartOffset = Offset;
  this->m_CurrentFragmentOffset = Offset;
  this->m_MaxFragmentLength = MaximumFragmentLength;
  this->m_Remaining = Length;
  this->m_TransactionLength = Length;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = Mdl;
  this->m_CurrentFragmentMdl = Mdl;
  this->m_DmaAcquiredFunction.Method.ProgramDma = ProgramDmaFunction;
  if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v19, this->m_TransferContext, DmaDirection);
  v20 = this->InitializeResources(this);
  if ( v20 < 0 )
    FxDmaTransactionBase::ReleaseForReuse(this, 0);
  else
    *p_m_State = FxDmaTransactionStateInitialized;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v21 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xDu, WPP_FxDmaTransaction_cpp_Traceguids, v21, v20);
  }
  return (unsigned int)v20;
}
