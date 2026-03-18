/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x1C0026C30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall imp_WdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock, __int64 *Timeout)
{
  _LARGE_INTEGER *v4; // rsi
  FxWaitLock *v5; // rcx
  __int64 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxWaitLockInternal *v8; // rdi
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  FxWaitLock *pLock; // [rsp+78h] [rbp+20h] BYREF

  if ( !Lock )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1023uLL);
  v4 = 0LL;
  v5 = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Lock & 1) != 0 )
  {
    v6 = LOWORD(v5->__vftable);
    v5 = (FxWaitLock *)((char *)v5 - v6);
  }
  if ( v5->m_Type == 4131 )
  {
    pLock = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pLock, (void *)Lock, 0x1023u, v6);
    v5 = pLock;
  }
  m_Globals = v5->m_Globals;
  if ( (!Timeout || *Timeout) && m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v13 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v13,
      m_Globals->Public.DriverName,
      (const char *)&v13);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    v8 = &v5->FxWaitLockInternal;
    if ( Timeout )
      v12 = *Timeout;
    KeEnterCriticalRegion();
    if ( Timeout )
      v4 = (_LARGE_INTEGER *)&v12;
    v9 = KeWaitForSingleObject(v8, Executive, 0, 0, v4);
    if ( v9 == 258 )
      KeLeaveCriticalRegion();
    else
      v8->m_OwningThread = KeGetCurrentThread();
    return v9;
  }
}
