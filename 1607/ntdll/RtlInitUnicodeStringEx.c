/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180011900
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     RtlIsDosDeviceName_U @ 0x180010170 (RtlIsDosDeviceName_U.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     CompatCachepLookupCdb @ 0x180010758 (CompatCachepLookupCdb.c)
 *     RtlGetFullPathName_UEx @ 0x180011760 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180011890 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpComputeLangListCheckSum @ 0x180011944 (RtlpComputeLangListCheckSum.c)
 *     _ResCGetRegistryFlags @ 0x180059E10 (_ResCGetRegistryFlags.c)
 *     ResCOpenRegistryKey @ 0x180059EDC (ResCOpenRegistryKey.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D658 (ResCGetRegistryLatestIndex.c)
 *     RtlDosSearchPath_U @ 0x1800675B0 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6B8 (RtlDoesFileExists_UEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800850A0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 *     ResCultureNameToLCID @ 0x180103360 (ResCultureNameToLCID.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  DestinationString->Buffer = (wchar_t *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
