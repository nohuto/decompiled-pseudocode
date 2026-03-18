/*
 * XREFs of CmpTransMgrSyncHive @ 0x1404F3070
 * Callers:
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // r9
  int v3; // ebx
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  char v9; // al
  ULONG_PTR v10; // rbx
  char v11; // si
  signed __int32 v12; // eax

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 2840);
    CurrentThread = KeGetCurrentThread();
    v7 = KeAbPreAcquire(v5, 0LL, 0LL, v2);
    v8 = v7;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
      ExpAcquireFastMutexContended(v5, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v5 + 8) = CurrentThread;
    v9 = HvpMarkDirty(BugCheckParameter2, 0, 32, 0);
    v10 = *(_QWORD *)(BugCheckParameter2 + 2840);
    v11 = v9;
    *(_QWORD *)(v10 + 8) = 0LL;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v12);
    KeAbPostRelease(v10);
    if ( !v11 )
    {
      v3 = -1073741670;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      return (unsigned int)v3;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
  v3 = CmpFlushHive(BugCheckParameter2, 0);
  if ( v3 < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v3;
}
