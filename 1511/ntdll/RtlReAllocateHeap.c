/*
 * XREFs of RtlReAllocateHeap @ 0x180023CF0
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002F12C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlAllocateHandle @ 0x180044190 (RtlAllocateHandle.c)
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     NtdllpReallocateStringRoutine @ 0x1800CB35C (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x1800EE530 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(HeapHandle, Flags);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagReAllocateHeap(HeapHandle, BaseAddress, Size, Flags);
  return (PVOID)RtlpReAllocateHeapInternal(HeapHandle, 0LL, 0LL);
}
