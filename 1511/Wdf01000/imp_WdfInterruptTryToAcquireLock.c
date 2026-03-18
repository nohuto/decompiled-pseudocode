/*
 * XREFs of imp_WdfInterruptTryToAcquireLock @ 0x1C0083FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0033FD8 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

bool __fastcall imp_WdfInterruptTryToAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxInterrupt *v4; // rcx
  char v5; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int v8; // eax
  FxInterrupt *pFxInterrupt; // [rsp+40h] [rbp+8h] BYREF
  __int64 FxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v4 = pFxInterrupt;
  v5 = 0;
  m_Globals = pFxInterrupt->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( !pFxInterrupt->m_PassiveHandling )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x21u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt);
      FxVerifierDbgBreakPoint(pFxInterrupt->m_Globals);
      return 0;
    }
    if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) < 0 )
      return 0;
    v4 = pFxInterrupt;
  }
  FxDriverGlobals = 0LL;
  if ( v4->m_PassiveHandling )
  {
    v8 = FxWaitLockInternal::AcquireLock(&v4->m_WaitLock->FxWaitLockInternal, v3, (_LARGE_INTEGER *)&FxDriverGlobals);
    return FxWaitLockInternal::IsLockAcquired(v8);
  }
  return v5;
}
