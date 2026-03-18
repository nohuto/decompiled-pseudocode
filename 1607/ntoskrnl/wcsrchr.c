/*
 * XREFs of wcsrchr @ 0x14014F0D4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140484B38 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x140486A70 (AslPathSplit.c)
 *     PiIsDriverBlocked @ 0x14049D1BC (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14049D88C (PiLookupInDDBCache.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x140631594 (PiDqDeleteUserObject.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D3224 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
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
