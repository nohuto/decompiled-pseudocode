/*
 * XREFs of imp_WdfRequestGetParameters @ 0x1C00264C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0F50 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  FxRequest *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  int IsCurrentStackValid; // ebp
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !Parameters )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( Parameters->Size != 40 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x10u, 0x39u, WPP_FxRequestApi_cpp_Traceguids, Parameters->Size, 40);
    PreviousIrql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&PreviousIrql,
      m_Globals->Public.DriverName,
      (const char *)&PreviousIrql);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return;
  }
  if ( !m_Globals->FxVerifierIO )
  {
LABEL_9:
    Parameters->Size = 40;
    Parameters->Type = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    Parameters->MinorFunction = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    memmove(&Parameters->Parameters, &v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
    if ( m_Globals->FxVerifierIO )
    {
      CurrentStackLocation = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction == 14
        && (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3 )
      {
        Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
      }
    }
    return;
  }
  FxNonPagedObject::Lock(v4, (unsigned __int8 *)&PreviousIrql, (unsigned __int8)Parameters);
  if ( !m_Globals->FxVerifierOn )
    goto LABEL_20;
  IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(v4, m_Globals);
  if ( IsCurrentStackValid >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, m_Globals);
      goto LABEL_21;
    }
LABEL_20:
    IsCurrentStackValid = 0;
  }
LABEL_21:
  if ( SLOBYTE(v4->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v7);
  }
  else
  {
    KeReleaseSpinLock(&v4->m_NPLock.m_Lock, PreviousIrql);
  }
  if ( IsCurrentStackValid >= 0 )
    goto LABEL_9;
}
