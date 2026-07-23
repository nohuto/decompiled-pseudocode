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
  NTSTATUS InstallUILanguage; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // sf
  LANGID InstallUILanguageId[2]; // [rsp+48h] [rbp-C0h] BYREF
  BOOLEAN WasEnabled[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 Data; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING String; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v15[86]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+368h] [rbp+260h] BYREF
  int v17; // [rsp+374h] [rbp+26Ch]

  InstallUILanguageId[0] = 0;
  memset(v15, 0, sizeof(v15));
  InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
  if ( InstallUILanguage >= 0 )
  {
    String.Buffer = (unsigned __int16 *)v15;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String)
      && (int)RtlpCreateProcessRegistryInfo(&KeyHandle, v3, v4) >= 0
      && KeyHandle
      && (int)RtlpGetInstalledLanguageType(KeyHandle, String.Buffer, &Data, 0LL) >= 0
      && (_DWORD)Data != 4 )
    {
      InstallUILanguage = NtFlushInstallUILanguage(InstallUILanguageId[0], 1u);
      if ( InstallUILanguage >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      InstallUILanguage = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_10;
  v5 = InstallUILanguage < 0;
  if ( !InstallUILanguage )
  {
LABEL_11:
    if ( v5 )
      return (unsigned int)InstallUILanguage;
    goto LABEL_12;
  }
  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, WasEnabled) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, WasEnabled);
  InstallUILanguage = ZwShutdownSystem(ShutdownPowerOff);
  if ( InstallUILanguage < 0 )
  {
    InstallUILanguage = -1073741616;
LABEL_10:
    v5 = InstallUILanguage < 0;
    goto LABEL_11;
  }
LABEL_12:
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
  {
    LODWORD(Data) = 1;
    if ( NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      LODWORD(Data) = v17 + 1;
    ZwSetValueKey(KeyHandle, &String, 0, 4u, &Data, 4u);
    NtClose(KeyHandle);
  }
  return (unsigned int)InstallUILanguage;
}
