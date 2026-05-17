/*
 * XREFs of RtlStringCchCopyW @ 0x1800DCD90
 * Callers:
 *     RtlFormatMessageEx @ 0x18004A8C0 (RtlFormatMessageEx.c)
 *     RtlConvertLCIDToString @ 0x1800DC5B0 (RtlConvertLCIDToString.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800E6370 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1800EBE1C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegGetString @ 0x1800EC168 (RtlpMuiRegGetString.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1800DCDD8 (RtlStringCopyWorkerW_1.c)
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
