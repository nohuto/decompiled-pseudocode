/*
 * XREFs of RegisterHvCap @ 0x1C001C1F0
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001CA20 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHvCap(_DWORD *a1)
{
  _DWORD v2[6]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = a1[12];
  v2[2] = a1[100];
  v2[3] = a1[112];
  v2[4] = a1[166];
  v2[0] = 42;
  if ( qword_1C000DF48 )
    qword_1C000DF48(v2);
  return 0LL;
}
