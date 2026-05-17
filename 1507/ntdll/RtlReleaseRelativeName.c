/*
 * XREFs of RtlReleaseRelativeName @ 0x1800546C0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
