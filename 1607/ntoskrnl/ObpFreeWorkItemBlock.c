/*
 * XREFs of ObpFreeWorkItemBlock @ 0x1406679A8
 * Callers:
 *     ObpPushStackInfoQueue @ 0x140668140 (ObpPushStackInfoQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpFreeWorkItemBlock(PSLIST_ENTRY ListEntry)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v3, (ULONG_PTR)&ObpStackTraceLock);
  if ( v5 )
    v5[26] |= 1u;
  if ( (ObpTraceFlags & 0x73) != 0 && LOWORD(ObpWorkItemFreeList.Alignment) < 0x1F4u )
    RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, ListEntry);
  else
    ExFreePoolWithTag(ListEntry, 0x7452624Fu);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
