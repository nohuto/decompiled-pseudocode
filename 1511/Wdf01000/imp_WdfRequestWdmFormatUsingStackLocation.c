/*
 * XREFs of imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C002C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _IO_STACK_LOCATION *Stack)
{
  __int64 Offset; // rcx
  FxRequest *v6; // r10
  FxIrp *p_m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  LOWORD(Offset) = 0;
  v6 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxRequest *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4104 )
  {
    pRequest = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v6 = pRequest;
  }
  if ( !Stack )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  p_m_Irp = &v6->m_Irp;
  if ( v6 == (FxRequest *)-152LL )
    FxVerifierBugCheckWorker(MEMORY[0xFFFFFFFFFFFFFF78], WDF_REQUEST_FATAL_ERROR, 2uLL, Request);
  if ( p_m_Irp->m_Irp->CurrentLocation < 2 )
    FxVerifierBugCheckWorker(v6->m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, (unsigned __int64)&v6->m_Irp);
  v6->m_NextStackLocationFormatted = 1;
  CurrentStackLocation = p_m_Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&Stack->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&Stack->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&Stack->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = Stack->FileObject;
  CurrentStackLocation[-1].Control = 0;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(pRequest, 128);
  }
}
