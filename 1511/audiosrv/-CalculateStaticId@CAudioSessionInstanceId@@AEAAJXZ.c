/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x180014E70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180011BD0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180011D80 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800124F0 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180018CB0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180018F50 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18003A530 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  struct ATL::CStringData *(__fastcall *v5)(ATL::CAtlStringMgr *__hidden); // rbx
  __int64 *v6; // rax
  struct ATL::CStringData *(__fastcall *v7)(ATL::CAtlStringMgr *__hidden); // rbx
  wchar_t *v8; // rdi
  int v9; // r12d
  wchar_t *v10; // rsi
  wchar_t *v11; // rax
  __int64 v12; // rax
  wchar_t *v13; // rbx
  int v14; // edi
  const wchar_t *v15; // rbx
  wchar_t *v16; // rsi
  wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // esi
  wchar_t *v20; // r12
  wchar_t *v21; // rbx
  wchar_t *v22; // rdi
  wchar_t *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // edi
  __int64 v27; // rdx
  const wchar_t *v28; // rbx
  wchar_t *v29; // rax
  wchar_t *v30; // rax
  wchar_t *v31; // rsi
  __int64 v32; // rax
  wchar_t *v33; // r15
  int v34; // r14d
  wchar_t *v35; // rbx
  wchar_t *v36; // rsi
  wchar_t *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  int v40; // esi
  __int64 v41; // rdx
  const wchar_t *v42; // rbx
  wchar_t *v43; // rax
  wchar_t *v44; // rax
  wchar_t *v45; // r14
  __int64 v46; // rax
  __int64 v47; // r12
  errno_t v48; // eax
  errno_t v49; // eax
  __int64 v50; // r13
  errno_t v51; // eax
  errno_t v52; // eax
  volatile signed __int32 *v53; // rdi
  void (*v54)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r14
  HANDLE *v55; // rbx
  void (__fastcall *v56)(ATL::CWin32Heap *__hidden, void *); // r15
  wchar_t *v57; // rbx
  void (*v58)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r15
  HANDLE *v59; // rdi
  void (__fastcall *v60)(ATL::CWin32Heap *__hidden, void *); // rsi
  wchar_t *v61; // rsi
  int v63; // edi
  __int64 v64; // r14
  unsigned int v65; // esi
  __int64 v66; // rdx
  const wchar_t *v67; // rbx
  wchar_t *v68; // r12
  wchar_t *v69; // rax
  wchar_t *v70; // rdi
  __int64 v71; // r13
  errno_t v72; // eax
  errno_t v73; // eax
  __int64 v74; // r14
  unsigned int v75; // esi
  __int64 v76; // rdx
  const wchar_t *v77; // rbx
  wchar_t *v78; // r12
  wchar_t *v79; // rax
  wchar_t *v80; // rdi
  __int64 v81; // r13
  errno_t v82; // eax
  errno_t v83; // eax
  wchar_t *Str; // [rsp+30h] [rbp-208h] BYREF
  wchar_t *v85; // [rsp+38h] [rbp-200h] BYREF
  wchar_t *v86; // [rsp+40h] [rbp-1F8h] BYREF
  int v87; // [rsp+48h] [rbp-1F0h]
  int v88; // [rsp+4Ch] [rbp-1ECh]
  int v89; // [rsp+50h] [rbp-1E8h]
  int v90; // [rsp+54h] [rbp-1E4h]
  int v91; // [rsp+58h] [rbp-1E0h]
  int v92; // [rsp+5Ch] [rbp-1DCh]
  int v93; // [rsp+60h] [rbp-1D8h]
  int v94; // [rsp+64h] [rbp-1D4h]
  char *v95; // [rsp+68h] [rbp-1D0h]
  char *v96; // [rsp+70h] [rbp-1C8h]
  wchar_t *v97; // [rsp+78h] [rbp-1C0h]
  wchar_t *v98; // [rsp+80h] [rbp-1B8h]
  wchar_t *v99; // [rsp+88h] [rbp-1B0h]
  char *v100; // [rsp+90h] [rbp-1A8h]
  char *v101; // [rsp+98h] [rbp-1A0h]
  wchar_t *v102; // [rsp+A0h] [rbp-198h]
  int v103; // [rsp+A8h] [rbp-190h]
  int v104; // [rsp+ACh] [rbp-18Ch]
  int v105; // [rsp+B0h] [rbp-188h]
  int v106; // [rsp+B4h] [rbp-184h]
  int v107; // [rsp+B8h] [rbp-180h]
  wchar_t *v108; // [rsp+C0h] [rbp-178h]
  int v109; // [rsp+C8h] [rbp-170h]
  wchar_t *v110; // [rsp+D0h] [rbp-168h]
  int v111; // [rsp+D8h] [rbp-160h]
  int v112; // [rsp+DCh] [rbp-15Ch]
  int v113; // [rsp+E0h] [rbp-158h]
  int v114; // [rsp+E4h] [rbp-154h]
  int v115; // [rsp+E8h] [rbp-150h]
  int v116; // [rsp+ECh] [rbp-14Ch]
  int v117; // [rsp+F0h] [rbp-148h]
  int v118; // [rsp+F4h] [rbp-144h]
  int v119; // [rsp+F8h] [rbp-140h]
  int v120; // [rsp+FCh] [rbp-13Ch]
  int v121; // [rsp+100h] [rbp-138h]
  int v122; // [rsp+104h] [rbp-134h]
  int v123; // [rsp+108h] [rbp-130h]
  int v124; // [rsp+10Ch] [rbp-12Ch]
  int v125; // [rsp+110h] [rbp-128h]
  int v126; // [rsp+114h] [rbp-124h]
  int v127; // [rsp+118h] [rbp-120h]
  int v128; // [rsp+11Ch] [rbp-11Ch]
  int v129; // [rsp+120h] [rbp-118h]
  int v130; // [rsp+124h] [rbp-114h]
  int v131; // [rsp+128h] [rbp-110h]
  int v132; // [rsp+12Ch] [rbp-10Ch]
  int v133; // [rsp+130h] [rbp-108h]
  int v134; // [rsp+134h] [rbp-104h]
  __int64 v135; // [rsp+138h] [rbp-100h]
  wchar_t *v136; // [rsp+140h] [rbp-F8h]
  wchar_t *v137; // [rsp+148h] [rbp-F0h]
  wchar_t *v138; // [rsp+150h] [rbp-E8h]
  wchar_t *v139; // [rsp+158h] [rbp-E0h]
  wchar_t *v140; // [rsp+160h] [rbp-D8h]
  wchar_t *v141; // [rsp+168h] [rbp-D0h]
  wchar_t *v142; // [rsp+170h] [rbp-C8h]
  wchar_t *v143; // [rsp+178h] [rbp-C0h]
  wchar_t *v144; // [rsp+180h] [rbp-B8h]
  wchar_t *v145; // [rsp+188h] [rbp-B0h]
  wchar_t *v146; // [rsp+190h] [rbp-A8h]
  wchar_t *v147; // [rsp+198h] [rbp-A0h]
  wchar_t *v148; // [rsp+1A0h] [rbp-98h]
  wchar_t *v149; // [rsp+1A8h] [rbp-90h]
  wchar_t *v150; // [rsp+1B0h] [rbp-88h]
  wchar_t *v151; // [rsp+1B8h] [rbp-80h]
  wchar_t *v152; // [rsp+1C0h] [rbp-78h]
  wchar_t *v153; // [rsp+1C8h] [rbp-70h]
  wchar_t *v154; // [rsp+1D0h] [rbp-68h]
  wchar_t *v155; // [rsp+1D8h] [rbp-60h]
  wchar_t *v156; // [rsp+1E0h] [rbp-58h]
  wchar_t *v157; // [rsp+1E8h] [rbp-50h]
  ATL::CAtlException *v158; // [rsp+1F0h] [rbp-48h] BYREF
  int v160; // [rsp+258h] [rbp+20h]

  v135 = -2LL;
  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E64A8);
    v3 = &qword_1800E6498;
    v4 = &qword_1800E6498;
  }
  else
  {
    v4 = (__int64 *)v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v3 = &qword_1800E6498;
  }
  Str = (wchar_t *)(v4 + 3);
  v5 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v5 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E64A8);
    v6 = &qword_1800E6498;
  }
  else
  {
    v6 = (__int64 *)v5((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v85 = (wchar_t *)(v6 + 3);
  v7 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v7 == ATL::CAtlStringMgr::GetNilString )
    _InterlockedIncrement(dword_1800E64A8);
  else
    v3 = (__int64 *)v7((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v8 = (wchar_t *)(v3 + 3);
  v86 = v8;
  v9 = CAudioEndpointId::ToString(this, &Str);
  if ( v9 < 0 || (v9 = CAppAudioSessionId::ToString((__int64)this + 8, &v85), v9 < 0) )
  {
LABEL_187:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v9);
    }
    goto LABEL_80;
  }
  v9 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v86);
  v160 = v9;
  if ( v9 < 0 )
  {
    v8 = v86;
    goto LABEL_187;
  }
  try
  {
    v131 = 1;
    v123 = 2;
    v63 = 0;
    v90 = 0;
    v33 = Str;
    v13 = Str;
    v97 = Str;
    v112 = *((_DWORD *)Str - 4);
    v10 = &Str[v112];
    v137 = v10;
    while ( v13 < v10 )
    {
      while ( 1 )
      {
        v11 = wcsstr(v13, L"%");
        v153 = v11;
        if ( !v11 )
          break;
        v90 = ++v63;
        v13 = v11 + 1;
        v97 = v11 + 1;
      }
      if ( v13 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v13[v12] );
      }
      else
      {
        LODWORD(v12) = 0;
      }
      v13 += (int)v12 + 1;
      v97 = v13;
    }
    if ( v63 > 0 )
    {
      v64 = *((int *)v33 - 4);
      v92 = v64;
      v65 = v64 + v63;
      v114 = v64 + v63;
      v66 = (unsigned int)v64;
      if ( (int)v64 + v63 > (int)v64 )
        v66 = v65;
      v116 = v66;
      v139 = v33 - 12;
      v118 = 1 - *((_DWORD *)v33 - 2);
      v120 = *((_DWORD *)v33 - 3) - v66;
      if ( (v118 | v120) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v66);
        v33 = Str;
      }
      v149 = v33;
      v67 = v33;
      v101 = (char *)v33;
      v68 = &v33[v64];
      v141 = v68;
      while ( v67 < v68 )
      {
        while ( 1 )
        {
          v69 = wcsstr(v67, L"%");
          v70 = v69;
          v157 = v69;
          if ( !v69 )
            break;
          v122 = v64 - (v69 - v33) - 1;
          v71 = v122;
          v67 = v69 + 2;
          v72 = memmove_s(v69 + 2, 2LL * v122, v69 + 1, 2LL * v122);
          if ( v72 )
          {
            if ( v72 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v72 == 22 || v72 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v72 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v73 = memcpy_s(v70, 4uLL, L"%%", 4uLL);
          if ( v73 )
          {
            if ( v73 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v73 == 22 || v73 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v73 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v101 = (char *)(v70 + 2);
          v70[v71 + 2] = 0;
          LODWORD(v64) = v64 + 1;
          v92 = v64;
          v33 = Str;
        }
        v67 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v67) + 1);
        v101 = (char *)v67;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v65);
    }
    v124 = 1;
    v126 = 2;
    v14 = 0;
    v93 = 0;
    v15 = v33;
    v99 = v33;
    v104 = *((_DWORD *)v33 - 4);
    v16 = &v33[v104];
    v143 = v16;
    while ( v15 < v16 )
    {
      while ( 1 )
      {
        v17 = wcsstr(v15, L"|");
        v151 = v17;
        if ( !v17 )
          break;
        v93 = ++v14;
        v15 = v17 + 1;
        v99 = v17 + 1;
      }
      if ( v15 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v15[v18] );
      }
      else
      {
        LODWORD(v18) = 0;
      }
      v15 += (int)v18 + 1;
      v99 = (wchar_t *)v15;
    }
    if ( v14 > 0 )
    {
      v74 = *((int *)v33 - 4);
      v94 = v74;
      v75 = v74 + v14;
      v106 = v74 + v14;
      v76 = (unsigned int)v74;
      if ( (int)v74 + v14 > (int)v74 )
        v76 = v75;
      v105 = v76;
      v145 = v33 - 12;
      v128 = 1 - *((_DWORD *)v33 - 2);
      v107 = *((_DWORD *)v33 - 3) - v76;
      if ( (v128 | v107) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v76);
        v33 = Str;
      }
      v155 = v33;
      v77 = v33;
      v96 = (char *)v33;
      v78 = &v33[v74];
      v147 = v78;
      while ( v77 < v78 )
      {
        while ( 1 )
        {
          v79 = wcsstr(v77, L"|");
          v80 = v79;
          v136 = v79;
          if ( !v79 )
            break;
          v130 = v74 - (v79 - v33) - 1;
          v81 = v130;
          v77 = v79 + 2;
          v82 = memmove_s(v79 + 2, 2LL * v130, v79 + 1, 2LL * v130);
          if ( v82 )
          {
            if ( v82 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v82 == 22 || v82 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v82 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v83 = memcpy_s(v80, 4uLL, L"%b", 4uLL);
          if ( v83 )
          {
            if ( v83 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v83 == 22 || v83 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v83 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v96 = (char *)(v80 + 2);
          v80[v81 + 2] = 0;
          LODWORD(v74) = v74 + 1;
          v94 = v74;
          v33 = Str;
        }
        v77 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v77) + 1);
        v96 = (char *)v77;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v75);
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v85,
      L"%",
      L"%%");
    v109 = 1;
    v132 = 2;
    v19 = 0;
    v89 = 0;
    v20 = v85;
    v21 = v85;
    v98 = v85;
    v111 = *((_DWORD *)v85 - 4);
    v22 = &v85[v111];
    v138 = v22;
    while ( v21 < v22 )
    {
      while ( 1 )
      {
        v23 = wcsstr(v21, L"|");
        v140 = v23;
        if ( !v23 )
          break;
        v89 = ++v19;
        v21 = v23 + 1;
        v98 = v23 + 1;
      }
      if ( v21 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( v21[v24] );
      }
      else
      {
        LODWORD(v24) = 0;
      }
      v21 += (int)v24 + 1;
      v98 = v21;
    }
    if ( v19 > 0 )
    {
      v25 = *((int *)v20 - 4);
      v87 = v25;
      v26 = v25 + v19;
      v134 = v25 + v19;
      if ( (int)v25 + v19 <= (int)v25 )
        v27 = (unsigned int)v25;
      else
        v27 = (unsigned int)v26;
      v142 = v20 - 12;
      v113 = 1 - *((_DWORD *)v20 - 2);
      v129 = *((_DWORD *)v20 - 3) - v27;
      if ( (v113 | v129) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v85, v27);
        v20 = v85;
      }
      v144 = v20;
      v28 = v20;
      v100 = (char *)v20;
      v29 = &v20[v25];
      v108 = v29;
      while ( v28 < v29 )
      {
        while ( 1 )
        {
          v30 = wcsstr(v28, L"|");
          v31 = v30;
          v146 = v30;
          if ( !v30 )
            break;
          v115 = v25 - (v30 - v20) - 1;
          v47 = v115;
          v28 = v30 + 2;
          v48 = memmove_s(v30 + 2, 2LL * v115, v30 + 1, 2LL * v115);
          if ( v48 )
          {
            if ( v48 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v48 == 22 || v48 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v48 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v49 = memcpy_s(v31, 4uLL, L"%b", 4uLL);
          if ( v49 )
          {
            if ( v49 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v49 == 22 || v49 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v49 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v100 = (char *)(v31 + 2);
          v31[v47 + 2] = 0;
          LODWORD(v25) = v25 + 1;
          v87 = v25;
          v20 = v85;
        }
        if ( v28 )
        {
          v32 = -1LL;
          do
            ++v32;
          while ( v28[v32] );
        }
        else
        {
          LODWORD(v32) = 0;
        }
        v28 += (int)v32 + 1;
        v100 = (char *)v28;
        v29 = v108;
      }
      if ( v26 < 0 || v26 > *((_DWORD *)v20 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v20 - 4) = v26;
      v20[v26] = 0;
      v33 = Str;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v86,
      L"%",
      L"%%");
    v125 = 1;
    v117 = 2;
    v34 = 0;
    v91 = 0;
    v8 = v86;
    v35 = v86;
    v102 = v86;
    v133 = *((_DWORD *)v86 - 4);
    v36 = &v86[v133];
    v148 = v36;
    while ( v35 < v36 )
    {
      while ( 1 )
      {
        v37 = wcsstr(v35, L"|");
        v150 = v37;
        if ( !v37 )
          break;
        v91 = ++v34;
        v35 = v37 + 1;
        v102 = v37 + 1;
      }
      if ( v35 )
      {
        v38 = -1LL;
        do
          ++v38;
        while ( v35[v38] );
      }
      else
      {
        LODWORD(v38) = 0;
      }
      v35 += (int)v38 + 1;
      v102 = v35;
    }
    if ( v34 > 0 )
    {
      v39 = *((int *)v8 - 4);
      v88 = v39;
      v40 = v39 + v34;
      v119 = v39 + v34;
      if ( (int)v39 + v34 <= (int)v39 )
        v41 = (unsigned int)v39;
      else
        v41 = (unsigned int)v40;
      v152 = v8 - 12;
      v127 = 1 - *((_DWORD *)v8 - 2);
      v121 = *((_DWORD *)v8 - 3) - v41;
      if ( (v127 | v121) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v86, v41);
        v8 = v86;
      }
      v154 = v8;
      v42 = v8;
      v95 = (char *)v8;
      v43 = &v8[v39];
      v110 = v43;
      while ( v42 < v43 )
      {
        while ( 1 )
        {
          v44 = wcsstr(v42, L"|");
          v45 = v44;
          v156 = v44;
          if ( !v44 )
            break;
          v103 = v39 - (v44 - v8) - 1;
          v50 = v103;
          v42 = v44 + 2;
          v51 = memmove_s(v44 + 2, 2LL * v103, v44 + 1, 2LL * v103);
          if ( v51 )
          {
            if ( v51 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v51 == 22 || v51 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v51 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v52 = memcpy_s(v45, 4uLL, L"%b", 4uLL);
          if ( v52 )
          {
            if ( v52 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v52 == 22 || v52 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v52 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v95 = (char *)(v45 + 2);
          v45[v50 + 2] = 0;
          LODWORD(v39) = v39 + 1;
          v88 = v39;
        }
        if ( v42 )
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v42[v46] );
        }
        else
        {
          LODWORD(v46) = 0;
        }
        v42 += (int)v46 + 1;
        v95 = (char *)v42;
        v43 = v110;
      }
      if ( v40 < 0 || v40 > *((_DWORD *)v8 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v8 - 4) = v40;
      v8[v40] = 0;
      v20 = v85;
      v33 = Str;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (char *)this + 72,
      L"%s|%s|%s",
      v33,
      v20,
      v8);
  }
  catch ( ATL::CAtlException *v158 )
  {
    v160 = *(_DWORD *)v158;
    v8 = v86;
  }
  v9 = v160;
  if ( v160 < 0 )
    goto LABEL_187;
LABEL_80:
  v53 = (volatile signed __int32 *)(v8 - 12);
  if ( _InterlockedExchangeAdd(v53 + 4, 0xFFFFFFFF) <= 1 )
  {
    v54 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v53 + 8LL);
    if ( v54 == ATL::CAtlStringMgr::Free )
    {
      v55 = *(HANDLE **)(*(_QWORD *)v53 + 8LL);
      v56 = (void (__fastcall *)(ATL::CWin32Heap *__hidden, void *))*((_QWORD *)*v55 + 1);
      if ( v56 == ATL::CWin32Heap::Free )
        HeapFree(v55[1], 0, (LPVOID)v53);
      else
        v56((ATL::CWin32Heap *)v55, (void *)v53);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, volatile signed __int32 *))v54)(*(_QWORD *)v53, v53);
    }
  }
  v57 = v85 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85 - 2, 0xFFFFFFFF) <= 1 )
  {
    v58 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v57 + 8LL);
    if ( v58 == ATL::CAtlStringMgr::Free )
    {
      v59 = *(HANDLE **)(*(_QWORD *)v57 + 8LL);
      v60 = (void (__fastcall *)(ATL::CWin32Heap *__hidden, void *))*((_QWORD *)*v59 + 1);
      if ( v60 == ATL::CWin32Heap::Free )
        HeapFree(v59[1], 0, v57);
      else
        v60((ATL::CWin32Heap *)v59, v57);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, wchar_t *))v58)(*(_QWORD *)v57, v57);
    }
  }
  v61 = Str;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, wchar_t *))(**((_QWORD **)v61 - 3) + 8LL))(*((_QWORD *)v61 - 3), v61 - 12);
  return (unsigned int)v9;
}
