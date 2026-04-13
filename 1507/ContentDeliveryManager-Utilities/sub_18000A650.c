/*
 * XREFs of sub_18000A650 @ 0x18000A650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void *__fastcall sub_18000A650(void *a1, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  __int64 v7; // rsi

  *(_QWORD *)a1 = off_18002D890;
  v4 = (void *)*((_QWORD *)a1 + 7);
  if ( v4 )
    CloseHandle(v4);
  v5 = (void *)*((_QWORD *)a1 + 14);
  if ( v5 )
    CloseHandle(v5);
  v6 = (struct _TP_TIMER *)*((_QWORD *)a1 + 13);
  if ( v6 )
  {
    SetThreadpoolTimer(v6, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)a1 + 13), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)a1 + 13));
  }
  v7 = *((_QWORD *)a1 + 18);
  if ( v7 )
  {
    *((_QWORD *)a1 + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
