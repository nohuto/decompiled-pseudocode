/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x1400EE378
 * Callers:
 *     IoRemoveIoCompletion @ 0x14006A0E0 (IoRemoveIoCompletion.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F69B8 (IopDeleteIoCompletionInternal.c)
 *     IopFreeCompletionListPackets @ 0x14051B9E0 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(__int64 a1, void *a2)
{
  void *v2; // rbp
  unsigned __int8 CurrentIrql; // r14

  v2 = *(void **)(a1 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = 0;
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    *(_QWORD *)(a1 + 88) = 0LL;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 96));
  __writecr8(CurrentIrql);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag((PVOID)a1, 0x746C6644u);
}
