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

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 *v7; // rsi
  PVOID v8; // r8
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
  char *v19; // r10
  unsigned __int64 CurrentLocale_low; // rcx
  unsigned int ResourceFromAlternativeModule; // r15d
  __int64 v22; // rdx
  unsigned int v23; // eax
  char *v24; // rax
  PVOID Heap; // rax
  PVOID v26; // rdx
  PVOID v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int16 v33; // ax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  struct _TEB *v42; // rax
  _DWORD *RcConfig; // rax
  unsigned __int16 v44; // r14
  __int64 v45; // r10
  __int64 v46; // r11
  unsigned int *v47; // rdx
  unsigned __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  _WORD v51[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v52; // [rsp+44h] [rbp-114h]
  NTSTATUS v53; // [rsp+48h] [rbp-110h]
  __int16 v54; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v55; // [rsp+50h] [rbp-108h]
  __int64 v56; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-F8h]
  unsigned int v58; // [rsp+64h] [rbp-F4h]
  unsigned int v59; // [rsp+68h] [rbp-F0h]
  PVOID BaseOfImage; // [rsp+70h] [rbp-E8h]
  char v61[4]; // [rsp+78h] [rbp-E0h] BYREF
  DWORD v62; // [rsp+7Ch] [rbp-DCh] BYREF
  char *v63; // [rsp+80h] [rbp-D8h]
  __int64 v64; // [rsp+88h] [rbp-D0h]
  char *v65; // [rsp+90h] [rbp-C8h] BYREF
  __int64 *v66; // [rsp+98h] [rbp-C0h]
  char *v67; // [rsp+A0h] [rbp-B8h] BYREF
  DWORD Lcid; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v69; // [rsp+ACh] [rbp-ACh] BYREF
  DWORD DefaultLocaleId; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned int v71; // [rsp+B4h] [rbp-A4h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-A0h] BYREF
  char *v73; // [rsp+C0h] [rbp-98h]
  ULONG Size; // [rsp+C8h] [rbp-90h] BYREF
  __int64 *v75; // [rsp+D0h] [rbp-88h]
  struct _TEB *v76; // [rsp+D8h] [rbp-80h]
  unsigned int *v77; // [rsp+E0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-60h]
  __int64 v80; // [rsp+100h] [rbp-58h]
  __int64 v81; // [rsp+108h] [rbp-50h]
  __int64 v82; // [rsp+110h] [rbp-48h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  BaseOfImage = a1;
  v55 = a4;
  v64 = a5;
  v9 = (__int64 *)a2;
  v66 = (__int64 *)a2;
  v10 = 0LL;
  v52 = 0;
  v72 = 0LL;
  v59 = 0;
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
  v58 = v12;
  v13 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v12 - 1 <= 2 )
  {
    if ( v12 == 3 )
      v14 = *(_WORD *)(a2 + 16);
    else
      v14 = 0;
    v54 = v14;
    v15 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v16 = wcsicmp((const wchar_t *)v15, L"MUI"), v8 = BaseOfImage, v16))
      || (v13 & 8) == 0
      || (v14 & 0xF3FF) != 0
      || v14 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v55 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v53 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v79 = *v7;
          if ( v12 < 2 )
            v17 = 0LL;
          else
            v17 = v7[1];
          v80 = v17;
          if ( v12 == 3 )
            v10 = v7[2];
          v81 = v10;
          if ( a3 == 4 )
            v82 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v64);
          v53 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v55 = v5;
    }
    v9 = v66;
  }
  v73 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 2u, &Size);
  if ( !v73 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(BaseOfImage, &v72, 256LL, v18);
  v53 = result;
  if ( (int)result >= 0 )
  {
    v19 = v73;
    v67 = v73;
    v56 = 61166LL;
    v57 = 0;
    CurrentLocale_low = 0LL;
    v65 = 0LL;
    v63 = 0LL;
    v51[0] = 0;
    v54 = 0;
    v62 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      v22 = 3221225610LL;
      if ( !v19 )
        goto LABEL_49;
      v23 = v58;
      v22 = --v58;
      if ( !v23 )
        goto LABEL_48;
      if ( !(_DWORD)v22 )
      {
        v24 = v63;
        if ( v12 == 3 )
          v24 = v19;
        v63 = v24;
      }
      if ( v63 )
      {
        v54 = *((_WORD *)v9 + 8);
        v52 = (v54 & 0x3FF) == 0;
        goto LABEL_68;
      }
LABEL_147:
      v44 = *((_WORD *)v19 + 7);
      result = RtlULongAdd(*((unsigned __int16 *)v19 + 6), v44, &v69);
      v53 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v69, 8LL, &v71);
      v53 = result;
      if ( (int)result < 0 )
        return result;
      v47 = (unsigned int *)(v45 + 16);
      v77 = (unsigned int *)(v45 + 16);
      v48 = v72 + ((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v45 + 16 + (unsigned __int64)v71 > v48 )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v47 += 2 * v46;
        v77 = v47;
        LOWORD(v46) = v44;
      }
      if ( !(_WORD)v46 )
      {
        switch ( v12 - v58 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v53 = -1073741685;
            goto LABEL_161;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v53 = -1073741308;
            return ResourceFromAlternativeModule;
        }
        v53 = ResourceFromAlternativeModule;
        if ( ResourceFromAlternativeModule + 1073741686 <= 1 )
        {
LABEL_161:
          v49 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v49 & 0x20000) != 0 && (v49 & 0x10) != 0 && v12 == 3 )
          {
            v79 = *v66;
            v80 = v66[1];
            v81 = v66[2];
            if ( a3 == 4 )
              v82 = v66[3];
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v64);
            v53 = ResourceFromAlternativeModule;
          }
        }
        return ResourceFromAlternativeModule;
      }
      if ( v63 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               (_DWORD)BaseOfImage,
                               v72,
                               (unsigned __int16)v46,
                               (_DWORD)v73,
                               (__int64)v47,
                               *v7,
                               (__int64)&v67,
                               (__int64)&v65) )
        return 3221225595LL;
      v75 = ++v7;
      v19 = v67;
      CurrentLocale_low = (unsigned __int64)v65;
      v9 = v66;
    }
    v19 = 0LL;
    v67 = 0LL;
    v56 = *v47;
    CurrentLocale_low = (unsigned __int64)&v73[v47[1]];
    if ( CurrentLocale_low > v48 )
      return 3221225595LL;
    v65 = &v73[v47[1]];
    v9 = v66;
LABEL_48:
    v22 = 3221225610LL;
LABEL_49:
    if ( CurrentLocale_low && (v5 & 2) == 0 )
    {
      *(_QWORD *)v64 = CurrentLocale_low;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v76 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v76->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v26 = BaseOfImage;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v65;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v26;
      }
LABEL_55:
      LODWORD(CurrentLocale_low) = 0;
      v53 = 0;
      return (unsigned int)CurrentLocale_low;
    }
    if ( v19 && (v5 & 2) != 0 )
    {
      *(_QWORD *)v64 = v19;
      goto LABEL_55;
    }
    if ( v12 - v58 == 1 )
    {
      LODWORD(CurrentLocale_low) = -1073741686;
      v53 = -1073741686;
      goto LABEL_177;
    }
    if ( v12 - v58 == 2 )
    {
      LODWORD(CurrentLocale_low) = -1073741685;
      v53 = -1073741685;
      goto LABEL_178;
    }
    if ( v12 - v58 != 3 )
    {
      LODWORD(CurrentLocale_low) = -1073741811;
      v53 = -1073741811;
LABEL_177:
      if ( (unsigned int)(CurrentLocale_low + 1073741686) > 1 )
        return (unsigned int)CurrentLocale_low;
LABEL_178:
      v50 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v50 & 0x20000) != 0 && (v50 & 0x10) != 0 && v12 == 3 )
      {
        v79 = *v9;
        v80 = v9[1];
        v81 = v9[2];
        if ( a3 == 4 )
          v82 = v9[3];
        LODWORD(CurrentLocale_low) = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v64);
        v53 = CurrentLocale_low;
      }
      return (unsigned int)CurrentLocale_low;
    }
    CurrentLocale_low = 3221225988LL;
    v53 = -1073741308;
    if ( !v63 )
      goto LABEL_177;
    v65 = 0LL;
LABEL_68:
    v27 = BaseOfImage;
    while ( 1 )
    {
      v28 = v57++;
      if ( v28 > 6 )
      {
        v37 = v28 - 7;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( !v38 )
          {
            v51[0] = v56;
            if ( (~v5 & 0x80000) == 0 )
            {
              if ( NtCurrentTeb() )
              {
                v42 = NtCurrentTeb();
                CurrentLocale_low = LOWORD(v42->CurrentLocale);
                v51[0] = v42->CurrentLocale;
              }
              v5 = v55;
              goto LABEL_144;
            }
            goto LABEL_132;
          }
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                  return 3221225988LL;
LABEL_132:
                v5 |= 0x20u;
                v55 = v5;
                goto LABEL_144;
              }
              v33 = 1033;
            }
            else
            {
              v51[0] = v56;
              v53 = NtQueryDefaultLocale(0, &DefaultLocaleId);
              if ( v53 < 0 )
                goto LABEL_144;
              v33 = DefaultLocaleId;
              if ( DefaultLocaleId == v62 )
                goto LABEL_144;
            }
          }
          else
          {
            v51[0] = v56;
            v53 = NtQueryDefaultLocale(1u, &v62);
            if ( v53 < 0 )
              goto LABEL_144;
            v33 = v62;
          }
        }
        else
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_142;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v27);
          if ( !RcConfig )
            goto LABEL_142;
          if ( *RcConfig != -20054323 )
            goto LABEL_142;
          if ( !RcConfig[31] )
            goto LABEL_142;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
            goto LABEL_142;
          v33 = Lcid;
        }
      }
      else
      {
        if ( v28 == 6 )
        {
          v51[0] = v56;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_144;
          v51[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v22, 1023LL) )
          {
            CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v59 >= (unsigned int)CurrentLocale_low )
              v51[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                CurrentLocale_low,
                NtCurrentTeb()->MergedPrefLanguages,
                v59,
                (unsigned int)v51,
                (__int64)v61);
            v5 = v55;
          }
          else
          {
            v51[0] = 0;
          }
          if ( v51[0] )
          {
            ++v59;
LABEL_117:
            --v57;
            goto LABEL_144;
          }
          goto LABEL_142;
        }
        if ( !v28 )
        {
          if ( v54 )
          {
            CurrentLocale_low = (unsigned __int16)v56;
            if ( (v5 & 0x80000) != 0 )
              LOWORD(CurrentLocale_low) = v54;
            v51[0] = CurrentLocale_low;
            goto LABEL_144;
          }
LABEL_87:
          v51[0] = 0;
          goto LABEL_144;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          v34 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v34 & 0x20000) != 0 && (v34 & 0x10) != 0 )
          {
            v79 = *v9;
            if ( v12 < 2 )
              v35 = 0LL;
            else
              v35 = v9[1];
            v80 = v35;
            if ( v12 == 3 )
              v36 = v9[2];
            else
              v36 = 0LL;
            v81 = v36;
            if ( a3 == 4 )
              v82 = v9[3];
            result = LdrpLoadResourceFromAlternativeModule(v27, v64);
            v53 = result;
            if ( (int)result >= 0 )
              return result;
          }
LABEL_142:
          v33 = v56;
          goto LABEL_143;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v33 = v54;
          if ( v52 )
            v33 = v56;
          goto LABEL_143;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          if ( (v5 & 4) != 0 )
            return 3221225988LL;
          if ( !v52 )
          {
            if ( (int)LdrpGetParentLangId(v51[0], v51, 1023LL) < 0 )
              goto LABEL_87;
            if ( !v51[0] )
              goto LABEL_144;
            goto LABEL_117;
          }
          goto LABEL_142;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 )
            return 3221225988LL;
          if ( !v52 )
            return 3221225988LL;
          goto LABEL_142;
        }
        if ( v52 )
          goto LABEL_142;
        v33 = v54 & 0x3FF;
      }
LABEL_143:
      v51[0] = v33;
LABEL_144:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v51[0] != v56 )
      {
        v56 = v51[0];
        v7 = &v56;
        v75 = &v56;
        v19 = v63;
        v67 = v63;
        goto LABEL_147;
      }
    }
  }
  return result;
}
