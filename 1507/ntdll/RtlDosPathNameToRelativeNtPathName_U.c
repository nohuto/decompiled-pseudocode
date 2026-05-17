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

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r9d

  v4 = a2;
  LOBYTE(a2) = 1;
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, a2, a1, v4, a3, a4) >= 0;
}
