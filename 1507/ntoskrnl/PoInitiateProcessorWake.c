/*
 * XREFs of PoInitiateProcessorWake @ 0x140233D68
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmIdleTransitionStall @ 0x140235220 (PpmIdleTransitionStall.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  char v1; // bl
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // edx
  __int64 v5; // r14
  signed __int32 v6; // eax
  signed __int32 v7; // edx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r8
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // r8d
  unsigned __int32 v14; // eax
  _QWORD v16[4]; // [rsp+20h] [rbp-99h] BYREF
  _WORD v17[2]; // [rsp+40h] [rbp-79h] BYREF
  int v18; // [rsp+44h] [rbp-75h]
  _QWORD v19[21]; // [rsp+48h] [rbp-71h]

  v1 = 0;
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v2 = 0LL;
  }
  else
  {
    _mm_lfence();
    v2 = KiProcessorBlock[a1];
  }
  v3 = *(_QWORD *)(v2 + 23808);
  v4 = HIBYTE(*(_DWORD *)(v2 + 23872));
  v5 = *(_QWORD *)(v3 + 472);
  if ( HIBYTE(*(_DWORD *)(v2 + 23872)) != 1 )
  {
    while ( (v4 & 0xF7) != 0 && (_BYTE)v4 != 7 )
    {
      if ( (_BYTE)v4 == 2 )
      {
        v4 = HIBYTE(*(_DWORD *)(v2 + 23872));
      }
      else if ( (((_BYTE)v4 - 4) & 0xFD) != 0 )
      {
        if ( (_BYTE)v4 == 5 )
        {
          _m_prefetchw((const void *)(v2 + 23872));
          v6 = *(_DWORD *)(v2 + 23872);
          do
          {
            if ( (v6 & 0xFF000000) != 0x5000000 )
              break;
            v7 = v6;
            v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 23872), v6 & 0xFFFFFF | 0x7000000, v6);
          }
          while ( v6 != v7 );
          LOBYTE(v4) = HIBYTE(v6);
          if ( HIBYTE(v6) == 5 )
          {
            v8 = *(_WORD *)(v3 + 56);
            v9 = 0;
            v17[0] = v8;
            v17[1] = *(_WORD *)(v3 + 58);
            v18 = 0;
            if ( *(_WORD *)(v3 + 56) )
            {
              do
              {
                v10 = v9++;
                v19[v10] = *(_QWORD *)(v3 + 8 * v10 + 64);
              }
              while ( v9 < *(_WORD *)(v3 + 56) );
              v8 = v17[0];
            }
            v11 = 0;
            if ( v8 )
            {
              while ( !v19[v11] )
              {
                if ( ++v11 >= v8 )
                  return v1;
              }
              HalRequestIpi(0LL, v17);
            }
            return v1;
          }
        }
      }
      else
      {
        _m_prefetchw((const void *)(v2 + 23872));
        v12 = *(_DWORD *)(v2 + 23872);
        do
        {
          if ( HIBYTE(v12) != (unsigned __int8)v4 )
            break;
          v13 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 23872), v12 & 0xFFFFFF | 0x8000000, v12);
        }
        while ( v12 != v13 );
        v14 = HIBYTE(v12);
        if ( (_BYTE)v14 == (_BYTE)v4 )
        {
          if ( !*(_BYTE *)(v2 + 23857) )
            return 1;
          memset(v16, 0, sizeof(v16));
          v16[1] = PopIdleTransitionTimeout;
          BYTE4(v16[3]) = 0;
          v16[2] = v2;
          while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v3 + 456))(v5) )
          {
            if ( HIBYTE(*(_DWORD *)(v2 + 23872)) != 8 )
              return v1;
            PpmIdleTransitionStall(v16);
          }
          if ( *(_QWORD *)(v3 + 40) == -1LL )
            _InterlockedExchange64((volatile __int64 *)(v3 + 40), KeQueryPerformanceCounter(0LL).QuadPart);
          return (*(__int64 (__fastcall **)(__int64))(v3 + 464))(v5);
        }
        LOBYTE(v4) = v14;
      }
      _mm_pause();
      if ( (_BYTE)v4 == 1 )
        return v1;
    }
  }
  return v1;
}
