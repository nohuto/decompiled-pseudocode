/*
 * XREFs of ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000AA2C
 * Callers:
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000AA00 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C016A120 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     <none>
 */

char IsMiniportListMutexOwnedByCurrentThread(void)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONG StateMutex; // eax
  char v2; // cl

  CurrentThread = KeGetCurrentThread();
  StateMutex = KeReadStateMutex((PRKMUTEX)Mutex);
  v2 = 1;
  if ( StateMutex == 1
    || CurrentThread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                             &qword_1C0046C88,
                                             (signed __int64)CurrentThread,
                                             (signed __int64)CurrentThread) )
  {
    return 0;
  }
  return v2;
}
