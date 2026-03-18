/*
 * XREFs of InsertReadyQueue @ 0x1C0003250
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RestartContext @ 0x1C0006440 (RestartContext.c)
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 *     DequeueAndReadyContext @ 0x1C0020174 (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x1C00201E0 (RestartCtxtPassive.c)
 * Callees:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     RestartContext @ 0x1C0006440 (RestartContext.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     LogSchedEvent @ 0x1C001FB3C (LogSchedEvent.c)
 *     LogEvent @ 0x1C001FB94 (LogEvent.c)
 *     OSQueueWorkItem @ 0x1C0020B48 (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 */

__int64 __fastcall InsertReadyQueue(PSLIST_ENTRY ListEntry, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // rdx
  int Next; // eax
  int v13; // ecx
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  struct _KTHREAD *v22; // r11
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  struct _KTHREAD *v29; // r11
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // eax
  PSLIST_ENTRY v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  int v39; // eax

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)&ListEntry[7].Next + 1);
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v11 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C005A1F8 + 1, 1u) % (unsigned int)qword_1C005A1F8);
    *(_QWORD *)((char *)P + v11 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v11) = 1229869905;
    *(_QWORD *)((char *)P + v11 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v11 + 24) = v9;
    *(_QWORD *)((char *)P + v11 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v11 + 40) = v10;
    *(_QWORD *)((char *)P + v11 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v11 + 56) = v6;
    *(_QWORD *)((char *)P + v11 + 64) = v8;
  }
  Next = (int)ListEntry[4].Next;
  if ( (Next & 1) != 0 )
  {
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)&ListEntry[12]) )
      LODWORD(ListEntry[4].Next) |= 2u;
  }
  LODWORD(ListEntry[4].Next) |= 8u;
  v13 = (int)ListEntry[4].Next;
  if ( (v13 & 2) == 0 && (v13 & 0x90) != 0x10 )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, byte_1C005A0D8);
      v14 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
      if ( v14 )
      {
        v15 = (__int64 (__fastcall *)())v14[11];
        v16 = v14[4];
        v17 = v14[13];
      }
      else
      {
        v15 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
        v16 = *((_QWORD *)&ListEntry[4].Next + 1);
        v17 = *((_QWORD *)&ListEntry[11].Next + 1);
      }
      if ( v15 == EvalMethodComplete )
      {
        LogEvent(
          1146048069,
          (unsigned int)KeGetCurrentThread(),
          *((_QWORD *)&ListEntry[25].Next + 1),
          (_DWORD)ListEntry,
          (unsigned int)gReadyQueue,
          v16,
          32771LL,
          v17);
        *(_DWORD *)v17 = 32771;
        *(_QWORD *)(v17 + 8) = ListEntry;
        KeSetEvent((PRKEVENT)(v17 + 16), 0, 0);
      }
      else
      {
        RestartContext(ListEntry);
      }
      byte_1C005A0D8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext(ListEntry);
      v37 = *((_QWORD *)&ListEntry[6].Next + 1);
      if ( v37 )
        v38 = *(_QWORD *)(v37 + 32);
      else
        v38 = *((_QWORD *)&ListEntry[4].Next + 1);
      LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v38, *((_QWORD *)&ListEntry[7].Next + 1));
      v39 = (int)ListEntry[4].Next;
      if ( (v39 & 0x40) == 0 )
      {
        LODWORD(ListEntry[4].Next) = v39 | 0x40;
        ListInsertTail(&ListEntry[2], &qword_1C005A0C8);
LABEL_58:
        *((_QWORD *)&ListEntry[3].Next + 1) = v36;
      }
    }
    else
    {
      if ( (v13 & 0x80u) != 0 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
      {
        v18 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v18 )
          v19 = *(_QWORD *)(v18 + 32);
        else
          v19 = *((_QWORD *)&ListEntry[4].Next + 1);
        LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v19, *((_QWORD *)&ListEntry[7].Next + 1));
        return (unsigned int)RunContext(ListEntry);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v20 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v20 )
          v21 = *(_QWORD *)(v20 + 32);
        else
          v21 = *((_QWORD *)&ListEntry[4].Next + 1);
        v22 = KeGetCurrentThread();
        v23 = *((_QWORD *)&ListEntry[7].Next + 1);
        v24 = *((_QWORD *)&ListEntry[25].Next + 1);
        v25 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && P )
        {
          v26 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C005A1F8 + 1, 1u) % (unsigned int)qword_1C005A1F8);
          *(_QWORD *)((char *)P + v26 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)P + v26) = 1163280716;
          *(_QWORD *)((char *)P + v26 + 16) = v22;
          *(_QWORD *)((char *)P + v26 + 24) = v24;
          *(_QWORD *)((char *)P + v26 + 32) = ListEntry;
          *(_QWORD *)((char *)P + v26 + 40) = v25;
          *(_QWORD *)((char *)P + v26 + 48) = ListEntry;
          *(_QWORD *)((char *)P + v26 + 56) = v21;
          *(_QWORD *)((char *)P + v26 + 64) = v23;
        }
        v2 = RunContext(ListEntry);
        if ( qword_1C005A0C8 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_1C005A0E0);
        }
        return v2;
      }
      v27 = *((_QWORD *)&ListEntry[6].Next + 1);
      if ( v27 )
        v28 = *(_QWORD *)(v27 + 32);
      else
        v28 = *((_QWORD *)&ListEntry[4].Next + 1);
      v29 = KeGetCurrentThread();
      v30 = *((_QWORD *)&ListEntry[7].Next + 1);
      v31 = *((_QWORD *)&ListEntry[25].Next + 1);
      v32 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && P )
      {
        v33 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C005A1F8 + 1, 1u) % (unsigned int)qword_1C005A1F8);
        *(_QWORD *)((char *)P + v33 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)P + v33) = 1363367000;
        *(_QWORD *)((char *)P + v33 + 16) = v29;
        *(_QWORD *)((char *)P + v33 + 24) = v31;
        *(_QWORD *)((char *)P + v33 + 32) = ListEntry;
        *(_QWORD *)((char *)P + v33 + 40) = v32;
        *(_QWORD *)((char *)P + v33 + 48) = ListEntry;
        *(_QWORD *)((char *)P + v33 + 56) = v28;
        *(_QWORD *)((char *)P + v33 + 64) = v30;
      }
      v34 = (int)ListEntry[4].Next;
      if ( (v34 & 0x40) == 0 )
      {
        v35 = ListEntry + 2;
        LODWORD(ListEntry[4].Next) = v34 | 0x40;
        if ( qword_1C005A0C8 )
        {
          *((_QWORD *)&ListEntry[2].Next + 1) = qword_1C005A0C8;
          v35->Next = *(_SLIST_ENTRY **)qword_1C005A0C8;
          *(_QWORD *)(*(_QWORD *)qword_1C005A0C8 + 8LL) = v35;
          *(_QWORD *)qword_1C005A0C8 = v35;
        }
        else
        {
          qword_1C005A0C8 = (__int64)&ListEntry[2];
          *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
          v35->Next = v35;
        }
        v36 = &qword_1C005A0C8;
        goto LABEL_58;
      }
    }
    LODWORD(ListEntry[4].Next) |= 0x20u;
    return 32772;
  }
  return v2;
}
