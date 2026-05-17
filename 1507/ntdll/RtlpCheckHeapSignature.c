/*
 * XREFs of RtlpCheckHeapSignature @ 0x18003479C
 * Callers:
 *     RtlUnlockHeap @ 0x180033370 (RtlUnlockHeap.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpUnlockHeapInternal @ 0x180044C7C (RtlpUnlockHeapInternal.c)
 *     RtlpLockHeapInternal @ 0x1800D9540 (RtlpLockHeapInternal.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EC5E0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800EC724 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800ED858 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800ED8E4 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  _DWORD *v2; // rbx

  v2 = a1 + 38;
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap(v2);
  return 0;
}
