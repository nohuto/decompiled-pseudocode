/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x180078F20 (RtlAdjustPrivilege.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180084C2C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpGetInstalledLanguageType @ 0x180089190 (RtlpGetInstalledLanguageType.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A5460 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A5CB0 (ZwSetValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A6BD0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A6DB0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A77F0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A8410 (ZwShutdownSystem.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // sf
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  bool v8[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp-A0h]
  _BYTE v13[8]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  int v15; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-68h]
  __int128 v19; // [rsp+A8h] [rbp-60h]
  _QWORD v20[86]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v21[12]; // [rsp+368h] [rbp+260h] BYREF
  int v22; // [rsp+374h] [rbp+26Ch]

  LOWORD(v7) = 0;
  memset(v20, 0, sizeof(v20));
  v2 = NtQueryInstallUILanguage(&v7);
  if ( v2 >= 0 )
  {
    v12 = v20;
    LODWORD(v11) = 11141120;
    if ( RtlLCIDToCultureName((unsigned __int16)v7, (__int64)&v11)
      && (int)RtlpCreateProcessRegistryInfo((__int64 *)&Handle, v3, v4) >= 0
      && Handle
      && (int)RtlpGetInstalledLanguageType(Handle, v12, &v9, 0LL) >= 0
      && (_DWORD)v9 != 4 )
    {
      v2 = NtFlushInstallUILanguage((unsigned __int16)v7, 1LL);
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
  v5 = v2 < 0;
  if ( !v2 )
  {
LABEL_11:
    if ( v5 )
      return (unsigned int)v2;
    goto LABEL_12;
  }
  if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, v8) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1, 0, v8);
  v2 = ZwShutdownSystem(2LL);
  if ( v2 < 0 )
  {
    v2 = -1073741616;
LABEL_10:
    v5 = v2 < 0;
    goto LABEL_11;
  }
LABEL_12:
  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v15 = 48;
  v16 = 0LL;
  v18 = 64;
  v19 = 0LL;
  if ( (int)ZwCreateKey(&Handle, 131103LL, &v15, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    LODWORD(v9) = 1;
    if ( (int)NtQueryValueKey(Handle, &v11, 2LL, v21, 20, v13) >= 0 )
      LODWORD(v9) = v22 + 1;
    ZwSetValueKey(Handle, &v11, 0LL, 4LL, &v9, 4);
    NtClose(Handle);
  }
  return (unsigned int)v2;
}
