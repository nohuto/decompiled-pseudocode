/*
 * XREFs of ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18000AE10
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000ADB0 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CAnimationClock::OnTimerTick(CAnimationClock *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this - 2);
  v2 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  CAnimationClock::_OnTimerCallback((union _LARGE_INTEGER *)this - 2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  CBaseObject::Release((CAnimationClock *)((char *)this - 16));
}
