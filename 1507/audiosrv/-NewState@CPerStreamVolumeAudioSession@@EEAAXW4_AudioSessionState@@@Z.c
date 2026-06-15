/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890
 * Callers:
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x18000F1F8 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EDE0 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180013698 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800350A4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x18007C238 (WPP_SF_Sdd.c)
 */

void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  int v4; // ebp
  __int64 (__fastcall *v5)(CAudioSession *); // rdi
  char *v6; // rdi

  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  v4 = *((_DWORD *)this + 81);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      129,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      v4,
      a2);
  }
  if ( v4 )
  {
    if ( v4 == 1 && a2 == AudioSessionStateInactive )
    {
      GetSystemTimeAsFileTime((LPFILETIME)this + 42);
      *((_DWORD *)this + 78) = GetTickCount();
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          131LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *((_QWORD *)this + 88));
      }
      CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
    }
  }
  else if ( a2 == AudioSessionStateActive )
  {
    CAudioSession::DeleteInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)this + 41);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        130LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88));
    }
  }
  *((_DWORD *)this + 81) = a2;
  if ( v4 != a2 )
  {
    (*(void (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
    v5 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v5 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v5(this);
  }
  if ( a2 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 784) )
    {
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      125LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this);
  }
  v6 = (char *)this + 32;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 32LL))(v6);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
}
