/*
 * XREFs of wcsrchr @ 0x140145CF8
 * Callers:
 *     PiIsDriverBlocked @ 0x1403B6AD0 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x1403B749C (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x1403B8D2C (AslPathSplit.c)
 *     PiLookupInDDBCache @ 0x1403B90C8 (PiLookupInDDBCache.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqDeleteUserObject @ 0x14060717C (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x14068EAC0 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
