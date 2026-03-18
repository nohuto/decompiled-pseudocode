/*
 * XREFs of ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C00A207C
 * Callers:
 *     ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3290 (-InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A32D0 (-InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00A1BC0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  WDFINTERRUPT__ *v3; // rcx

  FxInterrupt::AcquireLock(this, a2);
  v3 = 0LL;
  if ( this->m_ObjectSize )
    v3 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_WakeInterruptMachine->m_Claimed = this->m_EvtInterruptIsr(v3, this->m_InterruptInfo.MessageNumber);
  FxInterrupt::ReleaseLock(this);
}
