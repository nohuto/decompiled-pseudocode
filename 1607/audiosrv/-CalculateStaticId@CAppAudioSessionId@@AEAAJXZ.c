/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002A440
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18002A378 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18000DBA0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x1800125A0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180012720 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x18005A68C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18005D43C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(CAppAudioSessionId *this)
{
  CAppAudioSessionId *v1; // r12
  int v2; // r13d
  __int64 v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rcx
  __int64 (*v5)(void); // rax
  __int64 v6; // rdi
  BSTR v7; // rax
  wchar_t *v8; // rdx
  OLECHAR *v9; // rbx
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *); // rax
  unsigned int *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // r14d
  const wchar_t *v19; // rbx
  const wchar_t *v20; // rdi
  wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  const wchar_t *v24; // rbx
  const wchar_t *v25; // r14
  wchar_t *v26; // rcx
  __int64 v27; // rax
  wchar_t *const *v28; // rcx
  _QWORD *v29; // rcx
  void (*v30)(void); // rax
  HANDLE *v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const void *v36; // r14
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  HINSTANCE StringResourceInstance; // rax
  __int64 v41; // r13
  int v42; // r12d
  int v43; // edx
  const wchar_t *v44; // rbx
  const wchar_t *v45; // rax
  wchar_t *v46; // rax
  wchar_t *v47; // r14
  __int64 v48; // rcx
  const void *v49; // rdx
  __int64 v50; // r13
  int v51; // r12d
  int v52; // edx
  const wchar_t *v53; // rbx
  const wchar_t *v54; // rax
  wchar_t *v55; // rax
  wchar_t *v56; // r14
  __int64 v57; // rcx
  const void *v58; // rdx
  char v59; // [rsp+20h] [rbp-2D8h]
  wchar_t *v60; // [rsp+28h] [rbp-2D0h] BYREF
  LPVOID lpMem; // [rsp+30h] [rbp-2C8h]
  const wchar_t *v62; // [rsp+38h] [rbp-2C0h] BYREF
  int v63; // [rsp+40h] [rbp-2B8h]
  int v64; // [rsp+44h] [rbp-2B4h]
  int v65; // [rsp+48h] [rbp-2B0h]
  int v66; // [rsp+4Ch] [rbp-2ACh]
  __int64 v67; // [rsp+50h] [rbp-2A8h]
  CAppAudioSessionId *v68; // [rsp+58h] [rbp-2A0h]
  const wchar_t *v69; // [rsp+60h] [rbp-298h]
  const wchar_t *v70; // [rsp+68h] [rbp-290h]
  const wchar_t *v71; // [rsp+70h] [rbp-288h]
  const wchar_t *v72; // [rsp+78h] [rbp-280h]
  int v73; // [rsp+80h] [rbp-278h]
  int v74; // [rsp+84h] [rbp-274h]
  int v75; // [rsp+88h] [rbp-270h]
  int v76; // [rsp+8Ch] [rbp-26Ch]
  int v77; // [rsp+90h] [rbp-268h]
  int v78; // [rsp+94h] [rbp-264h]
  int v79; // [rsp+98h] [rbp-260h]
  int v80; // [rsp+9Ch] [rbp-25Ch]
  int v81; // [rsp+A0h] [rbp-258h]
  int v82; // [rsp+A4h] [rbp-254h]
  int v83; // [rsp+A8h] [rbp-250h]
  int v84; // [rsp+ACh] [rbp-24Ch]
  int v85; // [rsp+B0h] [rbp-248h]
  int v86; // [rsp+B4h] [rbp-244h]
  int v87; // [rsp+B8h] [rbp-240h]
  unsigned int v88; // [rsp+BCh] [rbp-23Ch]
  unsigned int v89; // [rsp+C0h] [rbp-238h]
  int v90; // [rsp+C4h] [rbp-234h]
  int v91; // [rsp+C8h] [rbp-230h]
  int v92; // [rsp+CCh] [rbp-22Ch]
  int v93; // [rsp+D0h] [rbp-228h]
  void *Src; // [rsp+D8h] [rbp-220h]
  const wchar_t *v95; // [rsp+E0h] [rbp-218h]
  const wchar_t *v96; // [rsp+E8h] [rbp-210h]
  const wchar_t *v97; // [rsp+F0h] [rbp-208h]
  __int64 v98; // [rsp+F8h] [rbp-200h]
  __int64 v99; // [rsp+100h] [rbp-1F8h]
  __int64 (__fastcall ***v100)(_QWORD, _QWORD, __int64); // [rsp+108h] [rbp-1F0h]
  __int64 (__fastcall ***v101)(_QWORD, _QWORD, __int64); // [rsp+110h] [rbp-1E8h]
  __int64 v102; // [rsp+118h] [rbp-1E0h]
  __int64 v103; // [rsp+120h] [rbp-1D8h]
  __int64 v104; // [rsp+128h] [rbp-1D0h]
  __int64 v105; // [rsp+130h] [rbp-1C8h]
  __int64 v106; // [rsp+138h] [rbp-1C0h]
  BSTR v107; // [rsp+140h] [rbp-1B8h]
  unsigned int *v108; // [rsp+148h] [rbp-1B0h]
  HINSTANCE v109; // [rsp+150h] [rbp-1A8h]
  unsigned __int64 v110; // [rsp+158h] [rbp-1A0h]
  unsigned int *v111; // [rsp+160h] [rbp-198h]
  wchar_t *v112; // [rsp+168h] [rbp-190h]
  __int64 v113; // [rsp+170h] [rbp-188h]
  __int64 v114; // [rsp+178h] [rbp-180h]
  __int64 v115; // [rsp+180h] [rbp-178h]
  const wchar_t *v116; // [rsp+188h] [rbp-170h]
  wchar_t *v117; // [rsp+190h] [rbp-168h]
  wchar_t *v118; // [rsp+198h] [rbp-160h]
  wchar_t *v119; // [rsp+1A0h] [rbp-158h]
  wchar_t *v120; // [rsp+1A8h] [rbp-150h]
  __int64 v121; // [rsp+1B0h] [rbp-148h]
  wchar_t *v122; // [rsp+1B8h] [rbp-140h]
  wchar_t *v123; // [rsp+1C0h] [rbp-138h]
  __int64 v124; // [rsp+1C8h] [rbp-130h]
  __int64 v125; // [rsp+1D0h] [rbp-128h]
  const wchar_t *v126; // [rsp+1D8h] [rbp-120h]
  wchar_t *v127; // [rsp+1E0h] [rbp-118h]
  wchar_t *v128; // [rsp+1E8h] [rbp-110h]
  wchar_t *v129; // [rsp+1F0h] [rbp-108h]
  wchar_t *v130; // [rsp+1F8h] [rbp-100h]
  __int64 v131; // [rsp+200h] [rbp-F8h]
  wchar_t *v132; // [rsp+208h] [rbp-F0h]
  wchar_t *v133; // [rsp+210h] [rbp-E8h]
  __int64 v134; // [rsp+218h] [rbp-E0h]
  __int64 v135; // [rsp+220h] [rbp-D8h]
  _QWORD *v136; // [rsp+228h] [rbp-D0h]
  HANDLE *v137; // [rsp+230h] [rbp-C8h]
  ATL::CAtlException *v138; // [rsp+238h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+240h] [rbp-B8h] BYREF

  v98 = -2LL;
  v1 = this;
  v68 = this;
  v2 = 0;
  try
  {
    v3 = *(_QWORD *)this - 24LL;
    v99 = v3;
    v67 = 0LL;
    v100 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3;
    v4 = v100;
    v5 = (__int64 (*)(void))(*v100)[4];
    if ( (char *)v5 != (char *)ATL::CAtlStringMgr::Clone )
      v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))v5();
    v101 = v4;
    if ( *(int *)(v3 + 16) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      v67 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
      v6 = v3;
      goto LABEL_7;
    }
    v33 = (**v4)(v4, *(unsigned int *)(v3 + 8), 2LL);
    v6 = v33;
    v67 = v33;
    if ( !v33 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v35, v34);
    *(_DWORD *)(v33 + 8) = *(_DWORD *)(v3 + 8);
    v36 = (const void *)(v3 + 24);
    v102 = v3 + 24;
    v37 = *(_DWORD *)(v3 + 8) + 1;
    v103 = v37;
    v104 = v33 + 24;
    v38 = 2 * v37;
    v105 = 2 * v37;
    v39 = 2 * v37;
    v106 = 2 * v37;
    if ( 2 * v37 )
    {
      if ( v33 == -24 )
        goto LABEL_60;
      if ( v36 && v39 >= v38 )
      {
        memcpy_0((void *)(v33 + 24), v36, 2 * v37);
        goto LABEL_7;
      }
      memset((void *)(v33 + 24), 0, 2 * v37);
      if ( !v36 )
      {
LABEL_60:
        *(_DWORD *)_o__errno(v37, v34) = 22;
      }
      else
      {
        if ( v39 >= v38 )
          goto LABEL_7;
        *(_DWORD *)_o__errno(v37, v34) = 34;
      }
      invalid_parameter_noinfo();
    }
LABEL_7:
    v62 = (const wchar_t *)(v6 + 24);
    if ( !*((_DWORD *)v1 + 10) )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        &v62,
        L"%",
        L"%%");
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        &v62,
        L"|",
        L"%b");
    }
    StringFromGUID2((const GUID *const)v1 + 1, sz, 64);
    v7 = SysAllocString(sz);
    v9 = v7;
    Src = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v107 = v7;
    v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
    if ( v10 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(&dword_1800CB020);
      v11 = (unsigned int *)&qword_1800CB010;
      v9 = (OLECHAR *)Src;
    }
    else
    {
      v11 = (unsigned int *)v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    }
    v108 = v11;
    v12 = (wchar_t *)(v11 + 6);
    v60 = (wchar_t *)(v11 + 6);
    v59 = 0;
    if ( ((unsigned __int64)v9 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v86 = (unsigned __int16)v9;
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v9, (unsigned __int16)v8);
      v109 = StringResourceInstance;
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v60,
          StringResourceInstance,
          (unsigned __int16)v9);
        v12 = v60;
      }
      v59 = 1;
      goto LABEL_25;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v9[v13] );
    v87 = v13;
    if ( !(_DWORD)v13 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v60);
      v12 = v60;
LABEL_25:
      SysFreeString(v9);
      v91 = 1;
      v92 = 2;
      v18 = 0;
      v63 = 0;
      v19 = v12;
      v69 = v12;
      v93 = *((_DWORD *)v12 - 4);
      v20 = &v12[v93];
      v116 = v20;
      while ( v19 < v20 )
      {
        while ( 1 )
        {
          v21 = wcsstr(v19, L"%");
          v117 = v21;
          if ( !v21 )
            break;
          v63 = ++v18;
          v19 = v21 + 1;
          v69 = v21 + 1;
        }
        if ( v19 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( v19[v22] );
        }
        else
        {
          LODWORD(v22) = 0;
        }
        v19 += (int)v22 + 1;
        v69 = v19;
      }
      if ( v18 > 0 )
      {
        v41 = *((int *)v12 - 4);
        v64 = v41;
        v42 = v41 + v18;
        v73 = v41 + v18;
        v43 = v41;
        if ( (int)v41 + v18 > (int)v41 )
          v43 = v41 + v18;
        v74 = v43;
        v118 = v12 - 12;
        v75 = 1 - *((_DWORD *)v12 - 2);
        v76 = *((_DWORD *)v12 - 3) - v43;
        if ( (v75 | v76) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v60, v43);
          v12 = v60;
        }
        v119 = v12;
        v44 = v12;
        v70 = v12;
        v45 = &v12[v41];
        v95 = v45;
        while ( v44 < v45 )
        {
          while ( 1 )
          {
            v46 = wcsstr(v44, L"%");
            v47 = v46;
            v120 = v46;
            if ( !v46 )
              break;
            v48 = (unsigned int)v41 - (unsigned int)(v46 - v12) - 1;
            LODWORD(lpMem) = v48;
            v77 = v41 - (v46 - v12) - 1;
            v121 = 2LL * (int)v48;
            v49 = v46 + 1;
            v122 = v46 + 1;
            v44 = v46 + 2;
            v123 = v46 + 2;
            if ( v121 )
            {
              if ( v46 == (wchar_t *)-4LL || v46 == (wchar_t *)-2LL )
              {
                *(_DWORD *)_o__errno(v48, v49) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v46 + 2, v49, 2LL * (int)v48);
            }
            v124 = 4LL;
            v125 = 4LL;
            memcpy_0(v47, L"%%", 4uLL);
            v70 = v47 + 2;
            v47[(int)lpMem + 2] = 0;
            LODWORD(v41) = v41 + 1;
            v64 = v41;
          }
          v44 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v44) + 1);
          v70 = v44;
          v45 = v95;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v60, v42);
        v2 = 0;
        v1 = v68;
      }
      v78 = 1;
      v79 = 2;
      v23 = 0;
      v65 = 0;
      v24 = v12;
      v71 = v12;
      v80 = *((_DWORD *)v12 - 4);
      v25 = &v12[v80];
      v126 = v25;
      while ( v24 < v25 )
      {
        while ( 1 )
        {
          v26 = wcsstr(v24, L"|");
          v127 = v26;
          if ( !v26 )
            break;
          v65 = ++v23;
          v24 = v26 + 1;
          v71 = v26 + 1;
        }
        if ( v24 )
        {
          v27 = -1LL;
          do
            ++v27;
          while ( v24[v27] );
        }
        else
        {
          LODWORD(v27) = 0;
        }
        v24 += (int)v27 + 1;
        v71 = v24;
      }
      if ( v23 > 0 )
      {
        v50 = *((int *)v12 - 4);
        v66 = v50;
        v51 = v50 + v23;
        v81 = v50 + v23;
        v52 = v50;
        if ( (int)v50 + v23 > (int)v50 )
          v52 = v50 + v23;
        v82 = v52;
        v128 = v12 - 12;
        v83 = 1 - *((_DWORD *)v12 - 2);
        v84 = *((_DWORD *)v12 - 3) - v52;
        if ( (v83 | v84) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v60, v52);
          v12 = v60;
        }
        v129 = v12;
        v53 = v12;
        v72 = v12;
        v54 = &v12[v50];
        v96 = v54;
        while ( v53 < v54 )
        {
          while ( 1 )
          {
            v55 = wcsstr(v53, L"|");
            v56 = v55;
            v130 = v55;
            if ( !v55 )
              break;
            v57 = (unsigned int)v50 - (unsigned int)(v55 - v12) - 1;
            LODWORD(lpMem) = v57;
            v85 = v50 - (v55 - v12) - 1;
            v131 = 2LL * (int)v57;
            v58 = v55 + 1;
            v132 = v55 + 1;
            v53 = v55 + 2;
            v133 = v55 + 2;
            if ( v131 )
            {
              if ( v55 == (wchar_t *)-4LL || v55 == (wchar_t *)-2LL )
              {
                *(_DWORD *)_o__errno(v57, v58) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v55 + 2, v58, 2LL * (int)v57);
            }
            v134 = 4LL;
            v135 = 4LL;
            memcpy_0(v56, L"%b", 4uLL);
            v72 = v56 + 2;
            v56[(int)lpMem + 2] = 0;
            LODWORD(v50) = v50 + 1;
            v66 = v50;
          }
          v53 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v53) + 1);
          v72 = v53;
          v54 = v96;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v60, v51);
        v2 = 0;
        v1 = v68;
      }
      v28 = (wchar_t *const *)((char *)v1 + 32);
      if ( *((_DWORD *)v1 + 10) )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v28,
          L"#|%s",
          v12);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v28,
          L"%s|%s",
          v62,
          v12,
          v59);
      lpMem = v12 - 12;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
      {
        v29 = *(_QWORD **)lpMem;
        v136 = v29;
        v30 = *(void (**)(void))(*v29 + 8LL);
        if ( (char *)v30 == (char *)ATL::CAtlStringMgr::Free
          && (v31 = (HANDLE *)v29[1],
              v137 = v31,
              v30 = (void (*)(void))*((_QWORD *)*v31 + 1),
              (char *)v30 == (char *)ATL::CWin32Heap::Free) )
        {
          HeapFree(v31[1], 0, lpMem);
        }
        else
        {
          v30();
        }
      }
      v97 = v62 - 12;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v62 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v97 + 8LL))(*(_QWORD *)v97);
      goto LABEL_115;
    }
    v14 = v11[2];
    v88 = v11[2];
    v15 = v9 - v12;
    v110 = v15;
    v111 = v11;
    v89 = 1 - v11[4];
    v16 = v89;
    v90 = v11[3] - v13;
    if ( ((v89 | v90) & 0x80000000) != 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v60, v13);
      v12 = v60;
    }
    if ( v15 <= v14 )
    {
      v8 = &v12[v15];
      v112 = v8;
      v17 = 2LL * (int)v13;
      v113 = v17;
      if ( !v17 )
        goto LABEL_22;
      if ( v12 && v8 )
      {
        memmove(v12, v8, 2LL * (int)v13);
        goto LABEL_22;
      }
    }
    else
    {
      v17 = 2LL * (int)v13;
      v114 = v17;
      v115 = v17;
      if ( !v17 )
        goto LABEL_22;
      if ( v12 )
      {
        memcpy_0(v12, v9, 2LL * (int)v13);
        goto LABEL_22;
      }
    }
    *(_DWORD *)_o__errno(v16, v8) = 22;
    invalid_parameter_noinfo();
LABEL_22:
    if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v12 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v12 - 4) = v13;
    v12[(unsigned __int64)v17 / 2] = 0;
    v1 = v68;
    goto LABEL_25;
  }
  catch ( ATL::CAtlException *v138 )
  {
    LODWORD(lpMem) = *(_DWORD *)v138;
    v2 = (int)lpMem;
  }
LABEL_115:
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 331, v2);
  return (unsigned int)v2;
}
