/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x1C0010D20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
  FxWaitLock *pLock; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

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
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  else
  {
    v8 = &v5->FxWaitLockInternal;
    if ( Timeout )
      v13 = *Timeout;
    KeEnterCriticalRegion();
    if ( Timeout )
      v4 = (_LARGE_INTEGER *)&v13;
    v9 = KeWaitForSingleObject(v8, Executive, 0, 0, v4);
    if ( v9 == 258 )
      KeLeaveCriticalRegion();
    else
      v8->m_OwningThread = KeGetCurrentThread();
    return v9;
  }
}
