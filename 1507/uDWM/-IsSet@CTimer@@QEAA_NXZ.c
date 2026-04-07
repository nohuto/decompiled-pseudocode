/*
 * XREFs of ?IsSet@CTimer@@QEAA_NXZ @ 0x18000A668
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18000AE54 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009C408 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

char __fastcall CTimer::IsSet(CTimer *this)
{
  struct _TP_TIMER *v2; // rcx
  char v3; // bl
  char *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( !v2 || (v3 = 1, !IsThreadpoolTimerSet(v2)) )
    v3 = 0;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return v3;
}
