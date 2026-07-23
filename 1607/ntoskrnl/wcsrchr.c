/*
 * XREFs of wcsrchr @ 0x14014F694
 * Callers:
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     AslPathSplit @ 0x140513880 (AslPathSplit.c)
 *     SdbGetDatabaseMatchEx @ 0x140513EC0 (SdbGetDatabaseMatchEx.c)
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140515C98 (PiLookupInDDBCache.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x140631648 (PiDqDeleteUserObject.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D335C (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1406E0808 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
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
