/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x1401E7BF0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1401C4D7C (KeIsSubsetAffinityEx.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // bl
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v12; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v13[21]; // [rsp+28h] [rbp-D0h] BYREF

  v3 = PpmPlatformStates;
  v4 = 0;
  if ( PpmPlatformStates )
  {
    v12 = 1310721LL;
    memset(v13, 0, 0xA0uLL);
    if ( a2 )
      LOWORD(v12) = a2 + 1;
    v8 = a2;
    v9 = 0;
    v13[v8] |= a3;
    v10 = *(_QWORD *)(a1 + 736);
    if ( *(_DWORD *)(v10 + 4) )
    {
      while ( *(_DWORD *)(v10 + 4LL * v9 + 8) != -1
           || !(unsigned int)KeIsSubsetAffinityEx(
                               (__int16 *)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 768) + 24LL * v9 + 4) + v3 + 120),
                               (__int16 *)&v12) )
      {
        if ( ++v9 >= *(_DWORD *)(v10 + 4) )
          return v4;
      }
      return 1;
    }
  }
  return v4;
}
