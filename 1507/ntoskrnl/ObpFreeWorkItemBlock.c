/*
 * XREFs of ObpFreeWorkItemBlock @ 0x1406AD8BC
 * Callers:
 *     ObpPushStackInfoQueue @ 0x1406AE0D8 (ObpPushStackInfoQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeWorkItemBlock(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v6, (ULONG_PTR)&ObpStackTraceLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (ObpTraceFlags & 0x73) != 0 && LOWORD(ObpWorkItemFreeList.Alignment) < 0x1F4u )
    RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, ListEntry);
  else
    ExFreePoolWithTag(ListEntry, 0x7452624Fu);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable + 1;
  v10->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
}
