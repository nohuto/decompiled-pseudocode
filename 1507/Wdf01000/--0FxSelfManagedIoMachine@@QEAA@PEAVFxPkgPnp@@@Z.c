/*
 * XREFs of ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0028FE4
 * Callers:
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0028F4C (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C002919C (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

void __fastcall FxSelfManagedIoMachine::FxSelfManagedIoMachine(FxSelfManagedIoMachine *this, FxPkgPnp *PkgPnp)
{
  this->m_DeviceSelfManagedIoCleanup.m_Method = 0LL;
  this->m_DeviceSelfManagedIoFlush.m_Method = 0LL;
  this->m_DeviceSelfManagedIoInit.m_Method = 0LL;
  this->m_DeviceSelfManagedIoSuspend.m_Method = 0LL;
  this->m_DeviceSelfManagedIoRestart.m_Method = 0LL;
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  this->m_PkgPnp = PkgPnp;
  *(_WORD *)&this->m_EventHistoryIndex = 0;
  this->m_CurrentState = 1;
  this->m_Events.E = 0LL;
  this->m_States.S = 0LL;
}
