/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C005EB30 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C005EE30 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064F00 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
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
  const _GUID *v11; // rdx
  const void *_a1; // rax
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  const void *v15; // rax
  ULONG_PTR v16; // rbx
  FxDmaEnabler *m_DmaEnabler; // r9
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  unsigned __int64 MaximumFragmentLength; // rcx
  int v20; // edi
  const void *v21; // rbx

  m_Globals = this->m_Globals;
  v11 = WPP_FxDmaTransaction_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
    v11 = WPP_FxDmaTransaction_cpp_Traceguids;
  }
  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) > 1 && _a2 != FxDmaTransactionStateReleased )
  {
    if ( this->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransaction_cpp_Traceguids, v15, _a2);
    if ( this->m_ObjectSize )
      v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v16 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v16, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection == WdfDmaDirectionReadFromDevice
    || (p_m_SimplexAdapterInfo = &m_DmaEnabler->m_DuplexAdapterInfo[1], (*((_BYTE *)m_DmaEnabler + 380) & 0x10) == 0) )
  {
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  }
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  MaximumFragmentLength = p_m_SimplexAdapterInfo->MaximumFragmentLength;
  this->m_StartOffset = Offset;
  this->m_CurrentFragmentOffset = Offset;
  this->m_Remaining = Length;
  this->m_TransactionLength = Length;
  this->m_MaxFragmentLength = MaximumFragmentLength;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = Mdl;
  this->m_CurrentFragmentMdl = Mdl;
  this->m_DmaAcquiredFunction.Method.ProgramDma = ProgramDmaFunction;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(m_DmaEnabler, this->m_TransferContext, DmaDirection);
  v20 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, const _GUID *))this->InitializeResources)(this, v11);
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
