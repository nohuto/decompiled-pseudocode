/*
 * XREFs of ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C00564FC
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003440 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0020B88 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008D674 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

unsigned __int8 __fastcall FxInterrupt::WakeInterruptIsr(FxInterrupt *this)
{
  FxWakeInterruptMachine **p_m_WakeInterruptMachine; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rbx

  p_m_WakeInterruptMachine = &this->m_WakeInterruptMachine;
  FxWakeInterruptMachine::ProcessEvent(this->m_WakeInterruptMachine, WakeInterruptEventIsr);
  m_Globals = this->m_Globals;
  if ( this->m_ObjectSize )
    v4 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  _FX_DRIVER_GLOBALS::WaitForSignal(
    m_Globals,
    &(*p_m_WakeInterruptMachine)->m_IsrEvent,
    "Wake Interrupt ISR is stuck waiting for the deviceto power back up and driver calllback to be processed",
    v4,
    m_Globals->DbgWaitForWakeInterruptIsrTimeoutInSec,
    3);
  return (*p_m_WakeInterruptMachine)->m_Claimed;
}
