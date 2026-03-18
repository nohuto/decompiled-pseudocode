/*
 * XREFs of ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0011208
 * Callers:
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C001233C (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C0056FC4 (--0FxEventQueue@@QEAA@E@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007A7E0 (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::FxWaitLockInternal(FxWaitLockInternal *this)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_Event.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
}
