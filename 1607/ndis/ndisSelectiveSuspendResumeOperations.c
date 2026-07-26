/*
 * XREFs of ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C006B0F0 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006C980 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     ndisMoveLinkedList @ 0x1C006B980 (ndisMoveLinkedList.c)
 *     ndisReplayDirectOids @ 0x1C006BC30 (ndisReplayDirectOids.c)
 *     ndisReplayRecvNbls @ 0x1C006BCB4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C006BD14 (ndisReplaySendNbls.c)
 *     ndisSetIdleTimer @ 0x1C006C7F0 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendResumeOperations(__int64 a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _NET_BUFFER_LIST *v8; // rbp
  struct _NET_BUFFER_LIST *v9; // rbx
  KIRQL v10; // al
  KIRQL v11; // bl
  _QWORD *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 4512);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( a2 )
  {
    *(_DWORD *)(v2 + 504) &= ~0x10u;
    KeSetEvent((PRKEVENT)(v2 + 248), 0, 0);
    v6 = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v2 + 656)) / 10000LL;
    *(_QWORD *)(v2 + 672) += v6;
    *(_QWORD *)(v2 + 664) = v6;
    v7 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v2 + 648);
    *(_QWORD *)(v2 + 688) += v7 / 10000;
    *(_QWORD *)(v2 + 680) = v7 / 10000;
  }
  v8 = *(struct _NET_BUFFER_LIST **)(v2 + 544);
  *(_QWORD *)(v2 + 544) = 0LL;
  *(_QWORD *)(v2 + 552) = v2 + 544;
  v9 = *(struct _NET_BUFFER_LIST **)(v2 + 560);
  *(_QWORD *)(v2 + 560) = 0LL;
  *(_QWORD *)(v2 + 568) = v2 + 560;
  ndisMoveLinkedList(v12, v2 + 584);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  if ( v8 )
    ndisReplaySendNbls(a1, v8, 0);
  if ( v9 )
    ndisReplayRecvNbls((_QWORD *)a1, v9);
  ndisReplayDirectOids(a1, v12, 0);
  ndisSetIdleTimer(a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v11 = v10;
  *(_DWORD *)(a1 + 1856) = 3344195;
  ndisSetWakeUpTimer(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v11);
}
