/*
 * XREFs of imp_WdfInterruptTryToAcquireLock @ 0x1C0098E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0030680 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

bool __fastcall imp_WdfInterruptTryToAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  char v2; // bl
  FxInterrupt *v4; // rcx
  _FX_DRIVER_GLOBALS *Offset; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v7; // r10
  bool v8; // zf
  unsigned __int8 CurrentIrql; // al
  int v11; // eax
  __int64 FxDriverGlobals; // [rsp+68h] [rbp+28h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v4 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = (_FX_DRIVER_GLOBALS *)LOWORD(v4->__vftable);
    v4 = (FxInterrupt *)((char *)v4 - (__int64)Offset);
  }
  if ( v4->m_Type == 4135 )
  {
    pFxInterrupt = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, (unsigned __int16)Offset);
    v4 = pFxInterrupt;
  }
  m_Globals = v4->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( !v4->m_PassiveHandling )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x21u, WPP_FxInterruptApi_cpp_Traceguids, (const void *)Interrupt);
      LODWORD(FxDriverGlobals) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      v8 = *(_BYTE *)(v7 + 318) == 0;
LABEL_11:
      if ( !v8 )
        DbgBreakPoint();
      return 0;
    }
    if ( m_Globals->FxVerifierOn )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
        LODWORD(FxDriverGlobals) = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        v8 = m_Globals->FxVerifierDbgBreakOnError == 0;
        goto LABEL_11;
      }
    }
  }
  FxDriverGlobals = 0LL;
  if ( v4->m_PassiveHandling )
  {
    v11 = FxWaitLockInternal::AcquireLock(
            &v4->m_WaitLock->FxWaitLockInternal,
            Offset,
            (_LARGE_INTEGER *)&FxDriverGlobals);
    return FxWaitLockInternal::IsLockAcquired(v11);
  }
  return v2;
}
