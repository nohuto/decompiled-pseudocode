/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14002DB80
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelWaitCompletionPacket @ 0x14002DD10 (IopCancelWaitCompletionPacket.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // si
  _BYTE *v6; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

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
    v4 = (volatile signed __int32 *)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((char *)Object + 96);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v4);
    }
    v6 = Object;
    if ( *((_BYTE *)Object + 104) )
    {
      if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
      {
LABEL_7:
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return v3;
      }
      if ( v6[104] )
        v3 = 259;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        goto LABEL_10;
    }
    else
    {
      v3 = -1073741536;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
LABEL_10:
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
LABEL_11:
        __writecr8(CurrentIrql);
        goto LABEL_7;
      }
    }
    KiReleaseSpinLockInstrumented(v4, retaddr);
    goto LABEL_11;
  }
  return result;
}
