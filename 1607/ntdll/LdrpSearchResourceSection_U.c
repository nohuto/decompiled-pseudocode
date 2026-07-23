/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180030398
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x18002C790 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x18002D6B0 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x18002DC00 (RtlLoadString.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrFindResourceEx_U @ 0x180085720 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800DBFC0 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlULongAdd @ 0x1800065E8 (RtlULongAdd.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104C8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x1800134AC (LdrpSetThreadPreferredLangList.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     ResourceEntryBinarySearch @ 0x180030F24 (ResourceEntryBinarySearch.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318EC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     LdrIsResItemExist @ 0x18003F138 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082730 (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A66C0 (NtQueryDefaultLocale.c)
 *     RtlULongMult @ 0x1800DB9D8 (RtlULongMult.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, DWORD a3, ULONG a4, __int64 a5)
{
  ULONG v5; // esi
  __int64 *v7; // rdi
  PVOID v8; // r8
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
  unsigned __int64 v20; // rcx
  int ResourceFromAlternativeModule; // r15d
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 *v25; // rcx
  PVOID Heap; // rax
  PVOID v27; // rdx
  unsigned int v28; // edi
  PVOID v29; // rdi
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned __int16 v35; // ax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  PVOID v39; // r14
  int v40; // edi
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  _DWORD *RcConfig; // rax
  __int64 v48; // r10
  __int16 v49; // r11
  unsigned int *v50; // rdx
  PVOID v51; // r14
  unsigned __int64 v52; // r8
  int v53; // eax
  int v54; // eax
  ULONG v55; // r9d
  PVOID v56; // rsi
  unsigned __int16 v57[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v58; // [rsp+44h] [rbp-124h]
  NTSTATUS v59; // [rsp+48h] [rbp-120h]
  unsigned __int16 v60; // [rsp+4Ch] [rbp-11Ch]
  ULONG v61; // [rsp+50h] [rbp-118h]
  __int64 v62; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-108h]
  unsigned int v64; // [rsp+64h] [rbp-104h]
  PVOID DllHandle; // [rsp+68h] [rbp-100h]
  unsigned int v66; // [rsp+70h] [rbp-F8h]
  bool v67; // [rsp+74h] [rbp-F4h] BYREF
  DWORD v68; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v69; // [rsp+80h] [rbp-E8h]
  __int64 v70; // [rsp+88h] [rbp-E0h]
  __int64 v71; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+98h] [rbp-D0h]
  __int64 v73; // [rsp+A0h] [rbp-C8h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp-C0h] BYREF
  DWORD Lcid; // [rsp+ACh] [rbp-BCh] BYREF
  unsigned int v76; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+B4h] [rbp-B4h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-A0h]
  struct _TEB *v81; // [rsp+D8h] [rbp-90h]
  unsigned int *v82; // [rsp+E0h] [rbp-88h]
  __int64 *v83; // [rsp+E8h] [rbp-80h]
  _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v85; // [rsp+100h] [rbp-68h] BYREF
  __int64 v86; // [rsp+108h] [rbp-60h]
  __int64 v87; // [rsp+110h] [rbp-58h]
  __int64 v88; // [rsp+118h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  DllHandle = a1;
  v61 = a4;
  v70 = a5;
  v72 = a2;
  v9 = 0LL;
  v58 = 0;
  v78 = 0LL;
  v66 = 0;
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
  v64 = v11;
  v12 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v11 - 1 <= 2 )
  {
    if ( v11 == 3 )
      v13 = *(_WORD *)(a2 + 16);
    else
      v13 = 0;
    v60 = v13;
    v14 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v15 = wcsicmp((const wchar_t *)v14, L"MUI"), v8 = DllHandle, v15))
      || (v12 & 8) == 0
      || (v13 & 0xF3FF) != 0
      || v13 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v61 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v59 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v85 = *v7;
          if ( v11 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v86 = v16;
          if ( v11 == 3 )
            v9 = v7[2];
          v87 = v9;
          if ( a3 == 4 )
            v88 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v85, a3, v5, (unsigned int **)v70);
          v59 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v61 = v5;
    }
  }
  v17 = RtlpImageDirectoryEntryToDataEx((int)DllHandle, (__int64)&v79);
  v19 = v79;
  if ( v17 < 0 )
    v19 = 0LL;
  v79 = v19;
  v80 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(DllHandle, &v78, 256LL, v18);
  v59 = result;
  if ( (int)result >= 0 )
  {
    v73 = v19;
    v62 = 61166LL;
    v63 = 0;
    v20 = 0LL;
    v71 = 0LL;
    v69 = 0LL;
    v57[0] = 0;
    v60 = 0;
    v68 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      if ( !v19 )
        goto LABEL_49;
      v22 = v64;
      v23 = --v64;
      if ( !v22 )
        goto LABEL_49;
      if ( !v23 )
      {
        v24 = v69;
        if ( v11 == 3 )
          v24 = v19;
        v69 = v24;
      }
      if ( v69 )
      {
        v25 = (__int64 *)v72;
        v60 = *(_WORD *)(v72 + 16);
        v58 = (v60 & 0x3FF) == 0;
        goto LABEL_69;
      }
LABEL_150:
      result = RtlULongAdd(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), &v76);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v76, 8LL, &v77);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      v50 = (unsigned int *)(v19 + 16);
      v82 = v50;
      v51 = DllHandle;
      v52 = v78 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v50 + v77 > v52 )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v50 += 2 * v48;
        v82 = v50;
        LOWORD(v48) = v49;
      }
      if ( !(_WORD)v48 )
      {
        switch ( v11 - v64 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v59 = -1073741685;
            goto LABEL_164;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v59 = -1073741308;
            return (unsigned int)ResourceFromAlternativeModule;
        }
        v59 = ResourceFromAlternativeModule;
        if ( (unsigned int)(ResourceFromAlternativeModule + 1073741686) <= 1 )
        {
LABEL_164:
          v53 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v53 & 0x20000) != 0 && (v53 & 0x10) != 0 && v11 == 3 )
          {
            v85 = *(_QWORD *)v72;
            v86 = *(_QWORD *)(v72 + 8);
            v87 = *(_QWORD *)(v72 + 16);
            if ( a3 == 4 )
              v88 = *(_QWORD *)(v72 + 24);
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              DllHandle,
                                              (__int64)&v85,
                                              a3,
                                              v5,
                                              (unsigned int **)v70);
            v59 = ResourceFromAlternativeModule;
            if ( ResourceFromAlternativeModule >= 0 )
              LdrpResReportResourceAccessInternal(v51);
          }
        }
        return (unsigned int)ResourceFromAlternativeModule;
      }
      if ( v69 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               (_DWORD)DllHandle,
                               v78,
                               (unsigned __int16)v48,
                               v80,
                               (__int64)v50,
                               *v7,
                               (__int64)&v73,
                               (__int64)&v71) )
        return 3221225595LL;
      v83 = ++v7;
      v19 = v73;
      v20 = v71;
    }
    v19 = 0LL;
    v73 = 0LL;
    v62 = *v50;
    v20 = v80 + v50[1];
    if ( v20 > v52 )
      return 3221225595LL;
    v71 = v80 + v50[1];
LABEL_49:
    if ( v20 && (v5 & 2) == 0 )
    {
      *(_QWORD *)v70 = v20;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v81 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v81->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v27 = DllHandle;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v71;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v27;
      }
LABEL_55:
      v28 = 0;
      v59 = 0;
      return v28;
    }
    if ( v19 && (v5 & 2) != 0 )
    {
      *(_QWORD *)v70 = v19;
      goto LABEL_55;
    }
    if ( v11 - v64 == 1 )
    {
      v28 = -1073741686;
      v59 = -1073741686;
      goto LABEL_181;
    }
    if ( v11 - v64 == 2 )
    {
      v28 = -1073741685;
      v59 = -1073741685;
      goto LABEL_182;
    }
    if ( v11 - v64 != 3 )
    {
      v28 = -1073741811;
      v59 = -1073741811;
LABEL_181:
      if ( v28 + 1073741686 > 1 )
        return v28;
LABEL_182:
      v54 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v11 == 3 )
      {
        v85 = *(_QWORD *)v72;
        v86 = *(_QWORD *)(v72 + 8);
        v87 = *(_QWORD *)(v72 + 16);
        if ( a3 == 4 )
          v88 = *(_QWORD *)(v72 + 24);
        v55 = v5;
        v56 = DllHandle;
        v28 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v85, a3, v55, (unsigned int **)v70);
        v59 = v28;
        if ( (v28 & 0x80000000) == 0 )
          LdrpResReportResourceAccessInternal(v56);
      }
      return v28;
    }
    v28 = -1073741308;
    v59 = -1073741308;
    if ( !v69 )
      goto LABEL_181;
    v71 = 0LL;
    v25 = (__int64 *)v72;
LABEL_69:
    v29 = DllHandle;
    while ( 1 )
    {
      v30 = v63++;
      if ( v30 > 6 )
      {
        v42 = v30 - 7;
        if ( !v42 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_144;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v29);
          if ( !RcConfig )
            goto LABEL_144;
          if ( *RcConfig != -20054323 )
            goto LABEL_144;
          if ( !RcConfig[31] )
            goto LABEL_144;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
            goto LABEL_144;
          v35 = Lcid;
          goto LABEL_145;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( !v46 )
              {
                v35 = 1033;
                goto LABEL_145;
              }
              if ( v46 != 1 )
                return 3221225988LL;
LABEL_134:
              v5 |= 0x20u;
              v61 = v5;
              goto LABEL_146;
            }
            v57[0] = v62;
            v59 = NtQueryDefaultLocale(0, &DefaultLocaleId);
            if ( v59 >= 0 )
            {
              v35 = DefaultLocaleId;
              if ( DefaultLocaleId != v68 )
                goto LABEL_145;
            }
          }
          else
          {
            v57[0] = v62;
            v59 = NtQueryDefaultLocale(1u, &v68);
            if ( v59 >= 0 )
            {
              v35 = v68;
              goto LABEL_145;
            }
          }
        }
        else
        {
          v57[0] = v62;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_134;
          if ( NtCurrentTeb() )
            v57[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v61;
        }
      }
      else if ( v30 == 6 )
      {
        v57[0] = v62;
        if ( (v5 & 0x20) == 0 )
        {
          v57[0] = 0;
          if ( LdrpSetThreadPreferredLangList() )
          {
            v41 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v66 >= (unsigned int)v41 )
              v57[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(v41, (__int64)NtCurrentTeb()->MergedPrefLanguages, v66, v57, &v67);
            v5 = v61;
          }
          else
          {
            v57[0] = 0;
          }
          if ( !v57[0] )
            goto LABEL_144;
          ++v66;
LABEL_119:
          --v63;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v60 )
          {
            v35 = v62;
            if ( (v5 & 0x80000) != 0 )
              v35 = v60;
            goto LABEL_145;
          }
LABEL_88:
          v57[0] = 0;
          goto LABEL_146;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v36 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v36 & 0x20000) != 0 && (v36 & 0x10) != 0 )
          {
            v85 = *v25;
            if ( v11 < 2 )
              v37 = 0LL;
            else
              v37 = v25[1];
            v86 = v37;
            if ( v11 == 3 )
              v38 = v25[2];
            else
              v38 = 0LL;
            v87 = v38;
            if ( a3 == 4 )
              v88 = v25[3];
            v39 = DllHandle;
            v40 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v85, a3, v5, (unsigned int **)v70);
            v59 = v40;
            if ( v40 >= 0 )
            {
              LdrpResReportResourceAccessInternal(v39);
              return (unsigned int)v40;
            }
            v29 = v39;
          }
          goto LABEL_144;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          v35 = v60;
          if ( v58 )
            v35 = v62;
          goto LABEL_145;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 != 1 )
              return 3221225988LL;
            if ( !v58 )
              return 3221225988LL;
LABEL_144:
            v35 = v62;
          }
          else
          {
            if ( v58 )
              goto LABEL_144;
            v35 = v60 & 0x3FF;
          }
LABEL_145:
          v57[0] = v35;
          goto LABEL_146;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v58 )
          goto LABEL_144;
        if ( (int)LdrpGetParentLangId(v57[0], v57) < 0 )
          goto LABEL_88;
        if ( v57[0] )
          goto LABEL_119;
      }
LABEL_146:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v57[0] != v62 )
      {
        v62 = v57[0];
        v7 = &v62;
        v83 = &v62;
        v19 = v69;
        v73 = v69;
        goto LABEL_150;
      }
      v25 = (__int64 *)v72;
    }
  }
  return result;
}
