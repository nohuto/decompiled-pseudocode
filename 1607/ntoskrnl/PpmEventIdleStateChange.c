/*
 * XREFs of PpmEventIdleStateChange @ 0x1400A0088
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x14020A624 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventIdleStateChange(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 GroupSetMember; // [rsp+38h] [rbp-30h]
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v3[0] = a1;
    v3[1] = a2;
    v7 = 0;
    v6 = 16;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v5 = v3;
    return EtwTraceKernelEvent((int)&v5, 1, 0x80008000, 4661, 1538);
  }
  return result;
}
