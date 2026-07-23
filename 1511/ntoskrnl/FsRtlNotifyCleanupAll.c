/*
 * XREFs of FsRtlNotifyCleanupAll @ 0x1405F5940
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x14048D858 (FsRtlNotifyCleanupOneEntry.c)
 */

void __stdcall FsRtlNotifyCleanupAll(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList)
{
  struct _KTHREAD *CurrentThread; // rdi
  _LIST_ENTRY *Flink; // rdi
  char *v6; // rcx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp+18h] BYREF

  SubjectContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  while ( Flink != NotifyList )
  {
    v6 = (char *)&Flink[-2];
    Flink = Flink->Flink;
    FsRtlNotifyCleanupOneEntry(v6, &SubjectContext);
    if ( SubjectContext )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
