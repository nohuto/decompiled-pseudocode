/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18000CF40
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18000CE44 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180083390 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18000C610 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017890 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800179D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180032228 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180037F4C (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180073F04 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180074EA4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const void **this)
{
  const void **v1; // r12
  int v2; // r13d
  volatile signed __int32 *v3; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rsi
  struct ATL::IAtlStringMgr *v5; // rsi
  volatile signed __int32 *v6; // rbx
  char *v7; // rdi
  ATL::CAtlException *v8; // rbx
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rsi
  unsigned int *NilString; // rax
  unsigned __int16 v11; // dx
  ATL::CAtlException *v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r12
  rsize_t v16; // r9
  const wchar_t *v17; // rbx
  const wchar_t *v18; // rsi
  wchar_t *i; // rax
  __int64 v20; // rax
  int v21; // eax
  const wchar_t *v22; // rbx
  const wchar_t *v23; // rsi
  wchar_t *j; // rax
  __int64 v25; // rax
  int v26; // eax
  wchar_t *const *v27; // rcx
  void (*v28)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rdi
  char *v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  rsize_t v36; // rdx
  HINSTANCE StringResourceInstance; // rax
  __int64 v38; // rsi
  unsigned int v39; // r8d
  __int64 v40; // rdx
  const wchar_t *v41; // rbx
  const wchar_t *v42; // rax
  wchar_t *v43; // rax
  wchar_t *v44; // r12
  errno_t v45; // eax
  errno_t v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rdx
  const wchar_t *v49; // rbx
  const wchar_t *v50; // rax
  wchar_t *v51; // rax
  wchar_t *v52; // r12
  errno_t v53; // eax
  errno_t v54; // eax
  int v55; // [rsp+20h] [rbp-108h]
  int v56; // [rsp+20h] [rbp-108h]
  unsigned int v57; // [rsp+20h] [rbp-108h]
  unsigned int v58; // [rsp+20h] [rbp-108h]
  unsigned int *v59; // [rsp+28h] [rbp-100h] BYREF
  const wchar_t *v60; // [rsp+30h] [rbp-F8h]
  const void **v61; // [rsp+38h] [rbp-F0h]
  char *v62; // [rsp+40h] [rbp-E8h] BYREF
  const wchar_t *v63; // [rsp+48h] [rbp-E0h]
  __int64 v64; // [rsp+50h] [rbp-D8h]
  ATL::CAtlException *v65[3]; // [rsp+58h] [rbp-D0h] BYREF
  OLECHAR sz[64]; // [rsp+70h] [rbp-B8h] BYREF

  v64 = -2LL;
  v1 = this;
  v61 = this;
  v2 = 0;
  try
  {
    v3 = (volatile signed __int32 *)*this;
    v4 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)*this - 3) + 32LL);
    if ( v4 == ATL::CAtlStringMgr::Clone )
      v5 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)*this - 3));
    else
      v5 = v4(*((ATL::CAtlStringMgr **)*this - 3));
    if ( *((int *)v3 - 2) >= 0 && v5 == *((struct ATL::IAtlStringMgr **)v3 - 3) )
    {
      v6 = v3 - 6;
      _InterlockedIncrement(v3 - 2);
    }
    else
    {
      v31 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v5)(
              v5,
              *((unsigned int *)v3 - 4),
              2LL);
      v6 = (volatile signed __int32 *)v31;
      if ( !v31 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v33, v32, v34, v35);
      *(_DWORD *)(v31 + 8) = *((_DWORD *)v3 - 4);
      v36 = 2LL * (*((_DWORD *)v3 - 4) + 1);
      memcpy_s((void *const)(v31 + 24), v36, (const void *const)v3, v36);
    }
    v7 = (char *)(v6 + 6);
    v62 = (char *)(v6 + 6);
    if ( !*((_DWORD *)v1 + 10) )
    {
      CAudioIdentifier::EscapeIdentifierString(&v62);
      v7 = v62;
    }
    StringFromGUID2((const GUID *const)v1 + 1, sz, 64);
    v8 = (ATL::CAtlException *)SysAllocString(sz);
    v65[1] = v8;
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v9 == ATL::CAtlStringMgr::GetNilString )
      NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = (unsigned int *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v12 = (ATL::CAtlException *)(NilString + 6);
    v59 = NilString + 6;
    if ( ((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)v8 + v13) );
      if ( (_DWORD)v13 )
      {
        v14 = NilString[2];
        v15 = (v8 - v12) >> 1;
        if ( (int)((1 - NilString[4]) | (NilString[3] - v13)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v59, (unsigned int)v13);
          v12 = (ATL::CAtlException *)v59;
        }
        v16 = 2LL * (int)v13;
        if ( v15 <= v14 )
          memmove_s(v12, v16, (char *)v12 + 2 * v15, v16);
        else
          memcpy_s(v12, v16, v8, v16);
        if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v12 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v12 - 4) = v13;
        *((_WORD *)v12 + (int)v13) = 0;
        v1 = v61;
        v2 = 0;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::Empty(&v59);
        v12 = (ATL::CAtlException *)v59;
      }
    }
    else
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v8, v11);
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v59,
          StringResourceInstance,
          (unsigned __int16)v8);
        v12 = (ATL::CAtlException *)v59;
      }
    }
    SysFreeString((BSTR)v8);
    v55 = 0;
    v17 = (const wchar_t *)v12;
    v18 = (const wchar_t *)((char *)v12 + 2 * *((int *)v12 - 4));
    if ( v12 < (ATL::CAtlException *)v18 )
    {
      do
      {
        for ( i = wcsstr(v17, L"%"); i; i = wcsstr(i + 1, L"%") )
        {
          ++v55;
          v17 = i + 1;
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
      v21 = v55;
      if ( v55 > 0 )
      {
        v38 = *((int *)v12 - 4);
        v39 = v38 + v55;
        v57 = v38 + v55;
        v40 = (unsigned int)v38;
        if ( (int)v38 + v21 > (int)v38 )
          v40 = v39;
        if ( ((1 - *((_DWORD *)v12 - 2)) | (*((_DWORD *)v12 - 3) - (int)v40)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v59, v40);
          v12 = (ATL::CAtlException *)v59;
        }
        v41 = (const wchar_t *)v12;
        v42 = (const wchar_t *)((char *)v12 + 2 * v38);
        v63 = v42;
        while ( v41 < v42 )
        {
          while ( 1 )
          {
            v43 = wcsstr(v41, L"%");
            v44 = v43;
            if ( !v43 )
              break;
            v60 = (const wchar_t *)(int)(v38 - (((char *)v43 - (char *)v12) >> 1) - 1);
            v41 = v43 + 2;
            v45 = memmove_s(v43 + 2, 2LL * (_QWORD)v60, v43 + 1, 2LL * (_QWORD)v60);
            if ( v45 )
            {
              if ( v45 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v45 == 22 || v45 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v45 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v46 = memcpy_s(v44, 4uLL, L"%%", 4uLL);
            if ( v46 )
            {
              if ( v46 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v46 == 22 || v46 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v46 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v44[(_QWORD)(v60 + 1)] = 0;
            LODWORD(v38) = v38 + 1;
          }
          v41 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v41) + 1);
          v42 = v63;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v59, v57);
        v1 = v61;
      }
    }
    v56 = 0;
    v22 = (const wchar_t *)v12;
    v23 = (const wchar_t *)((char *)v12 + 2 * *((int *)v12 - 4));
    if ( v12 < (ATL::CAtlException *)v23 )
    {
      do
      {
        for ( j = wcsstr(v22, L"|"); j; j = wcsstr(j + 1, L"|") )
        {
          ++v56;
          v22 = j + 1;
        }
        if ( v22 )
        {
          v25 = -1LL;
          do
            ++v25;
          while ( v22[v25] );
        }
        else
        {
          LODWORD(v25) = 0;
        }
        v22 += (int)v25 + 1;
      }
      while ( v22 < v23 );
      v26 = v56;
      if ( v56 > 0 )
      {
        v47 = *((int *)v12 - 4);
        v58 = v47 + v56;
        v48 = (unsigned int)v47;
        if ( (int)v47 + v26 > (int)v47 )
          v48 = (unsigned int)(v47 + v26);
        if ( ((1 - *((_DWORD *)v12 - 2)) | (*((_DWORD *)v12 - 3) - (int)v48)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v59, v48);
          v12 = (ATL::CAtlException *)v59;
        }
        v49 = (const wchar_t *)v12;
        v50 = (const wchar_t *)((char *)v12 + 2 * v47);
        v60 = v50;
        while ( v49 < v50 )
        {
          while ( 1 )
          {
            v51 = wcsstr(v49, L"|");
            v52 = v51;
            if ( !v51 )
              break;
            v63 = (const wchar_t *)(int)(v47 - (((char *)v51 - (char *)v12) >> 1) - 1);
            v49 = v51 + 2;
            v53 = memmove_s(v51 + 2, 2LL * (_QWORD)v63, v51 + 1, 2LL * (_QWORD)v63);
            if ( v53 )
            {
              if ( v53 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v53 == 22 || v53 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v53 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v54 = memcpy_s(v52, 4uLL, L"%b", 4uLL);
            if ( v54 )
            {
              if ( v54 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v54 == 22 || v54 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v54 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            v52[(_QWORD)(v63 + 1)] = 0;
            LODWORD(v47) = v47 + 1;
          }
          v49 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v49) + 1);
          v50 = v60;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v59, v58);
        v1 = v61;
      }
    }
    v27 = (wchar_t *const *)(v1 + 4);
    if ( *((_DWORD *)v1 + 10) )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v27,
        L"#|%s",
        v12);
    else
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v27,
        L"%s|%s",
        v7,
        v12);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    {
      v28 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**((_QWORD **)v12 - 3) + 8LL);
      if ( v28 == ATL::CAtlStringMgr::Free )
        ATL::CAtlStringMgr::Free(*((ATL::CAtlStringMgr **)v12 - 3), (ATL::CAtlException *)((char *)v12 - 24));
      else
        ((void (__fastcall *)(_QWORD, char *))v28)(*((_QWORD *)v12 - 3), (char *)v12 - 24);
    }
    v29 = v62;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v62 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v29 - 3) + 8LL))(*((_QWORD *)v29 - 3), v29 - 24);
  }
  catch ( ATL::CAtlException *v65 )
  {
    v2 = *(_DWORD *)v65[0];
  }
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      15LL,
      &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
      (unsigned int)v2);
  }
  return (unsigned int)v2;
}
