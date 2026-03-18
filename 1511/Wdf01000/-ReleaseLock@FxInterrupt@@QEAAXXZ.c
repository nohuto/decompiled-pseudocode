/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00035B0
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003440 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C000F250 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C002ED50 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00356A0 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008C8DC (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
