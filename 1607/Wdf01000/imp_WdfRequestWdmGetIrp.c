/*
 * XREFs of imp_WdfRequestWdmGetIrp @ 0x1C0034260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

_IRP *__fastcall imp_WdfRequestWdmGetIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  FxRequest *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _IRP *m_Irp; // rsi
  int _a2; // edi
  unsigned __int8 v10; // r8
  _FX_DRIVER_GLOBALS *v11; // rdx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+18h] BYREF

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
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v4, &PreviousIrql, a3);
    v11 = v4->m_Globals;
    if ( v11->FxVerifierOn )
      _a2 = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v11);
    else
      _a2 = 0;
    if ( _a2 >= 0 )
    {
      m_Irp = v4->m_Irp.m_Irp;
    }
    else
    {
      m_Irp = 0LL;
      _a2 = -1073741808;
    }
    FxNonPagedObject::Unlock(v4, PreviousIrql, v10);
  }
  else
  {
    m_Irp = v4->m_Irp.m_Irp;
    _a2 = 0;
  }
  if ( _a2 >= 0 )
    return m_Irp;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, _a2);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
