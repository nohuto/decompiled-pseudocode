/*
 * XREFs of ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXXZ @ 0x1C009CC88
 * Callers:
 *     ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3210 (-CompletingD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3230 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 */

void __fastcall FxPkgPnp::AckPendingWakeInterruptOperation(FxPkgPnp *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_WakeInterruptPendingAckCount, 0xFFFFFFFF) == 1 )
    FxPkgPnp::PowerProcessEvent(this, 0x2000u);
}
