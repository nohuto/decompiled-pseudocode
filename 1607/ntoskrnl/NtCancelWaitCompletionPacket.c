/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1400F77E4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x1400F7970 (IopCancelWaitCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  char *v4; // rdi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // r14
  _BYTE *v9; // r15
  KIRQL v10; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = (char *)Object;
    v5 = (KSPIN_LOCK *)((char *)Object + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v7 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
    v8 = v6;
    if ( v7 )
      ObfReferenceObject(*((PVOID *)v4 + 11));
    KeReleaseSpinLock(v5, v8);
    if ( !v7 )
    {
      v3 = -1073741536;
LABEL_15:
      ObfDereferenceObject(v4);
      return v3;
    }
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = v4 + 104;
    v10 = KeAcquireSpinLockRaiseToDpc(v5);
    if ( v4[104] )
    {
      if ( *((KSPIN_LOCK **)v4 + 11) == v7 )
      {
        v4 = (char *)Object;
        if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
        {
LABEL_14:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          ObfDereferenceObject(v7);
          goto LABEL_15;
        }
        if ( *v9 )
          v3 = 259;
      }
      else
      {
        v3 = -1073700861;
      }
    }
    else
    {
      v3 = -1073741536;
    }
    KeReleaseSpinLock(v5, v10);
    v4 = (char *)Object;
    goto LABEL_14;
  }
  return result;
}
