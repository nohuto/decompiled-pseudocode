/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180018130
 * Callers:
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     RtlpComputeLangListCheckSum @ 0x1800107E8 (RtlpComputeLangListCheckSum.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlGetFullPathName_UEx @ 0x180018F30 (RtlGetFullPathName_UEx.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_U @ 0x1800443C0 (RtlDosSearchPath_U.c)
 *     _ResCGetRegistryFlags @ 0x180048690 (_ResCGetRegistryFlags.c)
 *     ResCOpenRegistryKey @ 0x18004875C (ResCOpenRegistryKey.c)
 *     ResCGetRegistryLatestIndex @ 0x18004BBEC (ResCGetRegistryLatestIndex.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     WerpGlobalFlagsForProcess @ 0x18005B83C (WerpGlobalFlagsForProcess.c)
 *     CompatCachepLookupCdb @ 0x180075C80 (CompatCachepLookupCdb.c)
 *     RtlIsDosDeviceName_U @ 0x18007B230 (RtlIsDosDeviceName_U.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007D064 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x18007FCD0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     SbpResolveBasedOnName @ 0x1800F5D60 (SbpResolveBasedOnName.c)
 *     ResCultureNameToLCID @ 0x1800F8A8C (ResCultureNameToLCID.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  DestinationString->Buffer = (unsigned __int16 *)SourceString;
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
