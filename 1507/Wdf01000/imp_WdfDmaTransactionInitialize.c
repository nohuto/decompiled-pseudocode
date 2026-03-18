/*
 * XREFs of imp_WdfDmaTransactionInitialize @ 0x1C005EB30
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingOffset @ 0x1C005EE10 (imp_WdfDmaTransactionInitializeUsingOffset.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C005DD54 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C005DE64 (WPP_IFR_SF_qqDd.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitialize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        char *VirtualAddress,
        __int64 Length)
{
  _WDF_DMA_DIRECTION _a3; // r10d
  unsigned __int8 (__fastcall *v8)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // r11
  unsigned __int16 v9; // r9
  unsigned __int64 _a1; // rbp
  char v11; // r13
  FxDmaTransactionBase *v12; // rbx
  FxDmaTransactionBase *v13; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _MDL *v15; // r15
  unsigned __int64 v16; // r12
  char *v17; // rcx
  char *v18; // r14
  __int64 ByteCount; // rdx
  char *v20; // r8
  __int64 v21; // rcx
  FxDmaEnabler *m_DmaEnabler; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  const _GUID *Offset; // [rsp+20h] [rbp-78h]
  unsigned int _a2[2]; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 (__fastcall *v30)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+B0h] [rbp+18h]
  _WDF_DMA_DIRECTION v31; // [rsp+B8h] [rbp+20h]

  v31 = DmaDirection;
  v30 = EvtProgramDmaFunction;
  _a3 = DmaDirection;
  v8 = EvtProgramDmaFunction;
  v9 = 0;
  _a1 = DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v11 = DmaTransaction & 7;
  v12 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  v13 = (FxDmaTransactionBase *)(~_a1 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v12->__vftable);
    v13 = (FxDmaTransactionBase *)((char *)v13 - DmaTransaction);
  }
  if ( v13->m_Type == 5121 )
  {
    pDmaTrans = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI(v13, (void **)&pDmaTrans, (void *)_a1, 0x1401u, DmaTransaction);
    v13 = pDmaTrans;
    v9 = 0;
    _a3 = v31;
    v8 = v30;
  }
  m_Globals = v13->m_Globals;
  if ( !v8 )
    FxVerifierNullBugCheck(v13->m_Globals, retaddr);
  v15 = Mdl;
  if ( !Mdl )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v16 = Length;
  if ( !Length )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)_a1);
    return 3221225485LL;
  }
  if ( (unsigned int)_a3 > WdfDmaDirectionWriteToDevice )
  {
    WPP_IFR_SF_qDd(
      m_Globals,
      DmaTransaction,
      0xFu,
      0x15u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      (const void *)_a1,
      _a3,
      0xC000000D);
    return 3221225485LL;
  }
  v17 = (char *)Mdl->StartVa + Mdl->ByteOffset;
  v18 = VirtualAddress;
  ByteCount = Mdl->ByteCount;
  if ( VirtualAddress < v17
    || (v20 = &v17[ByteCount], *(_QWORD *)_a2 = &v17[ByteCount], VirtualAddress >= &v17[ByteCount]) )
  {
    WPP_IFR_SF_qqDd(
      m_Globals,
      2u,
      0xFu,
      0x16u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      VirtualAddress,
      v17,
      ByteCount,
      -1073741811);
    return 3221225485LL;
  }
  LOWORD(v21) = 0;
  if ( (v11 & 1) != 0 )
  {
    v21 = LOWORD(v12->__vftable);
    v12 = (FxDmaTransactionBase *)((char *)v12 - v21);
  }
  if ( v12->m_Type == 5121 )
  {
    pDmaTrans = v12;
  }
  else
  {
    FxObjectHandleGetPtrQI(v12, (void **)&pDmaTrans, (void *)_a1, 0x1401u, v21);
    v20 = *(char **)_a2;
    _a3 = v31;
    v8 = v30;
    v12 = pDmaTrans;
  }
  m_DmaEnabler = v12->m_DmaEnabler;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version != 3
    && (*((_BYTE *)m_DmaEnabler + 380) & 0xC) == 4
    && &v18[v16] > v20 )
  {
    WPP_IFR_SF_qiqd(m_Globals, ByteCount, (unsigned int)v20, v9, Offset, v18, v16, v20);
    return 3221225485LL;
  }
  v23 = FxDmaTransactionBase::Initialize(v12, v8, _a3, v15, &v18[-v15->ByteOffset] - (char *)v15->StartVa, v16);
  v24 = v23;
  if ( v23 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x18u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)_a1, v23);
  return v24;
}
