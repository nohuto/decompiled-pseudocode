/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800E7E30
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlpCheckMuiMultiStringSafe @ 0x180010648 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C30 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEB0 (RtlUnicodeStringToInteger.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070880 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C30 (RtlpInitializeLangRegistryInfo.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180071804 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A67C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A8150 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A8BB0 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlStringCchCatW @ 0x1800E5F3C (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800E6484 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6C60 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800E71E0 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7C4C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1800F4448 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v3; // edi
  WCHAR *v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  unsigned int v7; // r13d
  _WORD *v8; // rsi
  int InstallUILanguage; // ebx
  int ProcessRegistryInfo; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  wchar_t *Heap; // rax
  const WCHAR *v15; // r15
  unsigned __int64 v16; // rsi
  _WORD *v17; // r8
  const WCHAR *v18; // r14
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int16 v21; // si
  wchar_t *Buffer; // rdx
  __int64 v23; // rax
  int v24; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  _WORD *v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v30; // r14d
  unsigned __int16 v31; // r15
  _WORD *v32; // r14
  int v33; // r13d
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int16 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  _WORD *v40; // rcx
  WCHAR *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _WORD *v44; // [rsp+40h] [rbp-C0h]
  unsigned int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v48; // [rsp+54h] [rbp-ACh]
  UNICODE_STRING v49; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v51; // [rsp+80h] [rbp-80h]
  unsigned int v52; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v53; // [rsp+88h] [rbp-78h]
  unsigned int v54; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int16 *v57; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v59[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v60; // [rsp+BCh] [rbp-44h]
  HANDLE v61; // [rsp+C0h] [rbp-40h]
  HANDLE v62; // [rsp+C8h] [rbp-38h]
  void *Src; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *v64; // [rsp+D8h] [rbp-28h]
  char *v65; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h]
  wchar_t *v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  _DWORD *v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  UNICODE_STRING *v72; // [rsp+128h] [rbp+28h]
  int v73; // [rsp+130h] [rbp+30h]
  __int128 v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+148h] [rbp+48h]
  char *v76; // [rsp+150h] [rbp+50h]
  UNICODE_STRING *v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+160h] [rbp+60h]
  __int128 v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+178h] [rbp+78h]
  HANDLE v81; // [rsp+180h] [rbp+80h]
  UNICODE_STRING *v82; // [rsp+188h] [rbp+88h]
  int v83; // [rsp+190h] [rbp+90h]
  __int128 v84; // [rsp+198h] [rbp+98h]
  int v85; // [rsp+1A8h] [rbp+A8h]
  __int64 v86; // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING *v87; // [rsp+1B8h] [rbp+B8h]
  int v88; // [rsp+1C0h] [rbp+C0h]
  __int128 v89; // [rsp+1C8h] [rbp+C8h]
  int v90; // [rsp+1D8h] [rbp+D8h]
  HANDLE v91; // [rsp+1E0h] [rbp+E0h]
  UNICODE_STRING *v92; // [rsp+1E8h] [rbp+E8h]
  int v93; // [rsp+1F0h] [rbp+F0h]
  __int128 v94; // [rsp+1F8h] [rbp+F8h]
  __int16 v95; // [rsp+208h] [rbp+108h] BYREF
  __int64 v96; // [rsp+20Ah] [rbp+10Ah]
  __int64 v97; // [rsp+212h] [rbp+112h]
  __int64 v98; // [rsp+21Ah] [rbp+11Ah]
  __int16 v99; // [rsp+222h] [rbp+122h]

  v69 = a3;
  v3 = a1;
  v65 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v53 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0;
  v60 = 0;
  v8 = 0LL;
  v45 = 0;
  v47[0] = 0;
  v57 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0;
  v44 = 0LL;
  v48 = 0;
  v56 = 0LL;
  v64 = 0LL;
  Src = 0LL;
  v51 = 0;
  v67 = 0LL;
  v66 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  if ( !a1 )
    v3 = 18440;
  if ( (v3 & 0xFFFF0363) != 0
    || (v3 & 0x400) != 0 && (!a2 || (v3 & 0xFFFFFBF3) != 0)
    || (v3 & 0x8000) != 0 && (!a2 || (v3 & 0xFFFF6773) != 0)
    || (v3 & 0xC) == 0xC
    || (v3 & 0x1800) == 0x1800
    || (v3 & 0x10) != 0 && (v3 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_109:
    if ( (v3 & 0x80u) != 0 && v56 )
      RtlpMuiFreeLangRegistryInfo(v56);
    *v69 = v5 + v6 + v60;
    return (unsigned int)InstallUILanguage;
  }
  if ( (v3 & 0xC) == 0 )
    LOWORD(v3) = v3 | 8;
  if ( (v3 & 0xE410) == 0 )
    LOWORD(v3) = v3 | 0x4000;
  if ( (v3 & 0x1C00) == 0 )
    LOWORD(v3) = v3 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v56);
  else
    ProcessRegistryInfo = RtlpInitializeLangRegistryInfo(&v56);
  InstallUILanguage = ProcessRegistryInfo;
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v4 )
    {
      v13 = 4LL;
      if ( (v3 & 4) == 0 )
        v13 = 85LL;
      if ( (int)RtlpCheckMuiMultiStringSafe(v4, v13) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
      if ( (v3 & 0x400) != 0 )
      {
        InstallUILanguage = NtQueryInstallUILanguage();
        if ( InstallUILanguage < 0 )
        {
LABEL_98:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v61 )
          {
            NtClose(v61);
            v61 = 0LL;
          }
          if ( v62 )
          {
            NtClose(v62);
            v62 = 0LL;
          }
          if ( v65 )
          {
            CloseGlobalizationUserSettingsKey(v65);
            v65 = 0LL;
          }
          if ( v8 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v8);
          v6 = v54;
          goto LABEL_109;
        }
        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        v67 = Heap;
        v15 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          v5 = 0;
          goto LABEL_98;
        }
        v49.Buffer = Heap;
        *(_DWORD *)&v49.Length = 11141120;
        if ( !RtlLCIDToCultureName(v51, (__int64)&v49) )
        {
          InstallUILanguage = -1073741811;
LABEL_93:
          if ( v15 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v15);
          if ( v64 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v64);
          v5 = v53;
          goto LABEL_98;
        }
        v16 = (unsigned __int64)v49.Length >> 1;
        if ( (v3 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (unsigned __int64 *)&Src);
          if ( InstallUILanguage < 0 )
          {
            v8 = 0LL;
            goto LABEL_90;
          }
          v4 = (WCHAR *)Src;
          LOWORD(v3) = v3 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, &v46, 0LL);
        if ( InstallUILanguage < 0 )
        {
          v8 = v17;
          goto LABEL_90;
        }
        memmove((void *)&v15[v16 + 1], v4, 2LL * ((unsigned __int16)v46 + 1));
        v8 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback(v56, v15);
        if ( InstallUILanguage < 0 )
          goto LABEL_90;
        v4 = (WCHAR *)v15;
      }
      v45 = 0;
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v50, &v45);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      *((_QWORD *)&v50 + 1) = v4;
      LOWORD(v50) = 2 * v50;
      WORD1(v50) = v50 + 2;
      if ( v45 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_90;
      }
      v18 = v4;
      v64 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v64 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_90;
      }
      v19 = v45;
      v46 = 0;
      if ( v45 )
      {
        v20 = v3 & 4;
        LODWORD(v68) = v20;
        while ( 1 )
        {
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, v18);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v52) < 0 )
              goto LABEL_88;
            v21 = v52;
            if ( v52 == 4096 || v52 == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = v64;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v52, (__int64)&DestinationString) )
            {
              InstallUILanguage = -1073741811;
              v8 = 0LL;
              goto LABEL_90;
            }
            Buffer = DestinationString.Buffer;
            v23 = -1LL;
            do
              ++v23;
            while ( DestinationString.Buffer[v23] );
            v48 += v23 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v18);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v52) )
              goto LABEL_88;
            v21 = v52;
            if ( v52 == 4096 || v52 == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          v24 = v46;
          v11 = 0LL;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v57 & 1) != 0 )
              {
LABEL_115:
                InstallUILanguage = -1073741811;
                v8 = 0LL;
                goto LABEL_90;
              }
              if ( (*(_BYTE *)v57 & 2) != 0 )
              {
                v26 = v59;
              }
              else
              {
                if ( (*(_BYTE *)v57 & 4) == 0 || v19 > 2 )
                  goto LABEL_115;
                v26 = v47;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v56,
                                                        (_DWORD)v57,
                                                        v21,
                                                        (unsigned int)&v95,
                                                        (__int64)v26);
            }
            else
            {
              if ( v46 != 2 )
                goto LABEL_80;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v56,
                                                        (_DWORD)v57,
                                                        v21,
                                                        (unsigned int)&v95,
                                                        (__int64)v59);
            }
            v8 = 0LL;
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_114;
            v24 = v46;
            v57 = &v95;
          }
          else
          {
            v27 = v56;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v56, Buffer, 1, v47) < 0 )
              goto LABEL_88;
            v24 = v46;
            v57 = (__int16 *)(*(_QWORD *)(*(_QWORD *)(v27 + 24) + 16LL) + 28LL * v47[0]);
          }
LABEL_80:
          if ( v18 )
          {
            v28 = -1LL;
            do
              ++v28;
            while ( v18[v28] );
            v18 += v28 + 1;
          }
          else
          {
            v18 = 0LL;
          }
          v46 = v24 + 1;
          if ( v24 + 1 >= v19 )
            break;
          v20 = v68;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v30 = v48 + 1;
        v48 = v30;
        if ( v30 > 0xFFFF )
          goto LABEL_88;
        v8 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v30);
        v44 = v8;
        if ( !v8 )
        {
LABEL_119:
          InstallUILanguage = -1073741670;
LABEL_90:
          if ( Src )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Src);
          v15 = v67;
          goto LABEL_93;
        }
        *((_QWORD *)&v50 + 1) = v8;
        v31 = 2 * v30;
        v32 = v8;
        LOWORD(v50) = v31;
        *(_QWORD *)&v68 = v31;
        v33 = 0;
        WORD1(v50) = v31;
        if ( v45 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v52) < 0 )
              break;
            DestinationString.Buffer = v64;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v52, (__int64)&DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v32, v48, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_119;
            v34 = -1LL;
            do
              ++v34;
            while ( v32[v34] );
            v48 += -1 - v34;
            if ( v32 )
            {
              v35 = -1LL;
              do
                ++v35;
              while ( v32[v35] );
              v32 += v35 + 1;
            }
            if ( v4 )
            {
              v36 = -1LL;
              do
                ++v36;
              while ( v4[v36] );
              v4 += v36 + 1;
            }
            else
            {
              v4 = 0LL;
            }
            if ( ++v33 >= v45 )
              goto LABEL_136;
          }
LABEL_114:
          InstallUILanguage = -1073741811;
          goto LABEL_90;
        }
LABEL_136:
        *v32 = 0;
        v4 = v8;
        v37 = v68;
      }
      else
      {
        v8 = (_WORD *)*((_QWORD *)&v50 + 1);
        v37 = WORD1(v50);
        v31 = v50;
      }
      v7 = v45;
    }
    else
    {
      v37 = 4;
      LODWORD(v50) = 262146;
      v8 = &unk_180121B6C;
      *((_QWORD *)&v50 + 1) = &unk_180121B6C;
      v31 = 2;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&v49, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v70 = 48;
      v71 = 0LL;
      v66 = 0LL;
      v73 = 64;
      v72 = &v49;
      v74 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v49, L"InstallLanguageFallback");
      v38 = -1LL;
      do
        ++v38;
      while ( v8[v38] );
      WORD1(v50) = -2 - 2 * v38 + v37;
      if ( v8 )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v8[v39] );
        v40 = &v8[v39 + 1];
      }
      else
      {
        v40 = 0LL;
      }
      *((_QWORD *)&v50 + 1) = v40;
      InstallUILanguage = RtlpGetMultiStringLength(v40, &v50, &v45);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v31 = v50;
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_191;
      v7 = v45;
      v37 = WORD1(v50);
      v60 = v45;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v60 = v7;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, 0, v11, v12, (__int64)&v65);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v49, L"Control Panel\\Desktop");
      v75 = 48;
      v61 = 0LL;
      v76 = v65;
      v78 = 64;
      v77 = &v49;
      v79 = 0LL;
      InstallUILanguage = NtOpenKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v49, L"PreferredUILanguagesPending");
      }
      else
      {
        if ( v7 < 2 )
          goto LABEL_88;
        RtlInitUnicodeString(&v49, L"LanguageConfigurationPending");
        v41 = 0LL;
        v81 = v61;
        v82 = &v49;
        v80 = 48;
        v83 = 64;
        v84 = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_89;
        RtlInitUnicodeString(&v49, v4);
        if ( v4 )
        {
          v42 = -1LL;
          do
            ++v42;
          while ( v4[v42] );
          v41 = &v4[v42 + 1];
        }
        WORD1(v50) = v37 - v49.MaximumLength;
        *((_QWORD *)&v50 + 1) = v41;
        LOWORD(v50) = v31 - v49.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v53 = v7;
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v68 = v50;
      InstallUILanguage = RtlpSetMachineUILanguagesImmediate();
      v54 = v7;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_187;
    RtlInitUnicodeString(&v49, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v85 = 48;
    v86 = 0LL;
    v62 = 0LL;
    v88 = 64;
    v87 = &v49;
    v89 = 0LL;
    InstallUILanguage = ZwCreateKey();
    if ( InstallUILanguage < 0 )
      goto LABEL_89;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&v49, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
      {
LABEL_186:
        v54 = v7;
LABEL_187:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
      }
LABEL_89:
      v8 = v44;
      goto LABEL_90;
    }
    if ( v7 >= 2 )
    {
      RtlInitUnicodeString(&v49, L"LanguageConfiguration");
      v91 = v62;
      v92 = &v49;
      v90 = 48;
      v93 = 64;
      v94 = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v49, v4);
      if ( v4 )
      {
        v43 = -1LL;
        do
          ++v43;
        while ( v4[v43] );
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
        goto LABEL_186;
LABEL_191:
      v8 = v44;
      goto LABEL_90;
    }
LABEL_88:
    InstallUILanguage = -1073741811;
    goto LABEL_89;
  }
  return (unsigned int)InstallUILanguage;
}
