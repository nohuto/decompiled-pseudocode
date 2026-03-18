/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00A20C8
 * Callers:
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0007A80 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00299D0 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C00987D0 (imp_WdfInterruptReleaseLock.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C00A207C (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00A2280 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A2AE0 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::ReleaseLock(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  struct _KINTERRUPT *m_Interrupt; // rax

  if ( this->m_PassiveHandling )
  {
    FxWaitLockInternal::ReleaseLock(&this->m_WaitLock->FxWaitLockInternal, a2);
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
      KeReleaseInterruptSpinLock(m_Interrupt, this->m_OldIrql);
  }
}
