/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180015BE0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18005D820 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180008B60 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x1800153B0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S_guid_ @ 0x18005FA18 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

void __fastcall CAudioSession::RecalculateSessionVolume(
        __int64 a1,
        unsigned int a2,
        GUID *a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  __int64 v6; // rdi
  void *v7; // rbx
  __int64 v9; // r14
  int CurrentPolicyGain; // eax
  int v11; // esi
  int v12; // xmm6_4
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  size_t v16; // rcx
  char *v17; // rax
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64, __int64); // rax
  int v19; // r8d
  CAudioSession *v20; // rcx
  int v21; // xmm6_4
  int v22; // edi
  __int64 (__fastcall *v23)(CAudioSession *); // rax
  CAudioSession *v24; // rcx
  GUID *v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-99h]
  bool v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-49h] BYREF
  __int64 v30; // [rsp+78h] [rbp-41h]
  void *v31; // [rsp+80h] [rbp-39h]
  unsigned __int64 v32; // [rsp+88h] [rbp-31h]
  GUID *v33; // [rsp+90h] [rbp-29h]
  __int128 v34; // [rsp+98h] [rbp-21h] BYREF
  int v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+ACh] [rbp-Dh]
  bool v37; // [rsp+110h] [rbp+57h]

  v6 = 0LL;
  v34 = _xmm;
  v7 = 0LL;
  v35 = 1065353216;
  v36 = 1065353216;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v25 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( a3 )
      v25 = a3;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 110, (_DWORD)a3, *(_QWORD *)(a1 + 840), (__int64)v25);
  }
  v9 = a1 - 16;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)(a1 - 16),
                        a6,
                        &v27,
                        (struct SessionPolicyGains *)&v34,
                        &v28);
  v11 = CurrentPolicyGain;
  if ( CurrentPolicyGain )
  {
    if ( CurrentPolicyGain >= 0 )
      goto LABEL_35;
LABEL_48:
    AudSrvTraceLoggingErrorHelper("CAudioSession::RecalculateSessionVolume", 0x127Cu, v11);
    goto LABEL_35;
  }
  LOBYTE(v30) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 872);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = *(_DWORD *)(v9 + 912);
  v37 = *(_DWORD *)(v9 + 916) != 0;
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v30) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 856);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v13 = *(unsigned int *)(a1 + 968);
  v14 = (unsigned int)v13;
  if ( (_DWORD)v13 )
  {
    if ( v13 == 2 )
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v15 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v13;
    if ( v15 < 4 )
    {
LABEL_45:
      v11 = -2147024882;
      if ( (_BYTE)v30 )
        ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
      goto LABEL_48;
    }
    v16 = 4 * v13;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = (char *)malloc(v16);
  v7 = v17;
  if ( !v17 )
    goto LABEL_45;
  if ( (_DWORD)v13 )
  {
    do
    {
      v6 += 4LL;
      *(_DWORD *)&v17[v6 - 4] = *(_DWORD *)(v6 + *(_QWORD *)(a1 + 976) - 4);
      --v14;
    }
    while ( v14 );
  }
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !a5 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 440LL);
    LOBYTE(v26) = v37;
    if ( v18 == CPerStreamVolumeAudioSession::UpdateAudioVolume )
      CPerStreamVolumeAudioSession::UpdateAudioVolume(a1 - 16, a2, v27, (__int64)&v34, (__int64)v26);
    else
      ((void (__fastcall *)(__int64, _QWORD, bool, __int128 *, _DWORD, int, _DWORD, void *, __int64, __int64))v18)(
        a1 - 16,
        a2,
        v27,
        &v34,
        (_DWORD)v26,
        v12,
        v13,
        v7,
        v28,
        50000LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(a1 - 16);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 856);
  LOBYTE(v30) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      111,
      v19,
      *(_QWORD *)(a1 + 840),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 896)));
    v20 = WPP_GLOBAL_Control;
  }
  v21 = *(_DWORD *)(a1 + 896);
  v22 = *(_DWORD *)(a1 + 900);
  if ( (_BYTE)v30 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v20 = WPP_GLOBAL_Control;
  }
  if ( !a2 )
  {
    LODWORD(v31) = v21;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionVolumeChanged::`vftable';
    BYTE4(v31) = v22 != 0;
    v32 = (unsigned __int64)a3;
LABEL_28:
    v30 = a1 - 16;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)(a1 + 608),
      (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&lpCriticalSection);
    v20 = WPP_GLOBAL_Control;
    goto LABEL_29;
  }
  if ( a2 == 1 )
  {
    v31 = v7;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioChannelVolumeChanged::`vftable';
    v33 = a3;
    v32 = __PAIR64__(a4, v13);
    goto LABEL_28;
  }
LABEL_29:
  if ( v20 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v20 + 28) & 0x40) != 0 && *((_BYTE *)v20 + 25) >= 4u )
    WPP_SF_S(*((_QWORD *)v20 + 2), 112LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, *(_QWORD *)(a1 + 840));
  v23 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 16LL);
  v24 = (CAudioSession *)(a1 - 16);
  if ( v23 == CAudioSession::Release )
    CAudioSession::Release(v24);
  else
    v23(v24);
LABEL_35:
  free(v7);
}
