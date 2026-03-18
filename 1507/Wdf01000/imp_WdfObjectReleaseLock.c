/*
 * XREFs of imp_WdfObjectReleaseLock @ 0x1C00795C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     FxGetCallbackLock @ 0x1C00793C0 (FxGetCallbackLock.c)
 */

void __fastcall imp_WdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Object)
{
  ULONG_PTR _a1; // rbx
  FxObject *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCallbackLock *CallbackLock; // rax
  __int64 v6; // rdx
  FxObject *pObject; // [rsp+50h] [rbp+18h] BYREF

  _a1 = Object;
  if ( !Object )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1000uLL);
  v3 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Object) = 0;
  if ( (_a1 & 1) != 0 )
  {
    Object = LOWORD(v3->__vftable);
    v3 = (FxObject *)((char *)v3 - Object);
  }
  if ( v3->m_Type == 4096 )
  {
    pObject = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pObject, (void *)_a1, 0x1000u, Object);
    v3 = pObject;
  }
  m_Globals = v3->m_Globals;
  CallbackLock = FxGetCallbackLock(v3);
  if ( !CallbackLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxObjectAPI_cpp_Traceguids, (const void *)_a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_LOCK_OPERATION, _a1, 0LL);
  }
  LOBYTE(v6) = CallbackLock->m_PreviousIrql;
  CallbackLock->Unlock(CallbackLock, v6);
}
