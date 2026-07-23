/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1400F7970
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x1400EE6A0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1400F77E4 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x1400EBDA0 (ObpGetWaitObject.c)
 *     KeDeregisterObjectNotification @ 0x1400F7A2C (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x1400F7CA0 (KeRemoveQueueEntry.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, KIRQL a3)
{
  void *v3; // rbp
  __int16 *WaitObject; // rax
  char v8; // al
  void *v9; // rdi

  v3 = (void *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject((__int64)v3 - 48);
  if ( WaitObject == &ObpDefaultObject )
    WaitObject = 0LL;
  v8 = KeDeregisterObjectNotification(WaitObject);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  Object[11] = 0LL;
  KeReleaseSpinLock(Object + 12, a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
