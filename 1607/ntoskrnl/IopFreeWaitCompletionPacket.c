/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x1400EC1F8
 * Callers:
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F4808 (IopDeleteIoCompletionInternal.c)
 *     IopFreeCompletionListPackets @ 0x1404FEDD0 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(__int64 a1, void *a2)
{
  void *v2; // rsi
  unsigned __int8 CurrentIrql; // di

  v2 = *(void **)(a1 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 96));
  __writecr8(CurrentIrql);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag((PVOID)a1, 0x746C6644u);
}
