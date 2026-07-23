/*
 * XREFs of PpmIdleDurationExpiration @ 0x1401E79C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1401E705C (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x1401F1E98 (PpmEventIdleDurationExpiration.c)
 */

__int64 PpmIdleDurationExpiration()
{
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v3[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+38h] [rbp-C8h]
  _QWORD v5[22]; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v7; // [rsp+F8h] [rbp-8h]

  v5[0] = 1310721LL;
  memset(&v5[1], 0, 0xA0uLL);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  PpmGetIdleConstrainedMask(&v6);
  v3[1] = v7;
  v3[0] = (unsigned __int16 *)&v6;
  v4 = 0;
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
