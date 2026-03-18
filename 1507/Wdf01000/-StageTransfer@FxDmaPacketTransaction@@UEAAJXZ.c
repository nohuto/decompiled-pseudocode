/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00623E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0061A30 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C0063BE8 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00644C0 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqxDq @ 0x1C00646F4 (WPP_IFR_SF_qqxDq.c)
 *     WPP_IFR_SF_sqqxx @ 0x1C0064A44 (WPP_IFR_SF_sqqxx.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v5; // r14d
  const void *_a1; // r12
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *v8; // rcx
  char v9; // di
  FxVerifierLock *CurrentStagingThread; // rcx
  unsigned int v11; // ecx
  FxTagTracker *v12; // rax
  unsigned __int64 m_MaxFragmentLength; // r9
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 flags; // rdi
  unsigned int m_MapRegistersReserved; // r11d
  unsigned __int64 v17; // rdx
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 id; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  unsigned __int64 v23; // r8
  const char *v24; // r8
  const void *globals; // rcx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r13
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  _FX_DRIVER_GLOBALS *v31; // rdi
  const void *v32; // rsi
  unsigned int m_CurrentFragmentLength; // ecx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  const void *ProgramDma; // rdx
  const void *v37; // rax
  FxDeviceBase *m_DeviceBase; // r8
  WDFDEVICE__ *v39; // r8
  WDFDMATRANSACTION__ *v40; // rdx
  unsigned __int8 v41; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // edi
  char m_ObjectFlags; // al
  FxVerifierLock *v44; // rcx
  unsigned __int8 v45; // dl
  unsigned int v46; // r8d
  const void *level; // rax
  unsigned __int8 v48; // r8
  FxVerifierLock *v49; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+70h] [rbp-11h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  *(_QWORD *)sgListBuffer = m_Globals;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x32u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, a3);
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v8 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v9 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v8->FxVerifierOn && v8->FxVerboseOn )
      WPP_IFR_SF_q(v8, 5u, 0xFu, 0x33u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  }
  else
  {
    v9 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (CurrentStagingThread = (FxVerifierLock *)this[-1].m_TransferState.CurrentStagingThread) != 0LL )
  {
    FxVerifierLock::Unlock(CurrentStagingThread, (KIRQL)pFxDriverGlobals, v7);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, (KIRQL)pFxDriverGlobals);
  }
  v11 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    v12 = 0LL;
  else
    v12 = *(FxTagTracker **)&this[-1].m_MapRegistersReserved;
  if ( v12 )
    FxTagTracker::UpdateTagHistory(v12, sgListBuffer, 0, 0LL, TagAddRef, v11);
  while ( v9 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    flags = this->m_Transferred;
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( m_Remaining < m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_Remaining;
    v17 = flags + this->m_StartOffset;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    this->m_CurrentFragmentOffset = v17;
    if ( m_MapRegistersReserved && this->m_MapRegistersNeeded > m_MapRegistersReserved )
    {
      m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
      while ( m_CurrentFragmentMdl )
      {
        ByteCount = m_CurrentFragmentMdl->ByteCount;
        if ( ByteCount >= v17 )
          break;
        m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
        v17 -= ByteCount;
      }
      v20 = ((m_MapRegistersReserved - 1) << 12)
          - (unsigned __int64)(((_WORD)v17 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF)
          + 4096;
      if ( m_MaxFragmentLength < v20 )
        v20 = m_MaxFragmentLength;
      this->m_CurrentFragmentLength = v20;
    }
    id = this->m_CurrentFragmentLength;
    v22 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v23 = m_Remaining - id;
    this->m_Remaining = v23;
    if ( v22->FxVerifierOn && v22->FxVerboseOn )
    {
      v24 = "first";
      if ( flags )
        v24 = "next";
      if ( this->m_ObjectSize )
        globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      WPP_IFR_SF_sqqxx(
        v22,
        (unsigned __int8)v22,
        (unsigned int)v24,
        m_MaxFragmentLength,
        traceGuid,
        v24,
        globals,
        this->m_CurrentFragmentMdl,
        flags,
        id);
    }
    if ( this->m_IsCancelled == 1 )
    {
      v5 = -1073741536;
    }
    else if ( this->PreMapTransfer(this) )
    {
      m_DmaEnabler = this->m_DmaEnabler;
      if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
        Alignment = &sgListBuffer[8];
      else
        Alignment = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
      this->GetTransferCompletionRoutine(this);
      v31 = this->m_Globals;
      if ( this->m_ObjectSize )
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v32 = 0LL;
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( v31->FxVerifierOn && v31->FxVerboseOn )
        WPP_IFR_SF_qqxDq(
          v31,
          v28,
          v29,
          v30,
          traceGuid,
          v32,
          this->m_CurrentFragmentMdl,
          this->m_CurrentFragmentOffset,
          m_CurrentFragmentLength,
          this->m_MapRegisterBase);
      if ( this->m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        LODWORD(traceGuid) = this->m_DeviceAddressOffset;
        v5 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
               this->m_AdapterInfo->AdapterObject,
               this->m_CurrentFragmentMdl,
               this->m_MapRegisterBase,
               this->m_CurrentFragmentOffset);
      }
      else
      {
        *(_DWORD *)Alignment = 1;
        *((_QWORD *)Alignment + 1) = 0LL;
        traceGuid = (const _GUID *)((char *)&pFxDriverGlobals + 4);
        *((_QWORD *)Alignment + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                       this->m_AdapterInfo->AdapterObject,
                                       this->m_CurrentFragmentMdl,
                                       this->m_MapRegisterBase,
                                       (char *)this->m_CurrentFragmentMdl->StartVa
                                     + this->m_CurrentFragmentMdl->ByteOffset
                                     + this->m_CurrentFragmentOffset);
        v5 = 0;
        *((_DWORD *)Alignment + 6) = HIDWORD(pFxDriverGlobals);
      }
      if ( v31->FxVerifierOn && v31->FxVerboseOn )
        WPP_IFR_SF_dqd(v31, 5u, 0xFu, 0xEu, WPP_FxDmaTransaction_hpp_Traceguids, SHIDWORD(pFxDriverGlobals), v32, v5);
      if ( v5 >= 0 )
      {
        v34 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v34 )
        {
          v35 = v34 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v35;
        }
        ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
        if ( ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
          {
            if ( this->m_ObjectSize )
              v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v37 = 0LL;
            WPP_IFR_SF_qqq(
              *(_FX_DRIVER_GLOBALS **)sgListBuffer,
              5u,
              0xFu,
              0x35u,
              WPP_FxDmaTransaction_cpp_Traceguids,
              ProgramDma,
              this->m_DmaAcquiredContext,
              v37);
          }
          m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
          if ( m_DeviceBase->m_ObjectSize )
            v39 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v39 = 0LL;
          if ( this->m_ObjectSize )
            v40 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v40 = 0LL;
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v40,
            v39,
            this->m_DmaAcquiredContext,
            this->m_DmaDirection,
            (_SCATTER_GATHER_LIST *)Alignment);
        }
      }
    }
    else
    {
      v5 = 0;
    }
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v23);
    if ( this->m_TransferState.RerunCompletion == 1 )
    {
      CompletionStatus = this->m_TransferState.CompletionStatus;
      this->m_TransferState.CompletionStatus = -1;
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_TransferState.RerunCompletion = 0;
      if ( m_ObjectFlags < 0 && (v44 = (FxVerifierLock *)this[-1].m_TransferState.CurrentStagingThread) != 0LL )
        FxVerifierLock::Unlock(v44, (KIRQL)pFxDriverGlobals, v41);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, (KIRQL)pFxDriverGlobals);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
      {
        if ( this->m_ObjectSize )
          level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          level = 0LL;
        WPP_IFR_SF_qqqD(
          *(_FX_DRIVER_GLOBALS **)sgListBuffer,
          v45,
          v46,
          0x36u,
          traceGuid,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          level,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v48);
    }
    if ( this->m_TransferState.RerunStaging == 1 )
    {
      v9 = 1;
      this->m_TransferState.RerunStaging = 0;
    }
    else
    {
      this->m_TransferState.CurrentStagingThread = 0LL;
      v9 = 0;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v49 = (FxVerifierLock *)this[-1].m_TransferState.CurrentStagingThread) != 0LL )
    {
      FxVerifierLock::Unlock(v49, (KIRQL)pFxDriverGlobals, v41);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, (KIRQL)pFxDriverGlobals);
    }
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)sgListBuffer, 5u, 0xFu, 0x37u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, v5);
  return (unsigned int)v5;
}
