/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800079D4 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CTimer::s_TimerTickProc(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_TIMER Timer)
{
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( Context )
  {
    if ( Timer == (PTP_TIMER)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)Context + 7,
                               (signed __int64)Timer,
                               (signed __int64)Timer) )
    {
      _InterlockedIncrement((volatile signed __int32 *)Context + 2);
      v4 = Context + 16;
      EnterCriticalSection((LPCRITICAL_SECTION)(Context + 16));
      *((_DWORD *)Context + 18) = GetCurrentThreadId();
      CTimer::_OnTimerCallback((CTimer *)Context);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
