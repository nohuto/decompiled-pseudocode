/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180022060
 * Callers:
 *     AudioServerDestroyStream @ 0x1800386C0 (AudioServerDestroyStream.c)
 * Callees:
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  int v4; // ebx
  _BOOL8 v5; // r8
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(CAudioSession *__hidden, struct CAudioStream *, bool); // rbp
  __int64 (__fastcall *v8)(CAudioStream *); // rbp
  TraceLoggingHProvider v9; // rcx

  v4 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 50) && (v6 = *((_QWORD *)this + 26)) != 0 )
  {
    if ( a2 == *(_QWORD *)(v6 + 48) )
    {
      v7 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *, bool))(**((_QWORD **)this + 21)
                                                                                          + 264LL);
      if ( v7 == CAudioSession::RemoveStream )
      {
        CAudioSession::RemoveStream(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 26), 1);
      }
      else
      {
        LOBYTE(v5) = 1;
        v7(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 26), v5);
      }
      v8 = *(__int64 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 26) + 72LL);
      if ( v8 == CAudioStream::ReleaseClientReference )
        CAudioStream::ReleaseClientReference(*((CAudioStream **)this + 26));
      else
        v8(*((CAudioStream **)this + 26));
      *((_QWORD *)this + 26) = 0LL;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          53LL,
          &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          a2,
          *(_QWORD *)(v6 + 48));
      }
      v4 = -2147024809;
    }
  }
  else
  {
    v4 = -2004287487;
  }
  *((_DWORD *)this + 50) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, a2, v4);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v4 < 0
    && v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v9 + 7) & 0x100) != 0
    && *((_BYTE *)v9 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v9 + 2), 55LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, (unsigned int)v4);
  }
  return (unsigned int)v4;
}
