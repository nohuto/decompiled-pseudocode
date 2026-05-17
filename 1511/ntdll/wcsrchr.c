/*
 * XREFs of wcsrchr @ 0x18009B430
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetDataModulePath @ 0x18003D1CC (LdrpGetDataModulePath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpGetDirPath @ 0x1800734B4 (RtlpGetDirPath.c)
 *     CompatCachepLookupCdb @ 0x180075C80 (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
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
