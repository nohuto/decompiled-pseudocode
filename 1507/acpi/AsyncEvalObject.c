/*
 * XREFs of AsyncEvalObject @ 0x1C0002000
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 *     OSQueueWorkItem @ 0x1C00204CC (OSQueueWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C003311C (AcpiDiagTraceAmlEvaluation.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0044D34 (AMLIReadNamespaceOverrideObject.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        _SLIST_ENTRY *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rbp
  struct _KTHREAD *CurrentThread; // r11
  __int64 v12; // rbx
  __int64 CurrentIrql; // r10
  unsigned __int32 v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  PSLIST_ENTRY v17; // rbx
  KIRQL v18; // dl
  int v19; // eax
  PSLIST_ENTRY v20; // r12
  char *v21; // rax
  size_t v22; // rdi
  __int64 *v23; // r15
  _SLIST_ENTRY *v24; // rdi
  struct _SLIST_ENTRY *v25; // rcx
  __int16 v26; // ax
  char v27; // al
  __int64 v28; // r14
  struct _SLIST_ENTRY *v29; // r15
  unsigned int Field; // ebp
  PSLIST_ENTRY v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r8
  PSLIST_ENTRY v34; // r11
  __int64 v35; // r9
  __int64 v36; // rax
  _SLIST_ENTRY *v37; // rdi
  __int16 v38; // ax
  __int64 v39; // rax
  __int64 v40; // r9
  struct _KTHREAD *v41; // rdi
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // rsi
  unsigned __int32 v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rcx
  bool v52; // zf
  int v53; // eax
  _SLIST_ENTRY *Next; // rdi
  KIRQL v55; // al
  __int64 **v56; // rcx
  void *v57; // rax
  char *ObjectPath; // rdi
  void *v59; // rsi
  __int64 v60; // rcx
  bool v61; // cf
  int v62; // eax
  int v63; // eax
  __int64 v64; // rax
  PSLIST_ENTRY v65; // [rsp+30h] [rbp-38h] BYREF
  __int64 v66[6]; // [rsp+38h] [rbp-30h] BYREF

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned int)gReadyQueue;
  CurrentIrql = KeGetCurrentIrql();
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v14 = _InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u);
    if ( (_DWORD)qword_1C005A1E8 == 204 )
      v15 = v14 % 0xCC;
    else
      v15 = v14 % (unsigned int)qword_1C005A1E8;
    v16 = 72LL * v15;
    *(_QWORD *)((char *)P + v16 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v16) = 1095981390;
    *(_QWORD *)((char *)P + v16 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v16 + 24) = 0LL;
    *(_QWORD *)((char *)P + v16 + 32) = 0LL;
    *(_QWORD *)((char *)P + v16 + 40) = v12;
    *(_QWORD *)((char *)P + v16 + 48) = CurrentIrql;
    *(_QWORD *)((char *)P + v16 + 56) = a1;
    *(_QWORD *)((char *)P + v16 + 64) = 0LL;
  }
  ++dword_1C005A4D4;
  v17 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v17 )
  {
    ++dword_1C005A4D8;
    v17 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C005A4F0)(
                          (unsigned int)dword_1C005A4E4,
                          (unsigned int)dword_1C005A4EC,
                          (unsigned int)dword_1C005A4E8);
    if ( !v17 )
      return (unsigned int)-1073741670;
  }
  memset(v17, 0, 0x200uLL);
  v18 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v19 = gdwcCTObjs + 1;
  gdwcCTObjs = v19;
  if ( v19 > 0 && v19 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v19;
  KeReleaseSpinLock(&gdwGContextSpinLock, v18);
  memset(v17, 0, 0x1B0uLL);
  v20 = v17 + 27;
  v21 = (char *)v17 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v17->Next) = 1415074883;
  *((_QWORD *)&v17->Next + 1) = v21;
  v17[20].Next = v17 + 27;
  KeInitializeDpc((PRKDPC)&v17[16], TimeoutCallback, v17);
  KeInitializeTimer((PKTIMER)&v17[12]);
  v22 = (unsigned int)(*((_DWORD *)&v17->Next + 2) - (_DWORD)v17 - 432);
  memset(&v17[27], 0, v22);
  LODWORD(v17[27].Next) = 1346454856;
  *((_QWORD *)&v17[27].Next + 1) = (char *)v17 + v22 + 432;
  v23 = (__int64 *)(&v17[22].Next + 1);
  v24 = 0LL;
  v17[29].Next = v17 + 30;
  v17[24].Next = v17;
  *((_QWORD *)&v17[23].Next + 1) = RestartCtxtPassive;
  *((_QWORD *)&v17[22].Next + 1) = 0LL;
  v17[25].Next = (PSLIST_ENTRY)((char *)v17 + 392);
  *((_QWORD *)&v17[24].Next + 1) = (char *)v17 + 392;
  v17[28].Next = v17 + 27;
  byte_1C005A4A8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v25 = v17 + 1;
  if ( gplistCtxtHead )
  {
    *((_QWORD *)&v17[1].Next + 1) = gplistCtxtHead;
    v25->Next = *(_SLIST_ENTRY **)gplistCtxtHead;
    *(_QWORD *)(*(_QWORD *)gplistCtxtHead + 8LL) = v25;
    *(_QWORD *)gplistCtxtHead = v25;
  }
  else
  {
    gplistCtxtHead = (__int64)&v17[1];
    *((_QWORD *)&v17[1].Next + 1) = v17 + 1;
    v25->Next = v25;
  }
  KeReleaseSpinLock(&gmutCtxtList, byte_1C005A4A8);
  v26 = *(_WORD *)(a1 + 56);
  if ( (v26 & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 128);
  }
  else if ( (v26 & 0x200) != 0 )
  {
    v8 = a1;
  }
  v27 = gdwfAMLI;
  *((_QWORD *)&v17[4].Next + 1) = a1;
  if ( (v27 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
    v27 = gdwfAMLI;
  }
  v17[5].Next = (_SLIST_ENTRY *)a1;
  if ( (v27 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
  if ( v8 )
  {
    *((_QWORD *)&v17[26].Next + 1) = v8;
    ReferenceObjectEx(v8);
    a1 = v8;
  }
  *((_QWORD *)&v17[10].Next + 1) = a5;
  *((_QWORD *)&v17[11].Next + 1) = a6;
  v17[11].Next = a2;
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    ObjectPath = (char *)GetObjectPath(*((_QWORD *)&v17[4].Next + 1));
    AcpiDiagTraceAmlEvaluation(ObjectPath);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
    v24 = 0LL;
  }
  if ( a7 )
    LODWORD(v17[4].Next) |= 0x100u;
  v28 = a1 + 56;
  if ( (*(_WORD *)(a1 + 56) & 0x180) == 0 )
  {
    v29 = v17 + 8;
    Field = 0;
    if ( *(_WORD *)(a1 + 58) == 8 )
    {
      v49 = HeapAlloc(&v17[27], 1297237576LL, 400LL);
      v50 = v49;
      if ( v49 )
      {
        *(_QWORD *)(v49 + 8) = v17[26].Next;
        v17[26].Next = (_SLIST_ENTRY *)v49;
        *(_QWORD *)(v49 + 24) = ParseCall;
        *(_DWORD *)v49 = 1280065859;
        v51 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(v49 + 48) = a1;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
        if ( (*(_BYTE *)(v51 + 185) & 8) != 0 )
          *(_DWORD *)(v49 + 16) |= 0x10000u;
        if ( *(_WORD *)(a1 + 58) == 8 && (*(_WORD *)v28 & 0x200) != 0 )
          *(_DWORD *)(v49 + 16) |= 0x80000u;
        v52 = (*(_BYTE *)(v51 + 185) & 7) == 0;
        v53 = *(_BYTE *)(v51 + 185) & 7;
        *(_DWORD *)(v50 + 60) = v53;
        if ( !v52 )
        {
          v57 = (void *)HeapAlloc(v17[20].Next, 1413563464LL, (unsigned int)(40 * v53));
          *(_QWORD *)(v50 + 64) = v57;
          if ( v57 )
          {
            memset(v57, 0, 40LL * *(unsigned int *)(v50 + 60));
          }
          else
          {
            Field = -1073741670;
            LogError(3221225626LL);
            PrintDebugMessage(152, 0, 0, 0, 0LL);
          }
        }
        *(_QWORD *)(v50 + 392) = v29;
        if ( !Field )
        {
          Next = v17[26].Next;
          if ( a3 == *((_DWORD *)&Next[3].Next + 3) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              v59 = (void *)GetObjectPath(a1);
              ConPrintf("\nAMLI: %p: %s(");
              if ( v59 )
                ExFreePoolWithTag(v59, 0);
            }
            *((_DWORD *)&Next[3].Next + 2) = 0;
            if ( !a3 )
            {
LABEL_76:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              LODWORD(Next[1].Next) = (__int64)Next[1].Next & 0xFFFF0000 | 2;
              goto LABEL_51;
            }
            while ( 1 )
            {
              Field = DupObjData(
                        v17[20].Next,
                        (char *)Next[4].Next + 40 * *((unsigned int *)&Next[3].Next + 2),
                        a4 + 40LL * *((unsigned int *)&Next[3].Next + 2));
              if ( Field )
                break;
              if ( (gDebugger & 0xD0) != 0 )
              {
                PrintObject(a4 + 40LL * *((unsigned int *)&Next[3].Next + 2));
                if ( *((_DWORD *)&Next[3].Next + 2) + 1 < a3 )
                  ConPrintf(",");
              }
              if ( ++*((_DWORD *)&Next[3].Next + 2) >= a3 )
                goto LABEL_76;
            }
          }
          else
          {
            Field = -1072431093;
            LogError(3222536203LL);
            PrintDebugMessage(12, a3, *((_DWORD *)&Next[3].Next + 3), 0, 0LL);
          }
        }
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
LABEL_102:
      FreeContext(v17);
      return Field;
    }
    v31 = 0LL;
    byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    if ( (unsigned int)(*((_DWORD *)&v17[27].Next + 2) - ((_DWORD)v17 + 432) - 48) >= 0x48 )
    {
      v34 = v17 + 27;
      v65 = v17 + 27;
      v35 = 0LL;
      while ( 1 )
      {
        v36 = *((_QWORD *)&v34[2].Next + 1);
        v24 = 0LL;
        if ( v36 )
        {
          v60 = *((_QWORD *)&v34[2].Next + 1);
          while ( 1 )
          {
            v61 = *(_DWORD *)(v60 - 12) < 0x48u;
            v24 = (_SLIST_ENTRY *)(v60 - 16);
            if ( *(_DWORD *)(v60 - 12) >= 0x48u )
              break;
            v60 = *(_QWORD *)(v60 + 8);
            if ( v60 == v36 )
            {
              v61 = HIDWORD(v24->Next) < 0x48;
              break;
            }
          }
          if ( v61 )
            v24 = 0LL;
        }
        if ( v24 )
          break;
        if ( (unsigned int)(*((_DWORD *)&v34->Next + 2) - LODWORD(v34[2].Next)) >= 0x48 )
        {
          v24 = v34[2].Next;
          v34[2].Next = (_SLIST_ENTRY *)((char *)v24 + 72);
          HIDWORD(v24->Next) = 72;
          goto LABEL_33;
        }
        v31 = v34;
        v34 = (PSLIST_ENTRY)*((_QWORD *)&v34[1].Next + 1);
        v65 = v34;
        if ( !v34 )
          goto LABEL_33;
      }
      ListRemoveEntry(&v24[1], &v34[2].Next + 1, v33, 0LL);
      if ( HIDWORD(v24->Next) >= 0x68 )
      {
        *((_DWORD *)&v24[4].Next + 2) = v35;
        v62 = HIDWORD(v24->Next) - 72;
        v24[5].Next = v34;
        *((_DWORD *)&v24[4].Next + 3) = v62;
        HIDWORD(v24->Next) = 72;
        HeapInsertFreeList(v34);
      }
LABEL_33:
      if ( v24 )
        goto LABEL_34;
      if ( v20 == (PSLIST_ENTRY)gpheapGlobal )
        v63 = NewGlobalHeap(&v65, v32, v33, v35);
      else
        v63 = NewLocalHeap(&v65, v32, v33, v35);
      if ( !v63 )
      {
        v34 = v65;
        v65[1].Next = v20;
        *((_QWORD *)&v31[1].Next + 1) = v34;
        v24 = v34[2].Next;
        v34[2].Next = (_SLIST_ENTRY *)((char *)v24 + 72);
        HIDWORD(v24->Next) = 72;
LABEL_34:
        LODWORD(v24->Next) = 1297237576;
        *((_QWORD *)&v24->Next + 1) = v34;
        v24[1].Next = 0LL;
        *((_QWORD *)&v24[1].Next + 1) = 0LL;
        v24[2].Next = 0LL;
        *((_QWORD *)&v24[2].Next + 1) = 0LL;
        v24[3].Next = 0LL;
        *((_QWORD *)&v24[3].Next + 1) = 0LL;
        v24[4].Next = 0LL;
      }
    }
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
    if ( v24 && (v37 = v24 + 1) != 0LL )
    {
      *((_QWORD *)&v37->Next + 1) = v17[26].Next;
      v17[26].Next = v37;
      *((_QWORD *)&v37[1].Next + 1) = ProcessEvalObj;
      LODWORD(v37->Next) = 1414745936;
      v37[2].Next = (_SLIST_ENTRY *)a1;
      *((_QWORD *)&v37[2].Next + 1) = 0LL;
      v37[3].Next = v29;
    }
    else
    {
      Field = -1072431102;
      LogError(3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
    }
    if ( !Field )
    {
      Field = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v38 = *(_WORD *)(v28 + 2);
          if ( v38 != 128 )
            break;
          v28 = *(_QWORD *)(v28 + 16) + 56LL;
        }
        if ( v38 != 129 )
          break;
        v28 = *(_QWORD *)(v28 + 16);
      }
      if ( v38 == 5 )
      {
        Field = PushFrame((_DWORD)v17, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)v66);
        if ( !Field )
        {
          v64 = v66[0];
          *(_QWORD *)(v66[0] + 32) = v28;
          *(_DWORD *)(v64 + 16) = 0x10000;
          *(_QWORD *)(v64 + 40) = v29;
        }
      }
      else if ( v38 == 14 )
      {
        Field = ReadField(v17, v28, *(_QWORD *)(v28 + 32) + 12LL, &v17[8]);
      }
      else
      {
        if ( v29 != (struct _SLIST_ENTRY *)v28 )
        {
          *v29 = *(struct _SLIST_ENTRY *)v28;
          v17[9] = *(PSLIST_ENTRY)(v28 + 16);
          v17[10].Next = *(_SLIST_ENTRY **)(v28 + 32);
          if ( (*(_BYTE *)v28 & 1) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 8) + 8LL));
          }
          else if ( *(_QWORD *)(v28 + 32) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
            LOWORD(v29->Next) |= 1u;
            *((_QWORD *)&v17[8].Next + 1) = v28;
          }
        }
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("=");
          PrintObject(&v17[8]);
        }
      }
      if ( Field != 32772 )
      {
LABEL_51:
        v23 = (__int64 *)(&v17[22].Next + 1);
        goto LABEL_52;
      }
    }
    goto LABEL_102;
  }
  Field = PushPost((_DWORD)v17, (unsigned int)ProcessEvalObj, a1, 0, (__int64)&v17[8]);
  if ( Field )
    goto LABEL_102;
  Field = AMLIReadNamespaceOverrideObject(v17, a1, &v17[8]);
  if ( Field == 32772 )
    goto LABEL_102;
LABEL_52:
  v39 = *((_QWORD *)&v17[6].Next + 1);
  if ( v39 )
    v40 = *(_QWORD *)(v39 + 32);
  else
    v40 = *((_QWORD *)&v17[4].Next + 1);
  v41 = KeGetCurrentThread();
  v42 = *((_QWORD *)&v17[7].Next + 1);
  v43 = *((_QWORD *)&v17[25].Next + 1);
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
    *(_DWORD *)((char *)P + v47) = 1380275028;
    *(_QWORD *)((char *)P + v47 + 16) = v41;
    *(_QWORD *)((char *)P + v47 + 24) = v43;
    *(_QWORD *)((char *)P + v47 + 32) = v17;
    *(_QWORD *)((char *)P + v47 + 40) = v44;
    *(_QWORD *)((char *)P + v47 + 48) = v17;
    *(_QWORD *)((char *)P + v47 + 56) = v40;
    *(_QWORD *)((char *)P + v47 + 64) = v42;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    LODWORD(v17[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( !(unsigned __int8)ExTryQueueWorkItem(v23, 1LL) )
        OSQueueWorkItem(v23);
    }
    else
    {
      v55 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v56 = (__int64 **)qword_1C0059448;
      *v23 = (__int64)&ACPIWorkQueue;
      v23[1] = (__int64)v56;
      if ( *v56 != &ACPIWorkQueue )
        __fastfail(3u);
      *v56 = v23;
      qword_1C0059448 = (__int64)v23;
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v55);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
    }
    return 32772;
  }
  else
  {
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Field = InsertReadyQueue(v17);
    KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
  }
  return Field;
}
