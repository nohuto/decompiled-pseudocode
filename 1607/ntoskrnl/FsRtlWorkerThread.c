/*
 * XREFs of FsRtlWorkerThread @ 0x14014BF30
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x1400A6C30 (KeRemoveQueue.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY BugCheckParameter4; // rbx
  unsigned __int8 CurrentIrql; // cl

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    BugCheckParameter4 = KeRemoveQueue(v2, 0, 0LL);
    ((void (__fastcall *)(struct _LIST_ENTRY *))BugCheckParameter4[1].Flink)(BugCheckParameter4[1].Blink);
  }
  while ( !KeGetCurrentIrql() );
  CurrentIrql = KeGetCurrentIrql();
  KeBugCheckEx(
    0xAu,
    (ULONG_PTR)BugCheckParameter4[1].Flink,
    CurrentIrql,
    (ULONG_PTR)BugCheckParameter4[1].Flink,
    (ULONG_PTR)BugCheckParameter4);
}
