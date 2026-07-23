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

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  ULONG v2; // edi
  int InstalledLanguageIndexByLangId; // ebx
  unsigned __int16 v6; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  LANGID InstallUILanguageId; // [rsp+70h] [rbp+30h] BYREF
  __int16 v13; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  Lcid = 0;
  InstallUILanguageId = 0;
  v13 = -1;
  v10 = 0LL;
  if ( SourceString )
  {
    InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( InstalledLanguageIndexByLangId >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v6 = Lcid;
        InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(Lcid, 0);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v10, v7, v8);
          if ( InstalledLanguageIndexByLangId >= 0 )
          {
            InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v10, v6, 1, &v13);
            if ( InstalledLanguageIndexByLangId < 0 )
            {
              NtFlushInstallUILanguage(InstallUILanguageId, 0);
            }
            else
            {
              LOBYTE(v2) = a2 != 0;
              InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v6, v2);
            }
            ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
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
  return (unsigned int)InstalledLanguageIndexByLangId;
}
