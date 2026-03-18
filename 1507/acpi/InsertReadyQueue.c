/*
 * XREFs of InsertReadyQueue @ 0x1C0003260
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RestartContext @ 0x1C0006090 (RestartContext.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     DequeueAndReadyContext @ 0x1C001F5E4 (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x1C001F650 (RestartCtxtPassive.c)
 * Callees:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     RestartContext @ 0x1C0006090 (RestartContext.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     LogSchedEvent @ 0x1C001F290 (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C00204CC (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
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
  PSLIST_ENTRY v27; // rdx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  struct _KTHREAD *v31; // r11
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rsi
  unsigned __int32 v35; // edi
  unsigned int v36; // edi
  __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // r9
  __int64 v41; // r8
  struct _KTHREAD *v42; // r11
  __int64 v43; // r10
  __int64 v44; // rbp
  unsigned __int32 v45; // edi
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax

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
    v11 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
    if ( (_DWORD)qword_1C005A1E8 == 204 )
      v12 = v11 % 0xCC;
    else
      v12 = v11 % (unsigned int)qword_1C005A1E8;
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
      KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
      v38 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
      if ( v38 )
      {
        v39 = (__int64 (__fastcall *)())v38[11];
        v40 = v38[4];
        v41 = v38[13];
      }
      else
      {
        v39 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
        v40 = *((_QWORD *)&ListEntry[4].Next + 1);
        v41 = *((_QWORD *)&ListEntry[11].Next + 1);
      }
      if ( v39 == EvalMethodComplete )
      {
        v42 = KeGetCurrentThread();
        v43 = *((_QWORD *)&ListEntry[25].Next + 1);
        v44 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && P )
        {
          v45 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
          if ( (_DWORD)qword_1C005A1E8 == 204 )
            v46 = v45 % 0xCC;
          else
            v46 = v45 % (unsigned int)qword_1C005A1E8;
          v47 = 72LL * v46;
          *(_QWORD *)((char *)P + v47 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)P + v47) = 1146048069;
          *(_QWORD *)((char *)P + v47 + 16) = v42;
          *(_QWORD *)((char *)P + v47 + 24) = v43;
          *(_QWORD *)((char *)P + v47 + 32) = ListEntry;
          *(_QWORD *)((char *)P + v47 + 40) = v44;
          *(_QWORD *)((char *)P + v47 + 48) = v40;
          *(_QWORD *)((char *)P + v47 + 56) = 32771LL;
          *(_QWORD *)((char *)P + v47 + 64) = v41;
        }
        *(_DWORD *)v41 = 32771;
        *(_QWORD *)(v41 + 8) = ListEntry;
        KeSetEvent((PRKEVENT)(v41 + 16), 0, 0);
      }
      else
      {
        RestartContext(ListEntry);
      }
      byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext(ListEntry);
      v50 = *((_QWORD *)&ListEntry[6].Next + 1);
      if ( v50 )
        v51 = *(_QWORD *)(v50 + 32);
      else
        v51 = *((_QWORD *)&ListEntry[4].Next + 1);
      LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v51, *((_QWORD *)&ListEntry[7].Next + 1));
      v52 = (int)ListEntry[4].Next;
      if ( (v52 & 0x40) == 0 )
      {
        LODWORD(ListEntry[4].Next) = v52 | 0x40;
        ListInsertTail(&ListEntry[2], &qword_1C005A0B8);
LABEL_30:
        *((_QWORD *)&ListEntry[3].Next + 1) = v28;
      }
    }
    else
    {
      if ( (v15 & 0x80u) != 0 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
      {
        v48 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v48 )
          v49 = *(_QWORD *)(v48 + 32);
        else
          v49 = *((_QWORD *)&ListEntry[4].Next + 1);
        LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v49, *((_QWORD *)&ListEntry[7].Next + 1));
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
          v35 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
          if ( (_DWORD)qword_1C005A1E8 == 204 )
            v36 = v35 % 0xCC;
          else
            v36 = v35 % (unsigned int)qword_1C005A1E8;
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
        v2 = RunContext(ListEntry);
        if ( qword_1C005A0B8 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_1C005A0D0);
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
        v23 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
        if ( (_DWORD)qword_1C005A1E8 == 204 )
          v24 = v23 % 0xCC;
        else
          v24 = v23 % (unsigned int)qword_1C005A1E8;
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
        v27 = ListEntry + 2;
        LODWORD(ListEntry[4].Next) = v26 | 0x40;
        if ( qword_1C005A0B8 )
        {
          *((_QWORD *)&ListEntry[2].Next + 1) = qword_1C005A0B8;
          v27->Next = *(_SLIST_ENTRY **)qword_1C005A0B8;
          *(_QWORD *)(*(_QWORD *)qword_1C005A0B8 + 8LL) = v27;
          *(_QWORD *)qword_1C005A0B8 = v27;
        }
        else
        {
          qword_1C005A0B8 = (__int64)&ListEntry[2];
          *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
          v27->Next = v27;
        }
        v28 = &qword_1C005A0B8;
        goto LABEL_30;
      }
    }
    LODWORD(ListEntry[4].Next) |= 0x20u;
    return 32772;
  }
  return v2;
}
