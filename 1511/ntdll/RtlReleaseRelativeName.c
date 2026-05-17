/*
 * XREFs of RtlReleaseRelativeName @ 0x18003D350
 * Callers:
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
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
