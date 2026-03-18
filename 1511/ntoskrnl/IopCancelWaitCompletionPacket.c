/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x14002E3E4
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x14002F740 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1400E8060 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeDeregisterObjectNotification @ 0x14002E4EC (KeDeregisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x14002E8F8 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEntry @ 0x1400EC548 (KeRemoveQueueEntry.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, KIRQL a3)
{
  char *v3; // rbp
  __int16 *WaitObject; // rax
  char v8; // al
  void *v9; // rdi

  v3 = (char *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject(v3 - 48);
  if ( WaitObject == &ObpDefaultObject )
    WaitObject = 0LL;
  v8 = KeDeregisterObjectNotification(WaitObject, Object);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  KeReleaseSpinLock(Object + 12, a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
