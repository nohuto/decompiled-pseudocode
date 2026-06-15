/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180010860 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180011344 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18007A1B0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x1800137D0 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180032080 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x18007C0DC (WPP_SF_S_guid_.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

void __fastcall CAudioSession::RecalculateSessionVolume(
        __int64 a1,
        unsigned int a2,
        GUID *a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  char *v8; // rbx
  __int64 v9; // rsi
  int CurrentPolicyGain; // r15d
  int v11; // xmm6_4
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(__int64, _QWORD, __int64, __int128 *, int, int, unsigned int, char *, __int64, __int64); // rdi
  __int64 v17; // rcx
  int v18; // xmm6_4
  int v19; // edi
  __int64 (__fastcall *v20)(CAudioSession *); // rdi
  GUID *v21; // rax
  int v22; // [rsp+28h] [rbp-89h]
  bool v23; // [rsp+58h] [rbp-59h] BYREF
  size_t Size; // [rsp+60h] [rbp-51h] BYREF
  __int64 v25; // [rsp+68h] [rbp-49h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-41h] BYREF
  __int64 v27; // [rsp+78h] [rbp-39h]
  char *v28; // [rsp+80h] [rbp-31h]
  unsigned __int64 v29; // [rsp+88h] [rbp-29h]
  GUID *v30; // [rsp+90h] [rbp-21h]
  __int128 v31; // [rsp+98h] [rbp-19h] BYREF
  int v32; // [rsp+A8h] [rbp-9h]
  int v33; // [rsp+ACh] [rbp-5h]
  bool v34; // [rsp+108h] [rbp+57h]

  v31 = _xmm;
  v32 = 1065353216;
  v8 = 0LL;
  v33 = 1065353216;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v21 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( a3 )
      v21 = a3;
    WPP_SF_S_guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      150,
      (_DWORD)a3,
      *(_QWORD *)(a1 + 688),
      (__int64)v21);
  }
  v9 = a1 - 16;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)(a1 - 16),
                        a6,
                        &v23,
                        (struct SessionPolicyGains *)&v31,
                        &v25);
  if ( CurrentPolicyGain )
  {
LABEL_42:
    if ( CurrentPolicyGain >= 0 )
      goto LABEL_32;
    goto LABEL_43;
  }
  LOBYTE(v27) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 720);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v11 = *(_DWORD *)(v9 + 760);
  v34 = *(_DWORD *)(v9 + 764) != 0;
  if ( (_BYTE)v27 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v27) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 704);
  CurrentPolicyGain = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = *(_DWORD *)(a1 + 756);
  Size = 0LL;
  v13 = v12;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, v12, 4LL) >= 0 )
  {
    v8 = (char *)malloc(Size);
    if ( v8 )
    {
      if ( v12 )
      {
        v14 = 0LL;
        do
        {
          *(_DWORD *)&v8[v14] = *(_DWORD *)(v14 + *(_QWORD *)(a1 + 760));
          v14 += 4LL;
          --v13;
        }
        while ( v13 );
      }
      if ( (_BYTE)v27 )
        LeaveCriticalSection(lpCriticalSection);
      if ( !a5 )
      {
        v16 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, int, int, unsigned int, char *, __int64, __int64))(*(_QWORD *)v9 + 440LL);
        LOBYTE(v15) = v23;
        LOBYTE(v22) = v34;
        if ( (char *)v16 == (char *)CPerStreamVolumeAudioSession::UpdateAudioVolume )
          CPerStreamVolumeAudioSession::UpdateAudioVolume(a1 - 16, a2, v15, &v31, v22, v11, v12, v8, v25, 50000LL);
        else
          v16(a1 - 16, a2, v15, &v31, v22, v11, v12, v8, v25, 50000LL);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(a1 - 16, v14);
      LOBYTE(v27) = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 704);
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          151,
          (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *(_QWORD *)(a1 + 688),
          *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 744)));
        v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      v18 = *(_DWORD *)(a1 + 744);
      v19 = *(_DWORD *)(a1 + 748);
      if ( (_BYTE)v27 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( a2 )
      {
        if ( a2 != 1 )
        {
LABEL_26:
          if ( (struct _GUID *)v17 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(v17 + 28) & 0x40) != 0
            && *(_BYTE *)(v17 + 25) >= 4u )
          {
            WPP_SF_S(
              *(_QWORD *)(v17 + 16),
              152LL,
              &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
              *(_QWORD *)(a1 + 688));
          }
          v20 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 16LL);
          if ( v20 == CAudioSession::Release )
          {
            CAudioSession::Release((CAudioSession *)(a1 - 16));
            goto LABEL_32;
          }
          v20((CAudioSession *)(a1 - 16));
          goto LABEL_42;
        }
        v28 = v8;
        lpCriticalSection = (LPCRITICAL_SECTION)&CAudioChannelVolumeChanged::`vftable';
        v29 = __PAIR64__(a4, v12);
        v30 = a3;
      }
      else
      {
        LODWORD(v28) = v18;
        v29 = (unsigned __int64)a3;
        lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionVolumeChanged::`vftable';
        BYTE4(v28) = v19 != 0;
      }
      v27 = a1 - 16;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(a1 + 456));
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_26;
    }
  }
  CurrentPolicyGain = -2147024882;
  if ( (_BYTE)v27 )
  {
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
    goto LABEL_42;
  }
LABEL_43:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      153LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (unsigned int)CurrentPolicyGain);
  }
LABEL_32:
  free(v8);
}
