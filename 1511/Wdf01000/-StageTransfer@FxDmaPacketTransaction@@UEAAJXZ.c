/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C005B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C005AE64 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C005CBE0 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C005D4B8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqxDq @ 0x1C005D6EC (WPP_IFR_SF_qqxDq.c)
 *     WPP_IFR_SF_sqqxx @ 0x1C005DA3C (WPP_IFR_SF_sqqxx.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v5; // esi
  const void *_a1; // r15
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *v8; // rcx
  char v9; // di
  unsigned __int64 m_MaxFragmentLength; // r9
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 flags; // rdi
  unsigned int m_MapRegistersReserved; // r11d
  unsigned __int64 v14; // rdx
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 id; // rax
  _FX_DRIVER_GLOBALS *v19; // rdx
  unsigned __int64 v20; // r8
  const char *v21; // r8
  const void *globals; // rcx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r12
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  _FX_DRIVER_GLOBALS *v28; // rdi
  const void *v29; // r14
  unsigned int m_CurrentFragmentLength; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  const void *ProgramDma; // rdx
  const void *v34; // rax
  FxDeviceBase *m_DeviceBase; // r8
  WDFDEVICE__ *v36; // r8
  WDFDMATRANSACTION__ *v37; // rdx
  unsigned __int8 v38; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // edi
  unsigned __int8 v40; // dl
  unsigned __int8 v41; // dl
  unsigned int v42; // r8d
  const void *level; // rax
  unsigned __int8 v44; // r8
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
  FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v7);
  FxObject::AddRef(this, sgListBuffer, 0, 0LL);
  while ( v9 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    flags = this->m_Transferred;
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( m_Remaining < m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_Remaining;
    v14 = flags + this->m_StartOffset;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    this->m_CurrentFragmentOffset = v14;
    if ( m_MapRegistersReserved && this->m_MapRegistersNeeded > m_MapRegistersReserved )
    {
      m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
      while ( m_CurrentFragmentMdl )
      {
        ByteCount = m_CurrentFragmentMdl->ByteCount;
        if ( ByteCount >= v14 )
          break;
        m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
        v14 -= ByteCount;
      }
      v17 = ((m_MapRegistersReserved - 1) << 12)
          - (unsigned __int64)(((_WORD)v14 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF)
          + 4096;
      if ( m_MaxFragmentLength < v17 )
        v17 = m_MaxFragmentLength;
      this->m_CurrentFragmentLength = v17;
    }
    id = this->m_CurrentFragmentLength;
    v19 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v20 = m_Remaining - id;
    this->m_Remaining = v20;
    if ( v19->FxVerifierOn && v19->FxVerboseOn )
    {
      v21 = "first";
      if ( flags )
        v21 = "next";
      if ( this->m_ObjectSize )
        globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      WPP_IFR_SF_sqqxx(
        v19,
        (unsigned __int8)v19,
        (unsigned int)v21,
        m_MaxFragmentLength,
        traceGuid,
        v21,
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
      v28 = this->m_Globals;
      if ( this->m_ObjectSize )
        v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v29 = 0LL;
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_qqxDq(
          v28,
          v25,
          v26,
          v27,
          traceGuid,
          v29,
          this->m_CurrentFragmentMdl,
          this->m_CurrentFragmentOffset,
          m_CurrentFragmentLength,
          this->m_MapRegisterBase);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
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
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_dqd(v28, 5u, 0xFu, 0xEu, WPP_FxDmaTransaction_hpp_Traceguids, SHIDWORD(pFxDriverGlobals), v29, v5);
      if ( v5 >= 0 )
      {
        v31 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v31 )
        {
          v32 = v31 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v32;
        }
        ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
        if ( ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
          {
            if ( this->m_ObjectSize )
              v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v34 = 0LL;
            WPP_IFR_SF_qqq(
              *(_FX_DRIVER_GLOBALS **)sgListBuffer,
              5u,
              0xFu,
              0x35u,
              WPP_FxDmaTransaction_cpp_Traceguids,
              ProgramDma,
              this->m_DmaAcquiredContext,
              v34);
          }
          m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
          if ( m_DeviceBase->m_ObjectSize )
            v36 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v36 = 0LL;
          if ( this->m_ObjectSize )
            v37 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v37 = 0LL;
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v37,
            v36,
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
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v20);
    if ( this->m_TransferState.RerunCompletion == 1 )
    {
      CompletionStatus = this->m_TransferState.CompletionStatus;
      v40 = (unsigned __int8)pFxDriverGlobals;
      this->m_TransferState.CompletionStatus = -1;
      this->m_TransferState.RerunCompletion = 0;
      FxNonPagedObject::Unlock(this, v40, v38);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
      {
        if ( this->m_ObjectSize )
          level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          level = 0LL;
        WPP_IFR_SF_qqqD(
          *(_FX_DRIVER_GLOBALS **)sgListBuffer,
          v41,
          v42,
          0x36u,
          traceGuid,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          level,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v44);
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
    FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v38);
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)sgListBuffer, 5u, 0xFu, 0x37u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, v5);
  return (unsigned int)v5;
}
