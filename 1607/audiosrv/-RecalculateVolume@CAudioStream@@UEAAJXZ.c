/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x1800095B0 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x1800163A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800160A0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800161D0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x1800164F0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180016F44 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180021780 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180027C50 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180051454 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180051C8C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this)
{
  CAudioStream *v1; // rdi
  int v2; // r15d
  _QWORD *v3; // rbx
  unsigned int i; // edx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *); // rax
  int v8; // eax
  int v9; // r15d
  _BOOL8 v10; // rdx
  CAudioSession *v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(CAudioSession *, unsigned int *); // rax
  int v14; // r14d
  _QWORD **v15; // rbx
  __int64 (__fastcall *v16)(CAudioSession *, struct IAudioProcess **); // rax
  __int64 v17; // rax
  unsigned int j; // ebx
  _QWORD *v19; // rbx
  char *v20; // r12
  _QWORD *v21; // rcx
  __int64 (*v22)(void); // rax
  char *v23; // r14
  int v24; // xmm6_4
  char *v25; // r13
  __int64 v26; // r9
  ULONGLONG TickCount64; // r15
  char *v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // r15
  size_t v31; // rbx
  _QWORD *v32; // rcx
  char *v33; // rbx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rcx
  char *v38; // r15
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdx
  char *v41; // rax
  char *v42; // rcx
  char *v43; // rcx
  const CHAR **v44; // rax
  const CHAR *v45; // rcx
  const CHAR *v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 (*v49)(void); // rax
  __int64 v50; // rax
  const WCHAR *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  _BYTE *v58; // r14
  HANDLE ProcessHeap; // rax
  __int64 v60; // rcx
  float v61; // xmm6_4
  __int64 (__fastcall *v62)(CAudioStream *__hidden, float *); // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rdx
  void (__fastcall *v67)(CPerStreamVolumeAudioStream *); // rax
  __int64 v69; // rax
  char *v70; // rcx
  AudioSrvVolumeTelemetryStreamVolume *v71; // rcx
  __int64 v72; // r8
  void (__fastcall *v73)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int); // rax
  unsigned __int64 v74; // rdx
  int v75; // eax
  CAudioSession *v76; // rcx
  __int64 (__fastcall *v77)(CAudioSession *, unsigned int *); // rax
  int v78; // eax
  __int64 (*v79)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v81; // rcx
  __int64 (*v82)(void); // rax
  const WCHAR *Identifier; // rax
  LPCGUID v84; // r8
  LPCGUID v85; // r9
  char *v86; // rax
  char *v87; // rax
  _BYTE *v88; // rax
  unsigned __int64 v89; // r14
  _QWORD *Next; // rax
  __int64 *cData; // [rsp+20h] [rbp-318h]
  int cDataa; // [rsp+20h] [rbp-318h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-310h]
  EVENT_DATA_DESCRIPTOR *pDataa; // [rsp+28h] [rbp-310h]
  bool v95; // [rsp+40h] [rbp-2F8h] BYREF
  char v96[3]; // [rsp+41h] [rbp-2F7h] BYREF
  int v97; // [rsp+44h] [rbp-2F4h]
  int v98; // [rsp+48h] [rbp-2F0h] BYREF
  float v99; // [rsp+4Ch] [rbp-2ECh] BYREF
  int v100; // [rsp+50h] [rbp-2E8h]
  unsigned int v101; // [rsp+54h] [rbp-2E4h] BYREF
  void ***v102; // [rsp+58h] [rbp-2E0h] BYREF
  _QWORD *v103; // [rsp+60h] [rbp-2D8h] BYREF
  BOOL v104; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v106; // [rsp+78h] [rbp-2C0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-2B8h] BYREF
  char v108; // [rsp+88h] [rbp-2B0h]
  LPCRITICAL_SECTION v109; // [rsp+90h] [rbp-2A8h] BYREF
  char v110; // [rsp+98h] [rbp-2A0h]
  CAudioStream *v111; // [rsp+A0h] [rbp-298h]
  __int64 v112; // [rsp+A8h] [rbp-290h] BYREF
  _DWORD v113[2]; // [rsp+B0h] [rbp-288h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-280h]
  _QWORD v115[2]; // [rsp+C0h] [rbp-278h] BYREF
  int *v116; // [rsp+D0h] [rbp-268h] BYREF
  void **v117; // [rsp+D8h] [rbp-260h] BYREF
  char v118[96]; // [rsp+E0h] [rbp-258h] BYREF
  __int64 v119; // [rsp+140h] [rbp-1F8h]
  int v120; // [rsp+148h] [rbp-1F0h]
  _BYTE v121[104]; // [rsp+158h] [rbp-1E0h] BYREF
  __int64 v122; // [rsp+1C0h] [rbp-178h]
  char v123[16]; // [rsp+1C8h] [rbp-170h] BYREF
  _QWORD v124[4]; // [rsp+1D8h] [rbp-160h] BYREF
  _QWORD v125[5]; // [rsp+1F8h] [rbp-140h] BYREF
  void *v126; // [rsp+220h] [rbp-118h] BYREF
  int v127; // [rsp+228h] [rbp-110h]
  int v128; // [rsp+22Ch] [rbp-10Ch]
  void *v129; // [rsp+230h] [rbp-108h]
  int v130; // [rsp+238h] [rbp-100h]
  int v131; // [rsp+23Ch] [rbp-FCh]
  const CHAR *v132; // [rsp+240h] [rbp-F8h]
  int v133; // [rsp+248h] [rbp-F0h]
  int v134; // [rsp+24Ch] [rbp-ECh]
  char *v135; // [rsp+250h] [rbp-E8h]
  __int64 v136; // [rsp+258h] [rbp-E0h]
  const WCHAR *v137; // [rsp+260h] [rbp-D8h]
  int v138; // [rsp+268h] [rbp-D0h]
  int v139; // [rsp+26Ch] [rbp-CCh]
  int *v140; // [rsp+270h] [rbp-C8h]
  __int64 v141; // [rsp+278h] [rbp-C0h]
  char *v142; // [rsp+280h] [rbp-B8h]
  __int64 v143; // [rsp+288h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR v144; // [rsp+290h] [rbp-A8h] BYREF
  BOOL *v145; // [rsp+2B0h] [rbp-88h]
  __int64 v146; // [rsp+2B8h] [rbp-80h]
  __int64 *v147; // [rsp+2C0h] [rbp-78h]
  __int64 v148; // [rsp+2C8h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2D0h] [rbp-68h] BYREF
  unsigned int *v150; // [rsp+2E0h] [rbp-58h]
  __int64 v151; // [rsp+2E8h] [rbp-50h]

  v122 = -2LL;
  v1 = this;
  v111 = this;
  v100 = 0;
  v2 = 0;
  if ( !*((_QWORD *)this + 21) )
    goto LABEL_117;
  v3 = (_QWORD *)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
    goto LABEL_117;
  for ( i = 0; i < *((_DWORD *)this + 20); *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i++) = 1065353216 )
    ;
  v5 = *((_QWORD *)this + 14);
  v6 = *((unsigned int *)this + 20);
  v7 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *))(*(_QWORD *)this + 40LL);
  if ( v7 == CPerStreamVolumeAudioStream::CalculateAPOVolume )
  {
    v8 = CPerStreamVolumeAudioStream::CalculateAPOVolume(this, v6, v5, &v95, &v106);
  }
  else
  {
    cData = &v106;
    v8 = ((__int64 (__fastcall *)(CAudioStream *, __int64, unsigned __int64, bool *))v7)(this, v6, v5, &v95);
  }
  v2 = v8;
  v97 = v8;
  if ( v8 < 0 )
    goto LABEL_117;
  v109 = (LPCRITICAL_SECTION)((char *)v1 + 128);
  v110 = 0;
  ATL::CCritSecLock::Lock(&v109);
  if ( *v3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 24LL))(*v3, v96);
    v97 = v9;
    if ( v9 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
      }
      v96[0] = 0;
      ATL::CComPtrBase<IPart>::Release(v3);
      v9 = 0;
      v97 = 0;
    }
    if ( *v3 )
    {
      if ( !v9 )
      {
        v10 = v95;
        if ( (v96[0] != 0) != v95 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              42LL,
              &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
              v1,
              v95);
            v10 = v95;
          }
          cData = 0LL;
          v75 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, v10, 0LL, 0LL);
          v97 = v75;
          if ( v75 < 0 )
          {
            if ( v75 == -2147417848 )
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
              }
              ATL::CComPtrBase<IPart>::Release(v3);
              v97 = 0;
            }
            else
            {
              AudSrvTraceLoggingErrorHelper("CAudioStream::RecalculateVolume", 0x737u, v75);
            }
          }
          else
          {
            v76 = (CAudioSession *)*((_QWORD *)v1 + 8);
            if ( v76 )
            {
              v77 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v76 + 120LL);
              v78 = v77 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v76, &v101) : v77(v76, &v101);
              if ( v78 >= 0
                && dword_1800CA040 > 4u
                && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
              {
                v104 = v95;
                v145 = &v104;
                v146 = 4LL;
                v79 = *(__int64 (**)(void))(*((_QWORD *)v1 + 1) + 72LL);
                if ( (char *)v79 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                  UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier((CAudioStream *)((char *)v1 + 8));
                else
                  UniqueStreamIdentifier = v79();
                v105 = UniqueStreamIdentifier;
                v147 = &v105;
                v148 = 8LL;
                v81 = (CAudioSession *)*((_QWORD *)v1 + 8);
                v82 = *(__int64 (**)(void))(*(_QWORD *)v81 + 64LL);
                if ( (char *)v82 == (char *)CAudioSession::GetIdentifier )
                  Identifier = CAudioSession::GetIdentifier(v81);
                else
                  Identifier = (const WCHAR *)v82();
                TlgCreateWsz(&pDesc, Identifier);
                v150 = &v101;
                v151 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8017, v84, v85, 6u, &v144);
              }
            }
          }
        }
      }
    }
  }
  v112 = 0LL;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, v1);
    v11 = WPP_GLOBAL_Control;
  }
  try
  {
    v12 = *((_QWORD *)v1 + 8);
    if ( !v12 )
      goto LABEL_225;
    v13 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v12 + 120LL);
    if ( v13 == CAudioSession::GetProcessId )
    {
      v14 = 0;
      if ( v11 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v11 + 28) & 0x40) != 0
        && *((_BYTE *)v11 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v11 + 2), 15LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, *(_QWORD *)(v12 + 856));
      }
      if ( *(_DWORD *)(v12 + 848) )
      {
        v14 = 143196173;
        v98 = *(_DWORD *)(v12 + 348);
      }
      else
      {
        v98 = *(_DWORD *)(v12 + 840);
      }
    }
    else
    {
      v14 = v13(*((CAudioSession **)v1 + 8), (unsigned int *)&v98);
    }
    if ( v14 < 0 || dword_1800CA040 <= 4u )
      goto LABEL_225;
    v103 = 0LL;
    v15 = (_QWORD **)*((_QWORD *)v1 + 8);
    v16 = (__int64 (__fastcall *)(CAudioSession *, struct IAudioProcess **))(*v15)[3];
    if ( v16 == CAudioSession::GetProcess )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15[108] + 8LL))(v15[108]);
      v103 = v15[108];
    }
    else if ( (int)v16(*((CAudioSession **)v1 + 8), (struct IAudioProcess **)&v103) < 0 )
    {
LABEL_98:
      if ( v103 )
        (*(void (__fastcall **)(_QWORD *))(*v103 + 16LL))(v103);
      goto LABEL_225;
    }
    v115[0] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
    v116 = (int *)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
    std::ios::ios(v121);
    v100 = 1;
    std::iostream::basic_iostream<char>(v115, &v117, 0LL);
    *(_QWORD *)((char *)v115 + *(int *)(v115[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(_DWORD *)((char *)&v114 + *(int *)(v115[0] + 4LL) + 4) = *(_DWORD *)(v115[0] + 4LL) - 152;
    v102 = &v117;
    std::streambuf::streambuf(&v117);
    v117 = &std::stringbuf::`vftable';
    v119 = 0LL;
    v120 = 0;
    v17 = std::setprecision(v123, 3LL);
    (*(void (__fastcall **)(char *, _QWORD))v17)((char *)&v116 + v116[1], *(_QWORD *)(v17 + 8));
    std::ostream::operator<<(&v116, std::fixed);
    std::ostream::operator<<(&v116);
    for ( j = 1; j < *((_DWORD *)v1 + 20); ++j )
    {
      v69 = std::operator<<<std::char_traits<char>>((__int64)&v116);
      std::ostream::operator<<(v69);
    }
    v19 = v103;
    v20 = (char *)std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v115, v124);
    v21 = (_QWORD *)*((_QWORD *)v1 + 8);
    v22 = *(__int64 (**)(void))(*v21 + 64LL);
    if ( (char *)v22 == (char *)CAudioSession::GetIdentifier )
      v23 = (char *)v21[107];
    else
      v23 = (char *)v22();
    v24 = *((_DWORD *)v1 + 22);
    v100 = v98;
    v102 = (void ***)*((_QWORD *)v1 + 59);
    v25 = (char *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 72LL))(v19);
    TickCount64 = GetTickCount64();
    v28 = (char *)v1 + 200;
    if ( *((_QWORD *)v1 + 26) )
    {
      v29 = *((_QWORD *)v1 + 26);
      if ( GetTickCount64() - v29 > 0x1F4 )
      {
        v71 = (CAudioStream *)((char *)v1 + 200);
        v72 = *((unsigned int *)v1 + 56);
        v73 = (void (__fastcall *)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int))**((_QWORD **)v1 + 25);
        v74 = v29 - *((_QWORD *)v1 + 27);
        if ( v73 == AudioSrvVolumeTelemetryStreamVolume::Fire )
          AudioSrvVolumeTelemetryStreamVolume::Fire(v71, v74, v72);
        else
          v73(v71, v74, v72);
        v28 = (char *)v1 + 200;
        *((_DWORD *)v1 + 56) = 0;
        *((_QWORD *)v1 + 27) = TickCount64;
LABEL_38:
        *((_QWORD *)v28 + 1) = TickCount64;
        v30 = v28 + 32;
        if ( v28 + 32 == v20 )
          goto LABEL_49;
        v31 = *((_QWORD *)v20 + 2);
        if ( v31 == -1LL )
          std::_Xlength_error("string too long");
        if ( *((_QWORD *)v28 + 7) < v31 )
        {
          std::string::_Copy(v28 + 32);
          v28 = (char *)v1 + 200;
          if ( !v31 )
            goto LABEL_49;
        }
        else if ( !v31 )
        {
          *((_QWORD *)v28 + 6) = 0LL;
          if ( *((_QWORD *)v28 + 7) >= 0x10uLL )
            v30 = (_QWORD *)*v30;
          *(_BYTE *)v30 = 0;
LABEL_49:
          v33 = v28 + 64;
          if ( *(_WORD *)v25 )
          {
            v34 = -1LL;
            do
              ++v34;
            while ( *(_WORD *)&v25[2 * v34] );
          }
          else
          {
            v34 = 0LL;
          }
          v35 = *((_QWORD *)v28 + 11);
          if ( v35 >= 8 )
            v36 = *(char **)v33;
          else
            v36 = v28 + 64;
          if ( v25 >= v36 )
          {
            v37 = v35 >= 8 ? *(char **)v33 : v33;
            if ( &v37[2 * *((_QWORD *)v33 + 2)] > v25 )
            {
              if ( v35 < 8 )
                v86 = v33;
              else
                v86 = *(char **)v33;
              std::wstring::assign(v33, v33, (v25 - v86) >> 1, v34);
              goto LABEL_63;
            }
          }
          if ( v34 > 0x7FFFFFFFFFFFFFFELL )
            std::_Xlength_error("string too long");
          if ( v35 < v34 )
          {
            std::wstring::_Copy(v33, v34, *((_QWORD *)v33 + 2));
            if ( !v34 )
              goto LABEL_63;
          }
          else if ( !v34 )
          {
            *((_QWORD *)v33 + 2) = 0LL;
            if ( v35 >= 8 )
              v33 = *(char **)v33;
            *(_WORD *)v33 = 0;
            goto LABEL_63;
          }
          if ( *((_QWORD *)v33 + 3) < 8uLL )
            v70 = v33;
          else
            v70 = *(char **)v33;
          memcpy_0(v70, v25, 2 * v34);
          *((_QWORD *)v33 + 2) = v34;
          if ( *((_QWORD *)v33 + 3) >= 8uLL )
            v33 = *(char **)v33;
          *(_WORD *)&v33[2 * v34] = 0;
LABEL_63:
          *((_QWORD *)v1 + 37) = v102;
          v38 = (char *)v1 + 304;
          if ( *(_WORD *)v23 )
          {
            v39 = -1LL;
            do
              ++v39;
            while ( *(_WORD *)&v23[2 * v39] );
          }
          else
          {
            v39 = 0LL;
          }
          v40 = *((_QWORD *)v1 + 41);
          if ( v40 < 8 )
            v41 = (char *)v1 + 304;
          else
            v41 = *(char **)v38;
          if ( v23 >= v41
            && (v40 < 8 ? (v42 = (char *)v1 + 304) : (v42 = *(char **)v38), &v42[2 * *((_QWORD *)v1 + 40)] > v23) )
          {
            if ( v40 < 8 )
              v87 = (char *)v1 + 304;
            else
              v87 = *(char **)v38;
            std::wstring::assign((char *)v1 + 304, (char *)v1 + 304, (v23 - v87) >> 1, v39);
          }
          else
          {
            if ( v39 > 0x7FFFFFFFFFFFFFFELL )
              std::_Xlength_error("string too long");
            if ( v40 >= v39 )
            {
              if ( !v39 )
              {
                *((_QWORD *)v1 + 40) = 0LL;
                if ( v40 >= 8 )
                  v38 = *(char **)v38;
                *(_WORD *)v38 = 0;
                goto LABEL_80;
              }
              goto LABEL_75;
            }
            std::wstring::_Copy((char *)v1 + 304, v39, *((_QWORD *)v1 + 40));
            if ( v39 )
            {
LABEL_75:
              if ( *((_QWORD *)v1 + 41) < 8uLL )
                v43 = (char *)v1 + 304;
              else
                v43 = *(char **)v38;
              memcpy_0(v43, v23, 2 * v39);
              *((_QWORD *)v1 + 40) = v39;
              if ( *((_QWORD *)v1 + 41) >= 8uLL )
                v38 = *(char **)v38;
              *(_WORD *)&v38[2 * v39] = 0;
            }
          }
LABEL_80:
          *((_DWORD *)v1 + 84) = v100;
          *((_DWORD *)v1 + 85) = v24;
          LOBYTE(v40) = 1;
          std::string::_Tidy(v124, v40, 0LL, v26, (_DWORD)cData, pData);
          if ( dword_1800CA040 > 4u )
          {
            v44 = (const CHAR **)std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(
                                   (__int64)v115,
                                   v125);
            v45 = (const CHAR *)v44;
            if ( (unsigned __int64)v44[3] >= 0x10 )
              v45 = *v44;
            v46 = MultiByteStr;
            LODWORD(v47) = 0;
            if ( v45 )
            {
              v46 = v45;
              v47 = -1LL;
              do
                ++v47;
              while ( v45[v47] );
            }
            v132 = v46;
            v133 = v47 + 1;
            v134 = 0;
            v135 = (char *)v1 + 472;
            v136 = 8LL;
            v48 = (_QWORD *)*((_QWORD *)v1 + 8);
            v49 = *(__int64 (**)(void))(*v48 + 64LL);
            if ( (char *)v49 == (char *)CAudioSession::GetIdentifier )
              v50 = v48[107];
            else
              v50 = v49();
            v51 = &pwsz;
            LODWORD(v52) = 0;
            if ( v50 )
            {
              v51 = (const WCHAR *)v50;
              v52 = -1LL;
              do
                ++v52;
              while ( *(_WORD *)(v50 + 2 * v52) );
            }
            v137 = v51;
            v138 = 2 * v52 + 2;
            v139 = 0;
            v140 = &v98;
            v141 = 4LL;
            v142 = (char *)v1 + 88;
            v143 = 4LL;
            v113[0] = ((unsigned int)&unk_1800A7FA8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v113[1] = 4;
            v114 = 0LL;
            v126 = off_1800CA048;
            v127 = *(unsigned __int16 *)off_1800CA048;
            v128 = 2;
            v129 = &unk_1800A7FB3;
            v130 = 99;
            v131 = 1;
            EtwEventWriteTransfer(qword_1800CA060, v113, 0LL, 0LL, 7, &v126);
            LOBYTE(v53) = 1;
            std::string::_Tidy(v125, v53, 0LL, v54, cDataa, pDataa);
          }
          *(_QWORD *)((char *)v115 + *(int *)(v115[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
          *(_DWORD *)((char *)&v114 + *(int *)(v115[0] + 4LL) + 4) = *(_DWORD *)(v115[0] + 4LL) - 152;
          v117 = &std::stringbuf::`vftable';
          if ( (v120 & 1) != 0 )
          {
            if ( std::streambuf::pptr(&v117) )
              v55 = std::streambuf::epptr(&v117);
            else
              v55 = std::streambuf::egptr(&v117);
            v56 = v55 - std::streambuf::eback(&v117);
            v57 = std::streambuf::eback(&v117);
            v58 = (_BYTE *)v57;
            if ( v56 >= 0x1000 )
            {
              if ( (v57 & 0x1F) != 0 )
              {
                _o__invalid_parameter_noinfo_noreturn();
                JUMPOUT(0x180043E05LL);
              }
              v88 = *(_BYTE **)(v57 - 8);
              if ( v88 >= v58 )
              {
                _o__invalid_parameter_noinfo_noreturn();
                JUMPOUT(0x180043E15LL);
              }
              v89 = v58 - v88;
              if ( v89 < 8 )
              {
                _o__invalid_parameter_noinfo_noreturn();
                JUMPOUT(0x180043E25LL);
              }
              if ( v89 > 0x27 )
              {
                _o__invalid_parameter_noinfo_noreturn();
                JUMPOUT(0x180043E32LL);
              }
              v58 = v88;
            }
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v58);
          }
          std::streambuf::setg(&v117, 0LL, 0LL, 0LL);
          std::streambuf::setp(&v117, 0LL, 0LL);
          v119 = 0LL;
          v120 &= ~1u;
          std::streambuf::~streambuf<char,std::char_traits<char>>(&v117);
          std::iostream::~basic_iostream<char,std::char_traits<char>>(v118);
          std::ios::~ios<char,std::char_traits<char>>(v121);
          goto LABEL_98;
        }
        if ( *((_QWORD *)v20 + 3) >= 0x10uLL )
          v20 = *(char **)v20;
        if ( v30[3] >= 0x10uLL )
          v32 = (_QWORD *)*v30;
        else
          v32 = v30;
        memcpy_0(v32, v20, v31);
        v28 = (char *)v1 + 200;
        v30[2] = v31;
        if ( v30[3] >= 0x10uLL )
          v30 = (_QWORD *)*v30;
        *((_BYTE *)v30 + v31) = 0;
        goto LABEL_49;
      }
      v28 = (char *)v1 + 200;
    }
    ++*((_DWORD *)v28 + 6);
    goto LABEL_38;
  }
  catch ( ... )
  {
    v1 = v111;
  }
LABEL_225:
  v2 = v97;
  v60 = *((_QWORD *)v1 + 21);
  if ( v60 )
  {
    LODWORD(cData) = 1;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v60 + 32LL))(
           v60,
           *((unsigned int *)v1 + 20),
           *((_QWORD *)v1 + 14),
           &v112,
           cData,
           &v106);
    if ( v2 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
      }
      ATL::CComPtrBase<IPart>::Release((char *)v1 + 168);
      v2 = 0;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 352);
  v108 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v61 = 0.0;
  v99 = 0.0;
  v62 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*((_QWORD *)v1 + 1) + 80LL);
  if ( v62 == CAudioStream::GetMaxStreamChannelVolume )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, v1);
    }
    v99 = 0.0;
    v63 = *((unsigned int *)v1 + 20);
    if ( (_DWORD)v63 )
    {
      v64 = *((_QWORD *)v1 + 13);
      v65 = 0LL;
      v66 = (unsigned int)v63;
      do
      {
        if ( *(float *)(v65 + v64) > v61 )
        {
          v61 = *(float *)(v65 + v64);
          v99 = v61;
        }
        v65 += 4LL;
        --v66;
      }
      while ( v66 );
    }
  }
  else
  {
    v62((CAudioStream *)((char *)v1 + 8), &v99);
  }
  v102 = (void ***)*((_QWORD *)v1 + 49);
  while ( v102 )
  {
    Next = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v63, &v102);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Next + 24LL))(*Next, *((_QWORD *)v1 + 6));
  }
  if ( v108 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v110 )
    LeaveCriticalSection(v109);
LABEL_117:
  v67 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *))(*(_QWORD *)v1 + 48LL);
  if ( v67 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
  {
    *((_QWORD *)v1 + 12) = 0LL;
    *((_QWORD *)v1 + 63) = 0LL;
  }
  else
  {
    v67(v1);
  }
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::RecalculateVolume", 0x789u, v2);
  return (unsigned int)v2;
}
