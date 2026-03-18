/*
 * XREFs of ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0030200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartTimer(FxPowerIdleMachine *This)
{
  _LARGE_INTEGER m_PowerTimeout; // rdx
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  This->m_Flags |= 8u;
  m_PowerTimeout = This->m_PowerTimeout;
  if ( This->m_PowerTimeoutTimer.m_Timer.m_IsExtTimer )
  {
    v3[1] = 1000000LL;
    v3[0] = 0LL;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
      This->m_PowerTimeoutTimer.m_Timer.m_KernelExTimer,
      (_LARGE_INTEGER)m_PowerTimeout.QuadPart,
      10000LL * This->m_PowerTimeoutTimer.m_Timer.m_Period,
      v3);
  }
  else
  {
    KeSetCoalescableTimer(
      &This->m_PowerTimeoutTimer.m_Timer.KernelTimer,
      m_PowerTimeout,
      This->m_PowerTimeoutTimer.m_Timer.m_Period,
      0x64u,
      &This->m_PowerTimeoutTimer.m_Timer.TimerDpc);
  }
  return 10LL;
}
