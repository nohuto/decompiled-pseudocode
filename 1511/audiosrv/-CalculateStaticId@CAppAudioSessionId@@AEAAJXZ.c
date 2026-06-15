/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180012000
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180011EBC (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007E214 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180018F50 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180039E6C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18003A530 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180071D20 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800750C4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  int v2; // r12d
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rsi
  struct ATL::IAtlStringMgr *(__fastcall *v5)(ATL::CAtlStringMgr *__hidden); // rbx
  __int64 v6; // rbx
  BSTR v7; // rax
  unsigned __int16 v8; // dx
  unsigned __int64 v9; // rbx
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rdi
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r15
  rsize_t v16; // r9
  int v17; // edi
  const wchar_t *v18; // rbx
  const wchar_t *v19; // r15
  wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // edi
  const wchar_t *v23; // rbx
  const wchar_t *v24; // r15
  wchar_t *v25; // rcx
  __int64 v26; // rax
  const GUID *v27; // rcx
  HANDLE *v28; // rbx
  void (*v29)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  HINSTANCE StringResourceInstance; // rax
  int v37; // r15d
  __int64 v38; // rdi
  unsigned int v39; // r15d
  __int64 v40; // rdx
  const wchar_t *v41; // rbx
  const wchar_t *v42; // rax
  wchar_t *v43; // rax
  errno_t v44; // eax
  errno_t v45; // eax
  int v46; // r15d
  __int64 v47; // rdi
  unsigned int v48; // r15d
  __int64 v49; // rdx
  const wchar_t *v50; // rbx
  const wchar_t *v51; // rax
  wchar_t *v52; // rax
  errno_t v53; // eax
  errno_t v54; // eax
  char v55; // [rsp+20h] [rbp-258h]
  unsigned int *v56; // [rsp+28h] [rbp-250h] BYREF
  LPVOID lpMem; // [rsp+30h] [rbp-248h]
  int v58; // [rsp+38h] [rbp-240h]
  int v59; // [rsp+3Ch] [rbp-23Ch]
  int v60; // [rsp+40h] [rbp-238h]
  int v61; // [rsp+44h] [rbp-234h]
  __int64 v62; // [rsp+48h] [rbp-230h] BYREF
  const wchar_t *v63; // [rsp+50h] [rbp-228h]
  const wchar_t *v64; // [rsp+58h] [rbp-220h]
  __int64 v65; // [rsp+60h] [rbp-218h]
  void *Destination; // [rsp+68h] [rbp-210h]
  __int64 v67; // [rsp+70h] [rbp-208h]
  const wchar_t *v68; // [rsp+78h] [rbp-200h]
  void *v69; // [rsp+80h] [rbp-1F8h]
  const wchar_t *v70; // [rsp+88h] [rbp-1F0h]
  int v71; // [rsp+90h] [rbp-1E8h]
  _QWORD *v72; // [rsp+98h] [rbp-1E0h]
  int v73; // [rsp+A0h] [rbp-1D8h]
  int v74; // [rsp+A4h] [rbp-1D4h]
  int v75; // [rsp+A8h] [rbp-1D0h]
  unsigned int v76; // [rsp+ACh] [rbp-1CCh]
  int v77; // [rsp+B0h] [rbp-1C8h]
  int v78; // [rsp+B4h] [rbp-1C4h]
  int v79; // [rsp+B8h] [rbp-1C0h]
  unsigned int v80; // [rsp+BCh] [rbp-1BCh]
  int v81; // [rsp+C0h] [rbp-1B8h]
  int v82; // [rsp+C4h] [rbp-1B4h]
  int v83; // [rsp+C8h] [rbp-1B0h]
  int v84; // [rsp+CCh] [rbp-1ACh]
  int v85; // [rsp+D0h] [rbp-1A8h]
  int v86; // [rsp+D4h] [rbp-1A4h]
  int v87; // [rsp+D8h] [rbp-1A0h]
  void *Source; // [rsp+E0h] [rbp-198h]
  int v89; // [rsp+E8h] [rbp-190h]
  const wchar_t *v90; // [rsp+F0h] [rbp-188h]
  int v91; // [rsp+F8h] [rbp-180h]
  const wchar_t *v92; // [rsp+100h] [rbp-178h]
  unsigned int v93; // [rsp+108h] [rbp-170h]
  int v94; // [rsp+10Ch] [rbp-16Ch]
  __int64 v95; // [rsp+110h] [rbp-168h]
  wchar_t *v96; // [rsp+118h] [rbp-160h]
  __int64 v97; // [rsp+120h] [rbp-158h]
  char *v98; // [rsp+128h] [rbp-150h]
  __int64 (__fastcall ***v99)(_QWORD, _QWORD, __int64); // [rsp+130h] [rbp-148h]
  unsigned int *v100; // [rsp+138h] [rbp-140h]
  BSTR v101; // [rsp+140h] [rbp-138h]
  const wchar_t *v102; // [rsp+148h] [rbp-130h]
  HINSTANCE v103; // [rsp+150h] [rbp-128h]
  wchar_t *v104; // [rsp+158h] [rbp-120h]
  unsigned int *v105; // [rsp+160h] [rbp-118h]
  char *v106; // [rsp+168h] [rbp-110h]
  __int64 (__fastcall ***v107)(_QWORD, _QWORD, __int64); // [rsp+170h] [rbp-108h]
  unsigned int *v108; // [rsp+178h] [rbp-100h]
  unsigned int *v109; // [rsp+180h] [rbp-F8h]
  HANDLE *v110; // [rsp+188h] [rbp-F0h]
  const wchar_t *v111; // [rsp+190h] [rbp-E8h]
  HANDLE *v112; // [rsp+198h] [rbp-E0h]
  unsigned __int64 v113; // [rsp+1A0h] [rbp-D8h]
  ATL::CAtlException *v114; // [rsp+1A8h] [rbp-D0h] BYREF
  __int64 v115; // [rsp+1B0h] [rbp-C8h]
  OLECHAR sz[64]; // [rsp+1C0h] [rbp-B8h] BYREF

  v95 = -2LL;
  v2 = 0;
  try
  {
    v3 = *(_QWORD *)&this->Data1 - 24LL;
    v97 = v3;
    v107 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3;
    v4 = v107;
    v5 = (struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden))(*v107)[4];
    if ( v5 != ATL::CAtlStringMgr::Clone )
      v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))v5((ATL::CAtlStringMgr *)v107);
    v99 = v4;
    if ( *(int *)(v3 + 16) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      v65 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
      v6 = v3;
    }
    else
    {
      v31 = (**v4)(v4, *(unsigned int *)(v3 + 8), 2LL);
      v6 = v31;
      v65 = v31;
      if ( !v31 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v33, v32, v34, v35);
      *(_DWORD *)(v31 + 8) = *(_DWORD *)(v3 + 8);
      v115 = *(_DWORD *)(v3 + 8) + 1;
      memcpy_s((void *const)(v31 + 24), 2 * v115, (const void *const)(v3 + 24), 2 * v115);
    }
    v62 = v6 + 24;
    if ( !*(_DWORD *)this[2].Data4 )
      CAudioIdentifier::EscapeIdentifierString(&v62);
    StringFromGUID2(this + 1, sz, 64);
    v7 = SysAllocString(sz);
    v9 = (unsigned __int64)v7;
    Source = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v101 = v7;
    v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v10 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(dword_1800E64A8);
      v11 = (unsigned int *)&qword_1800E6498;
      v9 = (unsigned __int64)Source;
    }
    else
    {
      v11 = (unsigned int *)v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    }
    v109 = v11;
    v12 = v11 + 6;
    v56 = v11 + 6;
    v55 = 0;
    if ( (v9 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(v9 + 2 * v13) );
      v89 = v13;
      if ( (_DWORD)v13 )
      {
        v14 = v11[2];
        v76 = v11[2];
        v15 = (__int64)(v9 - (_QWORD)v12) >> 1;
        v113 = v15;
        v105 = v11;
        v71 = 1 - v11[4];
        v86 = v11[3] - v13;
        if ( (v71 | v86) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v56, (unsigned int)v13);
          v12 = v56;
        }
        v16 = 2LL * (int)v13;
        if ( v15 <= v14 )
          memmove_s(v12, v16, (char *)v12 + 2 * v15, v16);
        else
          memcpy_s(v12, v16, (const void *const)v9, v16);
        if ( (int)v13 < 0 || (int)v13 > (int)*(v12 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *(v12 - 4) = v13;
        *((_WORD *)v12 + (int)v13) = 0;
        v2 = 0;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::Empty(&v56);
        v12 = v56;
      }
    }
    else
    {
      v83 = (unsigned __int16)v9;
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v9, v8);
      v103 = StringResourceInstance;
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v56,
          StringResourceInstance,
          (unsigned __int16)v9);
        v12 = v56;
      }
      v55 = 1;
    }
    SysFreeString((BSTR)v9);
    v77 = 1;
    v74 = 2;
    v17 = 0;
    v60 = 0;
    v18 = (const wchar_t *)v12;
    v63 = (const wchar_t *)v12;
    v78 = *(v12 - 4);
    v19 = (const wchar_t *)v12 + v78;
    v111 = v19;
    while ( v18 < v19 )
    {
      while ( 1 )
      {
        v20 = wcsstr(v18, L"%");
        v96 = v20;
        if ( !v20 )
          break;
        v60 = ++v17;
        v18 = v20 + 1;
        v63 = v20 + 1;
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
      v63 = v18;
    }
    if ( v17 > 0 )
    {
      LODWORD(lpMem) = *(v12 - 4);
      v58 = (int)lpMem;
      v37 = v17;
      v38 = (int)lpMem;
      v39 = (_DWORD)lpMem + v37;
      v80 = v39;
      v40 = (unsigned int)lpMem;
      if ( (int)v39 > (int)lpMem )
        v40 = v39;
      v82 = v40;
      v98 = (char *)(v12 - 6);
      v84 = 1 - *(v12 - 2);
      v73 = *(v12 - 3) - v40;
      if ( (v84 | v73) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v56, v40);
        v12 = v56;
      }
      v100 = v12;
      v41 = (const wchar_t *)v12;
      v68 = (const wchar_t *)v12;
      v42 = (const wchar_t *)v12 + v38;
      v90 = v42;
      while ( v41 < v42 )
      {
        while ( 1 )
        {
          v43 = wcsstr(v41, L"%");
          Destination = v43;
          if ( !v43 )
            break;
          v94 = v38 - (((char *)v43 - (char *)v12) >> 1) - 1;
          v67 = v94;
          v41 = v43 + 2;
          v44 = memmove_s(v43 + 2, 2LL * v94, v43 + 1, 2LL * v94);
          if ( v44 )
          {
            if ( v44 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v44 == 22 || v44 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v44 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v45 = memcpy_s(Destination, 4uLL, L"%%", 4uLL);
          if ( v45 )
          {
            if ( v45 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v45 == 22 || v45 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v45 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v68 = v41;
          *((_WORD *)Destination + v67 + 2) = 0;
          LODWORD(v38) = v38 + 1;
          v58 = v38;
        }
        v41 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v41) + 1);
        v68 = v41;
        v42 = v90;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&v56, v39);
    }
    v75 = 1;
    v85 = 2;
    v22 = 0;
    v61 = 0;
    v23 = (const wchar_t *)v12;
    v70 = (const wchar_t *)v12;
    LODWORD(v67) = *(v12 - 4);
    v24 = (const wchar_t *)v12 + (int)v67;
    v102 = v24;
    while ( v23 < v24 )
    {
      while ( 1 )
      {
        v25 = wcsstr(v23, L"|");
        v104 = v25;
        if ( !v25 )
          break;
        v61 = ++v22;
        v23 = v25 + 1;
        v70 = v25 + 1;
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
      v70 = v23;
    }
    if ( v22 > 0 )
    {
      LODWORD(lpMem) = *(v12 - 4);
      v59 = (int)lpMem;
      v46 = v22;
      v47 = (int)lpMem;
      v48 = (_DWORD)lpMem + v46;
      v93 = v48;
      v49 = (unsigned int)lpMem;
      if ( (int)v48 > (int)lpMem )
        v49 = v48;
      v79 = v49;
      v106 = (char *)(v12 - 6);
      v87 = 1 - *(v12 - 2);
      v81 = *(v12 - 3) - v49;
      if ( (v87 | v81) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v56, v49);
        v12 = v56;
      }
      v108 = v12;
      v50 = (const wchar_t *)v12;
      v64 = (const wchar_t *)v12;
      v51 = (const wchar_t *)v12 + v47;
      v92 = v51;
      while ( v50 < v51 )
      {
        while ( 1 )
        {
          v52 = wcsstr(v50, L"|");
          v69 = v52;
          if ( !v52 )
            break;
          v91 = v47 - (((char *)v52 - (char *)v12) >> 1) - 1;
          lpMem = (LPVOID)v91;
          v50 = v52 + 2;
          v53 = memmove_s(v52 + 2, 2LL * v91, v52 + 1, 2LL * v91);
          if ( v53 )
          {
            if ( v53 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v53 == 22 || v53 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v53 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v54 = memcpy_s(v69, 4uLL, L"%b", 4uLL);
          if ( v54 )
          {
            if ( v54 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v54 == 22 || v54 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v54 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          v64 = v50;
          *((_WORD *)v69 + (_QWORD)lpMem + 2) = 0;
          LODWORD(v47) = v47 + 1;
          v59 = v47;
        }
        v50 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v50) + 1);
        v64 = v50;
        v51 = v92;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&v56, v48);
    }
    v27 = this + 2;
    if ( *(_DWORD *)this[2].Data4 )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v27,
        L"#|%s",
        v12);
    else
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v27,
        L"%s|%s",
        v62,
        v12,
        v55);
    lpMem = v12 - 6;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    {
      v28 = *(HANDLE **)lpMem;
      v110 = v28;
      v29 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v28 + 1);
      if ( v29 == ATL::CAtlStringMgr::Free
        && (v28 = (HANDLE *)v28[1],
            v112 = v28,
            v29 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v28 + 1),
            (char *)v29 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v28[1], 0, lpMem);
      }
      else
      {
        ((void (__fastcall *)(HANDLE *, LPVOID))v29)(v28, lpMem);
      }
    }
    v72 = (_QWORD *)(v62 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v62 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v72 + 8LL))(*v72, v72);
  }
  catch ( ATL::CAtlException *v114 )
  {
    LODWORD(lpMem) = *(_DWORD *)v114;
    v2 = (int)lpMem;
  }
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
      (unsigned int)v2);
  }
  return (unsigned int)v2;
}
