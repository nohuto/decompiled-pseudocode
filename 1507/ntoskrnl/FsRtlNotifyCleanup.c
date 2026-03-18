/*
 * XREFs of FsRtlNotifyCleanup @ 0x1404A67BC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlIsNotifyOnList @ 0x1404A64CC (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404A68A4 (FsRtlNotifyCleanupOneEntry.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __stdcall FsRtlNotifyCleanup(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList, PVOID FsContext)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rax
  signed __int32 v13; // eax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    v8 = KeGetCurrentThread();
    v9 = KeAbPreAcquire((ULONG_PTR)NotifySync, 0LL, 0LL, v3);
    v10 = v9;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)NotifySync, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)NotifySync, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *((_QWORD *)NotifySync + 1) = v8;
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  v11 = FsRtlIsNotifyOnList(NotifyList, (__int64)FsContext);
  if ( v11 )
    FsRtlNotifyCleanupOneEntry(v11);
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
