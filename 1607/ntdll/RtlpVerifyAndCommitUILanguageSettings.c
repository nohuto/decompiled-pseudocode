/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x18007B990 (RtlAdjustPrivilege.c)
 *     RtlpGetInstalledLanguageType @ 0x18008DA9C (RtlpGetInstalledLanguageType.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A67C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A7F70 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A8150 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A8BB0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A9830 (ZwShutdownSystem.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  int v2; // ebx
  bool v3; // sf
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v6; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v10; // [rsp+68h] [rbp-A0h]
  _BYTE v11[8]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  int v13; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+90h] [rbp-78h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  __int128 v17; // [rsp+A8h] [rbp-60h]
  _BYTE v18[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v19[12]; // [rsp+368h] [rbp+260h] BYREF
  int v20; // [rsp+374h] [rbp+26Ch]

  v6 = 0;
  memset(v18, 0, sizeof(v18));
  v2 = NtQueryInstallUILanguage(&v6);
  if ( v2 >= 0 )
  {
    v10 = v18;
    LODWORD(v9) = 11141120;
    if ( RtlLCIDToCultureName(v6, (__int64)&v9)
      && (int)RtlpCreateProcessRegistryInfo((__int64 *)&Handle) >= 0
      && Handle
      && (int)RtlpGetInstalledLanguageType(Handle, v10, &v7, 0LL) >= 0
      && (_DWORD)v7 != 4 )
    {
      v2 = NtFlushInstallUILanguage(v6, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_10;
  v3 = v2 < 0;
  if ( !v2 )
  {
LABEL_11:
    if ( v3 )
      return (unsigned int)v2;
    goto LABEL_12;
  }
  if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v5) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v5);
  v2 = ZwShutdownSystem(2LL);
  if ( v2 < 0 )
  {
    v2 = -1073741616;
LABEL_10:
    v3 = v2 < 0;
    goto LABEL_11;
  }
LABEL_12:
  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v13 = 48;
  v14 = 0LL;
  v16 = 64;
  v17 = 0LL;
  if ( (int)ZwCreateKey(&Handle, 131103LL, &v13, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    LODWORD(v7) = 1;
    if ( (int)NtQueryValueKey(Handle, &v9, 2LL, v19, 20, v11) >= 0 )
      LODWORD(v7) = v20 + 1;
    ZwSetValueKey(Handle, &v9, 0LL, 4LL, &v7, 4);
    NtClose(Handle);
  }
  return (unsigned int)v2;
}
