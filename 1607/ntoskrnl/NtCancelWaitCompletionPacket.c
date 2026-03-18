/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1400F99A4
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
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  KSPIN_LOCK *v1; // rsi
  NTSTATUS result; // eax
  int v3; // ebx
  int v4; // eax
  char *v5; // rdi
  KIRQL v6; // al
  KIRQL v7; // r14
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // bp
  _BYTE *v10; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v1 = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails);
    v5 = (char *)Object;
    if ( v4 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
      v1 = (KSPIN_LOCK *)*((_QWORD *)v5 + 11);
      v7 = v6;
      if ( v1 )
        ObfReferenceObject(*((PVOID *)v5 + 11));
      KeReleaseSpinLock((PKSPIN_LOCK)v5 + 12, v7);
      if ( !v1 )
      {
        v3 = -1073741536;
LABEL_21:
        ObfDereferenceObject(v5);
        return v3;
      }
      KeAcquireInStackQueuedSpinLock(v1 + 8, &LockHandle);
    }
    v8 = (KSPIN_LOCK *)(v5 + 96);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 12);
    v10 = v5 + 104;
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    {
      if ( !*v10 )
      {
LABEL_10:
        v3 = -1073741536;
        goto LABEL_18;
      }
      v5 = (char *)Object;
      if ( *((KSPIN_LOCK **)Object + 11) != v1 )
      {
        v3 = -1073700861;
        KeReleaseSpinLock(v8, v9);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !*v10 )
        goto LABEL_10;
      v5 = (char *)Object;
    }
    if ( (unsigned __int8)IopCancelWaitCompletionPacket(v5) )
      goto LABEL_19;
    if ( *v10 )
      v3 = 259;
LABEL_18:
    KeReleaseSpinLock(v8, v9);
    v5 = (char *)Object;
LABEL_19:
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ObfDereferenceObject(v1);
    }
    goto LABEL_21;
  }
  return result;
}
