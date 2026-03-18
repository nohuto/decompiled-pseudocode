/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C005EE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C005D748 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C005D87C (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C005DE64 (WPP_IFR_SF_qqDd.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00738A0 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0073CF0 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection)
{
  unsigned __int64 _a2; // r14
  __int64 _a1; // r13
  FxDmaTransactionBase *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _WDF_DMA_DIRECTION v10; // esi
  unsigned int _a3; // ebx
  FxRequest *v13; // rcx
  __int64 v14; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v17; // r9
  unsigned int Options; // r12d
  int DeviceControlOutputMdl; // eax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int ByteCount; // eax
  int v24; // eax
  const _GUID *Offset; // [rsp+20h] [rbp-40h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp-10h] BYREF
  FxRequest *pReqObj; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _MDL *mdl; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+B8h] [rbp+58h]

  ProgramDmaFunction = EvtProgramDmaFunction;
  mdl = 0LL;
  _a2 = (unsigned __int64)Request;
  _a1 = DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v8 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( (_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v8->__vftable);
    v8 = (FxDmaTransactionBase *)((char *)v8 - DmaTransaction);
  }
  if ( v8->m_Type == 5121 )
  {
    pDmaTrans = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDmaTrans, (void *)_a1, 0x1401u, DmaTransaction);
    v8 = pDmaTrans;
  }
  m_Globals = v8->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  v10 = DmaDirection;
  if ( DmaDirection > 1 )
  {
    _a3 = -1073741811;
    WPP_IFR_SF_qqDd(
      m_Globals,
      2u,
      0xFu,
      0xAu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      (const void *)_a1,
      (const void *)_a2,
      DmaDirection,
      -1073741811);
    return _a3;
  }
  if ( !_a2 )
    FxVerifierBugCheckWorker(v8->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v13 = (FxRequest *)(~_a2 & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v14) = 0;
  if ( (_a2 & 1) != 0 )
  {
    v14 = LOWORD(v13->__vftable);
    v13 = (FxRequest *)((char *)v13 - v14);
  }
  if ( v13->m_Type == 4104 )
  {
    pReqObj = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI(v13, (void **)&pReqObj, (void *)_a2, 0x1008u, v14);
    v13 = pReqObj;
  }
  CurrentStackLocation = v13->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(Request) = CurrentStackLocation->MajorFunction;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v10 == WdfDmaDirectionReadFromDevice )
      goto LABEL_42;
    v21 = 11;
    goto LABEL_40;
  }
  if ( MajorFunction == 4 )
  {
    if ( v10 == WdfDmaDirectionWriteToDevice )
      goto LABEL_42;
    v21 = 12;
LABEL_40:
    WPP_IFR_SF_LqqLd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      (unsigned int)Request,
      v21,
      Offset,
      v10,
      (const void *)_a1,
      (const void *)_a2,
      (unsigned __int8)Request);
    return 3221225488LL;
  }
  v17 = 14;
  if ( (unsigned __int8)(MajorFunction - 14) > 1u )
  {
    _a3 = -1073741808;
LABEL_45:
    WPP_IFR_SF_qid(m_Globals, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)_a2, _a1, _a3);
    return _a3;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
  {
    if ( v10 == WdfDmaDirectionWriteToDevice )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
LABEL_43:
      DeviceControlOutputMdl = FxRequest::GetMdl(v13, &mdl);
      goto LABEL_44;
    }
LABEL_42:
    Options = CurrentStackLocation->Parameters.Read.Length;
    goto LABEL_43;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 1 )
  {
    if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
    {
      _a3 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)_a2, -1073741808);
      LODWORD(mdl) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      goto LABEL_45;
    }
    if ( v10 == WdfDmaDirectionReadFromDevice )
      goto LABEL_29;
    goto LABEL_32;
  }
  if ( v10 != WdfDmaDirectionWriteToDevice )
  {
    v17 = 13;
LABEL_32:
    WPP_IFR_SF_Lqqd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      (unsigned int)Request,
      v17,
      Offset,
      v10,
      (const void *)_a1,
      (const void *)_a2);
    return 3221225488LL;
  }
LABEL_29:
  Options = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(v13, &mdl);
LABEL_44:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_45;
  if ( !Options )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, -1073741808);
    return _a3;
  }
  m_DmaEnabler = pDmaTrans->m_DmaEnabler;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version != 3 && (*((_BYTE *)m_DmaEnabler + 380) & 0xC) == 4 )
  {
    ByteCount = mdl->ByteCount;
    if ( Options > ByteCount )
    {
      _a3 = -1073741811;
      WPP_IFR_SF_qddd(
        m_Globals,
        v20,
        0xFu,
        0x12u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        (const void *)_a2,
        Options,
        ByteCount,
        -1073741811);
      return _a3;
    }
  }
  v24 = FxDmaTransactionBase::Initialize(pDmaTrans, ProgramDmaFunction, v10, mdl, 0LL, Options);
  _a3 = v24;
  if ( v24 < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)_a1, v24);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
