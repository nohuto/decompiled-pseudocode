/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18001FB10
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     _ResCGetRegistryFlags @ 0x18000EB40 (_ResCGetRegistryFlags.c)
 *     ResCOpenRegistryKey @ 0x18000EC0C (ResCOpenRegistryKey.c)
 *     RtlGetFullPathName_UEx @ 0x18001C030 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlDoesFileExists_UEx @ 0x180054E14 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_U @ 0x180057930 (RtlDosSearchPath_U.c)
 *     CompatCachepLookupCdb @ 0x18006B4E0 (CompatCachepLookupCdb.c)
 *     RtlIsDosDeviceName_U @ 0x180070320 (RtlIsDosDeviceName_U.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800744A0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     SbpResolveBasedOnName @ 0x1800F6480 (SbpResolveBasedOnName.c)
 *     ResCGetRegistryLatestIndex @ 0x1800F8FB0 (ResCGetRegistryLatestIndex.c)
 *     ResCultureNameToLCID @ 0x1800F9174 (ResCultureNameToLCID.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
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
