/*
 * XREFs of ndisSelectiveSuspendResumeOperations @ 0x1C006880C
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0067030 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0068E90 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C001BBF8 (ndisSetWakeUpTimer.c)
 *     ndisMDoDirectOidRequest @ 0x1C0040BF8 (ndisMDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 *     ndisMoveLinkedList @ 0x1C00677B4 (ndisMoveLinkedList.c)
 *     ndisReplayRecvNbls @ 0x1C0067A60 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0067AC0 (ndisReplaySendNbls.c)
 *     ndisSetIdleTimer @ 0x1C0068D04 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendResumeOperations(__int64 a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _NET_BUFFER_LIST *v8; // rbp
  struct _NET_BUFFER_LIST *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  KIRQL v14; // al
  KIRQL v15; // bl
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 4512);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( a2 )
  {
    *(_DWORD *)(v2 + 480) &= ~0x10u;
    KeSetEvent((PRKEVENT)(v2 + 248), 0, 0);
    v6 = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v2 + 632)) / 10000LL;
    *(_QWORD *)(v2 + 648) += v6;
    *(_QWORD *)(v2 + 640) = v6;
    v7 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v2 + 624);
    *(_QWORD *)(v2 + 664) += v7 / 10000;
    *(_QWORD *)(v2 + 656) = v7 / 10000;
  }
  v8 = *(struct _NET_BUFFER_LIST **)(v2 + 520);
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_QWORD *)(v2 + 528) = v2 + 520;
  v9 = *(struct _NET_BUFFER_LIST **)(v2 + 536);
  *(_QWORD *)(v2 + 536) = 0LL;
  *(_QWORD *)(v2 + 544) = v2 + 536;
  ndisMoveLinkedList(v16, v2 + 560);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  if ( v8 )
    ndisReplaySendNbls(a1, v8);
  if ( v9 )
    ndisReplayRecvNbls(a1, v9);
  while ( 1 )
  {
    v10 = v16[0];
    if ( (_QWORD *)v16[0] == v16 )
      break;
    v11 = *(_QWORD *)v16[0];
    if ( *(_QWORD **)(v16[0] + 8LL) != v16 || *(_QWORD *)(v11 + 8) != v16[0] )
      __fastfail(3u);
    v16[0] = *(_QWORD *)v16[0];
    *(_QWORD *)(v11 + 8) = v16;
    v12 = v10 - 72;
    v13 = ndisMDoDirectOidRequest(a1, (_DWORD *)(v10 - 72));
    if ( v13 != 259 )
      ndisMOidRequestCompleteInternal(a1, v12, v13, 0LL);
  }
  ndisSetIdleTimer(a1);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v15 = v14;
  *(_DWORD *)(a1 + 1856) = 3344018;
  ndisSetWakeUpTimer(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v15);
}
