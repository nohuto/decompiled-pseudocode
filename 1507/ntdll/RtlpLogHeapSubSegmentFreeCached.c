/*
 * XREFs of RtlpLogHeapSubSegmentFreeCached @ 0x1800EFC84
 * Callers:
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentFreeCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD v9[15]; // [rsp+24h] [rbp-74h] BYREF

  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v9[7] = a1;
  HIWORD(v9[0]) = 4146;
  *(_QWORD *)&v9[9] = a2;
  *(_QWORD *)&v9[11] = a3;
  *(_QWORD *)&v9[13] = a4;
  return NtTraceEvent();
}
