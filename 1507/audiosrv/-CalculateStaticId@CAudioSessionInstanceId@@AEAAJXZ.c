/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000B110 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18000C610 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18000C720 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000CC38 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000D2A8 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017890 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180037F4C (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *v5; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *v7; // rax
  wchar_t *v8; // rdi
  int v9; // r15d
  int v10; // esi
  wchar_t *v11; // r12
  wchar_t *v12; // rbx
  wchar_t *v13; // rdi
  wchar_t *i; // rax
  __int64 v15; // rax
  int v16; // esi
  const wchar_t *v17; // rbx
  wchar_t *v18; // rdi
  wchar_t *j; // rax
  __int64 v20; // rax
  int v21; // edi
  wchar_t *v22; // r12
  wchar_t *v23; // rbx
  wchar_t *v24; // rsi
  wchar_t *k; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // edi
  __int64 v29; // rdx
  const wchar_t *v30; // rbx
  wchar_t *v31; // rax
  int v32; // esi
  wchar_t *v33; // rbx
  wchar_t *v34; // r14
  wchar_t *m; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  int v38; // esi
  __int64 v39; // rdx
  const wchar_t *v40; // rbx
  wchar_t *v41; // rax
  wchar_t *v42; // rax
  wchar_t *v43; // r14
  __int64 v44; // rax
  wchar_t *v45; // rax
  wchar_t *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r13
  errno_t v49; // eax
  errno_t v50; // eax
  __int64 v51; // r13
  errno_t v52; // eax
  errno_t v53; // eax
  void (*v54)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r14
  wchar_t *v55; // rbx
  void (*v56)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r14
  wchar_t *v57; // rsi
  __int64 v59; // rdi
  unsigned int v60; // r14d
  __int64 v61; // rdx
  const wchar_t *v62; // rbx
  wchar_t *v63; // r12
  wchar_t *v64; // rax
  wchar_t *v65; // rsi
  __int64 v66; // r13
  errno_t v67; // eax
  errno_t v68; // eax
  __int64 v69; // rdi
  unsigned int v70; // r14d
  __int64 v71; // rdx
  const wchar_t *v72; // rbx
  wchar_t *v73; // r12
  wchar_t *v74; // rax
  wchar_t *v75; // rsi
  __int64 v76; // r13
  errno_t v77; // eax
  errno_t v78; // eax
  wchar_t *v79; // [rsp+30h] [rbp-58h] BYREF
  wchar_t *v80; // [rsp+38h] [rbp-50h]
  __int64 v81; // [rsp+40h] [rbp-48h]
  ATL::CAtlException *v82; // [rsp+48h] [rbp-40h] BYREF
  int v84; // [rsp+98h] [rbp+10h]
  wchar_t *Str; // [rsp+A0h] [rbp+18h] BYREF
  wchar_t *v86; // [rsp+A8h] [rbp+20h] BYREF

  v81 = -2LL;
  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  Str = (wchar_t *)((char *)NilString + 24);
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v79 = (wchar_t *)((char *)v5 + 24);
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v8 = (wchar_t *)((char *)v7 + 24);
  v86 = (wchar_t *)((char *)v7 + 24);
  v9 = CAudioEndpointId::ToString(this, &Str);
  if ( v9 < 0 || (v9 = CAppAudioSessionId::ToString((char *)this + 8, &v79), v9 < 0) )
  {
LABEL_184:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        26LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v9);
    }
    goto LABEL_77;
  }
  v9 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v86);
  v84 = v9;
  if ( v9 < 0 )
  {
    v8 = v86;
    goto LABEL_184;
  }
  try
  {
    v10 = 0;
    v11 = Str;
    v12 = Str;
    v13 = &Str[*((int *)Str - 4)];
    if ( Str < v13 )
    {
      do
      {
        for ( i = wcsstr(v12, L"%"); i; i = wcsstr(i + 1, L"%") )
        {
          ++v10;
          v12 = i + 1;
        }
        if ( v12 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v12[v15] );
        }
        else
        {
          LODWORD(v15) = 0;
        }
        v12 += (int)v15 + 1;
      }
      while ( v12 < v13 );
      if ( v10 > 0 )
      {
        v59 = *((int *)v11 - 4);
        v60 = v59 + v10;
        v61 = *((unsigned int *)v11 - 4);
        if ( (int)v59 + v10 > (int)v59 )
          v61 = v60;
        if ( ((1 - *((_DWORD *)v11 - 2)) | (*((_DWORD *)v11 - 3) - (int)v61)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v61);
          v11 = Str;
        }
        v62 = v11;
        v63 = &v11[v59];
        while ( v62 < v63 )
        {
          while ( 1 )
          {
            v64 = wcsstr(v62, L"%");
            v65 = v64;
            if ( !v64 )
              break;
            v66 = (int)(v59 - (v64 - Str) - 1);
            v62 = v64 + 2;
            v67 = memmove_s(v64 + 2, 2 * v66, v64 + 1, 2 * v66);
            if ( v67 )
            {
              if ( v67 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v67 == 22 || v67 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v67 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v68 = memcpy_s(v65, 4uLL, L"%%", 4uLL);
            if ( v68 )
            {
              if ( v68 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v68 == 22 || v68 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v68 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v65[v66 + 2] = 0;
            LODWORD(v59) = v59 + 1;
          }
          v62 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v62) + 1);
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v60);
        v11 = Str;
      }
    }
    v16 = 0;
    v17 = v11;
    v18 = &v11[*((int *)v11 - 4)];
    if ( v11 < v18 )
    {
      do
      {
        for ( j = wcsstr(v17, L"|"); j; j = wcsstr(j + 1, L"|") )
        {
          ++v16;
          v17 = j + 1;
        }
        if ( v17 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v17[v20] );
        }
        else
        {
          LODWORD(v20) = 0;
        }
        v17 += (int)v20 + 1;
      }
      while ( v17 < v18 );
      if ( v16 > 0 )
      {
        v69 = *((int *)v11 - 4);
        v70 = v69 + v16;
        v71 = *((unsigned int *)v11 - 4);
        if ( (int)v69 + v16 > (int)v69 )
          v71 = v70;
        if ( ((1 - *((_DWORD *)v11 - 2)) | (*((_DWORD *)v11 - 3) - (int)v71)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v71);
          v11 = Str;
        }
        v72 = v11;
        v73 = &v11[v69];
        while ( v72 < v73 )
        {
          while ( 1 )
          {
            v74 = wcsstr(v72, L"|");
            v75 = v74;
            if ( !v74 )
              break;
            v76 = (int)(v69 - (v74 - Str) - 1);
            v72 = v74 + 2;
            v77 = memmove_s(v74 + 2, 2 * v76, v74 + 1, 2 * v76);
            if ( v77 )
            {
              if ( v77 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v77 == 22 || v77 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v77 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v78 = memcpy_s(v75, 4uLL, L"%b", 4uLL);
            if ( v78 )
            {
              if ( v78 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v78 == 22 || v78 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v78 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v75[v76 + 2] = 0;
            LODWORD(v69) = v69 + 1;
          }
          v72 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v72) + 1);
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v70);
      }
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v79,
      L"%",
      L"%%");
    v21 = 0;
    v22 = v79;
    v23 = v79;
    v24 = &v79[*((int *)v79 - 4)];
    if ( v79 < v24 )
    {
      do
      {
        for ( k = wcsstr(v23, L"|"); k; k = wcsstr(k + 1, L"|") )
        {
          ++v21;
          v23 = k + 1;
        }
        if ( v23 )
        {
          v26 = -1LL;
          do
            ++v26;
          while ( v23[v26] );
        }
        else
        {
          LODWORD(v26) = 0;
        }
        v23 += (int)v26 + 1;
      }
      while ( v23 < v24 );
      if ( v21 > 0 )
      {
        v27 = *((int *)v22 - 4);
        v28 = v27 + v21;
        if ( v28 <= (int)v27 )
          v29 = (unsigned int)v27;
        else
          v29 = (unsigned int)v28;
        if ( ((1 - *((_DWORD *)v22 - 2)) | (*((_DWORD *)v22 - 3) - (int)v29)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v79, v29);
          v22 = v79;
        }
        v30 = v22;
        v31 = &v22[v27];
        v80 = v31;
        while ( v30 < v31 )
        {
          while ( 1 )
          {
            v45 = wcsstr(v30, L"|");
            v46 = v45;
            if ( !v45 )
              break;
            v48 = (int)(v27 - (v45 - v22) - 1);
            v30 = v45 + 2;
            v49 = memmove_s(v45 + 2, 2 * v48, v45 + 1, 2 * v48);
            if ( v49 )
            {
              if ( v49 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v49 == 22 || v49 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v49 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v50 = memcpy_s(v46, 4uLL, L"%b", 4uLL);
            if ( v50 )
            {
              if ( v50 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v50 == 22 || v50 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v50 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v46[v48 + 2] = 0;
            LODWORD(v27) = v27 + 1;
          }
          if ( v30 )
          {
            v47 = -1LL;
            do
              ++v47;
            while ( v30[v47] );
          }
          else
          {
            LODWORD(v47) = 0;
          }
          v30 += (int)v47 + 1;
          v31 = v80;
        }
        if ( v28 < 0 || v28 > *((_DWORD *)v22 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v22 - 4) = v28;
        v22[v28] = 0;
      }
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v86,
      L"%",
      L"%%");
    v32 = 0;
    v8 = v86;
    v33 = v86;
    v34 = &v86[*((int *)v86 - 4)];
    if ( v86 < v34 )
    {
      do
      {
        for ( m = wcsstr(v33, L"|"); m; m = wcsstr(m + 1, L"|") )
        {
          ++v32;
          v33 = m + 1;
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
      }
      while ( v33 < v34 );
      if ( v32 > 0 )
      {
        v37 = *((int *)v8 - 4);
        v38 = v37 + v32;
        if ( v38 <= (int)v37 )
          v39 = (unsigned int)v37;
        else
          v39 = (unsigned int)v38;
        if ( ((1 - *((_DWORD *)v8 - 2)) | (*((_DWORD *)v8 - 3) - (int)v39)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v86, v39);
          v8 = v86;
        }
        v40 = v8;
        v41 = &v8[v37];
        v80 = v41;
        while ( v40 < v41 )
        {
          while ( 1 )
          {
            v42 = wcsstr(v40, L"|");
            v43 = v42;
            if ( !v42 )
              break;
            v51 = (int)(v37 - (v42 - v8) - 1);
            v40 = v42 + 2;
            v52 = memmove_s(v42 + 2, 2 * v51, v42 + 1, 2 * v51);
            if ( v52 )
            {
              if ( v52 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v52 == 22 || v52 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v52 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v53 = memcpy_s(v43, 4uLL, L"%b", 4uLL);
            if ( v53 )
            {
              if ( v53 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v53 == 22 || v53 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v53 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v43[v51 + 2] = 0;
            LODWORD(v37) = v37 + 1;
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
          v41 = v80;
        }
        if ( v38 < 0 || v38 > *((_DWORD *)v8 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v8 - 4) = v38;
        v8[v38] = 0;
        v22 = v79;
        v9 = v84;
      }
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (char *)this + 72,
      L"%s|%s|%s",
      Str,
      v22,
      v8);
  }
  catch ( ATL::CAtlException *v82 )
  {
    v8 = v86;
    v9 = *(_DWORD *)v82;
  }
  if ( v9 < 0 )
    goto LABEL_184;
LABEL_77:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) <= 1 )
  {
    v54 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**((_QWORD **)v8 - 3) + 8LL);
    if ( v54 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*((ATL::CAtlStringMgr **)v8 - 3), (struct ATL::CStringData *)(v8 - 12));
    else
      ((void (__fastcall *)(_QWORD, wchar_t *))v54)(*((_QWORD *)v8 - 3), v8 - 12);
  }
  v55 = v79;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v79 - 2, 0xFFFFFFFF) <= 1 )
  {
    v56 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**((_QWORD **)v55 - 3) + 8LL);
    if ( v56 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*((ATL::CAtlStringMgr **)v55 - 3), (struct ATL::CStringData *)(v55 - 12));
    else
      ((void (__fastcall *)(_QWORD, wchar_t *))v56)(*((_QWORD *)v55 - 3), v55 - 12);
  }
  v57 = Str;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, wchar_t *))(**((_QWORD **)v57 - 3) + 8LL))(*((_QWORD *)v57 - 3), v57 - 12);
  return (unsigned int)v9;
}
