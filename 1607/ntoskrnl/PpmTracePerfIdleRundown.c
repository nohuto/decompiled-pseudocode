/*
 * XREFs of PpmTracePerfIdleRundown @ 0x14020A624
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PpmEventIdleStateChange @ 0x1400A0088 (PpmEventIdleStateChange.c)
 *     PpmPerfGetCurrentState @ 0x1400F8C78 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( a1[3022] )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    PpmPerfGetCurrentState((__int64)a1, (_DWORD *)&v5 + 1, 0LL, 0LL, &v5, 0LL);
    v2 = a1[201];
    v10 = 0;
    v7 = v2;
    LODWORD(v6) = HIDWORD(v5);
    v8 = &v5;
    v9 = 24;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4659, 4200450);
  }
  v3 = a1[2976];
  if ( v3 )
    PpmEventIdleStateChange(*(_DWORD *)(v3 + 12), *(_DWORD *)(v3 + 12));
  return 0LL;
}
