/*
 * XREFs of RtlReleaseRelativeName @ 0x18000E920
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // rbx

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( _InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) == 1 )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0LL;
  }
}
