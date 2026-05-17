/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800DE4C0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     CloseGlobalizationUserSettingsKey @ 0x180006D78 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009598 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetInstalledLanguageType @ 0x180089190 (RtlpGetInstalledLanguageType.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtDeleteKey @ 0x1800A6970 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1800A69D0 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A6BD0 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x1800A6F50 (NtIsUILanguageComitted.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlStringCchCopyW @ 0x1800DCD90 (RtlStringCchCopyW.c)
 *     RtlUnicodeStringToLcid @ 0x1800DCE2C (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800DDC54 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800DDDAC (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  WCHAR *v2; // rdi
  char v3; // r15
  char v4; // r12
  int ProcessRegistryInfo; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int16 *v8; // rsi
  __int16 *v9; // r14
  __int16 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v16; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v17; // [rsp+68h] [rbp-A0h]
  __int16 *v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h]
  HANDLE v20; // [rsp+80h] [rbp-88h]
  UNICODE_STRING *v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  __int128 v23; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  int v25[4]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR SourceString[88]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v27[88]; // [rsp+178h] [rbp+70h] BYREF
  _WORD v28[176]; // [rsp+228h] [rbp+120h] BYREF
  _WORD v29[264]; // [rsp+388h] [rbp+280h] BYREF

  v2 = (WCHAR *)a2;
  Handle = 0LL;
  v3 = 0;
  v17 = 0LL;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)&v15);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v15, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v2 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v15) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v18, v6, v7);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v8 = v18;
  if ( !v18 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = RtlpGetInstalledLanguageType((__int64)v18, v2, v25, &v18);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( v25[0] == 1 )
    goto LABEL_23;
  if ( v25[0] == 2 )
  {
    v10 = v18;
LABEL_22:
    v3 = 1;
    ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v8, v10, 0LL, v29, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( v25[0] != 4 )
    return (unsigned int)-1073741811;
  v4 = 1;
  memset(v27, 0, 0xACuLL);
  RtlStringCchCopyW(v27, 85LL, (__int64)v2);
  v2 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = RtlpGetDefaultLanguageBaseOrParent(
                          (__int64)v8,
                          (__int64)v18,
                          v25,
                          (__int64)SourceString,
                          0x55u,
                          0LL,
                          0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v9 = *(__int16 **)v25;
  if ( !*(_QWORD *)v25 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v8, v18, v27, v28, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v10 = v9;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v2);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v15) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = NtFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(1032LL, v29, &v15);
    }
    else
    {
      RtlInitUnicodeString(&v16, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      Handle = 0LL;
      v21 = &v16;
      LODWORD(v19) = 48;
      v20 = 0LL;
      v22 = 64;
      v23 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v16, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        NtClose(Handle);
      }
    }
    if ( v4 )
    {
      RtlpSetPreferredUILanguages(32776LL, v27, &v15);
      RtlpSetPreferredUILanguages(36872LL, v28, &v15);
    }
    else
    {
      RtlInitUnicodeString(&v16, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0LL;
      v21 = &v16;
      LODWORD(v19) = 48;
      v20 = 0LL;
      v22 = 64;
      v23 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v16, L"PreferredUILanguages");
        ZwDeleteValueKey();
        NtClose(Handle);
        RtlInitUnicodeString(
          &v16,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0LL;
        v21 = &v16;
        LODWORD(v19) = 48;
        v20 = 0LL;
        v22 = 64;
        v23 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          NtDeleteKey();
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, 0, v11, v12, (__int64)&Handle) >= 0 )
        {
          RtlInitUnicodeString(&v16, L"Control Panel\\Desktop\\MuiCached");
          v20 = Handle;
          v17 = 0LL;
          v21 = &v16;
          LODWORD(v19) = 48;
          v22 = 64;
          v23 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v16, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v16, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            NtClose(v17);
          }
          CloseGlobalizationUserSettingsKey((char *)Handle);
        }
      }
    }
    RtlInitUnicodeString(&v16, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
    Handle = 0LL;
    v21 = &v16;
    LODWORD(v19) = 48;
    v20 = 0LL;
    v22 = 64;
    v23 = 0LL;
    if ( (int)NtOpenKey() >= 0 )
    {
      NtDeleteKey();
      NtClose(Handle);
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
