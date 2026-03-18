/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006E6E4
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C0069200 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0069450 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C006A3A0 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C006E928 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006EC54 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Initialize(
        FxDmaTransactionBase *this,
        unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned int Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v13; // rcx
  const void *_a1; // rdx
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  unsigned __int16 *p_m_ObjectSize; // rbx
  unsigned __int64 v18; // rdi
  const void *v19; // rax
  FxDmaEnabler *m_DmaEnabler; // r9
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  unsigned __int64 MaximumFragmentLength; // rcx
  FxDmaEnabler *v23; // rcx
  unsigned __int64 m_MaximumLength; // rcx
  int v25; // ebx
  unsigned __int16 v26; // ax
  const void *v27; // rdi

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    v13 = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(v13, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1);
  }
  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) > 1 && _a2 != FxDmaTransactionStateReleased )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    v18 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v19 = (const void *)v18;
    if ( !*p_m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, v19, _a2);
    if ( !*p_m_ObjectSize )
      v18 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v18, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    p_m_SimplexAdapterInfo = (_FxDmaDescription *)((char *)&m_DmaEnabler->m_SimplexAdapterInfo
                                                 + ((*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 0x60 : 0));
  else
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  MaximumFragmentLength = p_m_SimplexAdapterInfo->MaximumFragmentLength;
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
    FxDmaEnabler::InitializeTransferContext(v23, this->m_TransferContext, DmaDirection);
  if ( this->m_RequireSingleTransfer )
  {
    m_MaximumLength = this->m_DmaEnabler->m_MaximumLength;
    if ( this->m_MaxFragmentLength < m_MaximumLength )
      this->m_MaxFragmentLength = m_MaximumLength;
    v25 = FxDmaTransactionBase::PrepareForSingleTransfer(this);
    if ( v25 < 0 )
      goto LABEL_23;
  }
  v25 = this->InitializeResources(this);
  if ( v25 < 0 )
LABEL_23:
    FxDmaTransactionBase::ReleaseForReuse(this, 0);
  else
    *p_m_State = FxDmaTransactionStateInitialized;
  if ( m_Globals->FxVerboseOn )
  {
    v26 = this->m_ObjectSize;
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v26 )
      v27 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v27, v25);
  }
  return (unsigned int)v25;
}
