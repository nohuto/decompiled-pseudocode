/*
 * XREFs of RegisterHvCap @ 0x1C001A910
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001A4B0 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHvCap(_DWORD *a1)
{
  _DWORD v2[6]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = a1[12];
  v2[2] = a1[102];
  v2[3] = a1[114];
  v2[4] = a1[168];
  v2[0] = 42;
  if ( qword_1C00095D8 )
    qword_1C00095D8(v2);
  return 0LL;
}
