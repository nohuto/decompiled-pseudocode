/*
 * XREFs of FsRtlNotifyCleanup @ 0x14048DD9C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x14048D858 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlIsNotifyOnList @ 0x14048E34C (FsRtlIsNotifyOnList.c)
 */

void __stdcall FsRtlNotifyCleanup(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList, PVOID FsContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  char *IsNotifyOnList; // rax
  PSECURITY_SUBJECT_CONTEXT v9; // rbx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp+20h] BYREF

  SubjectContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  IsNotifyOnList = (char *)FsRtlIsNotifyOnList(NotifyList, FsContext);
  if ( IsNotifyOnList )
    FsRtlNotifyCleanupOneEntry(IsNotifyOnList, &SubjectContext);
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  v9 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v9, 0);
  }
}
