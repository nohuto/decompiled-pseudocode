/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x1400F0820
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x1400F9B7C (IopCancelWaitCompletionPacket.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp
  KIRQL v8; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 != 1 )
    return;
  v5 = 0LL;
  if ( !(unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    goto LABEL_7;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v5 = *(KSPIN_LOCK **)(a2 + 88);
  v7 = v6;
  *(_BYTE *)(a2 + 105) = 1;
  if ( v5 )
    ObfReferenceObject(v5);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v7);
  if ( v5 )
  {
    KeAcquireInStackQueuedSpinLock(v5 + 8, &LockHandle);
LABEL_7:
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails);
    if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((PVOID)a2) )
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v8);
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ObfDereferenceObject(v5);
    }
  }
}
