/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180005E40 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000DAE4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18000DBA0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x1800125A0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180012720 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A1D0 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this, __int64 a2, __int64 a3)
{
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v5; // rdi
  __int64 *v6; // rax
  struct ATL::CStringData *(__fastcall *v7)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v8; // rax
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  wchar_t *v10; // rdi
  int v11; // esi
  wchar_t *v12; // rsi
  wchar_t *v13; // rax
  __int64 v14; // rax
  wchar_t *v15; // rbx
  int v16; // esi
  wchar_t *v17; // r15
  wchar_t *v18; // rbx
  wchar_t *v19; // rdi
  wchar_t *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // edi
  __int64 v24; // rdx
  const wchar_t *v25; // rbx
  wchar_t *v26; // r13
  wchar_t *v27; // rax
  wchar_t *v28; // r14
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r15
  int v32; // r14d
  wchar_t *v33; // rbx
  wchar_t *v34; // rsi
  wchar_t *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // esi
  __int64 v39; // rdx
  const wchar_t *v40; // rbx
  wchar_t *v41; // rax
  wchar_t *v42; // rax
  wchar_t *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // r15d
  const void *v47; // rdx
  __int64 v48; // rcx
  int v49; // r13d
  wchar_t *v50; // rdx
  wchar_t *v51; // rdx
  void (*v52)(void); // rax
  HANDLE *v53; // rcx
  void (*v54)(void); // rax
  wchar_t *v55; // rdx
  void (*v56)(void); // rax
  HANDLE *v57; // rcx
  wchar_t *v58; // rdx
  int v60; // edi
  __int64 v61; // r15
  unsigned int v62; // r14d
  __int64 v63; // rdx
  wchar_t *v64; // r12
  const wchar_t *v65; // rbx
  wchar_t *v66; // r13
  wchar_t *v67; // rax
  wchar_t *v68; // rsi
  __int64 v69; // rcx
  int v70; // r12d
  const void *v71; // rdx
  wchar_t *v72; // [rsp+30h] [rbp-218h] BYREF
  wchar_t *Str; // [rsp+38h] [rbp-210h] BYREF
  wchar_t *v74; // [rsp+40h] [rbp-208h] BYREF
  int v75; // [rsp+48h] [rbp-200h]
  int v76; // [rsp+4Ch] [rbp-1FCh]
  int v77; // [rsp+50h] [rbp-1F8h]
  int v78; // [rsp+54h] [rbp-1F4h]
  int v79; // [rsp+58h] [rbp-1F0h]
  int v80; // [rsp+5Ch] [rbp-1ECh]
  int v81; // [rsp+60h] [rbp-1E8h]
  char *v82; // [rsp+68h] [rbp-1E0h]
  wchar_t *v83; // [rsp+70h] [rbp-1D8h]
  char *v84; // [rsp+78h] [rbp-1D0h]
  wchar_t *v85; // [rsp+80h] [rbp-1C8h]
  char *v86; // [rsp+88h] [rbp-1C0h]
  wchar_t *v87; // [rsp+90h] [rbp-1B8h]
  int v88; // [rsp+98h] [rbp-1B0h]
  int v89; // [rsp+9Ch] [rbp-1ACh]
  int v90; // [rsp+A0h] [rbp-1A8h]
  int v91; // [rsp+A4h] [rbp-1A4h]
  int v92; // [rsp+A8h] [rbp-1A0h]
  int v93; // [rsp+ACh] [rbp-19Ch]
  int v94; // [rsp+B0h] [rbp-198h]
  int v95; // [rsp+B4h] [rbp-194h]
  int v96; // [rsp+B8h] [rbp-190h]
  int v97; // [rsp+BCh] [rbp-18Ch]
  int v98; // [rsp+C0h] [rbp-188h]
  int v99; // [rsp+C4h] [rbp-184h]
  int v100; // [rsp+C8h] [rbp-180h]
  int v101; // [rsp+CCh] [rbp-17Ch]
  int v102; // [rsp+D0h] [rbp-178h]
  int v103; // [rsp+D4h] [rbp-174h]
  int v104; // [rsp+D8h] [rbp-170h]
  unsigned int v105; // [rsp+DCh] [rbp-16Ch]
  int v106; // [rsp+E0h] [rbp-168h]
  int v107; // [rsp+E4h] [rbp-164h]
  int v108; // [rsp+E8h] [rbp-160h]
  wchar_t *v109; // [rsp+F0h] [rbp-158h]
  __int64 v110; // [rsp+F8h] [rbp-150h]
  wchar_t *v111; // [rsp+100h] [rbp-148h]
  wchar_t *v112; // [rsp+108h] [rbp-140h]
  wchar_t *v113; // [rsp+110h] [rbp-138h]
  wchar_t *v114; // [rsp+118h] [rbp-130h]
  wchar_t *v115; // [rsp+120h] [rbp-128h]
  wchar_t *v116; // [rsp+128h] [rbp-120h]
  __int64 v117; // [rsp+130h] [rbp-118h]
  wchar_t *v118; // [rsp+138h] [rbp-110h]
  wchar_t *v119; // [rsp+140h] [rbp-108h]
  __int64 v120; // [rsp+148h] [rbp-100h]
  __int64 v121; // [rsp+150h] [rbp-F8h]
  wchar_t *v122; // [rsp+158h] [rbp-F0h]
  wchar_t *v123; // [rsp+160h] [rbp-E8h]
  wchar_t *v124; // [rsp+168h] [rbp-E0h]
  wchar_t *v125; // [rsp+170h] [rbp-D8h]
  wchar_t *v126; // [rsp+178h] [rbp-D0h]
  wchar_t *v127; // [rsp+180h] [rbp-C8h]
  __int64 v128; // [rsp+188h] [rbp-C0h]
  wchar_t *v129; // [rsp+190h] [rbp-B8h]
  wchar_t *v130; // [rsp+198h] [rbp-B0h]
  __int64 v131; // [rsp+1A0h] [rbp-A8h]
  __int64 v132; // [rsp+1A8h] [rbp-A0h]
  wchar_t *v133; // [rsp+1B0h] [rbp-98h]
  wchar_t *v134; // [rsp+1B8h] [rbp-90h]
  wchar_t *v135; // [rsp+1C0h] [rbp-88h]
  wchar_t *v136; // [rsp+1C8h] [rbp-80h]
  wchar_t *v137; // [rsp+1D0h] [rbp-78h]
  __int64 v138; // [rsp+1D8h] [rbp-70h]
  wchar_t *v139; // [rsp+1E0h] [rbp-68h]
  wchar_t *v140; // [rsp+1E8h] [rbp-60h]
  __int64 v141; // [rsp+1F0h] [rbp-58h]
  __int64 v142; // [rsp+1F8h] [rbp-50h]
  ATL::CAtlException *v143; // [rsp+200h] [rbp-48h] BYREF
  int v145; // [rsp+258h] [rbp+10h]

  v110 = -2LL;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_1800CB020);
    v5 = &qword_1800CB010;
    v6 = &qword_1800CB010;
  }
  else
  {
    v6 = (__int64 *)v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v5 = &qword_1800CB010;
  }
  Str = (wchar_t *)(v6 + 3);
  v7 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v7 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_1800CB020);
    v8 = &qword_1800CB010;
  }
  else
  {
    v8 = (__int64 *)v7((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v74 = (wchar_t *)(v8 + 3);
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
    _InterlockedIncrement(&dword_1800CB020);
  else
    v5 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v10 = (wchar_t *)(v5 + 3);
  v72 = v10;
  v11 = CAudioEndpointId::ToString((__int64 *)this, &Str, a3);
  if ( v11 < 0 )
    goto LABEL_118;
  v11 = CAppAudioSessionId::ToString((char *)this + 8, &v74);
  if ( v11 < 0 )
    goto LABEL_118;
  v11 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v72);
  v75 = v11;
  if ( v11 < 0 )
  {
    v10 = v72;
LABEL_118:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x3F6u, v11);
    goto LABEL_75;
  }
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &Str,
      L"%",
      L"%%");
    v88 = 1;
    v89 = 2;
    v60 = 0;
    v76 = 0;
    v64 = Str;
    v15 = Str;
    v85 = Str;
    v90 = *((_DWORD *)Str - 4);
    v12 = &Str[v90];
    v111 = v12;
    while ( v15 < v12 )
    {
      while ( 1 )
      {
        v13 = wcsstr(v15, L"|");
        v112 = v13;
        if ( !v13 )
          break;
        v76 = ++v60;
        v15 = v13 + 1;
        v85 = v13 + 1;
      }
      if ( v15 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v15[v14] );
      }
      else
      {
        LODWORD(v14) = 0;
      }
      v15 += (int)v14 + 1;
      v85 = v15;
    }
    if ( v60 > 0 )
    {
      v61 = *((int *)v64 - 4);
      v77 = v61;
      v62 = v61 + v60;
      v91 = v61 + v60;
      v63 = (unsigned int)v61;
      if ( (int)v61 + v60 > (int)v61 )
        v63 = v62;
      v92 = v63;
      v113 = v64 - 12;
      v93 = 1 - *((_DWORD *)v64 - 2);
      v94 = *((_DWORD *)v64 - 3) - v63;
      if ( (v93 | v94) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v63);
        v64 = Str;
      }
      v114 = v64;
      v65 = v64;
      v86 = (char *)v64;
      v66 = &v64[v61];
      v115 = v66;
      while ( v65 < v66 )
      {
        while ( 1 )
        {
          v67 = wcsstr(v65, L"|");
          v68 = v67;
          v116 = v67;
          if ( !v67 )
            break;
          v69 = v67 - v64;
          v70 = v61 - v69 - 1;
          v95 = v70;
          v117 = 2LL * v70;
          v71 = v67 + 1;
          v118 = v67 + 1;
          v65 = v67 + 2;
          v119 = v67 + 2;
          if ( v117 )
          {
            if ( v67 == (wchar_t *)-4LL || v67 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v69, v71) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v67 + 2, v71, 2LL * v70);
          }
          v120 = 4LL;
          v121 = 4LL;
          memcpy_0(v68, L"%b", 4uLL);
          v86 = (char *)(v68 + 2);
          v68[v70 + 2] = 0;
          LODWORD(v61) = v61 + 1;
          v77 = v61;
          v64 = Str;
        }
        v65 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v65) + 1);
        v86 = (char *)v65;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v62);
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v74,
      L"%",
      L"%%");
    v96 = 1;
    v97 = 2;
    v16 = 0;
    v78 = 0;
    v17 = v74;
    v18 = v74;
    v87 = v74;
    v98 = *((_DWORD *)v74 - 4);
    v19 = &v74[v98];
    v122 = v19;
    while ( v18 < v19 )
    {
      while ( 1 )
      {
        v20 = wcsstr(v18, L"|");
        v123 = v20;
        if ( !v20 )
          break;
        v78 = ++v16;
        v18 = v20 + 1;
        v87 = v20 + 1;
      }
      if ( v18 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( v18[v21] );
      }
      else
      {
        LODWORD(v21) = 0;
      }
      v18 += (int)v21 + 1;
      v87 = v18;
    }
    if ( v16 > 0 )
    {
      v22 = *((int *)v17 - 4);
      v79 = v22;
      v23 = v22 + v16;
      v99 = v22 + v16;
      if ( (int)v22 + v16 <= (int)v22 )
        v24 = (unsigned int)v22;
      else
        v24 = (unsigned int)v23;
      v124 = v17 - 12;
      v100 = 1 - *((_DWORD *)v17 - 2);
      v101 = *((_DWORD *)v17 - 3) - v24;
      if ( (v100 | v101) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v74, v24);
        v17 = v74;
      }
      v125 = v17;
      v25 = v17;
      v82 = (char *)v17;
      v26 = &v17[v22];
      v126 = v26;
      while ( v25 < v26 )
      {
        while ( 1 )
        {
          v27 = wcsstr(v25, L"|");
          v28 = v27;
          v127 = v27;
          if ( !v27 )
            break;
          v45 = v27 - v17;
          v46 = v22 - v45 - 1;
          v102 = v46;
          v128 = 2LL * v46;
          v47 = v27 + 1;
          v129 = v27 + 1;
          v25 = v27 + 2;
          v130 = v27 + 2;
          if ( v128 )
          {
            if ( v27 == (wchar_t *)-4LL || v27 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v45, v47) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v27 + 2, v47, 2LL * v46);
          }
          v131 = 4LL;
          v132 = 4LL;
          memcpy_0(v28, L"%b", 4uLL);
          v82 = (char *)(v28 + 2);
          v28[v46 + 2] = 0;
          LODWORD(v22) = v22 + 1;
          v79 = v22;
          v17 = v74;
        }
        if ( v25 )
        {
          v29 = -1LL;
          do
            ++v29;
          while ( v25[v29] );
        }
        else
        {
          LODWORD(v29) = 0;
        }
        v25 += (int)v29 + 1;
        v82 = (char *)v25;
      }
      if ( v23 < 0 || v23 > *((_DWORD *)v17 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v17 - 4) = v23;
      v17[v23] = 0;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v72,
      L"%",
      L"%%");
    v30 = ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)L"|");
    v31 = v30;
    v145 = v30;
    if ( v30 )
    {
      v103 = 2;
      v32 = 0;
      v80 = 0;
      v10 = v72;
      v33 = v72;
      v83 = v72;
      v104 = *((_DWORD *)v72 - 4);
      v34 = &v72[v104];
      v133 = v34;
      while ( v33 < v34 )
      {
        while ( 1 )
        {
          v35 = wcsstr(v33, L"|");
          v134 = v35;
          if ( !v35 )
            break;
          v80 = ++v32;
          v33 = &v35[v31];
          v83 = v33;
        }
        if ( v33 )
        {
          v36 = -1LL;
          do
            ++v36;
          while ( v33[v36] );
        }
        else
        {
          LODWORD(v36) = 0;
        }
        v33 += (int)v36 + 1;
        v83 = v33;
      }
      if ( v32 > 0 )
      {
        v37 = *((int *)v10 - 4);
        v81 = v37;
        v38 = v37 + v32 * (2 - v31);
        v105 = v38;
        if ( (int)v38 <= (int)v37 )
          v39 = (unsigned int)v37;
        else
          v39 = v38;
        v135 = v10 - 12;
        v106 = 1 - *((_DWORD *)v10 - 2);
        v107 = *((_DWORD *)v10 - 3) - v39;
        if ( (v106 | v107) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v72, v39);
          v10 = v72;
        }
        v136 = v10;
        v40 = v10;
        v84 = (char *)v10;
        v41 = &v10[v37];
        v109 = v41;
        while ( v40 < v41 )
        {
          while ( 1 )
          {
            v42 = wcsstr(v40, L"|");
            v43 = v42;
            v137 = v42;
            if ( !v42 )
              break;
            v48 = v42 - v10;
            v49 = v37 - v48 - v145;
            v108 = v49;
            v138 = 2LL * v49;
            v50 = &v42[v145];
            v139 = v50;
            v40 = v42 + 2;
            v140 = v42 + 2;
            if ( v138 )
            {
              if ( v42 == (wchar_t *)-4LL || !v50 )
              {
                *(_DWORD *)_o__errno(v48, v50) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v42 + 2, v50, 2LL * v49);
            }
            v141 = 4LL;
            v142 = 4LL;
            memcpy_0(v43, L"%b", 4uLL);
            v84 = (char *)(v43 + 2);
            v43[v49 + 2] = 0;
            LODWORD(v37) = 2 - v145 + v37;
            v81 = v37;
          }
          if ( v40 )
          {
            v44 = -1LL;
            do
              ++v44;
            while ( v40[v44] );
          }
          else
          {
            LODWORD(v44) = 0;
          }
          v40 += (int)v44 + 1;
          v84 = (char *)v40;
          v41 = v109;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v72, v38);
      }
    }
    else
    {
      v10 = v72;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (char *)this + 72,
      L"%s|%s|%s",
      Str,
      v74,
      v10);
  }
  catch ( ATL::CAtlException *v143 )
  {
    v75 = *(_DWORD *)v143;
    v10 = v72;
  }
  v11 = v75;
  if ( v75 < 0 )
    goto LABEL_118;
LABEL_75:
  v51 = v10 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 - 2, 0xFFFFFFFF) <= 1 )
  {
    v52 = *(void (**)(void))(**(_QWORD **)v51 + 8LL);
    if ( (char *)v52 == (char *)ATL::CAtlStringMgr::Free )
    {
      v53 = *(HANDLE **)(*(_QWORD *)v51 + 8LL);
      v54 = (void (*)(void))*((_QWORD *)*v53 + 1);
      if ( (char *)v54 == (char *)ATL::CWin32Heap::Free )
        HeapFree(v53[1], 0, v51);
      else
        v54();
    }
    else
    {
      v52();
    }
  }
  v55 = v74 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74 - 2, 0xFFFFFFFF) <= 1 )
  {
    v56 = *(void (**)(void))(**(_QWORD **)v55 + 8LL);
    if ( (char *)v56 == (char *)ATL::CAtlStringMgr::Free
      && (v57 = *(HANDLE **)(*(_QWORD *)v55 + 8LL),
          v56 = (void (*)(void))*((_QWORD *)*v57 + 1),
          (char *)v56 == (char *)ATL::CWin32Heap::Free) )
    {
      HeapFree(v57[1], 0, v55);
    }
    else
    {
      v56();
    }
  }
  v58 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v58 + 8LL))(*(_QWORD *)v58);
  return (unsigned int)v11;
}
