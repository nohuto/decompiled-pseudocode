/*
 * XREFs of wcsrchr @ 0x18009C7D0
 * Callers:
 *     RtlpGetDirPath @ 0x18000C598 (RtlpGetDirPath.c)
 *     CompatCachepLookupCdb @ 0x180010768 (CompatCachepLookupCdb.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetDataModulePath @ 0x18002C940 (LdrpGetDataModulePath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896B8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
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
