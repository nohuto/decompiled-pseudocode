/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1400E8060
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x14002E3E4 (IopCancelWaitCompletionPacket.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  _BYTE *v5; // rbp
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // di
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v4 = result;
  if ( result >= 0 )
  {
    v5 = Object;
    v6 = (KSPIN_LOCK *)((char *)Object + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    if ( v5[104] )
    {
      if ( IopCancelWaitCompletionPacket(Object, RemoveSignaledPacket, v7) )
      {
LABEL_4:
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return v4;
      }
      if ( v5[104] )
        v4 = 259;
    }
    else
    {
      v4 = -1073741536;
    }
    KeReleaseSpinLock(v6, v7);
    goto LABEL_4;
  }
  return result;
}
