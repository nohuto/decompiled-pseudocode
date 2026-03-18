/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1400F9B7C
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x1400F0820 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1400F99A4 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x1400EDF20 (ObpGetWaitObject.c)
 *     KeDeregisterObjectNotification @ 0x1400F9C48 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x1400F9F14 (KeRemoveQueueEntry.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
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
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    Object[11] = 0LL;
  KeReleaseSpinLock(Object + 12, a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
