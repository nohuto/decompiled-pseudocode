/*
 * XREFs of ExpSetCurrentUserUILanguage @ 0x1405493B0
 * Callers:
 *     NtSetDefaultUILanguage @ 0x14054939C (NtSetDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1401328A8 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1401328C8 (OpenGlobalizationUserSettingsKey.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 *     NtQueryInstallUILanguage @ 0x1404C1B84 (NtQueryInstallUILanguage.c)
 *     ExpValidateLocale @ 0x1406AC844 (ExpValidateLocale.c)
 */

NTSTATUS __fastcall ExpSetCurrentUserUILanguage(PCWSTR SourceString, unsigned __int16 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  char v6; // r12
  char v7; // r14
  char v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  NTSTATUS InstallUILanguage; // ebx
  int v15; // eax
  int v16; // edi
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rax
  ULONG v22; // ebx
  unsigned int v23; // ecx
  void *v24; // rbx
  void *v25; // rcx
  ULONG v26; // ebx
  NTSTATUS v27; // esi
  size_t v28; // r15
  ULONG v29; // esi
  unsigned int v30; // r14d
  void *v31; // rcx
  _WORD *v32; // rcx
  unsigned int v33; // eax
  __int16 v34; // ax
  _DWORD *Teb; // rcx
  char v36; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = a2;
  memset((void *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 448), 0, 0xAAuLL);
  v5 = v3;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  v6 = 1;
  *(_BYTE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) = 1;
  v7 = 0;
  v8 = 0;
  *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 0;
  result = OpenGlobalizationUserSettingsKey(
             v9,
             3u,
             v10,
             v11,
             (PHANDLE)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 144));
  if ( result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), SourceString);
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x90);
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  if ( (_WORD)v3 )
  {
    Key = ExpValidateLocale(v3);
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key < 0 )
      goto LABEL_23;
    Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key >= 0 )
    {
      *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
      *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
      v32 = (_WORD *)(v2 + 206);
      do
      {
        v33 = v5 & 0xF;
        if ( v33 > 9 )
          v34 = v33 + 55;
        else
          v34 = v33 + 48;
        *v32-- = v34;
        v5 >>= 4;
      }
      while ( (unsigned __int64)v32 >= v2 + 192 );
      Key = ZwSetValueKey(
              *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
              (PUNICODE_STRING)(v2 + 16),
              0,
              1u,
              (PVOID)(v2 + 192),
              0x12u);
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
      goto LABEL_75;
    }
    goto LABEL_22;
  }
  Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
  if ( Key < 0 )
    goto LABEL_22;
  *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
         (PUNICODE_STRING)(v2 + 16),
         KeyValuePartialInformation,
         (PVOID)(v2 + 192),
         0x100u,
         (PULONG)(v2 + 8)) >= 0
    && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) > 4u
    && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
    if ( RtlUnicodeStringToInteger((PCUNICODE_STRING)(v2 + 16), 0x10u, (PULONG)(v2 + 152)) >= 0
      && (int)DownLevelLangIDToLanguageName(
                *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98),
                (unsigned __int16 *)(v2 + 448),
                85,
                0) > 1 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C0 + 2 * v21) );
      ZwSetValueKey(
        *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
        (PUNICODE_STRING)(v2 + 16),
        0,
        7u,
        (PVOID)(v2 + 448),
        2 * v21 + 2);
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
    ZwDeleteValueKey(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), (PUNICODE_STRING)(v2 + 16));
    v8 = 1;
    *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
         (PUNICODE_STRING)(v2 + 16),
         KeyValuePartialInformation,
         (PVOID)(v2 + 192),
         0x100u,
         (PULONG)(v2 + 8)) >= 0 )
  {
    v22 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
    if ( v22 >= 4 && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
      if ( ZwSetValueKey(
             *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
             (PUNICODE_STRING)(v2 + 16),
             0,
             7u,
             (PVOID)(v2 + 204),
             v22) >= 0 )
      {
        v8 = 1;
        *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
        v23 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
        if ( v23 + 12 < 0x100 )
        {
          *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCA + 2 * ((unsigned __int64)v23 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
          ZwDeleteValueKey(
            *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
            (PUNICODE_STRING)(v2 + 16));
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 160), (PCWSTR)(v2 + 204));
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfigurationPending");
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x90);
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 120;
          *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
          if ( ZwOpenKey((PHANDLE)(v2 + 136), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0
            && ZwQueryValueKey(
                 *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                 (PUNICODE_STRING)(v2 + 160),
                 KeyValuePartialInformation,
                 (PVOID)(v2 + 640),
                 0x210u,
                 (PULONG)(v2 + 8)) >= 0
            && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfiguration");
            *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
            *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x90);
            *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
            *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 120;
            *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
            if ( ZwCreateKey((PHANDLE)(v2 + 56), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 0, 0LL) >= 0 )
            {
              if ( ZwSetValueKey(
                     *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                     (PUNICODE_STRING)(v2 + 160),
                     0,
                     7u,
                     (PVOID)(v2 + 652),
                     *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288)) >= 0 )
                ZwDeleteValueKey(
                  *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                  (PUNICODE_STRING)(v2 + 160));
              ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
            }
          }
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x90);
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  ZwOpenKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v2 + 120),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
  {
    v24 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    if ( v24 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
      ZwDeleteValueKey(v24, (PUNICODE_STRING)(v2 + 16));
    }
    v16 = -1;
    goto LABEL_16;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
         (PUNICODE_STRING)(v2 + 16),
         KeyValuePartialInformation,
         (PVOID)(v2 + 192),
         0x100u,
         (PULONG)(v2 + 8)) >= 0
    && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) >= 4u
    && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
  {
    goto LABEL_12;
  }
  *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 0;
  InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(v2 + 40));
  if ( InstallUILanguage >= 0 )
  {
    v15 = DownLevelLangIDToLanguageName(
            *(_WORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
            (unsigned __int16 *)(v2 + 204),
            128,
            0);
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v15;
    if ( !v15 )
    {
      InstallUILanguage = -1073741823;
      goto LABEL_66;
    }
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 2 * v15;
  }
  if ( InstallUILanguage >= 0 )
  {
LABEL_12:
    if ( !*(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                       + 0x90);
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      Key = ZwCreateKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
      if ( Key < 0 )
        goto LABEL_75;
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
    v16 = -1;
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
           (PUNICODE_STRING)(v2 + 16),
           0,
           7u,
           (PVOID)(v2 + 204),
           *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8)) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
    goto LABEL_15;
  }
LABEL_66:
  v16 = -1;
  DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
  v25 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( v25 )
    ZwDeleteValueKey(v25, (PUNICODE_STRING)(v2 + 16));
LABEL_15:
  ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
LABEL_16:
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x20);
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0 )
  {
    v26 = 0;
    do
    {
      memset((void *)(v2 + 192), 0, 0x100uLL);
      v27 = ZwEnumerateValueKey(
              *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
              v26,
              KeyValueBasicInformation,
              (PVOID)(v2 + 192),
              0xFEu,
              (PULONG)(v2 + 8));
      if ( v27 >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
        if ( ZwDeleteValueKey(
               *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
               (PUNICODE_STRING)(v2 + 16)) < 0 )
        {
          DbgPrint(
            "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
            (const wchar_t *)(v2 + 204));
          ++v26;
        }
      }
    }
    while ( v27 >= 0 );
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v2 + 120),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
  {
    Key = 0;
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
LABEL_75:
    v7 = *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    v6 = v7;
    goto LABEL_23;
  }
  do
  {
    memset((void *)(v2 + 640), 0, 0x210uLL);
    Key = ZwEnumerateValueKey(
            *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
            ++v16,
            KeyValueFullInformation,
            (PVOID)(v2 + 640),
            0x20Eu,
            (PULONG)(v2 + 8));
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key >= 0 )
    {
      v28 = *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290);
      if ( v28 + 24 <= 0x210
        && (v29 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C),
            v30 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288),
            v29 + v30 <= 0x210)
        && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7
        && *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) < 0xAAu )
      {
        memset((void *)(v2 + 448), 0, 0xAAuLL);
        memmove((void *)(v2 + 448), (const void *)(v2 + 660), v28);
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 448));
        v31 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
        if ( !v31 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x20);
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 120;
          *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
          Key = ZwCreateKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
          if ( Key < 0 )
            goto LABEL_21;
          *(_BYTE *)v2 = 0;
          v31 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
          v29 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
          v30 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
        }
        Key = ZwSetValueKey(v31, (PUNICODE_STRING)(v2 + 16), 0, 7u, (PVOID)(v30 + v2 + 640), v29);
        *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
        if ( Key < 0 )
        {
          DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v2 + 448));
          Key = 0;
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
        }
      }
      else
      {
        DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v16);
      }
    }
  }
  while ( Key >= 0 );
  ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
LABEL_21:
  v7 = *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
  v8 = *(_BYTE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 2);
LABEL_22:
  v6 = *(_BYTE *)v2;
LABEL_23:
  if ( v7 )
    ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
  v17 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
  if ( v17 )
  {
    if ( ZwEnumerateValueKey(v17, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
    ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
  }
  if ( *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
  {
    v18 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    if ( !v18 || v6 && ZwEnumerateValueKey(v18, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
    {
      v19 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      if ( v19 )
        ZwDeleteKey(v19);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v2 + 8)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
  }
  v20 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v20 )
    ZwClose(v20);
  CloseGlobalizationUserSettingsKey(*(char **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90));
  if ( v8 == 1 )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
      Teb[1530] = 0;
  }
  return Key;
}
