/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x14020BA44
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  if ( a2 )
  {
    result = PpmPlatformStates;
    if ( *(_BYTE *)(PpmPlatformStates + 12) )
    {
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v4 = a3;
        v6 = 0;
        v5 = 4 * a2;
        return EtwTraceKernelEvent((int)&v4, 1, 0x40008000u, 4672 - (a1 != 0), 1538);
      }
    }
  }
  return result;
}
