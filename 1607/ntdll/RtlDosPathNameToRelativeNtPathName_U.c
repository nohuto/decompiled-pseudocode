/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180011740
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r9d

  v4 = a2;
  LOBYTE(a2) = 1;
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, a2, a1, v4, a3, a4) >= 0;
}
