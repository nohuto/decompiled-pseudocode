/*
 * XREFs of imp_WdfObjectAcquireLock @ 0x1C007FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxGetCallbackLock @ 0x1C007FBC4 (FxGetCallbackLock.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfObjectAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCallbackLock *CallbackLock; // rax
  FxCallbackLock *v5; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  FxObject *pObject; // [rsp+50h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Object,
    0x1000u,
    (void **)&pObject);
  m_Globals = pObject->m_Globals;
  CallbackLock = FxGetCallbackLock(pObject);
  v5 = CallbackLock;
  if ( !CallbackLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxObjectAPI_cpp_Traceguids, Object);
    FxVerifierDbgBreakPoint(m_Globals);
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_LOCK_OPERATION, (unsigned __int64)Object, 0LL);
  }
  CallbackLock->Lock(CallbackLock, &irql);
  v5->m_PreviousIrql = irql;
}
