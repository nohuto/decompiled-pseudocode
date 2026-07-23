/*
 * XREFs of PoInitiateProcessorWake @ 0x1401FF35C
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmIdleTransitionStall @ 0x140200924 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x1402009B0 (PpmIdleUpdateSynchronizationState.c)
 */

char __fastcall PoInitiateProcessorWake(ULONG a1)
{
  __int64 v1; // rdx
  __int64 Prcb; // rbp
  __int64 v3; // r8
  __int64 v4; // rdi
  _DWORD *v5; // rsi
  int v6; // r11d
  char v7; // bl
  __int64 v8; // r14
  char updated; // al
  char v10; // r11
  _QWORD v12[4]; // [rsp+20h] [rbp-F8h] BYREF
  _WORD v13[88]; // [rsp+40h] [rbp-D8h] BYREF

  Prcb = KeGetPrcb(a1);
  v4 = *(_QWORD *)(Prcb + 23808);
  v5 = (_DWORD *)(Prcb + 23872);
  v6 = HIBYTE(*(_DWORD *)(Prcb + 23872));
  v7 = 0;
  v8 = *(_QWORD *)(v4 + 472);
  while ( (_BYTE)v6 != 1 && (v6 & 0xF7) != 0 && (_BYTE)v6 != 7 )
  {
    if ( (_BYTE)v6 == 2 )
    {
      v6 = HIBYTE(*v5);
    }
    else if ( (((_BYTE)v6 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v6 == 5 )
      {
        LOBYTE(v3) = 5;
        LOBYTE(v1) = 7;
        LOBYTE(v6) = PpmIdleUpdateSynchronizationState(v5, v1, v3);
        if ( (_BYTE)v6 == 5 )
        {
          KeCopyAffinityEx((__int64)v13, (unsigned __int16 *)(v4 + 56));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v13) )
            HalRequestIpi(0LL, v13);
          return v7;
        }
      }
    }
    else
    {
      LOBYTE(v3) = v6;
      LOBYTE(v1) = 8;
      updated = PpmIdleUpdateSynchronizationState(v5, v1, v3);
      if ( updated == v10 )
      {
        if ( !*(_BYTE *)(Prcb + 23857) )
          return 1;
        memset(v12, 0, sizeof(v12));
        v12[1] = PopIdleTransitionTimeout;
        BYTE4(v12[3]) = 0;
        v12[2] = Prcb;
        while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v4 + 456))(v8) )
        {
          if ( HIBYTE(*v5) != 8 )
            return v7;
          PpmIdleTransitionStall(v12);
        }
        if ( *(_QWORD *)(v4 + 40) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v4 + 40), KeQueryPerformanceCounter(0LL).QuadPart);
        return (*(__int64 (__fastcall **)(__int64))(v4 + 464))(v8);
      }
      LOBYTE(v6) = updated;
    }
    _mm_pause();
  }
  return v7;
}
