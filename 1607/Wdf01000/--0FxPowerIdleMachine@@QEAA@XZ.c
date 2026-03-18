/*
 * XREFs of ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1C0023A78
 * Callers:
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0032DF0 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     memset @ 0x1C003C780 (memset.c)
 */

void __fastcall FxPowerIdleMachine::FxPowerIdleMachine(FxPowerIdleMachine *this)
{
  FxCREvent *p_m_D0NotificationEvent; // rbx

  this->m_Lock.m_Lock = 0LL;
  p_m_D0NotificationEvent = &this->m_D0NotificationEvent;
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_PowerTimeoutTimer.m_Timer.m_TimerContext = 0LL;
  this->m_PowerTimeoutTimer.m_Timer.m_TimerCallback = 0LL;
  this->m_PowerTimeoutTimer.m_Timer.m_Period = 0;
  this->m_PowerTimeoutTimer.m_Timer.m_KernelExTimer = 0LL;
  this->m_D0NotificationEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_D0NotificationEvent.m_Event.m_Event, SynchronizationEvent, 0);
  p_m_D0NotificationEvent->m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PowerTimeout.QuadPart = 0LL;
  *(_WORD *)&this->m_EventHistoryIndex = 0;
  this->m_CurrentIdleState = FxIdleStopped;
  memset(this->m_EventHistory, 0, 0x40uLL);
  this->m_TagTracker = 0LL;
}
