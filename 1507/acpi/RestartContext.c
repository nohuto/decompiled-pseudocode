/*
 * XREFs of RestartContext @ 0x1C0006090
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     RestartCtxtCallback @ 0x1C0005F50 (RestartCtxtCallback.c)
 *     AMLIRestartContext @ 0x1C00427F4 (AMLIRestartContext.c)
 *     SleepQueueDpc @ 0x1C00460A0 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C0046E38 (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C00472B0 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C0086164 (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C00204CC (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(PSLIST_ENTRY ListEntry, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rbp
  unsigned __int32 v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int inserted; // ebx
  char *v15; // rcx

  v2 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)&ListEntry[7].Next + 1);
  v8 = *((_QWORD *)&ListEntry[25].Next + 1);
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v10 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
    if ( (_DWORD)qword_1C005A1E8 == 204 )
      v11 = v10 % 0xCC;
    else
      v11 = v10 % (unsigned int)qword_1C005A1E8;
    v12 = 72LL * v11;
    *(_QWORD *)((char *)P + v12 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v12) = 1380275028;
    *(_QWORD *)((char *)P + v12 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v12 + 24) = v8;
    *(_QWORD *)((char *)P + v12 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v12 + 40) = v9;
    *(_QWORD *)((char *)P + v12 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v12 + 56) = v5;
    *(_QWORD *)((char *)P + v12 + 64) = v7;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    inserted = InsertReadyQueue(ListEntry, a2);
    KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
    return inserted;
  }
  byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  LODWORD(ListEntry[4].Next) |= 0x20u;
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
  v15 = (char *)(&ListEntry[22].Next + 1);
  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_15;
  if ( !(unsigned __int8)ExTryQueueWorkItem(v15, 1LL) )
  {
    v15 = (char *)(&ListEntry[22].Next + 1);
LABEL_15:
    OSQueueWorkItem(v15);
  }
  return 32772LL;
}
