/*
 * XREFs of LdrpSearchResourceSection_U @ 0x18001778C
 * Callers:
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x1800659D0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x180066530 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x1800702A0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180074E20 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800CB290 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     ResourceEntryBinarySearch @ 0x180018284 (ResourceEntryBinarySearch.c)
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrIsResItemExist @ 0x18001A80C (LdrIsResItemExist.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001DB80 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpGetParentLangId @ 0x180047C8C (LdrpGetParentLangId.c)
 *     RtlULongAdd @ 0x18004F08C (RtlULongAdd.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x180093A50 (NtQueryDefaultLocale.c)
 *     RtlULongMult @ 0x1800CABE8 (RtlULongMult.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // edi
  __int64 *v7; // rsi
  unsigned __int64 v8; // r8
  __int64 *v9; // r14
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned int v12; // r13d
  char v13; // r15
  __int16 v14; // r14
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 CurrentLocale_low; // rcx
  unsigned int ResourceFromAlternativeModule; // r15d
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 Heap; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  struct _TEB *v43; // rax
  _DWORD *RcConfig; // rax
  unsigned __int16 v45; // r14
  __int64 v46; // r10
  __int64 v47; // r11
  unsigned int *v48; // rdx
  unsigned __int64 v49; // r8
  int v50; // eax
  int v51; // eax
  _WORD v52[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v53; // [rsp+44h] [rbp-114h]
  int v54; // [rsp+48h] [rbp-110h]
  __int16 v55; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v56; // [rsp+50h] [rbp-108h]
  __int64 v57; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-F8h]
  unsigned int v59; // [rsp+64h] [rbp-F4h]
  unsigned int v60; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v61; // [rsp+70h] [rbp-E8h]
  char v62[4]; // [rsp+78h] [rbp-E0h] BYREF
  int v63; // [rsp+7Ch] [rbp-DCh] BYREF
  __int64 v64; // [rsp+80h] [rbp-D8h]
  unsigned __int64 *v65; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+90h] [rbp-C8h] BYREF
  __int64 *v67; // [rsp+98h] [rbp-C0h]
  __int64 v68; // [rsp+A0h] [rbp-B8h] BYREF
  int v69; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v70; // [rsp+ACh] [rbp-ACh] BYREF
  int v71; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned int v72; // [rsp+B4h] [rbp-A4h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-98h]
  int v75; // [rsp+C8h] [rbp-90h] BYREF
  __int64 *v76; // [rsp+D0h] [rbp-88h]
  struct _TEB *v77; // [rsp+D8h] [rbp-80h]
  unsigned int *v78; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+100h] [rbp-58h]
  __int64 v82; // [rsp+108h] [rbp-50h]
  __int64 v83; // [rsp+110h] [rbp-48h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v61 = a1;
  v56 = a4;
  v65 = a5;
  v9 = (__int64 *)a2;
  v67 = (__int64 *)a2;
  v10 = 0LL;
  v53 = 0;
  v73 = 0LL;
  v60 = 0;
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
  v12 = a3;
  if ( a3 == 4 )
    v12 = 3;
  v59 = v12;
  v13 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v12 - 1 <= 2 )
  {
    if ( v12 == 3 )
      v14 = *(_WORD *)(a2 + 16);
    else
      v14 = 0;
    v55 = v14;
    v15 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v16 = wcsicmp((const wchar_t *)v15, L"MUI"), v8 = v61, v16))
      || (v13 & 8) == 0
      || (v14 & 0xF3FF) != 0
      || v14 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v56 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v54 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v80 = *v7;
          if ( v12 < 2 )
            v17 = 0LL;
          else
            v17 = v7[1];
          v81 = v17;
          if ( v12 == 3 )
            v10 = v7[2];
          v82 = v10;
          if ( a3 == 4 )
            v83 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(v61, (unsigned int)&v80, a3, v5, (__int64)v65);
          v54 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v56 = v5;
    }
    v9 = v67;
  }
  v74 = RtlImageDirectoryEntryToData(v61, 1, 2u, &v75);
  if ( !v74 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(v61, &v73, 256LL, v18);
  v54 = result;
  if ( (int)result >= 0 )
  {
    v20 = v74;
    v68 = v74;
    v57 = 61166LL;
    v58 = 0;
    CurrentLocale_low = 0LL;
    v66 = 0LL;
    v64 = 0LL;
    v52[0] = 0;
    v55 = 0;
    v63 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      v23 = 3221225610LL;
      if ( !v20 )
        goto LABEL_49;
      v24 = v59;
      v23 = --v59;
      if ( !v24 )
        goto LABEL_48;
      if ( !(_DWORD)v23 )
      {
        v25 = v64;
        if ( v12 == 3 )
          v25 = v20;
        v64 = v25;
      }
      if ( v64 )
      {
        v55 = *((_WORD *)v9 + 8);
        v53 = (v55 & 0x3FF) == 0;
        goto LABEL_68;
      }
LABEL_147:
      v45 = *(_WORD *)(v20 + 14);
      result = RtlULongAdd(*(unsigned __int16 *)(v20 + 12), v45, &v70);
      v54 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v70, 8LL, &v72);
      v54 = result;
      if ( (int)result < 0 )
        return result;
      v48 = (unsigned int *)(v46 + 16);
      v78 = (unsigned int *)(v46 + 16);
      v49 = v73 + (v61 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v46 + 16 + (unsigned __int64)v72 > v49 )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v48 += 2 * v47;
        v78 = v48;
        LOWORD(v47) = v45;
      }
      if ( !(_WORD)v47 )
      {
        switch ( v12 - v59 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v54 = -1073741685;
            goto LABEL_161;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v54 = -1073741308;
            return ResourceFromAlternativeModule;
        }
        v54 = ResourceFromAlternativeModule;
        if ( ResourceFromAlternativeModule + 1073741686 <= 1 )
        {
LABEL_161:
          v50 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v50 & 0x20000) != 0 && (v50 & 0x10) != 0 && v12 == 3 )
          {
            v80 = *v67;
            v81 = v67[1];
            v82 = v67[2];
            if ( a3 == 4 )
              v83 = v67[3];
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              v61,
                                              (unsigned int)&v80,
                                              a3,
                                              v5,
                                              (__int64)v65);
            v54 = ResourceFromAlternativeModule;
          }
        }
        return ResourceFromAlternativeModule;
      }
      if ( v64 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               v61,
                               v73,
                               (unsigned __int16)v47,
                               v74,
                               (__int64)v48,
                               *v7,
                               (__int64)&v68,
                               (__int64)&v66) )
        return 3221225595LL;
      v76 = ++v7;
      v20 = v68;
      CurrentLocale_low = v66;
      v9 = v67;
    }
    v20 = 0LL;
    v68 = 0LL;
    v57 = *v48;
    CurrentLocale_low = v74 + v48[1];
    if ( CurrentLocale_low > v49 )
      return 3221225595LL;
    v66 = v74 + v48[1];
    v9 = v67;
LABEL_48:
    v23 = 3221225610LL;
LABEL_49:
    if ( CurrentLocale_low && (v5 & 2) == 0 )
    {
      *v65 = CurrentLocale_low;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v77 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 24LL);
        v77->ResourceRetValue = (void *)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v27 = v61;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v61;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v66;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v27;
      }
LABEL_55:
      LODWORD(CurrentLocale_low) = 0;
      v54 = 0;
      return (unsigned int)CurrentLocale_low;
    }
    if ( v20 && (v5 & 2) != 0 )
    {
      *v65 = v20;
      goto LABEL_55;
    }
    if ( v12 - v59 == 1 )
    {
      LODWORD(CurrentLocale_low) = -1073741686;
      v54 = -1073741686;
      goto LABEL_177;
    }
    if ( v12 - v59 == 2 )
    {
      LODWORD(CurrentLocale_low) = -1073741685;
      v54 = -1073741685;
      goto LABEL_178;
    }
    if ( v12 - v59 != 3 )
    {
      LODWORD(CurrentLocale_low) = -1073741811;
      v54 = -1073741811;
LABEL_177:
      if ( (unsigned int)(CurrentLocale_low + 1073741686) > 1 )
        return (unsigned int)CurrentLocale_low;
LABEL_178:
      v51 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v51 & 0x20000) != 0 && (v51 & 0x10) != 0 && v12 == 3 )
      {
        v80 = *v9;
        v81 = v9[1];
        v82 = v9[2];
        if ( a3 == 4 )
          v83 = v9[3];
        LODWORD(CurrentLocale_low) = LdrpLoadResourceFromAlternativeModule(
                                       v61,
                                       (unsigned int)&v80,
                                       a3,
                                       v5,
                                       (__int64)v65);
        v54 = CurrentLocale_low;
      }
      return (unsigned int)CurrentLocale_low;
    }
    CurrentLocale_low = 3221225988LL;
    v54 = -1073741308;
    if ( !v64 )
      goto LABEL_177;
    v66 = 0LL;
LABEL_68:
    v28 = v61;
    while ( 1 )
    {
      v29 = v58++;
      if ( v29 > 6 )
      {
        v38 = v29 - 7;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( !v39 )
          {
            v52[0] = v57;
            if ( (~v5 & 0x80000) == 0 )
            {
              if ( NtCurrentTeb() )
              {
                v43 = NtCurrentTeb();
                CurrentLocale_low = LOWORD(v43->CurrentLocale);
                v52[0] = v43->CurrentLocale;
              }
              v5 = v56;
              goto LABEL_144;
            }
            goto LABEL_132;
          }
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( v42 )
              {
                if ( v42 != 1 )
                  return 3221225988LL;
LABEL_132:
                v5 |= 0x20u;
                v56 = v5;
                goto LABEL_144;
              }
              v34 = 1033;
            }
            else
            {
              v52[0] = v57;
              v54 = NtQueryDefaultLocale(0LL, &v71, 1023LL);
              if ( v54 < 0 )
                goto LABEL_144;
              v34 = v71;
              if ( v71 == v63 )
                goto LABEL_144;
            }
          }
          else
          {
            v52[0] = v57;
            LOBYTE(CurrentLocale_low) = 1;
            v54 = NtQueryDefaultLocale(CurrentLocale_low, &v63, 1023LL);
            if ( v54 < 0 )
              goto LABEL_144;
            v34 = v63;
          }
        }
        else
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_142;
          LOBYTE(v19) = 1;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v28, v23, 0LL, v19);
          if ( !RcConfig )
            goto LABEL_142;
          if ( *RcConfig != -20054323 )
            goto LABEL_142;
          if ( !RcConfig[31] )
            goto LABEL_142;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v69) )
            goto LABEL_142;
          v34 = v69;
        }
      }
      else
      {
        if ( v29 == 6 )
        {
          v52[0] = v57;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_144;
          v52[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v23, 1023LL) )
          {
            CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v60 >= (unsigned int)CurrentLocale_low )
              v52[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                CurrentLocale_low,
                NtCurrentTeb()->MergedPrefLanguages,
                v60,
                (unsigned int)v52,
                (__int64)v62);
            v5 = v56;
          }
          else
          {
            v52[0] = 0;
          }
          if ( v52[0] )
          {
            ++v60;
LABEL_117:
            --v58;
            goto LABEL_144;
          }
          goto LABEL_142;
        }
        if ( !v29 )
        {
          if ( v55 )
          {
            CurrentLocale_low = (unsigned __int16)v57;
            if ( (v5 & 0x80000) != 0 )
              LOWORD(CurrentLocale_low) = v55;
            v52[0] = CurrentLocale_low;
            goto LABEL_144;
          }
LABEL_87:
          v52[0] = 0;
          goto LABEL_144;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v35 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v35 & 0x20000) != 0 && (v35 & 0x10) != 0 )
          {
            v80 = *v9;
            if ( v12 < 2 )
              v36 = 0LL;
            else
              v36 = v9[1];
            v81 = v36;
            if ( v12 == 3 )
              v37 = v9[2];
            else
              v37 = 0LL;
            v82 = v37;
            if ( a3 == 4 )
              v83 = v9[3];
            result = LdrpLoadResourceFromAlternativeModule(v28, (unsigned int)&v80, a3, v5, (__int64)v65);
            v54 = result;
            if ( (int)result >= 0 )
              return result;
          }
LABEL_142:
          v34 = v57;
          goto LABEL_143;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v34 = v55;
          if ( v53 )
            v34 = v57;
          goto LABEL_143;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          if ( (v5 & 4) != 0 )
            return 3221225988LL;
          if ( !v53 )
          {
            if ( (int)LdrpGetParentLangId(v52[0], v52, 1023LL) < 0 )
              goto LABEL_87;
            if ( !v52[0] )
              goto LABEL_144;
            goto LABEL_117;
          }
          goto LABEL_142;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 != 1 )
            return 3221225988LL;
          if ( !v53 )
            return 3221225988LL;
          goto LABEL_142;
        }
        if ( v53 )
          goto LABEL_142;
        v34 = v55 & 0x3FF;
      }
LABEL_143:
      v52[0] = v34;
LABEL_144:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v52[0] != v57 )
      {
        v57 = v52[0];
        v7 = &v57;
        v76 = &v57;
        v20 = v64;
        v68 = v64;
        goto LABEL_147;
      }
    }
  }
  return result;
}
