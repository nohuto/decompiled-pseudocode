/*
 * XREFs of imp_WdfSpinLockRelease @ 0x1C002DC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?ReleaseLock@FxSpinLock@@QEAAXXZ @ 0x1C002DD58 (-ReleaseLock@FxSpinLock@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  WDFSPINLOCK__ *_a1; // rbx
  FxSpinLock *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v5; // [rsp+48h] [rbp+10h] BYREF
  FxSpinLock *pLock; // [rsp+50h] [rbp+18h] BYREF

  _a1 = (WDFSPINLOCK__ *)SpinLock;
  if ( !SpinLock )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1024uLL);
  v3 = (FxSpinLock *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(SpinLock) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    SpinLock = LOWORD(v3->__vftable);
    v3 = (FxSpinLock *)((char *)v3 - SpinLock);
  }
  if ( v3->m_Type == 4132 )
  {
    pLock = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pLock, _a1, 0x1024u, SpinLock);
    v3 = pLock;
  }
  m_Globals = v3->m_Globals;
  if ( v3->m_InterruptLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, _a1);
    v5 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v5,
      m_Globals->Public.DriverName,
      (const char *)&v5);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    FxSpinLock::ReleaseLock(v3);
  }
}
