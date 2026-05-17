/*
 * XREFs of RtlReAllocateHeap @ 0x180020D80
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019974 (RtlpAllocateUserBlockFromHeap.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D160 (LdrAddLoadAsDataTable.c)
 *     RtlAllocateHandle @ 0x1800683A0 (RtlAllocateHandle.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2B04 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x1800F7284 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection();
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
