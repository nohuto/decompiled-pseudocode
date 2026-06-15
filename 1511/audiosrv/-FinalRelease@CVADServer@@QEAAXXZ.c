/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002C0E0 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180016000 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this, __int64 a2, _BOOL8 a3)
{
  TraceLoggingHProvider v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 (__fastcall *v6)(CServerAudioSessionControl *); // rdi
  __int64 (__fastcall *v7)(CServerAudioSessionControl *); // rdi
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned int (__fastcall *v10)(CAudioSession *__hidden); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(CAudioSessionManager *); // rdi
  __int64 (__fastcall *v13)(CAudioSession *__hidden, struct CAudioStream *, bool); // rdi
  __int64 (__fastcall *v14)(CAudioStream *); // rdi

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 6, 0xFFFFFFFF) == 1 )
    {
      v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v5 + 104LL);
      if ( v6 == CServerAudioSessionControl::Dispose )
        CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)v5);
      else
        v6((CServerAudioSessionControl *)v5);
    }
    v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v5 + 16LL);
    if ( v7 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v5);
    else
      v7((CServerAudioSessionControl *)v5);
    v4 = WPP_GLOBAL_Control;
  }
  v8 = *((_QWORD *)this + 26);
  if ( v8 )
  {
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v4 + 7) & 0x100) != 0
      && *((_BYTE *)v4 + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)v4 + 2), 18LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v8, *(_QWORD *)(v8 + 48));
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 26) + 48LL) )
    {
      if ( *((_BYTE *)this + 204) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 21) + 256LL))(
          *((_QWORD *)this + 21),
          *((_QWORD *)this + 26));
      v13 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *, bool))(**((_QWORD **)this + 21)
                                                                                           + 264LL);
      if ( v13 == CAudioSession::RemoveStream )
      {
        CAudioSession::RemoveStream(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 26), 1);
      }
      else
      {
        LOBYTE(a3) = 1;
        v13(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 26), a3);
      }
    }
    v14 = *(__int64 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 26) + 72LL);
    if ( v14 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(*((CAudioStream **)this + 26));
    else
      v14(*((CAudioStream **)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    v4 = WPP_GLOBAL_Control;
  }
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x100) != 0
    && *((_BYTE *)v4 + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)v4 + 2), 19LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, *((_QWORD *)this + 21));
    v4 = WPP_GLOBAL_Control;
  }
  v9 = *((_QWORD *)this + 21);
  if ( v9 )
  {
    v10 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v10 == CAudioSession::Release )
      CAudioSession::Release(*((CAudioSession **)this + 21));
    else
      v10(*((CAudioSession **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    v4 = WPP_GLOBAL_Control;
  }
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v4 + 7) & 0x100) != 0 && *((_BYTE *)v4 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v4 + 2), 0x14u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
      v4 = WPP_GLOBAL_Control;
    }
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v4 + 7) & 0x100) != 0
      && *((_BYTE *)v4 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v4 + 2), 21LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, *((_QWORD *)this + 19));
      v4 = WPP_GLOBAL_Control;
    }
  }
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v11 + 16LL);
    if ( v12 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(*((CAudioSessionManager **)this + 19));
    else
      v12(*((CAudioSessionManager **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v4 = WPP_GLOBAL_Control;
  }
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v4 + 7) & 0x100) != 0 && *((_BYTE *)v4 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v4 + 2), 0x16u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
      v4 = WPP_GLOBAL_Control;
    }
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v4 + 7) & 0x100) != 0
      && *((_BYTE *)v4 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v4 + 2), 23LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this);
    }
  }
}
