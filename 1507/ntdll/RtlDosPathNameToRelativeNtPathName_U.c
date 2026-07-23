/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
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
