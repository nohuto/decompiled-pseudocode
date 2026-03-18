/*
 * XREFs of RunContext @ 0x1C0002900
 * Callers:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C001E720 (DispatchCtxtQueue.c)
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     RestartContext @ 0x1C0006090 (RestartContext.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     LogSchedEvent @ 0x1C001F290 (LogSchedEvent.c)
 *     ListRemoveHead @ 0x1C001F638 (ListRemoveHead.c)
 *     ReleaseASLMutex @ 0x1C0021AE0 (ReleaseASLMutex.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C003311C (AcpiDiagTraceAmlEvaluation.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     InvokePauseCallbacks @ 0x1C0046DE8 (InvokePauseCallbacks.c)
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
  KIRQL v34; // al
  __int64 v35; // r8
  __int64 v36; // r9
  PSLIST_ENTRY v37; // rdx
  __int64 v38; // rdx
  PSLIST_ENTRY v39; // rsi
  KIRQL v40; // al
  __int64 v41; // rcx
  _SLIST_ENTRY *v42; // rcx
  __int64 v43; // rsi
  struct _KTHREAD *v44; // r8
  __int64 v45; // r9
  unsigned __int32 v46; // r15d
  unsigned int v47; // r15d
  __int64 v48; // rdx
  _SLIST_ENTRY *v50; // rax
  int v51; // ecx
  _SLIST_ENTRY *v52; // r13
  int v53; // r14d
  _SLIST_ENTRY *v54; // rcx
  _SLIST_ENTRY *v55; // rsi
  __int64 v56; // rbp
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rax
  char *ObjectPath; // rsi
  char v63; // [rsp+70h] [rbp+8h]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C0059318;
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    if ( (__int64 *)v4->Next != &RunningContextListHead )
      __fastfail(3u);
    v4->Next = v2;
    qword_1C0059318 = (__int64)(&ListEntry[24].Next + 1);
    v63 = 0;
  }
  else
  {
    v63 = 1;
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
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
    if ( (_DWORD)qword_1C005A1E8 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C005A1E8;
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
    KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
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
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || v15 != 0x8000 )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFEF;
  }
  while ( ((__int64)ListEntry[4].Next & 8) != 0 );
  if ( v15 == 32772 )
  {
    LODWORD(ListEntry[4].Next) |= 0x20u;
    goto LABEL_45;
  }
  if ( v15 != 0x8000 )
  {
    KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
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
    v50 = (_SLIST_ENTRY *)NewObjData(v18, &ListEntry[8]);
    v17[2].Next = v50;
    if ( !v50 )
    {
      v15 = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      goto LABEL_27;
    }
    memmove(v50, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
    v51 = WORD1(v17->Next);
    if ( v51 == 4 )
    {
      v52 = ListEntry[10].Next;
      v53 = 0;
      v54 = v17[2].Next;
      LODWORD(v54->Next) = v52->Next;
      if ( SLODWORD(v52->Next) > 0 )
      {
        v55 = v54;
        do
        {
          v15 = DupObjData(v18, &v55->Next + 5 * v53 + 1, &v52->Next + 5 * v53 + 1);
          if ( v15 )
            break;
          ++v53;
        }
        while ( v53 < SLODWORD(v52->Next) );
        v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
      }
      goto LABEL_88;
    }
    v57 = v51 - 5;
    if ( v57 )
    {
      v58 = v57 - 125;
      if ( !v58 )
      {
        ReferenceObjectEx(v17[2].Next->Next);
        ReferenceObjectEx(*((_QWORD *)&v17[2].Next->Next + 1));
        goto LABEL_88;
      }
      v59 = v58 - 1;
      if ( v59 )
      {
        if ( v59 != 1 )
        {
LABEL_88:
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
                v28 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
                if ( (_DWORD)qword_1C005A1E8 == 204 )
                  v29 = v28 % 0xCC;
                else
                  v29 = v28 % (unsigned int)qword_1C005A1E8;
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
              ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v21)(v22 + 112, v15, v23, v24);
            }
            v19 = (int)ListEntry[4].Next;
            if ( (v19 & 0x100) != 0 )
              v15 = 32772;
          }
          if ( (v19 & 0x200) != 0 )
            gReadyQueue &= ~0x200u;
          v31 = ListEntry + 3;
          while ( v31->Next )
          {
            if ( *((_DWORD *)&v31->Next[-2].Next + 2) == 1 )
            {
              ReleaseASLMutex(ListEntry, *((_QWORD *)&v31->Next[-1].Next + 1), 0LL);
            }
            else
            {
              v61 = ListRemoveHead(&ListEntry[3]);
              HeapFree(v61 - 24);
            }
          }
          v1 = 1;
          byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
          goto LABEL_45;
        }
        ReferenceObjectEx(*((_QWORD *)&v17[2].Next->Next + 1));
      }
    }
    ReferenceObjectEx(v17[2].Next->Next);
    goto LABEL_88;
  }
  if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
    LODWORD(ListEntry[4].Next) &= ~0x80u;
  v15 = 0;
LABEL_45:
  if ( !v63 )
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
    v34 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v37 = ListEntry + 1;
    byte_1C005A4A8 = v34;
    if ( *(&ListEntry[1].Next + 1) == &ListEntry[1] )
    {
      gplistCtxtHead = 0LL;
    }
    else
    {
      if ( v37 == (PSLIST_ENTRY)gplistCtxtHead )
        gplistCtxtHead = *(_QWORD *)(gplistCtxtHead + 8);
      **((_QWORD **)&ListEntry[1].Next + 1) = ListEntry[1].Next;
      *((_QWORD *)&v37->Next->Next + 1) = *((_QWORD *)&ListEntry[1].Next + 1);
    }
    v38 = *((_QWORD *)&ListEntry[3].Next + 1);
    if ( v38 )
      ListRemoveEntry(&ListEntry[2], v38, v35, v36);
    KeReleaseSpinLock(&gmutCtxtList, byte_1C005A4A8);
    v39 = ListEntry + 8;
    if ( ((__int64)ListEntry[8].Next & 1) != 0 )
    {
      v60 = *((_QWORD *)&ListEntry[8].Next + 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v60 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v60 & 8) != 0 )
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
    if ( AcpiDiagHandle )
    {
      if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
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
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 104), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v41 + 56) |= 4u;
        if ( (*(_WORD *)(v41 + 56) & 0x40) == 0 )
          FreeNameSpaceObjects(v41);
      }
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
    if ( *((_QWORD *)&ListEntry[26].Next + 1) )
    {
      DereferenceObjectEx();
      *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
    }
    v42 = ListEntry[5].Next;
    if ( v42 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v42[6].Next + 2, 0xFFFFFFFF) == 1 )
      {
        *((_WORD *)&v42[3].Next + 4) |= 4u;
        if ( (*(_WORD *)(&v42[3].Next + 1) & 0x40) == 0 )
          FreeNameSpaceObjects(v42);
      }
      ListEntry[5].Next = 0LL;
    }
    v43 = *((_QWORD *)&ListEntry[28].Next + 1);
    if ( v43 )
    {
      do
      {
        v56 = *(_QWORD *)(v43 + 24);
        ++dword_1C005A4DC;
        if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C005A4D0 )
        {
          ++dword_1C005A4E0;
          ((void (__fastcall *)(__int64))qword_1C005A4F8)(v43);
        }
        else
        {
          ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v43);
        }
        v43 = v56;
      }
      while ( v56 );
    }
    ++dword_1C005A4DC;
    if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C005A4D0 )
    {
      ++dword_1C005A4E0;
      ((void (__fastcall *)(PSLIST_ENTRY))qword_1C005A4F8)(ListEntry);
    }
    else
    {
      ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
    }
  }
  if ( (gReadyQueue & 4) != 0 && !gplistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C005A0F8 != &qword_1C005A0F8 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, v15, 0LL);
    }
  }
  v44 = KeGetCurrentThread();
  v45 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v46 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
    if ( (_DWORD)qword_1C005A1E8 == 204 )
      v47 = v46 % 0xCC;
    else
      v47 = v46 % (unsigned int)qword_1C005A1E8;
    v48 = 72LL * v47;
    *(_QWORD *)((char *)P + v48 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v48) = 1381322273;
    *(_QWORD *)((char *)P + v48 + 16) = v44;
    *(_QWORD *)((char *)P + v48 + 24) = 0LL;
    *(_QWORD *)((char *)P + v48 + 32) = 0LL;
    *(_QWORD *)((char *)P + v48 + 40) = v45;
    *(_QWORD *)((char *)P + v48 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v48 + 56) = (int)v15;
    *(_QWORD *)((char *)P + v48 + 64) = 0LL;
  }
  return v15;
}
