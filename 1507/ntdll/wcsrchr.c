/*
 * XREFs of wcsrchr @ 0x180089C80
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpGetDirPath @ 0x180068268 (RtlpGetDirPath.c)
 *     LdrpGetDataModulePath @ 0x180069C68 (LdrpGetDataModulePath.c)
 *     CompatCachepLookupCdb @ 0x18006B4E0 (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180080CB0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
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
