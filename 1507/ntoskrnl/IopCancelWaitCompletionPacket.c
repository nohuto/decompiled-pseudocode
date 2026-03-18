/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x14002DD10
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x14002DB80 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x14002DC88 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x14002DE1C (KeDeregisterObjectNotification.c)
 *     ObGetAssociatedWaitObject @ 0x14002E2FC (ObGetAssociatedWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEntry @ 0x14012A138 (KeRemoveQueueEntry.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  void *v3; // rbp
  __int64 AssociatedWaitObject; // rax
  char v8; // al
  void *v9; // rdi
  volatile signed __int64 *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (void *)Object[10];
  AssociatedWaitObject = ObGetAssociatedWaitObject(v3);
  v8 = KeDeregisterObjectNotification(AssociatedWaitObject, Object);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  v10 = Object + 12;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v10, retaddr);
  else
    _InterlockedAnd64(v10, 0LL);
  __writecr8(a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
