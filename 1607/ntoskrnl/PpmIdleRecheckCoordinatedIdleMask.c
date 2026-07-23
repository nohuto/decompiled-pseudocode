/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x1402005D4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // bl
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rsi
  _DWORD v12[44]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = PpmPlatformStates;
  v4 = 0;
  if ( PpmPlatformStates )
  {
    v12[0] = 1310721;
    memset(&v12[1], 0, 0xA4uLL);
    if ( a2 )
      LOWORD(v12[0]) = a2 + 1;
    v8 = a2;
    v9 = 0;
    *(_QWORD *)&v12[2 * v8 + 2] |= a3;
    v10 = *(_QWORD *)(a1 + 736);
    if ( *(_DWORD *)(v10 + 4) )
    {
      while ( *(_DWORD *)(v10 + 4LL * v9 + 8) != -1
           || !(unsigned int)KeIsSubsetAffinityEx(
                               (__int16 *)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 768) + 24LL * v9 + 4) + v3 + 120),
                               (__int16 *)v12) )
      {
        if ( ++v9 >= *(_DWORD *)(v10 + 4) )
          return v4;
      }
      return 1;
    }
  }
  return v4;
}
