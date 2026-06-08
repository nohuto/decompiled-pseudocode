/*
 * XREFs of RegisterHvCap @ 0x1C001C0E0
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001C910 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHvCap(_DWORD *a1)
{
  _DWORD v2[6]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = a1[12];
  v2[2] = a1[102];
  v2[3] = a1[114];
  v2[4] = a1[168];
  v2[0] = 42;
  if ( qword_1C000DC08 )
    qword_1C000DC08(v2);
  return 0LL;
}
