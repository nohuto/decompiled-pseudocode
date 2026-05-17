/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1800303A8
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x18002C7A0 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x18002D6C0 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x18002DC10 (RtlLoadString.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrFindResourceEx_U @ 0x180085730 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800DBF00 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlULongAdd @ 0x1800065F8 (RtlULongAdd.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104D8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x1800134BC (LdrpSetThreadPreferredLangList.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     ResourceEntryBinarySearch @ 0x180030F34 (ResourceEntryBinarySearch.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318FC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 *     LdrIsResItemExist @ 0x18003F148 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082740 (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x1800885D8 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A66C0 (NtQueryDefaultLocale.c)
 *     RtlULongMult @ 0x1800DB918 (RtlULongMult.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int **a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r13d
  char v12; // r15
  unsigned __int16 v13; // r14
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // r9
  unsigned int *v21; // rcx
  int ResourceFromAlternativeModule; // r15d
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 Heap; // rax
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // rdi
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned __int16 v36; // ax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  int v41; // edi
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  _DWORD *RcConfig; // rax
  __int64 v49; // r10
  __int16 v50; // r11
  unsigned int *v51; // rdx
  __int64 v52; // r14
  unsigned __int64 v53; // r8
  int v54; // eax
  int v55; // eax
  int v56; // r9d
  __int64 v57; // rsi
  unsigned __int16 v58[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v59; // [rsp+44h] [rbp-124h]
  int v60; // [rsp+48h] [rbp-120h]
  unsigned __int16 v61; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v62; // [rsp+50h] [rbp-118h]
  __int64 v63; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-108h]
  unsigned int v65; // [rsp+64h] [rbp-104h]
  __int64 v66; // [rsp+68h] [rbp-100h]
  unsigned int v67; // [rsp+70h] [rbp-F8h]
  bool v68; // [rsp+74h] [rbp-F4h] BYREF
  int v69; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v70; // [rsp+80h] [rbp-E8h]
  unsigned int **v71; // [rsp+88h] [rbp-E0h]
  unsigned int *v72; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+98h] [rbp-D0h]
  __int64 v74; // [rsp+A0h] [rbp-C8h] BYREF
  int v75; // [rsp+A8h] [rbp-C0h] BYREF
  int v76; // [rsp+ACh] [rbp-BCh] BYREF
  unsigned int v77; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v78; // [rsp+B4h] [rbp-B4h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-A0h]
  char v82; // [rsp+D0h] [rbp-98h] BYREF
  struct _TEB *v83; // [rsp+D8h] [rbp-90h]
  unsigned int *v84; // [rsp+E0h] [rbp-88h]
  __int64 *v85; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v87; // [rsp+100h] [rbp-68h] BYREF
  __int64 v88; // [rsp+108h] [rbp-60h]
  __int64 v89; // [rsp+110h] [rbp-58h]
  __int64 v90; // [rsp+118h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v66 = a1;
  v62 = a4;
  v71 = a5;
  v73 = a2;
  v9 = 0LL;
  v59 = 0;
  v79 = 0LL;
  v67 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_10:
  v11 = a3;
  if ( a3 == 4 )
    v11 = 3;
  v65 = v11;
  v12 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v11 - 1 <= 2 )
  {
    if ( v11 == 3 )
      v13 = *(_WORD *)(a2 + 16);
    else
      v13 = 0;
    v61 = v13;
    v14 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v15 = wcsicmp((const wchar_t *)v14, L"MUI"), v8 = v66, v15))
      || (v12 & 8) == 0
      || (v13 & 0xF3FF) != 0
      || v13 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v62 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v60 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v87 = *v7;
          if ( v11 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v88 = v16;
          if ( v11 == 3 )
            v9 = v7[2];
          v89 = v9;
          if ( a3 == 4 )
            v90 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(v66, (__int64)&v87, a3, v5, v71);
          v60 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v62 = v5;
    }
  }
  LOBYTE(a2) = 1;
  v17 = RtlpImageDirectoryEntryToDataEx(v66, a2, 2, (unsigned int)&v82, (__int64)&v80);
  v19 = v80;
  if ( v17 < 0 )
    v19 = 0LL;
  v80 = v19;
  v81 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(v66, &v79, 256LL, v18);
  v60 = result;
  if ( (int)result >= 0 )
  {
    v74 = v19;
    v63 = 61166LL;
    v64 = 0;
    v21 = 0LL;
    v72 = 0LL;
    v70 = 0LL;
    v58[0] = 0;
    v61 = 0;
    v69 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      v23 = 3221225610LL;
      if ( !v19 )
        goto LABEL_50;
      v24 = v65;
      v23 = --v65;
      if ( !v24 )
        goto LABEL_49;
      if ( !(_DWORD)v23 )
      {
        v25 = v70;
        if ( v11 == 3 )
          v25 = v19;
        v70 = v25;
      }
      if ( v70 )
      {
        v26 = (__int64 *)v73;
        v61 = *(_WORD *)(v73 + 16);
        v59 = (v61 & 0x3FF) == 0;
        goto LABEL_70;
      }
LABEL_151:
      result = RtlULongAdd(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), &v77);
      v60 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v77, 8LL, &v78);
      v60 = result;
      if ( (int)result < 0 )
        return result;
      v51 = (unsigned int *)(v19 + 16);
      v84 = v51;
      v52 = v66;
      v53 = v79 + (v66 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v51 + v78 > v53 )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v51 += 2 * v49;
        v84 = v51;
        LOWORD(v49) = v50;
      }
      if ( !(_WORD)v49 )
      {
        switch ( v11 - v65 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v60 = -1073741685;
            goto LABEL_165;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v60 = -1073741308;
            return (unsigned int)ResourceFromAlternativeModule;
        }
        v60 = ResourceFromAlternativeModule;
        if ( (unsigned int)(ResourceFromAlternativeModule + 1073741686) <= 1 )
        {
LABEL_165:
          v54 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v11 == 3 )
          {
            v87 = *(_QWORD *)v73;
            v88 = *(_QWORD *)(v73 + 8);
            v89 = *(_QWORD *)(v73 + 16);
            if ( a3 == 4 )
              v90 = *(_QWORD *)(v73 + 24);
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(v66, (__int64)&v87, a3, v5, v71);
            v60 = ResourceFromAlternativeModule;
            if ( ResourceFromAlternativeModule >= 0 )
              LdrpResReportResourceAccessInternal(v52, 0LL, &v87, a3);
          }
        }
        return (unsigned int)ResourceFromAlternativeModule;
      }
      if ( v70 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               v66,
                               v79,
                               (unsigned __int16)v49,
                               v81,
                               (__int64)v51,
                               *v7,
                               (__int64)&v74,
                               (__int64)&v72) )
        return 3221225595LL;
      v85 = ++v7;
      v19 = v74;
      v21 = v72;
    }
    v19 = 0LL;
    v74 = 0LL;
    v63 = *v51;
    v21 = (unsigned int *)(v81 + v51[1]);
    if ( (unsigned __int64)v21 > v53 )
      return 3221225595LL;
    v72 = (unsigned int *)(v81 + v51[1]);
LABEL_49:
    v23 = 3221225610LL;
LABEL_50:
    if ( v21 && (v5 & 2) == 0 )
    {
      *v71 = v21;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v83 = NtCurrentTeb();
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v83->ResourceRetValue = (void *)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v28 = v66;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v66;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v72;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v28;
      }
LABEL_56:
      v29 = 0;
      v60 = 0;
      return v29;
    }
    if ( v19 && (v5 & 2) != 0 )
    {
      *v71 = (unsigned int *)v19;
      goto LABEL_56;
    }
    if ( v11 - v65 == 1 )
    {
      v29 = -1073741686;
      v60 = -1073741686;
      goto LABEL_182;
    }
    if ( v11 - v65 == 2 )
    {
      v29 = -1073741685;
      v60 = -1073741685;
      goto LABEL_183;
    }
    if ( v11 - v65 != 3 )
    {
      v29 = -1073741811;
      v60 = -1073741811;
LABEL_182:
      if ( v29 + 1073741686 > 1 )
        return v29;
LABEL_183:
      v55 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v55 & 0x20000) != 0 && (v55 & 0x10) != 0 && v11 == 3 )
      {
        v87 = *(_QWORD *)v73;
        v88 = *(_QWORD *)(v73 + 8);
        v89 = *(_QWORD *)(v73 + 16);
        if ( a3 == 4 )
          v90 = *(_QWORD *)(v73 + 24);
        v56 = v5;
        v57 = v66;
        v29 = LdrpLoadResourceFromAlternativeModule(v66, (__int64)&v87, a3, v56, v71);
        v60 = v29;
        if ( (v29 & 0x80000000) == 0 )
          LdrpResReportResourceAccessInternal(v57, 0LL, &v87, a3);
      }
      return v29;
    }
    v29 = -1073741308;
    v60 = -1073741308;
    if ( !v70 )
      goto LABEL_182;
    v72 = 0LL;
    v26 = (__int64 *)v73;
LABEL_70:
    v30 = v66;
    while ( 1 )
    {
      v31 = v64++;
      if ( v31 > 6 )
      {
        v43 = v31 - 7;
        if ( !v43 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_145;
          LOBYTE(v20) = 1;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v30, v23, 0LL, v20);
          if ( !RcConfig )
            goto LABEL_145;
          if ( *RcConfig != -20054323 )
            goto LABEL_145;
          if ( !RcConfig[31] )
            goto LABEL_145;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v76) )
            goto LABEL_145;
          v36 = v76;
          goto LABEL_146;
        }
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( !v47 )
              {
                v36 = 1033;
                goto LABEL_146;
              }
              if ( v47 != 1 )
                return 3221225988LL;
LABEL_135:
              v5 |= 0x20u;
              v62 = v5;
              goto LABEL_147;
            }
            v58[0] = v63;
            v60 = NtQueryDefaultLocale(0LL, &v75);
            if ( v60 >= 0 )
            {
              v36 = v75;
              if ( v75 != v69 )
                goto LABEL_146;
            }
          }
          else
          {
            v58[0] = v63;
            LOBYTE(v26) = 1;
            v60 = NtQueryDefaultLocale(v26, &v69);
            if ( v60 >= 0 )
            {
              v36 = v69;
              goto LABEL_146;
            }
          }
        }
        else
        {
          v58[0] = v63;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_135;
          if ( NtCurrentTeb() )
            v58[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v62;
        }
      }
      else if ( v31 == 6 )
      {
        v58[0] = v63;
        if ( (v5 & 0x20) == 0 )
        {
          v58[0] = 0;
          if ( LdrpSetThreadPreferredLangList() )
          {
            v42 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v67 >= (unsigned int)v42 )
              v58[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(v42, (__int64)NtCurrentTeb()->MergedPrefLanguages, v67, v58, &v68);
            v5 = v62;
          }
          else
          {
            v58[0] = 0;
          }
          if ( !v58[0] )
            goto LABEL_145;
          ++v67;
LABEL_120:
          --v64;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v61 )
          {
            v36 = v63;
            if ( (v5 & 0x80000) != 0 )
              v36 = v61;
            goto LABEL_146;
          }
LABEL_89:
          v58[0] = 0;
          goto LABEL_147;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          v37 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v37 & 0x20000) != 0 && (v37 & 0x10) != 0 )
          {
            v87 = *v26;
            if ( v11 < 2 )
              v38 = 0LL;
            else
              v38 = v26[1];
            v88 = v38;
            if ( v11 == 3 )
              v39 = v26[2];
            else
              v39 = 0LL;
            v89 = v39;
            if ( a3 == 4 )
              v90 = v26[3];
            v40 = v66;
            v41 = LdrpLoadResourceFromAlternativeModule(v66, (__int64)&v87, a3, v5, v71);
            v60 = v41;
            if ( v41 >= 0 )
            {
              LdrpResReportResourceAccessInternal(v40, 0LL, &v87, a3);
              return (unsigned int)v41;
            }
            v30 = v40;
          }
          goto LABEL_145;
        }
        v33 = v32 - 1;
        if ( !v33 )
        {
          v36 = v61;
          if ( v59 )
            v36 = v63;
          goto LABEL_146;
        }
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 != 1 )
              return 3221225988LL;
            if ( !v59 )
              return 3221225988LL;
LABEL_145:
            v36 = v63;
          }
          else
          {
            if ( v59 )
              goto LABEL_145;
            v36 = v61 & 0x3FF;
          }
LABEL_146:
          v58[0] = v36;
          goto LABEL_147;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v59 )
          goto LABEL_145;
        if ( (int)LdrpGetParentLangId(v58[0], v58) < 0 )
          goto LABEL_89;
        if ( v58[0] )
          goto LABEL_120;
      }
LABEL_147:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v58[0] != v63 )
      {
        v63 = v58[0];
        v7 = &v63;
        v85 = &v63;
        v19 = v70;
        v74 = v70;
        goto LABEL_151;
      }
      v26 = (__int64 *)v73;
    }
  }
  return result;
}
