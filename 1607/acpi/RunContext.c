/*
 * XREFs of RunContext @ 0x1C0002440
 * Callers:
 *     InsertReadyQueue @ 0x1C0002D90 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C00233E0 (DispatchCtxtQueue.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     RestartContext @ 0x1C001DA80 (RestartContext.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     LogSchedEvent @ 0x1C0025F04 (LogSchedEvent.c)
 *     ReleaseASLMutex @ 0x1C0029100 (ReleaseASLMutex.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00421FC (AcpiDiagTraceAmlEvaluation.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     InvokePauseCallbacks @ 0x1C005DEA4 (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r14
  _SLIST_ENTRY *v2; // rsi
  _SLIST_ENTRY *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Next_low; // r10
  __int64 v10; // r11
  __int64 v11; // rbp
  unsigned __int32 v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // edi
  int Next; // eax
  _SLIST_ENTRY *v17; // rbp
  __int64 v18; // r12
  int v19; // eax
  _QWORD *v20; // rax
  __int64 (__fastcall *v21)(); // r10
  __int64 v22; // r11
  _SLIST_ENTRY *v23; // rbp
  __int64 v24; // r14
  struct _KTHREAD *v25; // r12
  __int64 v26; // r9
  __int64 v27; // r13
  unsigned __int32 v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  PSLIST_ENTRY v31; // r14
  _SLIST_ENTRY *v32; // rcx
  _SLIST_ENTRY **v33; // rax
  _SLIST_ENTRY *v34; // rdx
  PSLIST_ENTRY *v35; // rcx
  PSLIST_ENTRY v36; // rax
  _SLIST_ENTRY *v37; // r8
  _SLIST_ENTRY **v38; // rdx
  PSLIST_ENTRY v39; // rsi
  KIRQL v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  _SLIST_ENTRY *v43; // rcx
  _SLIST_ENTRY *v44; // rsi
  struct _KTHREAD *v45; // r8
  __int64 v46; // r9
  unsigned __int32 v47; // r15d
  unsigned int v48; // r15d
  __int64 v49; // rdx
  _SLIST_ENTRY *v51; // rax
  __int64 v52; // rdx
  int v53; // ecx
  _SLIST_ENTRY *v54; // r13
  int v55; // r14d
  _SLIST_ENTRY *v56; // rcx
  _SLIST_ENTRY *v57; // rsi
  _SLIST_ENTRY *v58; // rbp
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rcx
  _SLIST_ENTRY *v63; // rdx
  __int64 v64; // rdx
  _SLIST_ENTRY *v65; // rax
  char *ObjectPath; // rsi
  char v67; // [rsp+70h] [rbp+8h]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C0073768;
    if ( *(__int64 **)qword_1C0073768 != &RunningContextListHead )
      __fastfail(3u);
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C0073768 = (__int64)(&ListEntry[24].Next + 1);
    v67 = 0;
  }
  else
  {
    v67 = 1;
  }
  v5 = ((__int64)ListEntry[4].Next & 0x200) == 0;
  *((_QWORD *)&ListEntry[25].Next + 1) = KeGetCurrentThread();
  if ( !v5 )
    gReadyQueue |= 0x200u;
  v6 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  Next_low = LODWORD(ListEntry[4].Next);
  v10 = *((_QWORD *)&ListEntry[25].Next + 1);
  v11 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
    if ( (_DWORD)qword_1C0074668 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C0074668;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)P + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v14) = 1381322307;
    *(_QWORD *)((char *)P + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v14 + 24) = v10;
    *(_QWORD *)((char *)P + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v14 + 40) = v11;
    *(_QWORD *)((char *)P + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v14 + 56) = v7;
    *(_QWORD *)((char *)P + v14 + 64) = Next_low;
  }
  do
  {
    v15 = 0;
    LODWORD(ListEntry[4].Next) = (__int64)ListEntry[4].Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C0074540);
    do
    {
      if ( !ListEntry[26].Next )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
      }
      v15 = (*((__int64 (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *, _QWORD))&ListEntry[26].Next[1].Next + 1))(
              ListEntry,
              ListEntry[26].Next,
              v15);
    }
    while ( ((v15 - 0x8000) & 0xFFFFFFFB) != 0 );
    byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || v15 != 0x8000 )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFEF;
  }
  while ( ((__int64)ListEntry[4].Next & 8) != 0 );
  if ( v15 == 32772 )
  {
    LODWORD(ListEntry[4].Next) |= 0x20u;
    goto LABEL_46;
  }
  if ( v15 != 0x8000 )
  {
    KeReleaseSpinLock(&SpinLock, byte_1C0074540);
    if ( v15 )
      goto LABEL_27;
    v17 = ListEntry[11].Next;
    if ( !v17 )
      goto LABEL_27;
    v18 = gpheapGlobal;
    v15 = 0;
    if ( v17 == &ListEntry[8] )
      goto LABEL_27;
    *v17 = ListEntry[8];
    v17[1] = ListEntry[9];
    v17[2].Next = ListEntry[10].Next;
    if ( !ListEntry[10].Next )
      goto LABEL_27;
    v51 = (_SLIST_ENTRY *)NewObjData(v18, &ListEntry[8]);
    v17[2].Next = v51;
    if ( !v51 )
    {
      v15 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      goto LABEL_27;
    }
    memmove(v51, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
    v53 = WORD1(v17->Next);
    if ( v53 == 4 )
    {
      v54 = ListEntry[10].Next;
      v55 = 0;
      v56 = v17[2].Next;
      LODWORD(v56->Next) = v54->Next;
      if ( SLODWORD(v54->Next) > 0 )
      {
        v57 = v56;
        do
        {
          v15 = DupObjData(v18, &v57->Next + 5 * v55 + 1, &v54->Next + 5 * v55 + 1);
          if ( v15 )
            break;
          ++v55;
        }
        while ( v55 < SLODWORD(v54->Next) );
        v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
      }
      goto LABEL_86;
    }
    v59 = v53 - 5;
    if ( v59 )
    {
      v60 = v59 - 125;
      if ( !v60 )
      {
        ReferenceObjectEx(v17[2].Next->Next, v52);
        ReferenceObjectEx(*((_QWORD *)&v17[2].Next->Next + 1), v64);
        goto LABEL_86;
      }
      v61 = v60 - 1;
      if ( v61 )
      {
        if ( v61 != 1 )
        {
LABEL_86:
          LOWORD(v17->Next) &= ~1u;
          _InterlockedExchange((volatile __int32 *)&v17->Next + 2, 0);
LABEL_27:
          v19 = (int)ListEntry[4].Next;
          if ( (v19 & 0x20) != 0 )
          {
            v20 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
            if ( v20 )
            {
              v21 = (__int64 (__fastcall *)())v20[11];
              v22 = v20[4];
              v23 = (_SLIST_ENTRY *)v20[12];
              v24 = v20[13];
            }
            else
            {
              v21 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
              v22 = *((_QWORD *)&ListEntry[4].Next + 1);
              v23 = ListEntry[11].Next;
              v24 = *((_QWORD *)&ListEntry[11].Next + 1);
            }
            if ( v21 == EvalMethodComplete )
            {
              LogSchedEvent(1146048069, (_DWORD)ListEntry, v22, v15, v24);
              *(_DWORD *)v24 = v15;
              *(_QWORD *)(v24 + 8) = ListEntry;
              KeSetEvent((PRKEVENT)(v24 + 16), 0, 0);
            }
            else if ( v15 == 32771 )
            {
              RestartContext(ListEntry);
            }
            else if ( v21 )
            {
              v25 = KeGetCurrentThread();
              v26 = *((_QWORD *)&ListEntry[25].Next + 1);
              v27 = (unsigned int)gReadyQueue;
              if ( (gDebugger & 0x8000) != 0 && P )
              {
                v28 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
                if ( (_DWORD)qword_1C0074668 == 204 )
                  v29 = v28 % 0xCC;
                else
                  v29 = v28 % (unsigned int)qword_1C0074668;
                v30 = 72LL * v29;
                *(_QWORD *)((char *)P + v30 + 8) = MEMORY[0xFFFFF78000000008];
                *(_DWORD *)((char *)P + v30) = 1095975746;
                *(_QWORD *)((char *)P + v30 + 16) = v25;
                *(_QWORD *)((char *)P + v30 + 24) = v26;
                *(_QWORD *)((char *)P + v30 + 32) = ListEntry;
                *(_QWORD *)((char *)P + v30 + 40) = v27;
                *(_QWORD *)((char *)P + v30 + 48) = v22;
                *(_QWORD *)((char *)P + v30 + 56) = (int)v15;
                *(_QWORD *)((char *)P + v30 + 64) = v24;
              }
              ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v21)(v22 + 120, v15, v23, v24);
            }
            v19 = (int)ListEntry[4].Next;
            if ( (v19 & 0x100) != 0 )
              v15 = 32772;
          }
          if ( (v19 & 0x200) != 0 )
            gReadyQueue &= ~0x200u;
          v31 = ListEntry + 3;
          while ( v31->Next != v31 )
          {
            v63 = v31->Next;
            if ( *((_DWORD *)&v31->Next[-2].Next + 2) == 1 )
            {
              ReleaseASLMutex(ListEntry, *((_QWORD *)&v63[-1].Next + 1), 0LL);
            }
            else
            {
              v65 = v63->Next;
              if ( *(&v63->Next + 1) != v31 || *(&v65->Next + 1) != v63 )
                __fastfail(3u);
              v31->Next = v65;
              *((_QWORD *)&v65->Next + 1) = v31;
              HeapFree(&v63[-2].Next + 1);
            }
          }
          v1 = 1;
          byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
          goto LABEL_46;
        }
        ReferenceObjectEx(*((_QWORD *)&v17[2].Next->Next + 1), v52);
      }
    }
    ReferenceObjectEx(v17[2].Next->Next, v52);
    goto LABEL_86;
  }
  if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
    LODWORD(ListEntry[4].Next) &= ~0x80u;
  v15 = 0;
LABEL_46:
  if ( !v67 )
  {
    v32 = v2->Next;
    v33 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *(&v2->Next->Next + 1) != v2 || *v33 != v2 )
      __fastfail(3u);
    *v33 = v32;
    *((_QWORD *)&v32->Next + 1) = v33;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( v1 )
  {
    byte_1C0074960 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v34 = ListEntry[1].Next;
    v35 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1);
    if ( *(&v34->Next + 1) != &ListEntry[1] || *v35 != &ListEntry[1] )
      __fastfail(3u);
    *v35 = v34;
    v36 = ListEntry + 2;
    *((_QWORD *)&v34->Next + 1) = v35;
    v37 = ListEntry[2].Next;
    v38 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry[2].Next + 1);
    if ( *(&v37->Next + 1) != &ListEntry[2] || *v38 != v36 )
      __fastfail(3u);
    *v38 = v37;
    *((_QWORD *)&v37->Next + 1) = v38;
    *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
    v36->Next = v36;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C0074960);
    v39 = ListEntry + 8;
    if ( ((__int64)ListEntry[8].Next & 1) != 0 )
    {
      v62 = *((_QWORD *)&ListEntry[8].Next + 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v62 & 8) != 0 )
        FreeData();
    }
    else if ( ListEntry[10].Next )
    {
      if ( *((int *)&ListEntry[8].Next + 2) > 0 )
      {
        LOWORD(v39->Next) |= 8u;
      }
      else
      {
        if ( WORD1(ListEntry[8].Next) == 4 )
          FreeDataBuffs(&ListEntry[10].Next->Next + 1, ListEntry[10].Next->Next);
        FreeObjData(&ListEntry[8]);
      }
    }
    v39->Next = 0LL;
    *((_QWORD *)&ListEntry[8].Next + 1) = 0LL;
    ListEntry[9].Next = 0LL;
    *((_QWORD *)&ListEntry[9].Next + 1) = 0LL;
    ListEntry[10].Next = 0LL;
    v40 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    --gdwcCTObjs;
    KeReleaseSpinLock(&gdwGContextSpinLock, v40);
    if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
    {
      if ( EtwEventEnabled(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
      {
        ObjectPath = (char *)GetObjectPath(*((_QWORD *)&ListEntry[4].Next + 1));
        AcpiDiagTraceAmlEvaluation(ObjectPath);
        if ( ObjectPath )
          ExFreePoolWithTag(ObjectPath, 0);
      }
    }
    v41 = *((_QWORD *)&ListEntry[4].Next + 1);
    if ( v41 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v41 + 64) |= 4u;
        if ( (*(_WORD *)(v41 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v41);
      }
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
    v42 = *((_QWORD *)&ListEntry[26].Next + 1);
    if ( v42 )
    {
      DereferenceObjectEx(v42, 0LL);
      *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
    }
    v43 = ListEntry[5].Next;
    if ( v43 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v43[7], 0xFFFFFFFF) == 1 )
      {
        LOWORD(v43[4].Next) |= 4u;
        if ( ((__int64)v43[4].Next & 0x40) == 0 )
          FreeNameSpaceObjects(v43);
      }
      ListEntry[5].Next = 0LL;
    }
    v44 = ListEntry[29].Next;
    if ( v44 )
    {
      do
      {
        v58 = (_SLIST_ENTRY *)*((_QWORD *)&v44[1].Next + 1);
        ++dword_1C007499C;
        if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0074990 )
        {
          ++dword_1C00749A0;
          ((void (__fastcall *)(_SLIST_ENTRY *))qword_1C00749B8)(v44);
        }
        else
        {
          ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, v44);
        }
        v44 = v58;
      }
      while ( v58 );
    }
    ++dword_1C007499C;
    if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0074990 )
    {
      ++dword_1C00749A0;
      ((void (__fastcall *)(PSLIST_ENTRY))qword_1C00749B8)(ListEntry);
    }
    else
    {
      ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
    }
  }
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0074570 != &qword_1C0074570 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, v15, 0LL);
    }
  }
  v45 = KeGetCurrentThread();
  v46 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v47 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
    if ( (_DWORD)qword_1C0074668 == 204 )
      v48 = v47 % 0xCC;
    else
      v48 = v47 % (unsigned int)qword_1C0074668;
    v49 = 72LL * v48;
    *(_QWORD *)((char *)P + v49 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v49) = 1381322273;
    *(_QWORD *)((char *)P + v49 + 16) = v45;
    *(_QWORD *)((char *)P + v49 + 24) = 0LL;
    *(_QWORD *)((char *)P + v49 + 32) = 0LL;
    *(_QWORD *)((char *)P + v49 + 40) = v46;
    *(_QWORD *)((char *)P + v49 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v49 + 56) = (int)v15;
    *(_QWORD *)((char *)P + v49 + 64) = 0LL;
  }
  return v15;
}
