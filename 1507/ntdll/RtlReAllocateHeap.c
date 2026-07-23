/*
 * XREFs of RtlReAllocateHeap @ 0x18002DA20
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x180035070 (RtlpAllocateUserBlockFromHeap.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180043500 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlAllocateHandle @ 0x1800526C0 (RtlAllocateHandle.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     NtdllpReallocateStringRoutine @ 0x1800C0C28 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x1800EA260 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(HeapHandle, Flags, BaseAddress, Size);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpVirtReAllocateHeap(HeapHandle);
  return (PVOID)RtlpReAllocateHeapInternal(HeapHandle);
}
