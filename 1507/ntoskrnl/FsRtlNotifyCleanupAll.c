/*
 * XREFs of FsRtlNotifyCleanupAll @ 0x14066E9DC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404A68A4 (FsRtlNotifyCleanupOneEntry.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __stdcall FsRtlNotifyCleanupAll(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList)
{
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  _LIST_ENTRY *Flink; // rdi
  char *v10; // rcx
  PSECURITY_SUBJECT_CONTEXT v11; // r14
  signed __int32 v13; // eax
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+18h] BYREF
  _LIST_ENTRY *v15; // [rsp+78h] [rbp+20h]

  SubjectContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    v6 = KeGetCurrentThread();
    v7 = KeAbPreAcquire((ULONG_PTR)NotifySync, 0LL, 0LL, v2);
    v8 = v7;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)NotifySync, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)NotifySync, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *((_QWORD *)NotifySync + 1) = v6;
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  while ( 1 )
  {
    v15 = Flink;
    if ( Flink == NotifyList )
      break;
    v10 = (char *)&Flink[-2];
    Flink = Flink->Flink;
    FsRtlNotifyCleanupOneEntry(v10, &SubjectContext);
    v11 = SubjectContext;
    if ( SubjectContext )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(v11, 0);
    }
  }
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    *((_QWORD *)NotifySync + 1) = 0LL;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)NotifySync, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)NotifySync, v13);
    KeAbPostRelease((ULONG_PTR)NotifySync);
  }
}
