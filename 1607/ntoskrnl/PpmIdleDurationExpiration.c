/*
 * XREFs of PpmIdleDurationExpiration @ 0x1402003A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1401FF830 (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x14020BE04 (PpmEventIdleDurationExpiration.c)
 */

__int64 PpmIdleDurationExpiration()
{
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v3[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+38h] [rbp-C8h]
  _DWORD v5[44]; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v7; // [rsp+F8h] [rbp-8h]

  v5[0] = 1310721;
  memset(&v5[1], 0, 0xA4uLL);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  PpmGetIdleConstrainedMask(&v6);
  v3[1] = v7;
  v4 = 0;
  v3[0] = (unsigned __int16 *)&v6;
  while ( !(unsigned int)KeEnumerateNextProcessor(&PerformanceCounter, v3) )
  {
    if ( *(_QWORD *)(KeGetPrcb(PerformanceCounter.LowPart) + 23848) <= InterruptTimePrecise.QuadPart )
      KeAddProcessorAffinityEx(v5, PerformanceCounter.LowPart);
  }
  result = KeIsEmptyAffinityEx(v5);
  if ( !(_DWORD)result )
  {
    PpmEventIdleDurationExpiration(v5);
    return HalRequestIpi(0LL, v5);
  }
  return result;
}
