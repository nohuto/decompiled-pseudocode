/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180042E60
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, 1, a1, a2, a3, a4) >= 0;
}
