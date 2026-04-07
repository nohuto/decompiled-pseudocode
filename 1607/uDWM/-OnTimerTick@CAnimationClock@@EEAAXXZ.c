/*
 * XREFs of ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18003BA20
 * Callers:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18003C354 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18003B9C0 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 */

void __fastcall CAnimationClock::OnTimerTick(union _LARGE_INTEGER *this)
{
  union _LARGE_INTEGER *v2; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)&this[-1]);
  v2 = this + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this[1]);
  CAnimationClock::_OnTimerCallback(this - 2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v2);
  CBaseObject::Release((CBaseObject *)&this[-2]);
}
