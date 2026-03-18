/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0069450
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C0068268 (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C0068298 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C00683D4 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0068894 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006E6E4 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C007B308 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C007B644 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_DMA_DIRECTION v9; // edi
  unsigned int _a3; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // dl
  unsigned __int8 v14; // al
  unsigned __int16 v15; // r9
  unsigned int Options; // r14d
  int DeviceControlOutputMdl; // eax
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  FxDmaTransactionBase *v20; // r10
  unsigned int ByteCount; // eax
  int v22; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp-10h] BYREF
  FxRequest *pReqObj; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _MDL *mdl; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+B8h] [rbp+58h]

  ProgramDmaFunction = EvtProgramDmaFunction;
  mdl = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(pDmaTrans->m_Globals, retaddr);
  v9 = DmaDirection;
  if ( DmaDirection > 1 )
  {
    _a3 = -1073741811;
    WPP_IFR_SF_qqDd(
      m_Globals,
      2u,
      0xFu,
      0xAu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      Request,
      DmaDirection,
      -1073741811);
    return _a3;
  }
  FxObjectHandleGetPtr(pDmaTrans->m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pReqObj);
  CurrentStackLocation = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  v14 = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v9 == WdfDmaDirectionReadFromDevice )
      goto LABEL_27;
    v18 = 11;
    goto LABEL_25;
  }
  if ( v14 == 4 )
  {
    if ( v9 == WdfDmaDirectionWriteToDevice )
      goto LABEL_27;
    v18 = 12;
LABEL_25:
    WPP_IFR_SF_LqqLd(
      m_Globals,
      MajorFunction,
      (unsigned int)pReqObj,
      v18,
      traceGuid,
      v9,
      DmaTransaction,
      Request,
      MajorFunction);
    return 3221225488LL;
  }
  v15 = 14;
  if ( (unsigned __int8)(v14 - 14) > 1u )
  {
    _a3 = -1073741808;
    goto LABEL_30;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
  {
    if ( v9 == WdfDmaDirectionWriteToDevice )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
LABEL_28:
      DeviceControlOutputMdl = FxRequest::GetMdl(pReqObj, &mdl);
      goto LABEL_29;
    }
LABEL_27:
    Options = CurrentStackLocation->Parameters.Read.Length;
    goto LABEL_28;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 1 )
  {
    if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
    {
      _a3 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, -1073741808);
      FxVerifierDbgBreakPoint(m_Globals);
LABEL_30:
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xFu,
        0x10u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        Request,
        (__int64)DmaTransaction,
        _a3);
      return _a3;
    }
    if ( v9 == WdfDmaDirectionReadFromDevice )
      goto LABEL_14;
    goto LABEL_17;
  }
  if ( v9 != WdfDmaDirectionWriteToDevice )
  {
    v15 = 13;
LABEL_17:
    WPP_IFR_SF_Lqqd(m_Globals, MajorFunction, (unsigned int)pReqObj, v15, traceGuid, v9, DmaTransaction, Request);
    return 3221225488LL;
  }
LABEL_14:
  Options = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(pReqObj, &mdl);
LABEL_29:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_30;
  if ( !Options )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, -1073741808);
    return _a3;
  }
  if ( !FxDmaEnabler::SupportsChainedMdls(pDmaTrans->m_DmaEnabler) )
  {
    ByteCount = mdl->ByteCount;
    if ( Options > ByteCount )
    {
      _a3 = -1073741811;
      WPP_IFR_SF_qddd(
        m_Globals,
        v19,
        0xFu,
        0x12u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        Request,
        Options,
        ByteCount,
        -1073741811);
      return _a3;
    }
  }
  v22 = FxDmaTransactionBase::Initialize(v20, ProgramDmaFunction, v9, mdl, 0LL, Options);
  _a3 = v22;
  if ( v22 < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v22);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
