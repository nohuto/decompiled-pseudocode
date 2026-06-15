/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180064D00
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800753A0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180026030 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800261AC (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x180077528 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v2; // ebp
  void (__fastcall **v5[2])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v7; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 118);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      129,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != 1 )
      goto LABEL_18;
    CAudioSession::DeleteInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 476));
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_18;
    }
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      130LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107));
  }
  if ( v2 == 1 && !a2 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
    *((_QWORD *)this + 57) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        131LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        *((_QWORD *)this + 107));
    }
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
  }
LABEL_18:
  *((_DWORD *)this + 118) = a2;
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v5[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
    v5[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionStateChanged::`vftable';
    v6 = v2;
    v7 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v5);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
