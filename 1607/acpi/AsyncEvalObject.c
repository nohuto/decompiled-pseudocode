/*
 * XREFs of AsyncEvalObject @ 0x1C0001AD0
 * Callers:
 *     SyncEvalObject @ 0x1C0001300 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0002D90 (InsertReadyQueue.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PushPost @ 0x1C00204A0 (PushPost.c)
 *     PushFrame @ 0x1C00204F4 (PushFrame.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     OSQueueWorkItem @ 0x1C00273F4 (OSQueueWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00421FC (AcpiDiagTraceAmlEvaluation.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005BEE0 (AMLIReadNamespaceOverrideObject.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
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
  char *v20; // r12
  char *v21; // rax
  size_t v22; // rdi
  KIRQL v23; // al
  struct _SLIST_ENTRY **v24; // rcx
  struct _SLIST_ENTRY *v25; // rax
  __int16 v26; // ax
  char v27; // al
  __int64 v28; // r14
  struct _SLIST_ENTRY *v29; // r13
  unsigned int Field; // ebp
  __int64 v31; // rdi
  char *v32; // r15
  char *v33; // rcx
  __int64 v34; // rdi
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // r9
  struct _KTHREAD *v38; // rdi
  __int64 v39; // r10
  __int64 v40; // r11
  __int64 v41; // rsi
  unsigned __int32 v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // eax
  _SLIST_ENTRY *Next; // rdi
  KIRQL v52; // al
  __int64 *v53; // rcx
  __int64 v54; // rbx
  void *v55; // rax
  char *ObjectPath; // rdi
  void *v57; // rsi
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  int v60; // eax
  int v61; // eax
  char *v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rbx
  char *v65; // [rsp+30h] [rbp-48h] BYREF
  char *v66; // [rsp+38h] [rbp-40h]
  _QWORD *v67; // [rsp+40h] [rbp-38h]
  __int64 v68[6]; // [rsp+48h] [rbp-30h] BYREF

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned int)gReadyQueue;
  CurrentIrql = KeGetCurrentIrql();
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v14 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
    if ( (_DWORD)qword_1C0074668 == 204 )
      v15 = v14 % 0xCC;
    else
      v15 = v14 % (unsigned int)qword_1C0074668;
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
  ++dword_1C0074994;
  v17 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v17 )
  {
    ++dword_1C0074998;
    v17 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00749B0)(
                          (unsigned int)dword_1C00749A4,
                          (unsigned int)dword_1C00749AC,
                          (unsigned int)dword_1C00749A8);
    if ( !v17 )
      return (unsigned int)-1073741670;
  }
  memset(v17, 0, 0x210uLL);
  v18 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v19 = gdwcCTObjs + 1;
  gdwcCTObjs = v19;
  if ( v19 > 0 && v19 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v19;
  KeReleaseSpinLock(&gdwGContextSpinLock, v18);
  memset(v17, 0, 0x1B8uLL);
  v20 = (char *)(&v17[27].Next + 1);
  v21 = (char *)v17 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v17->Next) = 1415074883;
  *((_QWORD *)&v17->Next + 1) = v21;
  v17[20].Next = (PSLIST_ENTRY)((char *)v17 + 440);
  KeInitializeDpc((PRKDPC)&v17[16], TimeoutCallback, v17);
  KeInitializeTimer((PKTIMER)&v17[12]);
  v22 = (unsigned int)(*((_DWORD *)&v17->Next + 2) - (_DWORD)v17 - 440);
  memset(&v17[27].Next + 1, 0, v22);
  *((_DWORD *)&v17[27].Next + 2) = 1346454856;
  v17[28].Next = (PSLIST_ENTRY)((char *)v17 + v22 + 440);
  *((_QWORD *)&v17[29].Next + 1) = v17 + 31;
  *((_QWORD *)&v17[30].Next + 1) = v17 + 30;
  v17[30].Next = v17 + 30;
  *((_QWORD *)&v17[23].Next + 1) = RestartCtxtPassive;
  v17[24].Next = v17;
  *((_QWORD *)&v17[22].Next + 1) = 0LL;
  v67 = &v17[22].Next + 1;
  v17[25].Next = (PSLIST_ENTRY)((char *)v17 + 392);
  *((_QWORD *)&v17[24].Next + 1) = (char *)v17 + 392;
  *((_QWORD *)&v17[3].Next + 1) = v17 + 3;
  v17[3].Next = v17 + 3;
  *((_QWORD *)&v17[2].Next + 1) = v17 + 2;
  v17[2].Next = v17 + 2;
  *((_QWORD *)&v17[28].Next + 1) = (char *)v17 + 440;
  v23 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v24 = (struct _SLIST_ENTRY **)off_1C0071318[0];
  byte_1C0074960 = v23;
  v25 = v17 + 1;
  if ( *(_UNKNOWN ***)off_1C0071318[0] != &glistCtxtHead )
    __fastfail(3u);
  *((_UNKNOWN ***)&v17[1].Next + 1) = off_1C0071318[0];
  v25->Next = (_SLIST_ENTRY *)&glistCtxtHead;
  *v24 = v25;
  off_1C0071318[0] = (_UNKNOWN **)&v17[1];
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0074960);
  v26 = *(_WORD *)(a1 + 64);
  if ( (v26 & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
  }
  else if ( (v26 & 0x200) != 0 )
  {
    v8 = a1;
  }
  v27 = gdwfAMLI;
  *((_QWORD *)&v17[4].Next + 1) = a1;
  if ( (v27 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
    v27 = gdwfAMLI;
  }
  v17[5].Next = (_SLIST_ENTRY *)a1;
  if ( (v27 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  if ( v8 )
  {
    *((_QWORD *)&v17[26].Next + 1) = v8;
    ReferenceObjectEx(v8, 512LL);
    a1 = v8;
  }
  *((_QWORD *)&v17[10].Next + 1) = a5;
  *((_QWORD *)&v17[11].Next + 1) = a6;
  v17[11].Next = a2;
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    if ( EtwEventEnabled(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
    {
      ObjectPath = (char *)GetObjectPath(*((_QWORD *)&v17[4].Next + 1));
      AcpiDiagTraceAmlEvaluation(ObjectPath);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  if ( a7 )
    LODWORD(v17[4].Next) |= 0x100u;
  v28 = a1 + 64;
  if ( (*(_WORD *)(a1 + 64) & 0x180) == 0 )
  {
    if ( *(_WORD *)(a1 + 66) == 8 )
    {
      Field = 0;
      v46 = HeapAlloc(&v17[27].Next + 1, 1297237576LL, 400LL);
      v47 = v46;
      if ( v46 )
      {
        *(_QWORD *)(v46 + 8) = v17[26].Next;
        v17[26].Next = (_SLIST_ENTRY *)v46;
        *(_QWORD *)(v46 + 24) = ParseCall;
        *(_DWORD *)v46 = 1280065859;
        v48 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(v46 + 48) = a1;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        if ( (*(_BYTE *)(v48 + 193) & 8) != 0 )
          *(_DWORD *)(v46 + 16) |= 0x10000u;
        if ( *(_WORD *)(a1 + 66) == 8 && (*(_WORD *)v28 & 0x200) != 0 )
          *(_DWORD *)(v46 + 16) |= 0x80000u;
        v49 = (*(_BYTE *)(v48 + 193) & 7) == 0;
        v50 = *(_BYTE *)(v48 + 193) & 7;
        *(_DWORD *)(v47 + 60) = v50;
        if ( !v49 )
        {
          v55 = (void *)HeapAlloc(v17[20].Next, 1413563464LL, (unsigned int)(40 * v50));
          *(_QWORD *)(v47 + 64) = v55;
          if ( v55 )
          {
            memset(v55, 0, 40LL * *(unsigned int *)(v47 + 60));
          }
          else
          {
            Field = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(v17, 3221225626LL);
            PrintDebugMessage(152, 0, 0, 0, 0LL);
          }
        }
        *(_QWORD *)(v47 + 392) = v17 + 8;
        if ( !Field )
        {
          Next = v17[26].Next;
          if ( a3 == *((_DWORD *)&Next[3].Next + 3) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              v57 = (void *)GetObjectPath(a1);
              ConPrintf("\nAMLI: %p: %s(");
              if ( v57 )
                ExFreePoolWithTag(v57, 0);
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
            AcpiDiagTraceAmlError(v17, 3222536203LL);
            PrintDebugMessage(12, a3, *((_DWORD *)&Next[3].Next + 3), 0, 0LL);
          }
        }
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(v17, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
      goto LABEL_104;
    }
    v66 = 0LL;
    v29 = v17 + 8;
    Field = 0;
    v31 = 0LL;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    if ( (unsigned int)(LODWORD(v17[28].Next) - ((_DWORD)v17 + 440) - 56) >= 0x48 )
    {
      v32 = (char *)(&v17[27].Next + 1);
      v65 = (char *)(&v17[27].Next + 1);
      while ( 1 )
      {
        v31 = *((_QWORD *)v32 + 5) - 16LL;
        v33 = (char *)*((_QWORD *)v32 + 5);
        if ( v32 + 40 == v33 )
        {
LABEL_29:
          v31 = 0LL;
        }
        else
        {
          while ( *(_DWORD *)(v31 + 4) < 0x48u )
          {
            v31 = *(_QWORD *)v33 - 16LL;
            v33 = *(char **)v33;
            if ( v32 + 40 == v33 )
              goto LABEL_29;
          }
        }
        if ( v31 )
          break;
        if ( (unsigned int)(*((_DWORD *)v32 + 2) - *((_DWORD *)v32 + 8)) >= 0x48 )
        {
          v31 = *((_QWORD *)v32 + 4);
          *((_QWORD *)v32 + 4) = v31 + 72;
          *(_DWORD *)(v31 + 4) = 72;
          goto LABEL_33;
        }
        v66 = v32;
        v32 = (char *)*((_QWORD *)v32 + 3);
        v65 = v32;
        if ( !v32 )
          goto LABEL_33;
      }
      v58 = *(_QWORD *)(v31 + 16);
      v59 = *(_QWORD **)(v31 + 24);
      if ( *(_QWORD *)(v58 + 8) != v31 + 16 || *v59 != v31 + 16 )
        __fastfail(3u);
      *v59 = v58;
      *(_QWORD *)(v58 + 8) = v59;
      if ( *(_DWORD *)(v31 + 4) >= 0x68u )
      {
        *(_DWORD *)(v31 + 72) = 0;
        v60 = *(_DWORD *)(v31 + 4) - 72;
        *(_QWORD *)(v31 + 80) = v32;
        *(_DWORD *)(v31 + 76) = v60;
        *(_DWORD *)(v31 + 4) = 72;
        HeapInsertFreeList(v32);
      }
LABEL_33:
      if ( v31 )
        goto LABEL_34;
      if ( v20 == (char *)gpheapGlobal )
        v61 = NewGlobalHeap(&v65);
      else
        v61 = NewLocalHeap(&v65);
      if ( !v61 )
      {
        v32 = v65;
        v62 = v66;
        *((_QWORD *)v65 + 2) = v20;
        *((_QWORD *)v62 + 3) = v32;
        v31 = *((_QWORD *)v32 + 4);
        *((_QWORD *)v32 + 4) = v31 + 72;
        *(_DWORD *)(v31 + 4) = 72;
LABEL_34:
        *(_DWORD *)v31 = 1297237576;
        *(_QWORD *)(v31 + 8) = v32;
        *(_QWORD *)(v31 + 16) = 0LL;
        *(_QWORD *)(v31 + 24) = 0LL;
        *(_QWORD *)(v31 + 32) = 0LL;
        *(_QWORD *)(v31 + 40) = 0LL;
        *(_QWORD *)(v31 + 48) = 0LL;
        *(_QWORD *)(v31 + 56) = 0LL;
        *(_QWORD *)(v31 + 64) = 0LL;
      }
    }
    KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
    if ( v31 && (v34 = v31 + 16) != 0 )
    {
      *(_QWORD *)(v34 + 8) = v17[26].Next;
      v17[26].Next = (_SLIST_ENTRY *)v34;
      *(_QWORD *)(v34 + 24) = ProcessEvalObj;
      *(_DWORD *)v34 = 1414745936;
      *(_QWORD *)(v34 + 32) = a1;
      *(_QWORD *)(v34 + 40) = 0LL;
      *(_QWORD *)(v34 + 48) = v29;
    }
    else
    {
      Field = -1072431102;
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(v17, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
    }
    if ( !Field )
    {
      Field = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v35 = *(_WORD *)(v28 + 2);
          if ( v35 != 128 )
            break;
          v28 = *(_QWORD *)(v28 + 16) + 64LL;
        }
        if ( v35 != 129 )
          break;
        v28 = *(_QWORD *)(v28 + 16);
      }
      if ( v35 == 5 )
      {
        Field = PushFrame((_DWORD)v17, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)v68);
        if ( !Field )
        {
          v63 = v68[0];
          *(_QWORD *)(v68[0] + 32) = v28;
          *(_DWORD *)(v63 + 16) = 0x10000;
          *(_QWORD *)(v63 + 40) = v29;
        }
      }
      else if ( v35 == 14 )
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
        goto LABEL_51;
    }
LABEL_104:
    FreeContext(v17);
    return Field;
  }
  Field = PushPost((_DWORD)v17, (unsigned int)ProcessEvalObj, a1, 0, (__int64)&v17[8]);
  if ( Field )
    goto LABEL_104;
  Field = AMLIReadNamespaceOverrideObject(v17, a1, &v17[8]);
  if ( Field == 32772 )
    goto LABEL_104;
LABEL_51:
  v36 = *((_QWORD *)&v17[6].Next + 1);
  if ( v36 )
    v37 = *(_QWORD *)(v36 + 32);
  else
    v37 = *((_QWORD *)&v17[4].Next + 1);
  v38 = KeGetCurrentThread();
  v39 = *((_QWORD *)&v17[7].Next + 1);
  v40 = *((_QWORD *)&v17[25].Next + 1);
  v41 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v42 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0074668 + 1, 1u);
    if ( (_DWORD)qword_1C0074668 == 204 )
      v43 = v42 % 0xCC;
    else
      v43 = v42 % (unsigned int)qword_1C0074668;
    v44 = 72LL * v43;
    *(_QWORD *)((char *)P + v44 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v44) = 1380275028;
    *(_QWORD *)((char *)P + v44 + 16) = v38;
    *(_QWORD *)((char *)P + v44 + 24) = v40;
    *(_QWORD *)((char *)P + v44 + 32) = v17;
    *(_QWORD *)((char *)P + v44 + 40) = v41;
    *(_QWORD *)((char *)P + v44 + 48) = v17;
    *(_QWORD *)((char *)P + v44 + 56) = v37;
    *(_QWORD *)((char *)P + v44 + 64) = v39;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v17[27].Next )
      v17[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(v17[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0074540);
    if ( (gdwfAMLI & 4) != 0 )
    {
      v64 = v67;
      if ( !(unsigned __int8)ExTryQueueWorkItem(v67, 1LL) )
        OSQueueWorkItem(v64);
    }
    else
    {
      v52 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v53 = (__int64 *)qword_1C00737C8;
      if ( *(__int64 **)qword_1C00737C8 != &ACPIWorkQueue )
        __fastfail(3u);
      v54 = (__int64)v67;
      *v67 = &ACPIWorkQueue;
      *(_QWORD *)(v54 + 8) = v53;
      *v53 = v54;
      qword_1C00737C8 = v54;
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v52);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
    }
    return 32772;
  }
  else
  {
    byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v17[27].Next )
      v17[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    Field = InsertReadyQueue(v17);
    KeReleaseSpinLock(&SpinLock, byte_1C0074540);
  }
  return Field;
}
