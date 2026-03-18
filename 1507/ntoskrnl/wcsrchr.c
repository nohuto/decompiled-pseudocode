/*
 * XREFs of wcsrchr @ 0x140173D28
 * Callers:
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiLookupInDDBCache @ 0x140572BDC (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     PiIsDriverBlocked @ 0x1405AA694 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x1405AB068 (AslPathSplit.c)
 *     PiDqDeleteUserObject @ 0x140681EA0 (PiDqDeleteUserObject.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiTranslateSymbolicLinkFile @ 0x14070E5D8 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
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
