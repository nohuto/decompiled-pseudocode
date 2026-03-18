/*
 * XREFs of PpmEventIdleStateChange @ 0x14011920C
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x14023FB10 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall PpmEventIdleStateChange(int a1, int a2)
{
  unsigned __int64 GroupSetMember; // rcx
  void *result; // rax
  _DWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-30h]
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( (xmmword_1403D1290 & 0x8000) != 0 )
  {
    v4[0] = a1;
    v4[1] = a2;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v6 = v4;
    v8 = 0;
    v5 = GroupSetMember;
    v7 = 16;
    return EtwTraceKernelEvent((int)&v6, 1, 0x80008000, 0x1235u, 1538);
  }
  return result;
}
