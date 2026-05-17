/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180011910
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800075CC (WerpGlobalFlagsForProcess.c)
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     RtlIsDosDeviceName_U @ 0x180010180 (RtlIsDosDeviceName_U.c)
 *     LdrpFindKnownDll @ 0x1800101B0 (LdrpFindKnownDll.c)
 *     CompatCachepLookupCdb @ 0x180010768 (CompatCachepLookupCdb.c)
 *     RtlGetFullPathName_UEx @ 0x180011770 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800118A0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     _ResCGetRegistryFlags @ 0x180059E20 (_ResCGetRegistryFlags.c)
 *     ResCOpenRegistryKey @ 0x180059EEC (ResCOpenRegistryKey.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D668 (ResCGetRegistryLatestIndex.c)
 *     RtlDosSearchPath_U @ 0x1800675C0 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6C8 (RtlDoesFileExists_UEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800850B0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 *     ResCultureNameToLCID @ 0x180103420 (ResCultureNameToLCID.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
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
