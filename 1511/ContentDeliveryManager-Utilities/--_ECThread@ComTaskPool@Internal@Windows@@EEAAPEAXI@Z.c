/*
 * XREFs of ??_ECThread@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x18000A270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

Windows::Internal::ComTaskPool::CThread *__fastcall Windows::Internal::ComTaskPool::CThread::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CThread *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  __int64 v7; // rsi

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CThread::`vftable';
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    CloseHandle(v4);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
    CloseHandle(v5);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    SetThreadpoolTimer(v6, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 13), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 13));
  }
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
