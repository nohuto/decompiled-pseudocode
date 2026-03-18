/*
 * XREFs of InsertReadyQueue @ 0x1C0002D90
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     RestartContext @ 0x1C001DA80 (RestartContext.c)
 *     DequeueAndReadyContext @ 0x1C0020914 (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x1C0023390 (RestartCtxtPassive.c)
 * Callees:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     RestartContext @ 0x1C001DA80 (RestartContext.c)
 *     LogSchedEvent @ 0x1C0025F04 (LogSchedEvent.c)
 *     LogEvent @ 0x1C0025F5C (LogEvent.c)
 *     OSQueueWorkItem @ 0x1C00273F4 (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 __fastcall InsertReadyQueue(PSLIST_ENTRY ListEntry, char a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int32 v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int Next; // eax
  int v15; // ecx
  __int64 v17; // rax
  __int64 v18; // r8
  struct _KTHREAD *v19; // r11
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rsi
  unsigned __int32 v23; // edi
  unsigned int v24; // edi
  __int64 v25; // rdx
  int v26; // eax
  PSLIST_ENTRY v27; // rax
  PSLIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  struct _KTHREAD *v31; // r11
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rsi
  unsigned __int32 v35; // edi
  unsigned int v36; // edi
  __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // r8
  __int64 (__fastcall *v40)(); // rax
  __int64 v41; // r9
  __int64 v42; // r8
  struct _KTHREAD *v43; // r11
  __int64 v44; // r10
  __int64 v45; // rbp
  unsigned __int32 v46; // edi
  unsigned int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r9
  int v53; // eax

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
    v11 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
    if ( (_DWORD)qword_1C0074668 == 204 )
      v12 = v11 % 0xCC;
    else
      v12 = v11 % (unsigned int)qword_1C0074668;
    v13 = 72LL * v12;
    *(_QWORD *)((char *)P + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v13) = 1229869905;
    *(_QWORD *)((char *)P + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v13 + 24) = v9;
    *(_QWORD *)((char *)P + v13 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v13 + 40) = v10;
    *(_QWORD *)((char *)P + v13 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v13 + 56) = v6;
    *(_QWORD *)((char *)P + v13 + 64) = v8;
  }
  Next = (int)ListEntry[4].Next;
  if ( (Next & 1) != 0 )
  {
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)&ListEntry[12]) )
      LODWORD(ListEntry[4].Next) |= 2u;
  }
  LODWORD(ListEntry[4].Next) |= 8u;
  v15 = (int)ListEntry[4].Next;
  if ( (v15 & 2) == 0 && (v15 & 0x90) != 0x10 )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, byte_1C0074540);
      v39 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
      if ( v39 )
      {
        v40 = (__int64 (__fastcall *)())v39[11];
        v41 = v39[4];
        v42 = v39[13];
      }
      else
      {
        v40 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
        v41 = *((_QWORD *)&ListEntry[4].Next + 1);
        v42 = *((_QWORD *)&ListEntry[11].Next + 1);
      }
      if ( v40 == EvalMethodComplete )
      {
        v43 = KeGetCurrentThread();
        v44 = *((_QWORD *)&ListEntry[25].Next + 1);
        v45 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && P )
        {
          v46 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
          if ( (_DWORD)qword_1C0074668 == 204 )
            v47 = v46 % 0xCC;
          else
            v47 = v46 % (unsigned int)qword_1C0074668;
          v48 = 72LL * v47;
          *(_QWORD *)((char *)P + v48 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)P + v48) = 1146048069;
          *(_QWORD *)((char *)P + v48 + 16) = v43;
          *(_QWORD *)((char *)P + v48 + 24) = v44;
          *(_QWORD *)((char *)P + v48 + 32) = ListEntry;
          *(_QWORD *)((char *)P + v48 + 40) = v45;
          *(_QWORD *)((char *)P + v48 + 48) = v41;
          *(_QWORD *)((char *)P + v48 + 56) = 32771LL;
          *(_QWORD *)((char *)P + v48 + 64) = v42;
        }
        *(_DWORD *)v42 = 32771;
        *(_QWORD *)(v42 + 8) = ListEntry;
        KeSetEvent((PRKEVENT)(v42 + 16), 0, 0);
      }
      else
      {
        RestartContext(ListEntry);
      }
      byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext(ListEntry);
      v51 = *((_QWORD *)&ListEntry[6].Next + 1);
      if ( v51 )
        v52 = *(_QWORD *)(v51 + 32);
      else
        v52 = *((_QWORD *)&ListEntry[4].Next + 1);
      LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v52, *((_QWORD *)&ListEntry[7].Next + 1));
      v53 = (int)ListEntry[4].Next;
      if ( (v53 & 0x40) == 0 )
      {
        LODWORD(ListEntry[4].Next) = v53 | 0x40;
        v27 = ListEntry + 2;
        v28 = (PSLIST_ENTRY *)qword_1C0074530;
        if ( *(__int64 **)qword_1C0074530 != &qword_1C0074528 )
          __fastfail(3u);
        goto LABEL_28;
      }
    }
    else
    {
      if ( (v15 & 0x80u) != 0 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
      {
        v49 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v49 )
          v50 = *(_QWORD *)(v49 + 32);
        else
          v50 = *((_QWORD *)&ListEntry[4].Next + 1);
        LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v50, *((_QWORD *)&ListEntry[7].Next + 1));
        return (unsigned int)RunContext(ListEntry);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v29 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v29 )
          v30 = *(_QWORD *)(v29 + 32);
        else
          v30 = *((_QWORD *)&ListEntry[4].Next + 1);
        v31 = KeGetCurrentThread();
        v32 = *((_QWORD *)&ListEntry[7].Next + 1);
        v33 = *((_QWORD *)&ListEntry[25].Next + 1);
        v34 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && P )
        {
          v35 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
          if ( (_DWORD)qword_1C0074668 == 204 )
            v36 = v35 % 0xCC;
          else
            v36 = v35 % (unsigned int)qword_1C0074668;
          v37 = 72LL * v36;
          *(_QWORD *)((char *)P + v37 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)P + v37) = 1163280716;
          *(_QWORD *)((char *)P + v37 + 16) = v31;
          *(_QWORD *)((char *)P + v37 + 24) = v33;
          *(_QWORD *)((char *)P + v37 + 32) = ListEntry;
          *(_QWORD *)((char *)P + v37 + 40) = v34;
          *(_QWORD *)((char *)P + v37 + 48) = ListEntry;
          *(_QWORD *)((char *)P + v37 + 56) = v30;
          *(_QWORD *)((char *)P + v37 + 64) = v32;
        }
        v38 = RunContext(ListEntry);
        v2 = v38;
        if ( (__int64 *)qword_1C0074528 != &qword_1C0074528 && (gReadyQueue & 2) == 0 )
        {
          LogEvent(1263092555, (unsigned int)KeGetCurrentThread(), 0, 0, (unsigned int)gReadyQueue, v38, 0LL, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_1C0074548);
        }
        return v2;
      }
      v17 = *((_QWORD *)&ListEntry[6].Next + 1);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 32);
      else
        v18 = *((_QWORD *)&ListEntry[4].Next + 1);
      v19 = KeGetCurrentThread();
      v20 = *((_QWORD *)&ListEntry[7].Next + 1);
      v21 = *((_QWORD *)&ListEntry[25].Next + 1);
      v22 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && P )
      {
        v23 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
        if ( (_DWORD)qword_1C0074668 == 204 )
          v24 = v23 % 0xCC;
        else
          v24 = v23 % (unsigned int)qword_1C0074668;
        v25 = 72LL * v24;
        *(_QWORD *)((char *)P + v25 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)P + v25) = 1363367000;
        *(_QWORD *)((char *)P + v25 + 16) = v19;
        *(_QWORD *)((char *)P + v25 + 24) = v21;
        *(_QWORD *)((char *)P + v25 + 32) = ListEntry;
        *(_QWORD *)((char *)P + v25 + 40) = v22;
        *(_QWORD *)((char *)P + v25 + 48) = ListEntry;
        *(_QWORD *)((char *)P + v25 + 56) = v18;
        *(_QWORD *)((char *)P + v25 + 64) = v20;
      }
      v26 = (int)ListEntry[4].Next;
      if ( (v26 & 0x40) == 0 )
      {
        LODWORD(ListEntry[4].Next) = v26 | 0x40;
        v27 = ListEntry + 2;
        v28 = (PSLIST_ENTRY *)qword_1C0074530;
        if ( *(__int64 **)qword_1C0074530 != &qword_1C0074528 )
          __fastfail(3u);
LABEL_28:
        v27->Next = (_SLIST_ENTRY *)&qword_1C0074528;
        *((_QWORD *)&v27->Next + 1) = v28;
        *v28 = v27;
        qword_1C0074530 = (__int64)v27;
      }
    }
    LODWORD(ListEntry[4].Next) |= 0x20u;
    return 32772;
  }
  return v2;
}
