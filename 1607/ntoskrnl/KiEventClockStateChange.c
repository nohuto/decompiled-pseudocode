/*
 * XREFs of KiEventClockStateChange @ 0x14009D8BC
 * Callers:
 *     KiSetClockTickRate @ 0x14009D7AC (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1400D6600 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x1401148A4 (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v5 = 0LL;
    BYTE1(v5) = a2;
    v6 = 0LL;
    v7 = 0LL;
    LOBYTE(v5) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        v6 = *a3;
        v7 = *a4;
      }
      else if ( a1 == 2 )
      {
        v6 = KiClockTimerNextTickTime;
      }
    }
    v10 = 0;
    v8 = &v5;
    v9 = 24;
    return EtwTraceKernelEvent((int)&v8, 1, 0x40100000u, 3927, 1538);
  }
  return result;
}
