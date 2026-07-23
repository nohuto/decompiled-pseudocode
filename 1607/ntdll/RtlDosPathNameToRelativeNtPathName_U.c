/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180011730
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180075EE4 (LdrpIsReparsePoint.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  PUNICODE_STRING v4; // r9

  v4 = NtFileName;
  LOBYTE(NtFileName) = 1;
  return (int)RtlpDosPathNameToRelativeNtPathName_U(DosFileName, NtFileName, DosFileName, v4, FilePart, RelativeName) >= 0;
}
