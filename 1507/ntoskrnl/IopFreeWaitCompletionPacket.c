/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x140112C68
 * Callers:
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x14052B640 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(__int64 a1, void *a2)
{
  void *v2; // rbp
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(void **)(a1 + 80);
  v3 = (volatile signed __int32 *)(a1 + 96);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 96);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 96));
  }
  *(_BYTE *)(a1 + 104) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag((PVOID)a1, 0x746C6644u);
}
