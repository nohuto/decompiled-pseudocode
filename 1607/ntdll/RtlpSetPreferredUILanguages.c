/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800E7EF0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlpCheckMuiMultiStringSafe @ 0x180010638 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEA0 (RtlUnicodeStringToInteger.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706B4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070870 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C20 (RtlpInitializeLangRegistryInfo.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A67C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A8150 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A8BB0 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlStringCchCatW @ 0x1800E5FFC (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800E6544 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6D20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800E72A0 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7D0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1800F4448 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v3; // edi
  WCHAR *v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  unsigned int v7; // r13d
  WCHAR *v8; // rsi
  int InstallUILanguage; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  wchar_t *Heap; // rax
  wchar_t *v15; // r15
  unsigned __int64 v16; // rsi
  WCHAR *v17; // r8
  const WCHAR *v18; // r14
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int16 v21; // si
  wchar_t *Buffer; // rdx
  __int64 v23; // rax
  int v24; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  _WORD *v26; // rcx
  _QWORD *v27; // rsi
  __int64 v28; // rax
  unsigned int v30; // r14d
  unsigned __int16 v31; // r15
  WCHAR *v32; // r14
  int v33; // r13d
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  char *v40; // rcx
  HANDLE v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  WCHAR *v44; // rcx
  WCHAR *v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh]
  _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v54; // [rsp+88h] [rbp-78h]
  unsigned int v55; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  PVOID v57; // [rsp+98h] [rbp-68h] BYREF
  __int16 *v58; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v60[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+BCh] [rbp-44h]
  HANDLE v62; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v63; // [rsp+C8h] [rbp-38h] BYREF
  void *Src; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h]
  HANDLE CurrentUserKey; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t *v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v70; // [rsp+110h] [rbp+10h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _OBJECT_ATTRIBUTES v72; // [rsp+148h] [rbp+48h] BYREF
  _OBJECT_ATTRIBUTES v73; // [rsp+178h] [rbp+78h] BYREF
  _OBJECT_ATTRIBUTES v74; // [rsp+1A8h] [rbp+A8h] BYREF
  _OBJECT_ATTRIBUTES v75; // [rsp+1D8h] [rbp+D8h] BYREF
  __int16 v76; // [rsp+208h] [rbp+108h] BYREF
  __int64 v77; // [rsp+20Ah] [rbp+10Ah]
  __int64 v78; // [rsp+212h] [rbp+112h]
  __int64 v79; // [rsp+21Ah] [rbp+11Ah]
  __int16 v80; // [rsp+222h] [rbp+122h]

  v70 = a3;
  v3 = a1;
  CurrentUserKey = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v54 = 0;
  v6 = 0;
  v55 = 0;
  v7 = 0;
  v61 = 0;
  v8 = 0LL;
  v46 = 0;
  v48[0] = 0;
  v58 = 0LL;
  v76 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0;
  v45 = 0LL;
  v49 = 0;
  v57 = 0LL;
  BaseAddress = 0LL;
  Src = 0LL;
  InstallUILanguageId[0] = 0;
  v68 = 0LL;
  KeyHandle = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v57 )
      RtlpMuiFreeLangRegistryInfo(v57);
    *v70 = v5 + v6 + v61;
    return (unsigned int)InstallUILanguage;
  }
  if ( (v3 & 0xC) == 0 )
    LOWORD(v3) = v3 | 8;
  if ( (v3 & 0xE410) == 0 )
    LOWORD(v3) = v3 | 0x4000;
  if ( (v3 & 0x1C00) == 0 )
    LOWORD(v3) = v3 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v10 = RtlpCreateProcessRegistryInfo(&v57);
  else
    v10 = RtlpInitializeLangRegistryInfo(&v57);
  InstallUILanguage = v10;
  if ( v10 >= 0 )
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
        InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
        if ( InstallUILanguage < 0 )
        {
LABEL_98:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v62 )
          {
            NtClose(v62);
            v62 = 0LL;
          }
          if ( v63 )
          {
            NtClose(v63);
            v63 = 0LL;
          }
          if ( CurrentUserKey )
          {
            CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
            CurrentUserKey = 0LL;
          }
          if ( v8 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
          v6 = v55;
          goto LABEL_109;
        }
        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        v68 = Heap;
        v15 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          v5 = 0;
          goto LABEL_98;
        }
        String.Buffer = Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
        {
          InstallUILanguage = -1073741811;
LABEL_93:
          if ( v15 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v5 = v54;
          goto LABEL_98;
        }
        v16 = (unsigned __int64)String.Length >> 1;
        if ( (v3 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &Src);
          if ( InstallUILanguage < 0 )
          {
            v8 = 0LL;
            goto LABEL_90;
          }
          v4 = (WCHAR *)Src;
          LOWORD(v3) = v3 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, &v47, 0LL);
        if ( InstallUILanguage < 0 )
        {
          v8 = v17;
          goto LABEL_90;
        }
        memmove(&v15[v16 + 1], v4, 2LL * ((unsigned __int16)v47 + 1));
        v8 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v57, v15);
        if ( InstallUILanguage < 0 )
          goto LABEL_90;
        v4 = v15;
      }
      v46 = 0;
      InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v46);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v46 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_90;
      }
      v18 = v4;
      BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !BaseAddress )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_90;
      }
      v19 = v46;
      v47 = 0;
      if ( v46 )
      {
        v20 = v3 & 4;
        LODWORD(v69) = v20;
        while ( 1 )
        {
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, v18);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_88;
            v21 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = (wchar_t *)BaseAddress;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
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
            v49 += v23 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v18);
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_88;
            v21 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          v24 = v47;
          v11 = 0LL;
          if ( v47 )
          {
            if ( v47 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v58 & 1) != 0 )
              {
LABEL_115:
                InstallUILanguage = -1073741811;
                v8 = 0LL;
                goto LABEL_90;
              }
              if ( (*(_BYTE *)v58 & 2) != 0 )
              {
                v26 = v60;
              }
              else
              {
                if ( (*(_BYTE *)v58 & 4) == 0 || v19 > 2 )
                  goto LABEL_115;
                v26 = v48;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v57,
                                                        (_DWORD)v58,
                                                        v21,
                                                        (unsigned int)&v76,
                                                        (__int64)v26);
            }
            else
            {
              if ( v47 != 2 )
                goto LABEL_80;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v57,
                                                        (_DWORD)v58,
                                                        v21,
                                                        (unsigned int)&v76,
                                                        (__int64)v60);
            }
            v8 = 0LL;
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_114;
            v24 = v47;
            v58 = &v76;
          }
          else
          {
            v27 = v57;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v57, Buffer, 1, v48) < 0 )
              goto LABEL_88;
            v24 = v47;
            v58 = (__int16 *)(*(_QWORD *)(v27[3] + 16LL) + 28LL * v48[0]);
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
          v47 = v24 + 1;
          if ( v24 + 1 >= v19 )
            break;
          v20 = v69;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v30 = v49 + 1;
        v49 = v30;
        if ( v30 > 0xFFFF )
          goto LABEL_88;
        v8 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v30);
        v45 = v8;
        if ( !v8 )
        {
LABEL_119:
          InstallUILanguage = -1073741670;
LABEL_90:
          if ( Src )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
          v15 = v68;
          goto LABEL_93;
        }
        Data[1] = v8;
        v31 = 2 * v30;
        v32 = v8;
        LOWORD(Data[0]) = v31;
        *(_QWORD *)&v69 = v31;
        v33 = 0;
        WORD1(Data[0]) = v31;
        if ( v46 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              break;
            DestinationString.Buffer = (wchar_t *)BaseAddress;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v32, v49, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_119;
            v34 = -1LL;
            do
              ++v34;
            while ( v32[v34] );
            v49 += -1 - v34;
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
            if ( ++v33 >= v46 )
              goto LABEL_136;
          }
LABEL_114:
          InstallUILanguage = -1073741811;
          goto LABEL_90;
        }
LABEL_136:
        *v32 = 0;
        v4 = v8;
        v37 = v69;
      }
      else
      {
        v8 = (WCHAR *)Data[1];
        v37 = WORD1(Data[0]);
        v31 = (unsigned __int16)Data[0];
      }
      v7 = v46;
    }
    else
    {
      v37 = 4;
      LODWORD(Data[0]) = 262146;
      v8 = (WCHAR *)&unk_180121C0C;
      Data[1] = &unk_180121C0C;
      v31 = 2;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      KeyHandle = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &String;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, L"InstallLanguageFallback");
      v38 = -1LL;
      do
        ++v38;
      while ( v8[v38] );
      WORD1(Data[0]) = -2 - 2 * v38 + v37;
      if ( v8 )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v8[v39] );
        v40 = (char *)&v8[v39 + 1];
      }
      else
      {
        v40 = 0LL;
      }
      Data[1] = v40;
      InstallUILanguage = RtlpGetMultiStringLength(v40, Data, &v46);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v31 = (unsigned __int16)Data[0];
      v8 = (WCHAR *)Data[1];
      InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
      if ( InstallUILanguage < 0 )
        goto LABEL_193;
      v7 = v46;
      v37 = WORD1(Data[0]);
      v61 = v46;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v61 = v7;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v11, v12, &CurrentUserKey);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
      v72.Length = 48;
      v62 = 0LL;
      v72.RootDirectory = CurrentUserKey;
      v72.Attributes = 64;
      v72.ObjectName = &String;
      *(_OWORD *)&v72.SecurityDescriptor = 0LL;
      InstallUILanguage = NtOpenKey(&v62, 0xF003Fu, &v72);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
        v41 = v62;
      }
      else
      {
        if ( v7 < 2 )
          goto LABEL_88;
        RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
        v8 = 0LL;
        v73.RootDirectory = v62;
        v73.ObjectName = &String;
        v73.Length = 48;
        v73.Attributes = 64;
        *(_OWORD *)&v73.SecurityDescriptor = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v73, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_89;
        RtlInitUnicodeString(&String, v4);
        if ( v4 )
        {
          v42 = -1LL;
          do
            ++v42;
          while ( v4[v42] );
          v8 = &v4[v42 + 1];
        }
        v37 -= String.MaximumLength;
        v41 = Handle;
        WORD1(Data[0]) = v37;
        Data[1] = v8;
        LOWORD(Data[0]) = v31 - String.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey(v41, &String, 0, 7u, v8, v37);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v54 = v7;
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v69 = *(_OWORD *)Data;
      InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&v69);
      v55 = v7;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_189;
    RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v74.Length = 48;
    v74.RootDirectory = 0LL;
    v63 = 0LL;
    v74.Attributes = 64;
    v74.ObjectName = &String;
    *(_OWORD *)&v74.SecurityDescriptor = 0LL;
    InstallUILanguage = ZwCreateKey(&v63, 0xF003Fu, &v74, 0, 0LL, 0, 0LL);
    if ( InstallUILanguage < 0 )
      goto LABEL_89;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&String, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey(v63, &String, 0, 7u, v8, v37);
      if ( InstallUILanguage >= 0 )
      {
LABEL_188:
        v55 = v7;
LABEL_189:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
      }
LABEL_89:
      v8 = v45;
      goto LABEL_90;
    }
    if ( v7 >= 2 )
    {
      RtlInitUnicodeString(&String, L"LanguageConfiguration");
      v75.RootDirectory = v63;
      v75.ObjectName = &String;
      v75.Length = 48;
      v75.Attributes = 64;
      *(_OWORD *)&v75.SecurityDescriptor = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v75, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, v4);
      if ( v4 )
      {
        v43 = -1LL;
        do
          ++v43;
        while ( v4[v43] );
        v44 = &v4[v43 + 1];
      }
      else
      {
        v44 = 0LL;
      }
      InstallUILanguage = ZwSetValueKey(Handle, &String, 0, 7u, v44, (unsigned __int16)(v37 - String.MaximumLength));
      if ( InstallUILanguage >= 0 )
        goto LABEL_188;
LABEL_193:
      v8 = v45;
      goto LABEL_90;
    }
LABEL_88:
    InstallUILanguage = -1073741811;
    goto LABEL_89;
  }
  return (unsigned int)InstallUILanguage;
}
