/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180030670
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x18006FF90 (RtlFindMessage.c)
 *     RtlLoadString @ 0x1800700A0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x18007B260 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800808C0 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800D3C60 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ResourceEntryBinarySearch @ 0x1800311C0 (ResourceEntryBinarySearch.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003B354 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrIsResItemExist @ 0x18003C3B4 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A5360 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  int v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // r13d
  char v10; // r15
  PVOID v11; // r15
  char *v12; // rax
  unsigned __int64 CurrentLocale_low; // rcx
  unsigned __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned __int16 v19; // ax
  char *v20; // r8
  unsigned int v21; // edi
  PVOID v22; // rax
  __int64 *v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rax
  int ResourceFromAlternativeModule; // edi
  __int64 result; // rax
  PVOID Heap; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  struct _TEB *v40; // rax
  int ParentLangId; // eax
  __int16 v42; // r14
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  _DWORD *RcConfig; // rax
  _WORD v46[2]; // [rsp+30h] [rbp-108h] BYREF
  bool v47; // [rsp+34h] [rbp-104h]
  NTSTATUS v48; // [rsp+38h] [rbp-100h]
  __int16 v49; // [rsp+3Ch] [rbp-FCh]
  unsigned int v50; // [rsp+40h] [rbp-F8h]
  __int64 v51; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-E8h]
  unsigned int v53; // [rsp+54h] [rbp-E4h]
  unsigned int v54; // [rsp+58h] [rbp-E0h]
  PVOID BaseOfImage; // [rsp+60h] [rbp-D8h] BYREF
  DWORD v56; // [rsp+68h] [rbp-D0h] BYREF
  char v57[4]; // [rsp+6Ch] [rbp-CCh] BYREF
  void *v58; // [rsp+70h] [rbp-C8h]
  __int64 v59; // [rsp+78h] [rbp-C0h]
  char *v60; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-B0h]
  DWORD Lcid; // [rsp+90h] [rbp-A8h] BYREF
  char *v63; // [rsp+98h] [rbp-A0h]
  DWORD DefaultLocaleId; // [rsp+A0h] [rbp-98h] BYREF
  ULONG Size; // [rsp+A4h] [rbp-94h] BYREF
  __int64 *v66; // [rsp+A8h] [rbp-90h]
  struct _TEB *v67; // [rsp+B0h] [rbp-88h]
  char *v68; // [rsp+B8h] [rbp-80h]
  _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-68h]
  __int64 v71; // [rsp+D8h] [rbp-60h]
  __int64 v72; // [rsp+E0h] [rbp-58h]
  __int64 v73; // [rsp+E8h] [rbp-50h]

  v5 = a4;
  v6 = a3;
  v7 = (__int64 *)a2;
  BaseOfImage = a1;
  v50 = a4;
  v59 = a5;
  v61 = a2;
  v8 = 0LL;
  v47 = 0;
  v54 = 0;
  if ( (unsigned int)a3 < 3 && (a4 & 2) == 0 || (unsigned int)a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( (_DWORD)a3 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)a3 != 4 )
  {
    goto LABEL_5;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_5:
  v9 = a3;
  if ( (_DWORD)a3 == 4 )
    v9 = 3;
  v53 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v9 - 1 <= 2 )
  {
    if ( v9 == 3 )
      v42 = *(_WORD *)(a2 + 16);
    else
      v42 = 0;
    v49 = v42;
    v43 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v43 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v43, L"MUI"))
      || (v10 & 8) == 0
      || (v42 & 0xF3FF) != 0
      || v42 == 3072 )
    {
      v11 = BaseOfImage;
      v5 |= LdrIsResItemExist(BaseOfImage, v7, a3, v5);
      v50 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v48 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v70 = *v7;
          if ( v9 < 2 )
            v44 = 0LL;
          else
            v44 = v7[1];
          v71 = v44;
          if ( v9 == 3 )
            v8 = v7[2];
          v72 = v8;
          if ( v6 == 4 )
            v73 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v59);
          v48 = result;
        }
        return result;
      }
      goto LABEL_13;
    }
    v5 |= 0x10u;
    v50 = v5;
  }
  v11 = BaseOfImage;
LABEL_13:
  v12 = (char *)RtlImageDirectoryEntryToData(v11, 1u, 2u, &Size);
  v63 = v12;
  if ( !v12 )
    return 3221225609LL;
  CurrentLocale_low = (unsigned __int64)v12;
  BaseOfImage = v12;
  v51 = 61166LL;
  v52 = 0;
  v14 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v46[0] = 0;
  v49 = 0;
  v56 = 0;
  v15 = -1073741811;
  while ( 1 )
  {
    v16 = 3221225610LL;
    if ( !CurrentLocale_low )
      goto LABEL_26;
    v17 = v53;
    v18 = --v53;
    if ( !v17 )
      goto LABEL_26;
    if ( !v18 )
    {
      v22 = v58;
      if ( v9 == 3 )
        v22 = (PVOID)CurrentLocale_low;
      v58 = v22;
    }
    if ( v58 )
    {
      v23 = (__int64 *)v61;
      v49 = *(_WORD *)(v61 + 16);
      v47 = (v49 & 0x3FF) == 0;
      while ( 1 )
      {
        v24 = v52++;
        if ( v24 == 6 )
        {
          v46[0] = v51;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_44;
          v46[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v14, v23, v16) )
          {
            CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v54 >= (unsigned int)CurrentLocale_low )
              v46[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                CurrentLocale_low,
                NtCurrentTeb()->MergedPrefLanguages,
                v54,
                (unsigned int)v46,
                (__int64)v57);
            v5 = v50;
          }
          else
          {
            v46[0] = 0;
          }
          if ( v46[0] )
          {
            ++v54;
LABEL_73:
            --v52;
            goto LABEL_44;
          }
          goto LABEL_64;
        }
        if ( v24 > 6 )
        {
          v35 = v24 - 7;
          if ( !v35 )
          {
            if ( (~v5 & 0x80000) != 0 )
            {
              RcConfig = (_DWORD *)LdrpGetRcConfig(v11);
              if ( RcConfig )
              {
                if ( *RcConfig == -20054323 )
                {
                  if ( RcConfig[31] )
                  {
                    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
                    {
                      v29 = Lcid;
                      goto LABEL_65;
                    }
                  }
                }
              }
            }
            goto LABEL_64;
          }
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( !v37 )
            {
              v46[0] = v51;
              v48 = NtQueryDefaultLocale(1u, &v56);
              if ( v48 < 0 )
                goto LABEL_44;
              v29 = v56;
              goto LABEL_65;
            }
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 != 1 )
                  return 3221225988LL;
LABEL_111:
                v5 |= 0x20u;
                v50 = v5;
                goto LABEL_44;
              }
              v29 = 1033;
              goto LABEL_65;
            }
            v46[0] = v51;
            v48 = NtQueryDefaultLocale(0, &DefaultLocaleId);
            if ( v48 >= 0 )
            {
              v29 = DefaultLocaleId;
              if ( DefaultLocaleId != v56 )
                goto LABEL_65;
            }
          }
          else
          {
            v46[0] = v51;
            if ( (~v5 & 0x80000) != 0 )
              goto LABEL_111;
            if ( NtCurrentTeb() )
            {
              v40 = NtCurrentTeb();
              CurrentLocale_low = LOWORD(v40->CurrentLocale);
              v46[0] = v40->CurrentLocale;
            }
            v5 = v50;
          }
        }
        else
        {
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              v14 = ~v5;
              LOBYTE(CurrentLocale_low) = (v14 & 0x20000) != 0 && (v14 & 0x80000) != 0;
              if ( ((unsigned __int8)CurrentLocale_low & ((~(_BYTE)v5 & 0x10) != 0)) != 0 )
              {
                v70 = *v23;
                if ( v9 < 2 )
                  v30 = 0LL;
                else
                  v30 = v23[1];
                v71 = v30;
                if ( v9 == 3 )
                  v31 = v23[2];
                else
                  v31 = 0LL;
                v72 = v31;
                if ( v6 == 4 )
                  v73 = v23[3];
                ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(v11, v59);
                v48 = ResourceFromAlternativeModule;
                if ( ResourceFromAlternativeModule >= 0 )
                {
                  LdrpResReportResourceAccessInternal(v11);
                  return (unsigned int)ResourceFromAlternativeModule;
                }
              }
              goto LABEL_64;
            }
            v26 = v25 - 1;
            if ( !v26 )
            {
              v29 = v49;
              if ( v47 )
                v29 = v51;
              goto LABEL_65;
            }
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 != 1 )
                  return 3221225988LL;
                if ( !v47 )
                  return 3221225988LL;
              }
              else if ( !v47 )
              {
                v29 = v49 & 0x3FF;
                goto LABEL_65;
              }
LABEL_64:
              v29 = v51;
LABEL_65:
              v46[0] = v29;
              goto LABEL_44;
            }
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( v47 )
              goto LABEL_64;
            ParentLangId = LdrpGetParentLangId(v46[0], v46, v23, v16);
            if ( ParentLangId >= 0 )
            {
              if ( !v46[0] )
                goto LABEL_44;
              goto LABEL_73;
            }
LABEL_53:
            v46[0] = 0;
            goto LABEL_44;
          }
          if ( !v49 )
            goto LABEL_53;
          CurrentLocale_low = (unsigned __int16)v51;
          if ( (v5 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v49;
          v46[0] = CurrentLocale_low;
        }
LABEL_44:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v46[0] != v51 )
        {
          v51 = v46[0];
          v7 = &v51;
          v66 = &v51;
          CurrentLocale_low = (unsigned __int64)v58;
          BaseOfImage = v58;
          v16 = 3221225610LL;
          break;
        }
LABEL_47:
        v23 = (__int64 *)v61;
      }
    }
    v19 = *(_WORD *)(CurrentLocale_low + 12);
    v20 = (char *)(CurrentLocale_low + 16);
    v68 = (char *)(CurrentLocale_low + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v20 += 8 * v19;
      v68 = v20;
      v19 = *(_WORD *)(CurrentLocale_low + 14);
    }
    if ( !v19 )
    {
      switch ( v9 - v53 )
      {
        case 1u:
          v15 = -1073741686;
          v48 = -1073741686;
          goto LABEL_98;
        case 2u:
          v15 = -1073741685;
          v48 = -1073741685;
          goto LABEL_99;
        case 3u:
          v15 = -1073741308;
          v48 = -1073741308;
          break;
        default:
          v48 = -1073741811;
LABEL_98:
          if ( (unsigned int)(v15 + 1073741686) <= 1 )
          {
LABEL_99:
            if ( (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v9 == 3 )
            {
              v70 = *(_QWORD *)v61;
              v71 = *(_QWORD *)(v61 + 8);
              v72 = *(_QWORD *)(v61 + 16);
              if ( v6 == 4 )
                v73 = *(_QWORD *)(v61 + 24);
              v15 = LdrpLoadResourceFromAlternativeModule(v11, v59);
              v48 = v15;
              if ( v15 >= 0 )
                LdrpResReportResourceAccessInternal(v11);
            }
          }
          break;
      }
      return (unsigned int)v15;
    }
    if ( v58 && (v5 & 0x20) != 0 )
      break;
    ResourceEntryBinarySearch(v19, (_DWORD)v63, (_DWORD)v20, *v7++, (__int64)&BaseOfImage, (__int64)&v60);
    v66 = v7;
    CurrentLocale_low = (unsigned __int64)BaseOfImage;
    v14 = (unsigned __int64)v60;
  }
  CurrentLocale_low = 0LL;
  BaseOfImage = 0LL;
  v51 = *(unsigned int *)v20;
  v14 = (unsigned __int64)&v63[*((unsigned int *)v20 + 1)];
  v60 = (char *)v14;
LABEL_26:
  if ( !v14 || (v5 & 2) != 0 )
  {
    if ( CurrentLocale_low && (v5 & 2) != 0 )
    {
      *(_QWORD *)v59 = CurrentLocale_low;
      goto LABEL_32;
    }
    switch ( v9 - v53 )
    {
      case 1u:
        v21 = -1073741686;
        v48 = -1073741686;
        break;
      case 2u:
        v21 = -1073741685;
        v48 = -1073741685;
LABEL_103:
        if ( (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v9 == 3 )
        {
          v70 = *(_QWORD *)v61;
          v71 = *(_QWORD *)(v61 + 8);
          v72 = *(_QWORD *)(v61 + 16);
          if ( v6 == 4 )
            v73 = *(_QWORD *)(v61 + 24);
          v21 = LdrpLoadResourceFromAlternativeModule(v11, v59);
          v48 = v21;
          if ( (v21 & 0x80000000) == 0 )
            LdrpResReportResourceAccessInternal(v11);
        }
        return v21;
      case 3u:
        v21 = -1073741308;
        v48 = -1073741308;
        if ( v58 )
        {
          v60 = 0LL;
          goto LABEL_47;
        }
        break;
      default:
        v21 = -1073741811;
        v48 = -1073741811;
        break;
    }
    if ( v21 + 1073741686 > 1 )
      return v21;
    goto LABEL_103;
  }
  *(_QWORD *)v59 = v14;
  if ( !NtCurrentTeb()->ResourceRetValue )
  {
    v67 = NtCurrentTeb();
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
    v67->ResourceRetValue = Heap;
  }
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v11;
    *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v60;
    *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v11;
  }
LABEL_32:
  v21 = 0;
  v48 = 0;
  return v21;
}
