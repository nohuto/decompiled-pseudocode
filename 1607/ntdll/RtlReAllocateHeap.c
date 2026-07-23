/*
 * XREFs of RtlReAllocateHeap @ 0x180020D70
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C350 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019964 (RtlpAllocateUserBlockFromHeap.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 *     RtlAllocateHandle @ 0x180068390 (RtlAllocateHandle.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2BC4 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x1800F7284 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(HeapHandle, Flags);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagReAllocateHeap(HeapHandle, BaseAddress, Size, Flags);
  return (PVOID)RtlpReAllocateHeapInternal(HeapHandle, 0LL, 0LL);
}
