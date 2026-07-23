/*
 * XREFs of RtlStringCchCopyW @ 0x1800E607C
 * Callers:
 *     RtlFormatMessageEx @ 0x18005C720 (RtlFormatMessageEx.c)
 *     RtlConvertLCIDToString @ 0x1800E58B0 (RtlConvertLCIDToString.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1800F4B9C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegGetString @ 0x1800F4EE8 (RtlpMuiRegGetString.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1800E60C4 (RtlStringCopyWorkerW_1.c)
 */

__int64 __fastcall RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW_1(a1, a2, a3, a3);
  }
  return (unsigned int)v3;
}
