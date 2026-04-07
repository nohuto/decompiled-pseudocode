/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800079D4
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004B90 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180007BB0 (-Start@CTimer@@QEAAJK@Z.c)
 * Callees:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x1800052E0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CAnimationClock *v3; // rdi
  void (__fastcall *v4)(CAnimationClock *); // rsi

  if ( *((_QWORD *)this + 8) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v3 = (CAnimationClock *)*((_QWORD *)this + 8);
    v4 = **(void (__fastcall ***)(CAnimationClock *))v3;
    if ( v4 == CAnimationClock::OnTimerTick )
      CAnimationClock::OnTimerTick(v3);
    else
      v4(v3);
    EnterCriticalSection(v2);
  }
}
