/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000AE40 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC (-ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 (__fastcall *v6)(CServerAudioSessionControl *__hidden); // rdi
  unsigned int (__fastcall *v7)(CServerAudioSessionControl *__hidden); // rdi
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CAudioSession *); // rdi
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(CAudioSessionManager *__hidden); // rdi
  __int64 (__fastcall *v13)(CAudioSession *, struct CAudioStream *, char); // rdi
  unsigned int (__fastcall *v14)(CAudioStream *__hidden); // rdi

  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      17LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      this);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 6, 0xFFFFFFFF) == 1 )
    {
      v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v5 + 104LL);
      if ( v6 == CServerAudioSessionControl::Dispose )
        CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)v5);
      else
        v6((CServerAudioSessionControl *)v5);
    }
    v7 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v5 + 16LL);
    if ( v7 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v5);
    else
      v7((CServerAudioSessionControl *)v5);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v8 = *((_QWORD *)this + 28);
  if ( v8 )
  {
    if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 4u )
      WPP_SF_qq(*(_QWORD *)(v4 + 16), 18LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, v8, *(_QWORD *)(v8 + 56));
    if ( *(_QWORD *)(*((_QWORD *)this + 28) + 56LL) )
    {
      if ( *((_BYTE *)this + 220) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 21) + 256LL))(
          *((_QWORD *)this + 21),
          *((_QWORD *)this + 28));
      v13 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, char))(**((_QWORD **)this + 21) + 264LL);
      if ( v13 == CAudioSession::RemoveStream )
      {
        CAudioSession::RemoveStream(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 28), 1);
      }
      else
      {
        LOBYTE(a3) = 1;
        v13(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 28), a3);
      }
    }
    v14 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(**((_QWORD **)this + 28) + 72LL);
    if ( v14 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(*((CAudioStream **)this + 28));
    else
      v14(*((CAudioStream **)this + 28));
    *((_QWORD *)this + 28) = 0LL;
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_QWORD *)this + 24) )
  {
    CAudioStream::ReleaseSaDevice(*((struct IAudioDeviceGraph **)this + 24));
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 5u )
  {
    WPP_SF_q(*(_QWORD *)(v4 + 16), 19LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, *((_QWORD *)this + 21));
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v9 = *((_QWORD *)this + 21);
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 16LL);
    if ( v10 == CAudioSession::Release )
      CAudioSession::Release(*((CAudioSession **)this + 21));
    else
      v10(*((CAudioSession **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 5u )
    {
      WPP_SF_(*(_QWORD *)(v4 + 16), 0x14u, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 5u )
    {
      WPP_SF_q(*(_QWORD *)(v4 + 16), 21LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, *((_QWORD *)this + 19));
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
  }
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    v12 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v11 + 16LL);
    if ( v12 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(*((CAudioSessionManager **)this + 19));
    else
      v12(*((CAudioSessionManager **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 5u )
    {
      WPP_SF_(*(_QWORD *)(v4 + 16), 0x16u, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_DWORD *)(v4 + 28) & 0x100) != 0 && *(_BYTE *)(v4 + 25) >= 4u )
      WPP_SF_q(*(_QWORD *)(v4 + 16), 23LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, this);
  }
}
