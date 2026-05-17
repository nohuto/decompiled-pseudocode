/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x1800ECA20
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x1800A6BD0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A6DB0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A77F0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString)
{
  int InstallUILanguage; // ebx
  unsigned __int16 v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int16 v9; // [rsp+80h] [rbp+40h] BYREF
  int v10; // [rsp+88h] [rbp+48h] BYREF

  v10 = 0;
  v9 = -1;
  v7 = 0LL;
  if ( SourceString )
  {
    InstallUILanguage = NtQueryInstallUILanguage();
    if ( InstallUILanguage >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v10) )
      {
        v3 = v10;
        InstallUILanguage = NtFlushInstallUILanguage();
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = RtlpCreateProcessRegistryInfo(&v7, v4, v5);
          if ( InstallUILanguage >= 0 )
          {
            InstallUILanguage = RtlpMuiRegGetInstalledLanguageIndexByLangId(v7, v3, 1, &v9);
            if ( InstallUILanguage < 0 )
              NtFlushInstallUILanguage();
            else
              InstallUILanguage = NtFlushInstallUILanguage();
            ZwGetMUIRegistryInfo();
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstallUILanguage;
}
