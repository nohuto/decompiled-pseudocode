/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180002700 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800137D8 (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x18005FB38 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v2; // esi
  __int64 (__fastcall *v5)(CPerEndpointVolumeAudioSession *); // rax
  void (__fastcall **v6[2])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v8; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 118);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      93,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)this + 107),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != 1 )
      goto LABEL_13;
    CAudioSession::DeleteInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 476));
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        94LL,
        &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107));
    }
    *((_BYTE *)this + 1000) = 1;
  }
  if ( v2 == 1 && !a2 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
    *((_QWORD *)this + 57) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        95LL,
        &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107));
    }
    *((_BYTE *)this + 1000) = 0;
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
  }
LABEL_13:
  *((_DWORD *)this + 118) = a2;
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v6[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
    v6[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionStateChanged::`vftable';
    v7 = v2;
    v8 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v6);
    v5 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v5 == CAudioSession::Release )
    {
      CAudioSession::Release(this);
    }
    else if ( v5 == CPerEndpointVolumeAudioSession::Release )
    {
      CPerEndpointVolumeAudioSession::Release(this);
    }
    else
    {
      v5(this);
    }
  }
}
