/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10
 * Callers:
 *     AudioServerCreateStream @ 0x180006340 (AudioServerCreateStream.c)
 * Callees:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     TemplateEventDescriptor @ 0x180008958 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x180008980 (Template_zqttq.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180012E68 (-AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x1800166B0 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019910 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x1800199E0 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019EF0 (--0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_S.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18004F23C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x18004F710 (-RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1800642BC (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        struct IAudioProcess *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _GUID *a6,
        unsigned __int16 *a7,
        struct SYSTEM_AUDIO_STREAM *a8)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // r12d
  char v9; // r13
  unsigned int v10; // ebx
  char *v12; // r15
  __int64 v13; // rdi
  int MixFormat; // esi
  __int64 v15; // r8
  HANDLE ProcessHeap; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r9
  const unsigned __int16 *v21; // rdx
  char v22; // r13
  __int64 (__fastcall *v23)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  void (*v25)(void); // rax
  __int64 v26; // r10
  CEndpointCharacteristics *v27; // rcx
  struct SYSTEM_AUDIO_STREAM *v28; // rbx
  __int64 v29; // r9
  CAudioSession *v30; // rcx
  __int64 v31; // rbx
  void (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  CEndpointCharacteristics *v33; // rsi
  __int64 v34; // rcx
  int (*v35)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  BOOL v36; // r12d
  char *v37; // rax
  __int64 v38; // rcx
  int v39; // r12d
  int v40; // esi
  __int64 v41; // rax
  const struct tWAVEFORMATEX *v42; // r8
  __int64 (__fastcall *v43)(CPerStreamVolumeAudioStream *__hidden, struct CVADServer *, const struct tWAVEFORMATEX *); // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r13
  int v47; // ecx
  __int64 v48; // rcx
  unsigned __int16 *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rdx
  BOOL v53; // esi
  __int64 v54; // rbx
  int v55; // eax
  struct IAudioStreamInfo *v56; // r8
  int v57; // r9d
  __int64 (__fastcall *v58)(CAudioResourceManager *__hidden, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, struct SYSTEM_AUDIO_STREAM *); // r11
  int v59; // eax
  int v60; // edx
  unsigned int v61; // ecx
  struct _GUID *v62; // r8
  struct tWAVEFORMATEX *v63; // rdx
  unsigned int (__fastcall *v64)(CAudioStream *__hidden); // rax
  struct SYSTEM_AUDIO_STREAM *v65; // rbx
  const void **v66; // rcx
  __int64 (__fastcall *v67)(const void **, struct CAudioStream *); // rax
  int v68; // eax
  signed __int64 v69; // rax
  HANDLE EventW; // rax
  signed int LastError; // eax
  char *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned int (__fastcall *v75)(CAudioStream *__hidden); // rax
  struct tWAVEFORMATEX **v77; // [rsp+20h] [rbp-110h]
  int v78; // [rsp+30h] [rbp-100h]
  unsigned int v79; // [rsp+38h] [rbp-F8h]
  CEndpointCharacteristics *v80; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-78h] BYREF
  int v82; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-68h] BYREF
  struct CEndpointCharacteristics *v84; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v85; // [rsp+D8h] [rbp-58h]
  int v86; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+E8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v88; // [rsp+F0h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+100h] [rbp-30h]
  __int64 v91; // [rsp+108h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+110h] [rbp-20h] BYREF
  char v93; // [rsp+118h] [rbp-18h]
  PROPVARIANT v94[4]; // [rsp+120h] [rbp-10h] BYREF
  GUID v95; // [rsp+140h] [rbp+10h] BYREF
  GUID v96; // [rsp+150h] [rbp+20h] BYREF
  GUID v97; // [rsp+160h] [rbp+30h] BYREF
  __int64 v98; // [rsp+170h] [rbp+40h]
  struct _GUID v99; // [rsp+180h] [rbp+50h] BYREF
  struct _GUID v100; // [rsp+190h] [rbp+60h] BYREF
  GUID v101; // [rsp+1A0h] [rbp+70h]
  GUID v102; // [rsp+1B0h] [rbp+80h]
  unsigned int v103; // [rsp+210h] [rbp+E0h] BYREF
  struct IAudioProcess *v104; // [rsp+218h] [rbp+E8h]
  unsigned int v105; // [rsp+220h] [rbp+F0h]
  __int64 v106; // [rsp+228h] [rbp+F8h]

  v106 = a4;
  v105 = a3;
  v104 = a2;
  v8 = *(_DWORD *)(a1 + 288);
  v9 = 0;
  pv = 0LL;
  v10 = a3;
  v84 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      a1,
      (__int64)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 216),
      *(_DWORD *)(a1 + 284),
      *(_DWORD *)(a1 + 292),
      *(_DWORD *)(a1 + 304),
      v8);
  memset(a8, 0, 0x60uLL);
  v93 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
  }
  if ( *(_DWORD *)(a1 + 200) )
  {
    if ( *(_QWORD *)(a1 + 208) )
    {
      MixFormat = -2004287486;
      goto LABEL_39;
    }
    v15 = *(unsigned int *)(a1 + 284);
    v85 = *(_QWORD *)(a1 + 176);
    MixFormat = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager
                                                                                         + 88LL))(
                  g_PolicyManager,
                  v10,
                  v15);
    if ( MixFormat < 0 )
      goto LABEL_39;
    ProcessHeap = GetProcessHeap();
    v12 = (char *)HeapAlloc(ProcessHeap, 0, 0x208uLL);
    if ( v12 )
    {
      v19 = *(_DWORD *)(a1 + 276);
      v20 = (unsigned __int8)v19;
      LOBYTE(v18) = (v19 & 0x200000) != 0 || v10 == 2;
      LOBYTE(v78) = *(_DWORD *)(a1 + 304) != 0;
      LOBYTE(v17) = *(_DWORD *)(a1 + 272) == 1;
      LOBYTE(v20) = v19 & 1;
      CAudioStream::CAudioStream(v12, v17, v18, v20, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 296), v78, v10);
      *(_QWORD *)v12 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
      *((_QWORD *)v12 + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
      *((_QWORD *)v12 + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
      *((_QWORD *)v12 + 62) = 0LL;
      *((_QWORD *)v12 + 63) = 0LL;
      v12[512] = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
    {
      MixFormat = -2147024882;
      goto LABEL_39;
    }
    MixFormat = CAudioSession::AddPendingStreamCreate(*(CAudioSession **)(a1 + 168), (struct CAudioStream *)v12);
    if ( MixFormat < 0 )
      goto LABEL_39;
    if ( *(_DWORD *)(a1 + 272) == 1 )
    {
      MixFormat = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v12 + 144LL))(
                    v12,
                    a1,
                    *(_QWORD *)(a1 + 192));
      if ( MixFormat < 0 )
        goto LABEL_39;
LABEL_91:
      v45 = v85;
      v46 = a5;
      *(_QWORD *)(v85 + 72) = *(_QWORD *)(a1 + 192);
      v47 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 16LL) + 18;
      *(_QWORD *)(v45 + 32) = v106;
      *(_DWORD *)(v45 + 64) = v47;
      *(_QWORD *)(v45 + 40) = v46;
      *(_DWORD *)(v45 + 12) = *(_DWORD *)(a1 + 64);
      *(_QWORD *)(v45 + 16) = a7;
      *(_QWORD *)(v45 + 96) = *(_QWORD *)(a1 + 216);
      *(_DWORD *)(v45 + 8) = v8;
      v48 = *(_QWORD *)(a1 + 184);
      if ( v48 )
      {
        v49 = (unsigned __int16 *)pv;
        *(_QWORD *)(v48 + 24) = *(_QWORD *)(a1 + 224);
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = v49[8] + 18;
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL) = v49;
      }
      v50 = *(_QWORD *)(a1 + 168);
      v51 = *(_QWORD *)(v50 + 864);
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
      v13 = *(_QWORD *)(v50 + 864);
      v52 = *(_QWORD *)(a1 + 224);
      v85 = v13;
      MixFormat = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                    g_pEndpointCharacteristicsCache,
                    v52,
                    &v84);
      if ( MixFormat >= 0 )
      {
        v103 = -1;
        v53 = v10 - 1 <= 1;
        v54 = *(_QWORD *)g_PolicyManager;
        v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13);
        MixFormat = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD, int, unsigned int *))(v54 + 56))(
                      g_PolicyManager,
                      v53,
                      *(unsigned int *)(a1 + 284),
                      0LL,
                      v55,
                      &v103);
        if ( MixFormat >= 0 )
        {
          v56 = (struct IAudioStreamInfo *)(v12 + 8);
          v57 = *(_DWORD *)(a1 + 304);
          v58 = *(__int64 (__fastcall **)(CAudioResourceManager *__hidden, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
          v59 = v58 == CAudioResourceManager::CreateStream
              ? CAudioResourceManager::CreateStream(
                  g_AudioResourceManager,
                  v104,
                  v56,
                  *(_DWORD *)(a1 + 284),
                  *(_DWORD *)(a1 + 292),
                  *(_DWORD *)(a1 + 300),
                  v57,
                  v84,
                  *(_DWORD *)(a1 + 276),
                  (enum _AUDCLNT_SHAREMODE)*(_DWORD *)(a1 + 272),
                  (struct IAudioGraphCallback *)v12,
                  *(struct tWAVEFORMATEX **)(a1 + 192),
                  v106,
                  v46,
                  a6,
                  *(_DWORD *)(a1 + 64),
                  a7,
                  v103,
                  *(_DWORD *)(a1 + 308),
                  a8)
              : ((__int64 (__fastcall *)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, _QWORD, _DWORD, _DWORD, int, struct CEndpointCharacteristics *))v58)(
                  g_AudioResourceManager,
                  v104,
                  v56,
                  *(unsigned int *)(a1 + 284),
                  *(_DWORD *)(a1 + 292),
                  *(_DWORD *)(a1 + 300),
                  v57,
                  v84);
          MixFormat = v59;
          if ( v59 >= 0 )
          {
            v64 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v12 + 64LL);
            if ( v64 == CAudioStream::AddClientReference )
              CAudioStream::AddClientReference((CAudioStream *)v12);
            else
              v64((CAudioStream *)v12);
            *(_QWORD *)(a1 + 208) = v12;
            if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0 )
            {
              v65 = a8;
            }
            else
            {
              v65 = a8;
              if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  34LL,
                  &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
                  *((_QWORD *)a8 + 6));
            }
            v66 = *(const void ***)(a1 + 168);
            v67 = (__int64 (__fastcall *)(const void **, struct CAudioStream *))*((_QWORD *)*v66 + 30);
            if ( v67 == CPerStreamVolumeAudioSession::AddStream )
            {
              v68 = CPerStreamVolumeAudioSession::AddStream(v66, (struct CAudioStream *)v12);
            }
            else if ( (char *)v67 == (char *)CPerEndpointVolumeAudioSession::AddStream )
            {
              v68 = CPerEndpointVolumeAudioSession::AddStream(
                      (CPerEndpointVolumeAudioSession *)v66,
                      (struct CAudioStream *)v12);
            }
            else
            {
              v68 = v67(v66, (struct CAudioStream *)v12);
            }
            MixFormat = v68;
            if ( v68 )
            {
              v9 = 0;
              goto LABEL_39;
            }
            v9 = 1;
            do
            {
              v69 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
              *((_QWORD *)v12 + 59) = v69 + 1;
            }
            while ( v69 == -1 );
            EventW = CreateEventW(0LL, 1, 0, 0LL);
            *((_QWORD *)v12 + 57) = EventW;
            if ( !EventW )
            {
              LastError = GetLastError();
              MixFormat = LastError;
              if ( LastError > 0 )
                MixFormat = (unsigned __int16)LastError | 0x80070000;
              if ( MixFormat >= 0 )
                goto LABEL_131;
              v72 = (char *)*((_QWORD *)v12 + 57);
              if ( (unsigned __int64)(v72 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                CloseHandle(v72);
                *((_QWORD *)v12 + 57) = 0LL;
              }
              *((_QWORD *)v12 + 59) = 0LL;
            }
            if ( MixFormat < 0 )
            {
              v13 = v85;
              goto LABEL_39;
            }
LABEL_131:
            v13 = v85;
            *((_QWORD *)v65 + 7) = *((_QWORD *)v12 + 59);
            goto LABEL_140;
          }
        }
      }
LABEL_38:
      v9 = 0;
      goto LABEL_39;
    }
    v21 = *(const unsigned __int16 **)(a1 + 224);
    v22 = *(_BYTE *)(a1 + 276) & 1;
    v80 = 0LL;
    v23 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
    if ( v23 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                         v21,
                                         &v80);
    else
      AliasedEndpointCharacteristics = v23((RTL_SRWLOCK *)g_pEndpointCharacteristicsCache, v21, &v80);
    MixFormat = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( !v80 )
        goto LABEL_38;
      v25 = *(void (**)(void))(*(_QWORD *)v80 + 16LL);
      if ( (char *)v25 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      {
LABEL_37:
        v25();
        goto LABEL_38;
      }
      if ( ATL::SafeDecrementReferenceMultiThread((int *)v80 + 3) )
        goto LABEL_38;
      if ( v26 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 40LL))(v26, 1LL);
      v27 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_35:
      if ( !v27 )
        goto LABEL_38;
      v25 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
      goto LABEL_37;
    }
    v98 = *((_QWORD *)v80 + 2);
    v31 = v98;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    v86 = 0;
    v87 = 0LL;
    v32 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v80 + 2);
    if ( v32 )
    {
      (**v32)(v32, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v87);
      if ( v87 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 88LL))(v87, &v86);
        if ( v87 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
      }
    }
    v33 = v80;
    v34 = 0LL;
    v82 = 0;
    v81 = 0LL;
    v35 = (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))*((_QWORD *)v80 + 2);
    if ( v35 )
    {
      (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))v35)(
        *((_QWORD *)v80 + 2),
        &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
        &v81);
      v34 = v81;
      if ( v81 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v81 + 88LL))(v81, &v82);
        v34 = v81;
      }
      if ( v82 )
        goto LABEL_61;
    }
    if ( !*((_DWORD *)v33 + 93) )
    {
      v35 = (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))*((_QWORD *)v33 + 7);
      v36 = 1;
      if ( !v35 )
        goto LABEL_58;
      pvar = 0LL;
      v90 = 0LL;
      v91 = 0LL;
      if ( (*(int (__fastcall **)(int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001), const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
             v35,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v36 = v90 == 0;
      }
      PropVariantClear(&pvar);
      v34 = v81;
      v37 = (char *)v33 + 128;
      if ( v36 )
LABEL_58:
        v37 = (char *)v33 + 64;
      if ( *((_DWORD *)v37 + 2) > 1u )
      {
        if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v33) )
        {
LABEL_61:
          v38 = *((_QWORD *)v33 + 4);
          memset(v94, 0, 24);
          v39 = 1;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(
                 v38,
                 &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
                 v94) < 0
            || LOWORD(v94[0]) != 19 )
          {
            v39 = 0;
          }
          PropVariantClear(v94);
          v34 = v81;
LABEL_67:
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          v40 = *(_DWORD *)(a1 + 276);
          if ( (v40 & 0x400000) != 0 )
          {
            v8 = eKeywordDetectorConnector;
          }
          else if ( v39 && (v40 & 0x20000) != 0 )
          {
            v8 = eLoopbackConnector;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 272) == 1 )
              CoTaskMemFree(0LL);
            v8 = ((unsigned __int8)~(_BYTE)v40 >> 1) & 1;
          }
          v99 = *(struct _GUID *)(a1 + 312);
          MixFormat = CEndpointCharacteristics::GetMixFormat(v80, v8, &v99, v35, (struct tWAVEFORMATEX **)&pv);
          if ( MixFormat < 0 )
            goto LABEL_78;
          if ( *(_DWORD *)(a1 + 304) )
          {
            v41 = *(_QWORD *)v12;
            v42 = *(const struct tWAVEFORMATEX **)(a1 + 192);
          }
          else
          {
            if ( !v22 )
            {
              v42 = (const struct tWAVEFORMATEX *)pv;
              v43 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, struct CVADServer *, const struct tWAVEFORMATEX *))(*(_QWORD *)v12 + 144LL);
              if ( v43 == CPerStreamVolumeAudioStream::Initialize )
              {
                v44 = CPerStreamVolumeAudioStream::Initialize(
                        (CPerStreamVolumeAudioStream *)v12,
                        (struct CVADServer *)a1,
                        (const struct tWAVEFORMATEX *)pv);
LABEL_85:
                MixFormat = v44;
                if ( v44 >= 0 )
                {
                  if ( v31 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                  if ( v80 )
                    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v80 + 16LL))(v80);
                  v10 = v105;
                  goto LABEL_91;
                }
                goto LABEL_78;
              }
LABEL_84:
              v44 = v43((CPerStreamVolumeAudioStream *)v12, (struct CVADServer *)a1, v42);
              goto LABEL_85;
            }
            v60 = *(_DWORD *)(a1 + 292);
            v79 = *(_DWORD *)(a1 + 308);
            v88 = 0LL;
            v61 = *(_DWORD *)(a1 + 284);
            v95 = GUID_00000000_0000_0000_0000_000000000000;
            v96 = GUID_00000000_0000_0000_0000_000000000000;
            v97 = GUID_00000000_0000_0000_0000_000000000000;
            MixFormat = DeriveAudioProcessingModeConfiguration(
                          v61,
                          v60,
                          v80,
                          0,
                          0,
                          eOffloadConnector,
                          0,
                          v79,
                          &v95,
                          &v96,
                          &v97,
                          0LL);
            if ( MixFormat < 0
              || (v63 = *(struct tWAVEFORMATEX **)(a1 + 192),
                  v101 = v95,
                  v102 = v97,
                  v100 = v96,
                  MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                                v80,
                                v63,
                                v62,
                                &v100,
                                (struct _GUID *)v77,
                                &v88),
                  MixFormat < 0) )
            {
LABEL_78:
              if ( v31 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v27 = v80;
              goto LABEL_35;
            }
            v41 = *(_QWORD *)v12;
            v42 = v88;
          }
          v43 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, struct CVADServer *, const struct tWAVEFORMATEX *))(v41 + 144);
          goto LABEL_84;
        }
        v34 = v81;
      }
    }
    v39 = 0;
    goto LABEL_67;
  }
  MixFormat = -2004287487;
LABEL_39:
  v28 = a8;
  if ( *((_QWORD *)a8 + 6) )
  {
    if ( v12 )
    {
      CAudioStream::CloseAudioHandle((CAudioStream *)v12);
      v30 = *(CAudioSession **)(a1 + 168);
      if ( v9 )
      {
        LOBYTE(v29) = 1;
        (*(void (__fastcall **)(CAudioSession *, _QWORD, _QWORD, __int64))(*(_QWORD *)v30 + 264LL))(
          v30,
          *(_QWORD *)(a1 + 208),
          0LL,
          v29);
      }
      else
      {
        CAudioSession::RemovePendingStreamCreate(v30, (struct CAudioStream *)v12);
      }
      v73 = *(_QWORD *)(a1 + 208);
      if ( v73 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 72LL))(v73);
        *(_QWORD *)(a1 + 208) = 0LL;
      }
    }
  }
  else if ( v12 )
  {
    CAudioSession::RemovePendingStreamCreate(*(CAudioSession **)(a1 + 168), (struct CAudioStream *)v12);
  }
  memset(v28, 0, 0x60uLL);
LABEL_140:
  LeaveCriticalSection(lpCriticalSection);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v12 )
  {
    v75 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v12 + 72LL);
    if ( v75 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v12);
    else
      v75((CAudioStream *)v12);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v74, (__int64)&VadServer_CreateStream_Task_Stop);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      (unsigned int)MixFormat);
  }
  if ( MixFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::CreateStream", 0x6EDu, MixFormat);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v84 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v84 + 16LL))(v84);
  return (unsigned int)MixFormat;
}
