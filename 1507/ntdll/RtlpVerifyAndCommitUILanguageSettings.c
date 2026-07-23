/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800476E4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x18006F4A0 (RtlAdjustPrivilege.c)
 *     RtlpGetInstalledLanguageType @ 0x180081060 (RtlpGetInstalledLanguageType.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x180093AD0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180093F00 (ZwSetValueKey.c)
 *     NtFlushInstallUILanguage @ 0x180094680 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180094770 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180094C70 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x180095280 (ZwShutdownSystem.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  NTSTATUS InstallUILanguage; // ebx
  bool v3; // sf
  LANGID InstallUILanguageId[2]; // [rsp+48h] [rbp-C0h] BYREF
  BOOLEAN WasEnabled[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 Data; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING String; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v13[86]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+368h] [rbp+260h] BYREF
  int v15; // [rsp+374h] [rbp+26Ch]

  InstallUILanguageId[0] = 0;
  memset(v13, 0, sizeof(v13));
  InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
  if ( InstallUILanguage >= 0 )
  {
    String.Buffer = (unsigned __int16 *)v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String)
      && (int)RtlpCreateProcessRegistryInfo(&KeyHandle) >= 0
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
  v3 = InstallUILanguage < 0;
  if ( !InstallUILanguage )
  {
LABEL_11:
    if ( v3 )
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
    v3 = InstallUILanguage < 0;
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
      LODWORD(Data) = v15 + 1;
    ZwSetValueKey(KeyHandle, &String, 0, 4u, &Data, 4u);
    NtClose(KeyHandle);
  }
  return (unsigned int)InstallUILanguage;
}
