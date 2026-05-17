/*
 * XREFs of RtlpCheckHeapSignature @ 0x18002EB04
 * Callers:
 *     RtlUnlockHeap @ 0x180023960 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800EF1BC (RtlDebugDestroyHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800EF428 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800EFAE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800EFFE4 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800F0070 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
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
