/*
 * XREFs of ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0012720
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0012D34 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPowerPolicyOwnerSettings::Init(FxPowerPolicyOwnerSettings *this)
{
  struct _CALLBACK_OBJECT **p_m_PowerCallbackObject; // rbx
  PVOID v3; // rax
  _UNICODE_STRING string; // [rsp+20h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&string, L"\\Callback\\PowerState");
  oa.RootDirectory = 0LL;
  oa.ObjectName = &string;
  p_m_PowerCallbackObject = &this->m_PowerCallbackObject;
  oa.Length = 48;
  oa.Attributes = 64;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&this->m_PowerCallbackObject, &oa, 0, 1u) >= 0 )
  {
    v3 = ExRegisterCallback(*p_m_PowerCallbackObject, FxPowerPolicyOwnerSettings::_PowerStateCallback, this);
    this->m_PowerCallbackRegistration = v3;
    if ( !v3 )
    {
      ObfDereferenceObject(*p_m_PowerCallbackObject);
      *p_m_PowerCallbackObject = 0LL;
    }
  }
  KeInitializeEvent(&this->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_Event, NotificationEvent, 1u);
  this->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_Period = 0;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxPowerIdleMachine::_PowerTimeoutDpcRoutine;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerContext = this;
  KeInitializeTimerEx(&this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.KernelTimer, NotificationTimer);
  KeInitializeDpc(
    &this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.TimerDpc,
    this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerCallback,
    this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerContext);
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_IsExtTimer = 0;
  FxPowerIdleMachine::Reset(&this->m_PowerIdleMachine);
  return 0LL;
}
