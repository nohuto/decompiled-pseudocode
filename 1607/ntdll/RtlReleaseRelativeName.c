/*
 * XREFs of RtlReleaseRelativeName @ 0x18000E930
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC01C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
