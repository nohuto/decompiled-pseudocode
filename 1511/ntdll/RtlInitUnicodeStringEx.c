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

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = 0;
  if ( !a2 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    *(_WORD *)a1 = v3;
    *(_WORD *)(a1 + 2) = v3 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
