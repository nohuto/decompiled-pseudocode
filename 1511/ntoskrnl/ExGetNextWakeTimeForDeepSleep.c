/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x140214510
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1400352DC (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdlePrepare @ 0x1400488C0 (PpmIdlePrepare.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x1401C35D8 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx

  v3 = -1LL;
  result = -1LL;
  if ( PoRtcWakeAllowed )
  {
    v5 = (__int64 *)ExpWakeTimerList;
    while ( v5 != &ExpWakeTimerList )
    {
      v6 = (__int64)(v5 - 32);
      v5 = (__int64 *)*v5;
      if ( *(_QWORD *)(v6 + 248) )
        result = KeQueryTimerDueTime(v6, a2, a3);
      if ( result )
      {
        if ( result < v3 )
          v3 = result;
      }
    }
    return v3;
  }
  return result;
}
