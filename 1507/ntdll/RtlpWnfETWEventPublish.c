/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800C8D3C
 * Callers:
 *     RtlPublishWnfStateData @ 0x180073290 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180077820 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventPublish(__int64 a1, int a2)
{
  _BYTE Fields[6]; // [rsp+28h] [rbp-40h] BYREF
  __int16 v4; // [rsp+2Eh] [rbp-3Ah]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]

  v4 = 3363;
  v6 = a2;
  v5 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE038E], 0x20402u, 0xCu, Fields);
}
