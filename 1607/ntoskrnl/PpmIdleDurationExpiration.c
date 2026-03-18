/*
 * XREFs of PpmIdleDurationExpiration @ 0x140200578
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x1400D4810 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D53B0 (KeEnumerateNextProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1401FFA04 (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x14020BFD8 (PpmEventIdleDurationExpiration.c)
 */

__int64 PpmIdleDurationExpiration()
{
  unsigned __int64 InterruptTimePrecise; // rbx
  __int64 result; // rax
  LARGE_INTEGER v2; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v3[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+38h] [rbp-C8h]
  _DWORD v5[44]; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v7; // [rsp+F8h] [rbp-8h]

  v5[0] = 1310721;
  memset(&v5[1], 0, 0xA4uLL);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v2);
  PpmGetIdleConstrainedMask(&v6);
  v3[1] = v7;
  v4 = 0;
  v3[0] = (unsigned __int16 *)&v6;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, v3) )
  {
    if ( *(_QWORD *)(KeGetPrcb(v2.LowPart) + 23848) <= InterruptTimePrecise )
      KeAddProcessorAffinityEx(v5, v2.LowPart);
  }
  result = KeIsEmptyAffinityEx(v5);
  if ( !(_DWORD)result )
  {
    PpmEventIdleDurationExpiration(v5);
    return HalRequestIpi(0LL, v5);
  }
  return result;
}
