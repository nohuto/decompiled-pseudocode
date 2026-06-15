/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800668B0
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180079F60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EDE0 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x18007C238 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v2; // ebp
  void (__fastcall **v5[2])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v7; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 81);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      129,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != 1 )
      goto LABEL_18;
    CAudioSession::DeleteInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)this + 41);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_18;
    }
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      130LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88));
  }
  if ( v2 == 1 && !a2 )
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
LABEL_18:
  *((_DWORD *)this + 81) = a2;
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v5[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
    v5[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionStateChanged::`vftable';
    v6 = v2;
    v7 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472), v5);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
