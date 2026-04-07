/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18003C354
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003B380 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18003C524 (-Start@CTimer@@QEAAJK@Z.c)
 * Callees:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18003BA20 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  union _LARGE_INTEGER *v2; // rcx
  void (*v3)(void); // rax

  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v2 = (union _LARGE_INTEGER *)*((_QWORD *)this + 8);
    v3 = *(void (**)(void))v2->QuadPart;
    if ( (char *)v3 == (char *)CAnimationClock::OnTimerTick )
      CAnimationClock::OnTimerTick(v2);
    else
      v3();
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
