/*
 * XREFs of imp_WdfInterruptAcquireLock @ 0x1C00016A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 Offset; // rcx
  FxInterrupt *v3; // rbx
  _FX_DRIVER_GLOBALS *v4; // rdx
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  LOWORD(Offset) = 0;
  v3 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxInterrupt *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4135 )
  {
    pFxInterrupt = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v3 = pFxInterrupt;
  }
  if ( !v3->m_PassiveHandling )
    goto LABEL_10;
  if ( FxVerifierCheckIrqlLevel(v3->m_Globals, 0) < 0 )
    return;
  v3 = pFxInterrupt;
  if ( pFxInterrupt->m_PassiveHandling )
  {
    FxWaitLockInternal::AcquireLock(&pFxInterrupt->m_WaitLock->FxWaitLockInternal, v4, 0LL);
  }
  else
  {
LABEL_10:
    m_Interrupt = v3->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = v3->m_InterruptCaptured) != 0LL )
      v3->m_OldIrql = KeAcquireInterruptSpinLock(m_Interrupt);
  }
}
