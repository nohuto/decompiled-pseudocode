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

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection();
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
