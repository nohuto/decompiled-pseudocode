/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0011508
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00113F0 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0013850 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0015090 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C003A290 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C009B34C (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
