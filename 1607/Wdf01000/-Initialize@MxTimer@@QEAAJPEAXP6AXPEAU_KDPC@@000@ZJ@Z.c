/*
 * XREFs of ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0016830
 * Callers:
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C000CE0C (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0019EB0 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024720 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0025930 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxTimer::Initialize(
        MxTimer *this,
        void *TimerContext,
        void (__fastcall *TimerCallback)(_KDPC *, void *, void *, void *),
        int Period)
{
  __int64 result; // rax

  this->m_Timer.m_TimerContext = TimerContext;
  this->m_Timer.m_TimerCallback = TimerCallback;
  this->m_Timer.m_Period = Period;
  KeInitializeTimerEx(&this->m_Timer.KernelTimer, NotificationTimer);
  KeInitializeDpc(&this->m_Timer.TimerDpc, this->m_Timer.m_TimerCallback, this->m_Timer.m_TimerContext);
  result = 0LL;
  this->m_Timer.m_IsExtTimer = 0;
  return result;
}
