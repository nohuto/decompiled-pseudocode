/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x1400DF940
 * Callers:
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x1404A3290 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(__int64 a1, void *a2)
{
  void *v2; // rsi
  unsigned __int8 CurrentIrql; // di

  v2 = *(void **)(a1 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = 0;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 96));
  __writecr8(CurrentIrql);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag((PVOID)a1, 0x746C6644u);
}
