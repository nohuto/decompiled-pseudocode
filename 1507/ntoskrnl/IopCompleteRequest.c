/*
 * XREFs of IopCompleteRequest @ 0x14004A190
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140042DE0 (IopCompleteIrpInFileObjectList.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140670E10 (IopAbortRequest.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     IopDequeueIrpFromFileObject @ 0x140112DF4 (IopDequeueIrpFromFileObject.c)
 *     sub_140125D7C @ 0x140125D7C (sub_140125D7C.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401F1F5C (IopDecrementCompletionContextUsageCount.c)
 *     IopExceptionFilter @ 0x1401F2394 (IopExceptionFilter.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401F2578 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v7; // r15
  int v8; // eax
  int v9; // ebx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rbx
  char v20; // r12
  struct _KPRCB *v21; // r13
  _KTHREAD *v22; // rsi
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 *v25; // rcx
  _QWORD *v26; // r13
  _QWORD *v27; // r14
  __int64 v28; // rdi
  char v29; // al
  __int64 v30; // r8
  __int64 v31; // rbx
  char v32; // r12
  _KTHREAD *v33; // rsi
  unsigned __int8 v34; // al
  __int64 v35; // rcx
  __int64 *v36; // rcx
  int v37; // eax
  struct _MDL *v38; // rbx
  struct _MDL *Next; // rdi
  __int64 v40; // rcx
  struct _KPRCB *v41; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  struct _KEVENT *v43; // rcx
  void *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  int v48; // ebx
  struct _KPRCB *v49; // r10
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rcx
  _QWORD *v55; // rax
  char v56; // al
  __int64 v57; // rbx
  char v58; // r15
  struct _KPRCB *v59; // r13
  _KTHREAD *v60; // rsi
  unsigned __int8 v61; // al
  __int64 v62; // rcx
  __int64 *v63; // rcx
  _QWORD *v64; // rcx
  _QWORD *v65; // r15
  __int64 v66; // rdi
  char v67; // al
  __int64 v68; // r8
  __int64 v69; // rbx
  char v70; // r12
  struct _KPRCB *v71; // r13
  _KTHREAD *v72; // rsi
  unsigned __int8 v73; // al
  __int64 v74; // rcx
  __int64 *v75; // rcx
  int v76; // ebx
  struct _KPRCB *v77; // r10
  __int64 v78; // rcx
  int v79; // eax
  _QWORD *v80; // r12
  __int64 v81; // rdi
  __int64 v82; // rcx
  _QWORD *v83; // rax
  char v84; // al
  __int64 v85; // rbx
  char v86; // r15
  struct _KPRCB *v87; // r13
  _KTHREAD *v88; // rsi
  unsigned __int8 v89; // al
  __int64 v90; // rcx
  __int64 *v91; // rcx
  _QWORD *v92; // rcx
  _QWORD *v93; // r14
  __int64 v94; // rdi
  char v95; // al
  __int64 v96; // r8
  __int64 v97; // rbx
  char v98; // r12
  struct _KPRCB *v99; // r13
  _KTHREAD *v100; // rsi
  unsigned __int8 v101; // al
  __int64 v102; // rcx
  __int64 *v103; // rcx
  char v104; // al
  int v105; // ebx
  struct _KPRCB *v106; // r10
  __int64 v107; // rcx
  int v108; // eax
  _QWORD *v109; // r12
  __int64 v110; // rdi
  __int64 v111; // rcx
  _QWORD *v112; // rax
  char v113; // al
  __int64 v114; // rbx
  char v115; // r15
  struct _KPRCB *v116; // r13
  _KTHREAD *v117; // rsi
  unsigned __int8 v118; // al
  __int64 v119; // rcx
  __int64 *v120; // rcx
  _QWORD *v121; // rcx
  _QWORD *v122; // r14
  __int64 v123; // rdi
  char v124; // al
  __int64 v125; // r8
  __int64 v126; // rbx
  char v127; // r12
  struct _KPRCB *v128; // r13
  _KTHREAD *v129; // rsi
  unsigned __int8 v130; // al
  __int64 v131; // rcx
  __int64 *v132; // rcx
  int v133; // eax
  volatile signed __int64 *v134; // rcx
  unsigned __int64 v135; // rdx
  struct _KTHREAD *v136; // rax
  unsigned __int64 v137; // rdx
  struct _KTHREAD *v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rdx
  struct _KTHREAD *v141; // rax
  volatile signed __int32 *v142; // rbx
  unsigned __int8 v143; // di
  _QWORD *v144; // rax
  __int64 v145; // rdx
  _QWORD *v146; // rcx
  unsigned __int64 v147; // rax
  __int64 v148; // rdi
  unsigned __int8 v149; // bl
  volatile signed __int32 *v150; // rcx
  _QWORD *v151; // rax
  __int64 v152; // rdx
  _QWORD *v153; // rcx
  volatile signed __int64 *v154; // rcx
  int v155; // ecx
  __int64 v156; // rdx
  int v157; // r8d
  int v158; // edi
  int v159; // ecx
  LONG *v160; // rsi
  char v161; // r12
  char v162; // r13
  struct _KPRCB *v163; // r15
  _KTHREAD *v164; // r14
  unsigned __int8 v165; // al
  __int64 v166; // rcx
  LONG *p_LockNV; // rbx
  LONG **v168; // rcx
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // r8
  __int64 v171; // r9
  signed __int64 v172; // rax
  bool v173; // cc
  signed __int64 BugCheckParameter4; // rax
  struct _KPRCB *v175; // [rsp+40h] [rbp-C8h]
  struct _KPRCB *v176; // [rsp+40h] [rbp-C8h]
  _DISPATCHER_HEADER *volatile Object; // [rsp+48h] [rbp-C0h]
  __int64 v178; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h]
  int v180; // [rsp+64h] [rbp-A4h]
  int v181; // [rsp+68h] [rbp-A0h]
  int v182; // [rsp+6Ch] [rbp-9Ch]
  int v183; // [rsp+70h] [rbp-98h]
  int v184; // [rsp+74h] [rbp-94h]
  int v185; // [rsp+78h] [rbp-90h]
  int v186; // [rsp+7Ch] [rbp-8Ch]
  struct _KTHREAD *v187; // [rsp+80h] [rbp-88h]
  char CurrentIrql; // [rsp+80h] [rbp-88h]
  int v189; // [rsp+88h] [rbp-80h]
  int v190; // [rsp+8Ch] [rbp-7Ch]
  int v191; // [rsp+90h] [rbp-78h]
  int v192; // [rsp+94h] [rbp-74h]
  int v193; // [rsp+98h] [rbp-70h]
  char v194; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v195; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v196; // [rsp+A0h] [rbp-68h]
  struct _KPRCB *v197; // [rsp+A8h] [rbp-60h]
  __int64 v198; // [rsp+A8h] [rbp-60h]
  __int64 v199; // [rsp+B0h] [rbp-58h]
  void *retaddr; // [rsp+108h] [rbp+0h]
  char v201; // [rsp+110h] [rbp+8h]
  struct _KPRCB *v202; // [rsp+110h] [rbp+8h]
  int v203; // [rsp+128h] [rbp+20h]

  v5 = a1 - 120;
  v178 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v187 = CurrentThread;
  v7 = *a4;
  BugCheckParameter2 = *a4;
  if ( !a3 || (v201 = 1, *a3 != 1LL) )
    v201 = 0;
  v8 = *(_DWORD *)(v5 + 16);
  if ( (v8 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v9 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 156) == 1 )
        return;
      v9 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v202 = CurrentPrcb;
    v203 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
    {
      do
      {
        v11 = (unsigned int)(v203 + 1);
        v203 = v11;
        if ( ((unsigned int)v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
      CurrentPrcb = v202;
    }
    v12 = *(_DWORD *)(v7 + 156);
    *(_DWORD *)(v7 + 156) = 1;
    if ( v12 )
      goto LABEL_86;
    if ( !v9 )
    {
      v13 = *(_QWORD **)(v7 + 160);
      if ( v13 != (_QWORD *)(v7 + 160) )
      {
        while ( 1 )
        {
          v14 = (__int64)v13;
          v13 = (_QWORD *)*v13;
          v15 = *(_QWORD *)v14;
          v16 = *(_QWORD **)(v14 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          v17 = *(_BYTE *)(v14 + 16);
          if ( v17 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
            {
              v18 = (*(_DWORD *)(v7 + 156))-- == 1;
              if ( v18 )
                goto LABEL_86;
            }
          }
          else if ( v17 == 2 )
          {
            *(_BYTE *)(v14 + 17) = 5;
            v19 = *(_QWORD *)(v14 + 24);
            *(_QWORD *)v14 = 0LL;
            v20 = 0;
            __writecr8(2uLL);
            v21 = KeGetCurrentPrcb();
            v22 = v21->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              if ( v22->WaitBlockFill6[68] != 2 || (v23 = 1, v22->NextProcessor != KeGetPcr()->Prcb.Number) )
                v23 = 0;
              EtwTraceEnqueueWork(v21->CurrentThread, v14, v23);
            }
            v190 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
            {
              do
              {
                v24 = (unsigned int)(v190 + 1);
                v190 = v24;
                if ( ((unsigned int)v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v24);
              }
              while ( (*(_DWORD *)v19 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v19, 7u) );
            }
            if ( *(_QWORD *)(v19 + 16) != v19 + 8
              && *(_DWORD *)(v19 + 40) < *(_DWORD *)(v19 + 44)
              && (v22->Queue != (_DISPATCHER_HEADER *volatile)v19 || v22->WaitReason != 15) )
            {
              v20 = KiWakeQueueWaiter((__int64)v21, v19, v14);
            }
            if ( !v20 )
            {
              ++*(_DWORD *)(v19 + 4);
              v25 = *(__int64 **)(v19 + 32);
              *(_QWORD *)v14 = v19 + 24;
              *(_QWORD *)(v14 + 8) = v25;
              if ( *v25 != v19 + 24 )
                __fastfail(3u);
              *v25 = v14;
              *(_QWORD *)(v19 + 32) = v14;
            }
            _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
            v7 = BugCheckParameter2;
            v18 = (*(_DWORD *)(BugCheckParameter2 + 156))-- == 1;
            if ( v18 )
              goto LABEL_86;
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
          }
          if ( v13 == (_QWORD *)(v7 + 160) )
            goto LABEL_86;
          CurrentPrcb = v202;
        }
      }
      goto LABEL_86;
    }
    v26 = (_QWORD *)(v7 + 160);
    v27 = *(_QWORD **)(v7 + 160);
    if ( v27 == (_QWORD *)(v7 + 160) )
      goto LABEL_85;
    while ( 1 )
    {
      v28 = (__int64)v27;
      v27 = (_QWORD *)*v27;
      v29 = *(_BYTE *)(v28 + 16);
      if ( v29 == 1 )
        break;
      if ( v29 != 2 )
      {
        v30 = 256LL;
        goto LABEL_80;
      }
      *(_BYTE *)(v28 + 17) = 5;
      v31 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)v28 = 0LL;
      v32 = 0;
      __writecr8(2uLL);
      v197 = KeGetCurrentPrcb();
      v33 = v197->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        if ( v33->WaitBlockFill6[68] != 2 || (v34 = 1, v33->NextProcessor != KeGetPcr()->Prcb.Number) )
          v34 = 0;
        EtwTraceEnqueueWork(v33, v28, v34);
      }
      v191 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v31, 7u) )
      {
        do
        {
          v35 = (unsigned int)(v191 + 1);
          v191 = v35;
          if ( ((unsigned int)v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v35);
        }
        while ( (*(_DWORD *)v31 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v31, 7u) );
      }
      if ( *(_QWORD *)(v31 + 16) != v31 + 8
        && *(_DWORD *)(v31 + 40) < *(_DWORD *)(v31 + 44)
        && (v33->Queue != (_DISPATCHER_HEADER *volatile)v31 || v33->WaitReason != 15) )
      {
        v32 = KiWakeQueueWaiter((__int64)v197, v31, v28);
      }
      if ( !v32 )
      {
        ++*(_DWORD *)(v31 + 4);
        v36 = *(__int64 **)(v31 + 32);
        *(_QWORD *)v28 = v31 + 24;
        *(_QWORD *)(v28 + 8) = v36;
        if ( *v36 != v31 + 24 )
          __fastfail(3u);
        *v36 = v28;
        *(_QWORD *)(v31 + 32) = v28;
      }
      _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
LABEL_81:
      if ( v27 == v26 )
      {
        v7 = BugCheckParameter2;
LABEL_85:
        v26[1] = v26;
        *v26 = v26;
LABEL_86:
        _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v202, 0, 1, 0, CurrentIrql);
        return;
      }
      CurrentPrcb = v202;
    }
    v30 = *(unsigned __int16 *)(v28 + 18);
LABEL_80:
    KiTryUnwaitThread(CurrentPrcb, v28, v30, 0LL);
    goto LABEL_81;
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v37 = *(_DWORD *)(v5 + 48);
      if ( v37 != -2147483626 && (v37 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*(_DWORD *)(v5 + 16) & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *(_DWORD *)(v5 + 16) &= 0xFFFFFFCF;
  v38 = *(struct _MDL **)(v5 + 8);
  if ( v38 )
  {
    do
    {
      Next = v38->Next;
      if ( (v38->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(v38->MappedSystemVa, v38);
      if ( (v38->MdlFlags & 8) != 0 )
      {
        v40 = *((unsigned __int16 *)&v38->MdlFlags + 1);
        if ( (unsigned int)v40 >= (unsigned int)KeNumberProcessors_0 )
        {
          v41 = 0LL;
        }
        else
        {
          _mm_lfence();
          v41 = (struct _KPRCB *)KiProcessorBlock[v40];
        }
        if ( !v41 )
          v41 = KeGetCurrentPrcb();
        P = v41->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses, P = v41->PPLookasideList[3].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v38);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(struct _MDL *))P->FreeEx)(v38);
        }
      }
      else
      {
        ExFreePoolWithTag(v38, 0);
      }
      v38 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) != 0xC0000000 )
    goto LABEL_133;
  if ( !*(_BYTE *)(v5 + 65) )
    goto LABEL_121;
  if ( (*(_DWORD *)(v5 + 16) & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
LABEL_133:
    Object = 0LL;
    v199 = 0LL;
    if ( v7 )
    {
      v45 = *(_QWORD *)(v7 + 176);
      if ( v45 )
      {
        if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
        {
          Object = *(_DISPATCHER_HEADER *volatile *)v45;
          v199 = *(_QWORD *)(v45 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v7);
        }
        if ( Object )
          ObfReferenceObject(Object);
      }
    }
    v46 = *(_QWORD *)(v5 + 72);
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v5 + 56);
    else
      *(_QWORD *)(v46 + 8) = *(_QWORD *)(v5 + 56);
    *(_DWORD *)v46 = *(_DWORD *)(v5 + 48);
    v47 = *(_QWORD *)(v5 + 80);
    v198 = v47;
    if ( v47 )
    {
      if ( (*(_BYTE *)v47 & 0x7F) != 0 )
      {
        v48 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v47 + 4) == 1 )
          goto LABEL_225;
        v48 = 1;
      }
      v194 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v49 = KeGetCurrentPrcb();
      v175 = v49;
      v181 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v47, 7u) )
      {
        do
        {
          v50 = (unsigned int)(v181 + 1);
          v181 = v50;
          if ( ((unsigned int)v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v50);
        }
        while ( (*(_DWORD *)v47 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v47, 7u) );
        v49 = v175;
      }
      v51 = *(_DWORD *)(v47 + 4);
      *(_DWORD *)(v47 + 4) = 1;
      if ( !v51 )
      {
        if ( !v48 )
        {
          v52 = *(_QWORD **)(v47 + 8);
          if ( v52 != (_QWORD *)(v47 + 8) )
          {
            while ( 1 )
            {
              v53 = (__int64)v52;
              v52 = (_QWORD *)*v52;
              v54 = *(_QWORD *)v53;
              v55 = *(_QWORD **)(v53 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v53 + 8LL) != v53 || *v55 != v53 )
                __fastfail(3u);
              *v55 = v54;
              *(_QWORD *)(v54 + 8) = v55;
              v56 = *(_BYTE *)(v53 + 16);
              if ( v56 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(v49, v53, *(unsigned __int16 *)(v53 + 18), 0LL) )
                {
                  v18 = (*(_DWORD *)(v47 + 4))-- == 1;
                  if ( v18 )
                    goto LABEL_224;
                }
              }
              else if ( v56 == 2 )
              {
                *(_BYTE *)(v53 + 17) = 5;
                v57 = *(_QWORD *)(v53 + 24);
                *(_QWORD *)v53 = 0LL;
                v58 = 0;
                __writecr8(2uLL);
                v59 = KeGetCurrentPrcb();
                v60 = v59->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  if ( v60->WaitBlockFill6[68] != 2 || (v61 = 1, v60->NextProcessor != KeGetPcr()->Prcb.Number) )
                    v61 = 0;
                  EtwTraceEnqueueWork(v59->CurrentThread, v53, v61);
                }
                v183 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)v57, 7u) )
                {
                  do
                  {
                    v62 = (unsigned int)(v183 + 1);
                    v183 = v62;
                    if ( ((unsigned int)v62 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v62);
                  }
                  while ( (*(_DWORD *)v57 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v57, 7u) );
                }
                if ( *(_QWORD *)(v57 + 16) != v57 + 8
                  && *(_DWORD *)(v57 + 40) < *(_DWORD *)(v57 + 44)
                  && (v60->Queue != (_DISPATCHER_HEADER *volatile)v57 || v60->WaitReason != 15) )
                {
                  v58 = KiWakeQueueWaiter((__int64)v59, v57, v53);
                }
                if ( !v58 )
                {
                  ++*(_DWORD *)(v57 + 4);
                  v63 = *(__int64 **)(v57 + 32);
                  *(_QWORD *)v53 = v57 + 24;
                  *(_QWORD *)(v53 + 8) = v63;
                  if ( *v63 != v57 + 24 )
                    __fastfail(3u);
                  *v63 = v53;
                  *(_QWORD *)(v57 + 32) = v53;
                }
                _InterlockedAnd((volatile signed __int32 *)v57, 0xFFFFFF7F);
                v47 = v198;
                v18 = (*(_DWORD *)(v198 + 4))-- == 1;
                if ( v18 )
                  goto LABEL_224;
              }
              else
              {
                KiTryUnwaitThread(v49, v53, 256LL, 0LL);
              }
              if ( v52 == (_QWORD *)(v47 + 8) )
                goto LABEL_224;
              v49 = v175;
            }
          }
          goto LABEL_224;
        }
        v64 = (_QWORD *)(v47 + 8);
        v65 = *(_QWORD **)(v47 + 8);
        if ( v65 != (_QWORD *)(v47 + 8) )
        {
          while ( 1 )
          {
            v66 = (__int64)v65;
            v65 = (_QWORD *)*v65;
            v67 = *(_BYTE *)(v66 + 16);
            if ( v67 == 1 )
              break;
            if ( v67 != 2 )
            {
              v68 = 256LL;
              goto LABEL_219;
            }
            *(_BYTE *)(v66 + 17) = 5;
            v69 = *(_QWORD *)(v66 + 24);
            *(_QWORD *)v66 = 0LL;
            v70 = 0;
            __writecr8(2uLL);
            v71 = KeGetCurrentPrcb();
            v72 = v71->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              if ( v72->WaitBlockFill6[68] != 2 || (v73 = 1, v72->NextProcessor != KeGetPcr()->Prcb.Number) )
                v73 = 0;
              EtwTraceEnqueueWork(v71->CurrentThread, v66, v73);
            }
            v185 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v69, 7u) )
            {
              do
              {
                v74 = (unsigned int)(v185 + 1);
                v185 = v74;
                if ( ((unsigned int)v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v74);
              }
              while ( (*(_DWORD *)v69 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v69, 7u) );
            }
            if ( *(_QWORD *)(v69 + 16) != v69 + 8
              && *(_DWORD *)(v69 + 40) < *(_DWORD *)(v69 + 44)
              && (v72->Queue != (_DISPATCHER_HEADER *volatile)v69 || v72->WaitReason != 15) )
            {
              v70 = KiWakeQueueWaiter((__int64)v71, v69, v66);
            }
            if ( !v70 )
            {
              ++*(_DWORD *)(v69 + 4);
              v75 = *(__int64 **)(v69 + 32);
              *(_QWORD *)v66 = v69 + 24;
              *(_QWORD *)(v66 + 8) = v75;
              if ( *v75 != v69 + 24 )
                __fastfail(3u);
              *v75 = v66;
              *(_QWORD *)(v69 + 32) = v66;
            }
            _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
            v47 = v198;
LABEL_220:
            v64 = (_QWORD *)(v47 + 8);
            if ( v65 == (_QWORD *)(v47 + 8) )
              goto LABEL_223;
            v49 = v175;
          }
          v68 = *(unsigned __int16 *)(v66 + 18);
LABEL_219:
          KiTryUnwaitThread(v49, v66, v68, 0LL);
          goto LABEL_220;
        }
LABEL_223:
        v64[1] = v64;
        *v64 = v64;
      }
LABEL_224:
      _InterlockedAnd((volatile signed __int32 *)v47, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v175, 0, 1, 0, v194);
      v5 = v178;
      v7 = BugCheckParameter2;
LABEL_225:
      if ( !v7 )
        goto LABEL_398;
      if ( (*(_DWORD *)(v5 + 16) & 4) == 0 )
        ObfDereferenceObject(*(PVOID *)(v5 + 80));
      if ( (*(_DWORD *)(v7 + 80) & 2) == 0 || (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
      {
LABEL_398:
        v133 = *(_DWORD *)(v5 + 16);
        if ( (v133 & 0x2000) != 0 )
          v134 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
        else
          v134 = 0LL;
        if ( (v133 & 0x100) != 0 )
        {
          v135 = *(unsigned int *)(v5 + 56);
          if ( v134 )
          {
            _InterlockedExchangeAdd64(v134 + 153, v135);
          }
          else
          {
            v136 = KeGetCurrentThread();
            v136->ReadTransferCount += v135;
          }
          __addgsqword(0x2E68u, v135);
        }
        else if ( (v133 & 0x200) != 0 )
        {
          v137 = *(unsigned int *)(v5 + 56);
          if ( v134 )
          {
            _InterlockedExchangeAdd64(v134 + 154, v137);
          }
          else
          {
            v138 = KeGetCurrentThread();
            v138->WriteTransferCount += v137;
          }
          __addgsqword(0x2E70u, v137);
        }
        else
        {
          v139 = *(_QWORD *)(v5 + 56);
          if ( v139 >= 0 )
          {
            v140 = (unsigned int)v139;
            if ( v134 )
            {
              _InterlockedExchangeAdd64(v134 + 155, (unsigned int)v139);
            }
            else
            {
              v141 = KeGetCurrentThread();
              v141->OtherTransferCount += v140;
            }
            __addgsqword(0x2E78u, v140);
          }
        }
        if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
        {
          v142 = (volatile signed __int32 *)(v7 + 184);
          v143 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v7 + 184);
          }
          else if ( _interlockedbittestandset64(v142, 0LL) )
          {
            KxWaitForSpinLockAndAcquire(v7 + 184);
          }
          v144 = (_QWORD *)(v5 + 32);
          v145 = *(_QWORD *)(v5 + 32);
          v146 = *(_QWORD **)(v5 + 40);
          if ( *(_QWORD *)(v145 + 8) != v5 + 32 || (_QWORD *)*v146 != v144 )
            __fastfail(3u);
          *v146 = v145;
          *(_QWORD *)(v145 + 8) = v146;
          *(_QWORD *)(v5 + 40) = v5 + 32;
          *v144 = v144;
          ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
          *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v142, 0LL);
          v147 = v143;
          v148 = (__int64)v187;
        }
        else
        {
          v148 = (__int64)v187;
          *(_QWORD *)(v5 + 152) = v187;
          v149 = 0;
          if ( v187 )
          {
            v150 = (volatile signed __int32 *)&v187[1].WaitBlockFill11[16];
            v149 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v150);
            }
            else if ( _interlockedbittestandset64(v150, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v150);
            }
          }
          v151 = (_QWORD *)(v5 + 32);
          v152 = *(_QWORD *)(v5 + 32);
          v153 = *(_QWORD **)(v5 + 40);
          if ( *(_QWORD *)(v152 + 8) != v5 + 32 || (_QWORD *)*v153 != v151 )
            __fastfail(3u);
          *v153 = v152;
          *(_QWORD *)(v152 + 8) = v153;
          *(_QWORD *)(v5 + 40) = v5 + 32;
          *v151 = v151;
          if ( !v187 )
            goto LABEL_441;
          v154 = (volatile signed __int64 *)&v187[1].WaitBlockFill11[16];
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v154, retaddr);
          else
            _InterlockedAnd64(v154, 0LL);
          v147 = v149;
        }
        __writecr8(v147);
LABEL_441:
        v155 = *(_DWORD *)(v5 + 16) & 0x8000;
        if ( v155 || (*(_QWORD *)(v5 + 88) &= ~1uLL, (v156 = *(_QWORD *)(v5 + 88)) == 0) )
        {
          if ( Object
            && *(_QWORD *)(v5 + 96)
            && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
             || *(_BYTE *)(v5 + 65)
             || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
          {
            v158 = 0;
            v159 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v159 == 8 || v159 == 20 )
              v158 = 1;
            *(_QWORD *)(v5 + 120) = v199;
            *(_DWORD *)(v5 + 184) = 0;
            v160 = (LONG *)(v5 + 168);
            v161 = 0;
            v162 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v163 = KeGetCurrentPrcb();
            v164 = v163->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              if ( v164->WaitBlockFill6[68] != 2 || (v165 = 1, v164->NextProcessor != KeGetPcr()->Prcb.Number) )
                v165 = 0;
              EtwTraceEnqueueWork(v163->CurrentThread, v160, v165);
            }
            if ( v158 && (Object->Signalling & 2) != 0 )
              v158 = 0;
            v189 = 0;
            if ( _interlockedbittestandset(&Object->Lock, 7u) )
            {
              do
              {
                v166 = (unsigned int)(v189 + 1);
                v189 = v166;
                if ( ((unsigned int)v166 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v166);
              }
              while ( (Object->LockNV & 0x80u) != 0 || _interlockedbittestandset(&Object->Lock, 7u) );
            }
            if ( Object->WaitListHead.Blink == &Object->WaitListHead )
            {
              p_LockNV = &Object->LockNV;
            }
            else
            {
              p_LockNV = &Object->LockNV;
              if ( LODWORD(Object[1].WaitListHead.Blink) < HIDWORD(Object[1].WaitListHead.Blink) )
              {
                p_LockNV = &Object->LockNV;
                if ( v164->Queue != Object || v164->WaitReason != 15 )
                  v161 = KiWakeQueueWaiter((__int64)v163, (__int64)Object, (__int64)v160);
              }
            }
            if ( !v161 )
            {
              ++p_LockNV[1];
              v168 = (LONG **)*((_QWORD *)p_LockNV + 4);
              *(_QWORD *)v160 = p_LockNV + 6;
              *((_QWORD *)v160 + 1) = v168;
              if ( *v168 != p_LockNV + 6 )
                __fastfail(3u);
              *v168 = v160;
              *((_QWORD *)p_LockNV + 4) = v160;
            }
            _InterlockedAnd(p_LockNV, 0xFFFFFF7F);
            KiExitDispatcher((_DWORD)v163, 0, 1, v158, v162);
          }
          else
          {
            if ( !v155 )
              goto LABEL_485;
            v169 = *(_QWORD *)(v5 + 88);
            do
            {
              v170 = v169;
              v171 = ((v169 >> 1) & 3) - 1;
              v169 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v5 + 88),
                       v169 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v171),
                       v169);
            }
            while ( v170 != v169 );
            if ( !(_DWORD)v171 )
LABEL_485:
              pIoFreeIrp(v5);
          }
        }
        else
        {
          if ( v201 )
            v157 = *(char *)(v5 + 70);
          else
            v157 = 2;
          KeInitializeApc(
            v5 + 120,
            v148,
            v157,
            (__int64)IopUserRundown,
            (__int64)IopUserRundown,
            v156,
            *(_BYTE *)(v5 + 64),
            *(_QWORD *)(v5 + 96));
          KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2);
        }
        if ( Object )
          ObfDereferenceObject(Object);
        if ( BugCheckParameter2 )
        {
          if ( ObpTraceFlags )
            ObpPushStackInfo(BugCheckParameter2 - 48);
          v172 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v173 = v172 <= 1;
          BugCheckParameter4 = v172 - 1;
          if ( v173 )
          {
            if ( *(_QWORD *)(BugCheckParameter2 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
                BugCheckParameter2,
                3uLL,
                *(_QWORD *)(BugCheckParameter2 - 40));
            if ( BugCheckParameter4 < 0 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 4uLL, BugCheckParameter4);
            ObpDeferObjectDeletion(BugCheckParameter2 - 48);
          }
        }
        return;
      }
      if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
      {
        v76 = 0;
LABEL_234:
        v195 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v77 = KeGetCurrentPrcb();
        v176 = v77;
        v182 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
        {
          do
          {
            v78 = (unsigned int)(v182 + 1);
            v182 = v78;
            if ( ((unsigned int)v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v78);
          }
          while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0
               || _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
          v77 = v176;
        }
        v79 = *(_DWORD *)(v7 + 156);
        *(_DWORD *)(v7 + 156) = 1;
        if ( !v79 )
        {
          if ( !v76 )
          {
            v80 = *(_QWORD **)(v7 + 160);
            if ( v80 != (_QWORD *)(v7 + 160) )
            {
              while ( 1 )
              {
                v81 = (__int64)v80;
                v80 = (_QWORD *)*v80;
                v82 = *(_QWORD *)v81;
                v83 = *(_QWORD **)(v81 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v81 + 8LL) != v81 || *v83 != v81 )
                  __fastfail(3u);
                *v83 = v82;
                *(_QWORD *)(v82 + 8) = v83;
                v84 = *(_BYTE *)(v81 + 16);
                if ( v84 == 1 )
                {
                  if ( (unsigned __int8)KiTryUnwaitThread(v77, v81, *(unsigned __int16 *)(v81 + 18), 0LL) )
                  {
                    v18 = (*(_DWORD *)(v7 + 156))-- == 1;
                    if ( v18 )
                      goto LABEL_310;
                  }
                }
                else if ( v84 == 2 )
                {
                  *(_BYTE *)(v81 + 17) = 5;
                  v85 = *(_QWORD *)(v81 + 24);
                  *(_QWORD *)v81 = 0LL;
                  v86 = 0;
                  __writecr8(2uLL);
                  v87 = KeGetCurrentPrcb();
                  v88 = v87->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    if ( v88->WaitBlockFill6[68] != 2 || (v89 = 1, v88->NextProcessor != KeGetPcr()->Prcb.Number) )
                      v89 = 0;
                    EtwTraceEnqueueWork(v87->CurrentThread, v81, v89);
                  }
                  v193 = 0;
                  if ( _interlockedbittestandset((volatile signed __int32 *)v85, 7u) )
                  {
                    do
                    {
                      v90 = (unsigned int)(v193 + 1);
                      v193 = v90;
                      if ( ((unsigned int)v90 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v90);
                    }
                    while ( (*(_DWORD *)v85 & 0x80u) != 0
                         || _interlockedbittestandset((volatile signed __int32 *)v85, 7u) );
                  }
                  if ( *(_QWORD *)(v85 + 16) != v85 + 8
                    && *(_DWORD *)(v85 + 40) < *(_DWORD *)(v85 + 44)
                    && (v88->Queue != (_DISPATCHER_HEADER *volatile)v85 || v88->WaitReason != 15) )
                  {
                    v86 = KiWakeQueueWaiter((__int64)v87, v85, v81);
                  }
                  if ( !v86 )
                  {
                    ++*(_DWORD *)(v85 + 4);
                    v91 = *(__int64 **)(v85 + 32);
                    *(_QWORD *)v81 = v85 + 24;
                    *(_QWORD *)(v81 + 8) = v91;
                    if ( *v91 != v85 + 24 )
                      __fastfail(3u);
                    *v91 = v81;
                    *(_QWORD *)(v85 + 32) = v81;
                  }
                  _InterlockedAnd((volatile signed __int32 *)v85, 0xFFFFFF7F);
                  v7 = BugCheckParameter2;
                  v18 = (*(_DWORD *)(BugCheckParameter2 + 156))-- == 1;
                  if ( v18 )
                    goto LABEL_310;
                }
                else
                {
                  KiTryUnwaitThread(v77, v81, 256LL, 0LL);
                }
                if ( v80 == (_QWORD *)(v7 + 160) )
                  goto LABEL_310;
                v77 = v176;
              }
            }
            goto LABEL_311;
          }
          v92 = (_QWORD *)(v7 + 160);
          v93 = *(_QWORD **)(v7 + 160);
          if ( v93 != (_QWORD *)(v7 + 160) )
          {
            while ( 1 )
            {
              v94 = (__int64)v93;
              v93 = (_QWORD *)*v93;
              v95 = *(_BYTE *)(v94 + 16);
              if ( v95 == 1 )
                break;
              if ( v95 != 2 )
              {
                v96 = 256LL;
                goto LABEL_305;
              }
              *(_BYTE *)(v94 + 17) = 5;
              v97 = *(_QWORD *)(v94 + 24);
              *(_QWORD *)v94 = 0LL;
              v98 = 0;
              __writecr8(2uLL);
              v99 = KeGetCurrentPrcb();
              v100 = v99->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                if ( v100->WaitBlockFill6[68] != 2 || (v101 = 1, v100->NextProcessor != KeGetPcr()->Prcb.Number) )
                  v101 = 0;
                EtwTraceEnqueueWork(v99->CurrentThread, v94, v101);
              }
              v184 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v97, 7u) )
              {
                do
                {
                  v102 = (unsigned int)(v184 + 1);
                  v184 = v102;
                  if ( ((unsigned int)v102 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v102);
                }
                while ( (*(_DWORD *)v97 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v97, 7u) );
              }
              if ( *(_QWORD *)(v97 + 16) != v97 + 8
                && *(_DWORD *)(v97 + 40) < *(_DWORD *)(v97 + 44)
                && (v100->Queue != (_DISPATCHER_HEADER *volatile)v97 || v100->WaitReason != 15) )
              {
                v98 = KiWakeQueueWaiter((__int64)v99, v97, v94);
              }
              if ( !v98 )
              {
                ++*(_DWORD *)(v97 + 4);
                v103 = *(__int64 **)(v97 + 32);
                *(_QWORD *)v94 = v97 + 24;
                *(_QWORD *)(v94 + 8) = v103;
                if ( *v103 != v97 + 24 )
                  __fastfail(3u);
                *v103 = v94;
                *(_QWORD *)(v97 + 32) = v94;
              }
              _InterlockedAnd((volatile signed __int32 *)v97, 0xFFFFFF7F);
              v7 = BugCheckParameter2;
LABEL_306:
              v92 = (_QWORD *)(v7 + 160);
              if ( v93 == (_QWORD *)(v7 + 160) )
                goto LABEL_309;
              v77 = v176;
            }
            v96 = *(unsigned __int16 *)(v94 + 18);
LABEL_305:
            KiTryUnwaitThread(v77, v94, v96, 0LL);
            goto LABEL_306;
          }
LABEL_309:
          v92[1] = v92;
          *v92 = v92;
LABEL_310:
          v5 = v178;
        }
LABEL_311:
        v104 = v195;
LABEL_396:
        _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v176, 0, 1, 0, v104);
        goto LABEL_397;
      }
      if ( *(_DWORD *)(v7 + 156) != 1 )
      {
        v76 = 1;
        goto LABEL_234;
      }
LABEL_397:
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
      goto LABEL_398;
    }
    if ( !v7 )
      goto LABEL_398;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
      goto LABEL_397;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v105 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 156) == 1 )
        goto LABEL_397;
      v105 = 1;
    }
    v196 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v106 = KeGetCurrentPrcb();
    v176 = v106;
    v192 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
    {
      do
      {
        v107 = (unsigned int)(v192 + 1);
        v192 = v107;
        if ( ((unsigned int)v107 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v107);
      }
      while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
      v106 = v176;
    }
    v108 = *(_DWORD *)(v7 + 156);
    *(_DWORD *)(v7 + 156) = 1;
    if ( !v108 )
    {
      if ( !v105 )
      {
        v109 = *(_QWORD **)(v7 + 160);
        if ( v109 != (_QWORD *)(v7 + 160) )
        {
          while ( 1 )
          {
            v110 = (__int64)v109;
            v109 = (_QWORD *)*v109;
            v111 = *(_QWORD *)v110;
            v112 = *(_QWORD **)(v110 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v110 + 8LL) != v110 || *v112 != v110 )
              __fastfail(3u);
            *v112 = v111;
            *(_QWORD *)(v111 + 8) = v112;
            v113 = *(_BYTE *)(v110 + 16);
            if ( v113 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v106, v110, *(unsigned __int16 *)(v110 + 18), 0LL) )
              {
                v18 = (*(_DWORD *)(v7 + 156))-- == 1;
                if ( v18 )
                  goto LABEL_394;
              }
            }
            else if ( v113 == 2 )
            {
              *(_BYTE *)(v110 + 17) = 5;
              v114 = *(_QWORD *)(v110 + 24);
              *(_QWORD *)v110 = 0LL;
              v115 = 0;
              __writecr8(2uLL);
              v116 = KeGetCurrentPrcb();
              v117 = v116->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                if ( v117->WaitBlockFill6[68] != 2 || (v118 = 1, v117->NextProcessor != KeGetPcr()->Prcb.Number) )
                  v118 = 0;
                EtwTraceEnqueueWork(v116->CurrentThread, v110, v118);
              }
              v186 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v114, 7u) )
              {
                do
                {
                  v119 = (unsigned int)(v186 + 1);
                  v186 = v119;
                  if ( ((unsigned int)v119 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v119);
                }
                while ( (*(_DWORD *)v114 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v114, 7u) );
              }
              if ( *(_QWORD *)(v114 + 16) != v114 + 8
                && *(_DWORD *)(v114 + 40) < *(_DWORD *)(v114 + 44)
                && (v117->Queue != (_DISPATCHER_HEADER *volatile)v114 || v117->WaitReason != 15) )
              {
                v115 = KiWakeQueueWaiter((__int64)v116, v114, v110);
              }
              if ( !v115 )
              {
                ++*(_DWORD *)(v114 + 4);
                v120 = *(__int64 **)(v114 + 32);
                *(_QWORD *)v110 = v114 + 24;
                *(_QWORD *)(v110 + 8) = v120;
                if ( *v120 != v114 + 24 )
                  __fastfail(3u);
                *v120 = v110;
                *(_QWORD *)(v114 + 32) = v110;
              }
              _InterlockedAnd((volatile signed __int32 *)v114, 0xFFFFFF7F);
              v7 = BugCheckParameter2;
              v18 = (*(_DWORD *)(BugCheckParameter2 + 156))-- == 1;
              if ( v18 )
                goto LABEL_394;
            }
            else
            {
              KiTryUnwaitThread(v106, v110, 256LL, 0LL);
            }
            if ( v109 == (_QWORD *)(v7 + 160) )
              goto LABEL_394;
            v106 = v176;
          }
        }
        goto LABEL_395;
      }
      v121 = (_QWORD *)(v7 + 160);
      v122 = *(_QWORD **)(v7 + 160);
      if ( v122 != (_QWORD *)(v7 + 160) )
      {
        while ( 1 )
        {
          v123 = (__int64)v122;
          v122 = (_QWORD *)*v122;
          v124 = *(_BYTE *)(v123 + 16);
          if ( v124 == 1 )
            break;
          if ( v124 != 2 )
          {
            v125 = 256LL;
            goto LABEL_389;
          }
          *(_BYTE *)(v123 + 17) = 5;
          v126 = *(_QWORD *)(v123 + 24);
          *(_QWORD *)v123 = 0LL;
          v127 = 0;
          __writecr8(2uLL);
          v128 = KeGetCurrentPrcb();
          v129 = v128->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            if ( v129->WaitBlockFill6[68] != 2 || (v130 = 1, v129->NextProcessor != KeGetPcr()->Prcb.Number) )
              v130 = 0;
            EtwTraceEnqueueWork(v128->CurrentThread, v123, v130);
          }
          v180 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v126, 7u) )
          {
            do
            {
              v131 = (unsigned int)(v180 + 1);
              v180 = v131;
              if ( ((unsigned int)v131 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v131);
            }
            while ( (*(_DWORD *)v126 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v126, 7u) );
          }
          if ( *(_QWORD *)(v126 + 16) != v126 + 8
            && *(_DWORD *)(v126 + 40) < *(_DWORD *)(v126 + 44)
            && (v129->Queue != (_DISPATCHER_HEADER *volatile)v126 || v129->WaitReason != 15) )
          {
            v127 = KiWakeQueueWaiter((__int64)v128, v126, v123);
          }
          if ( !v127 )
          {
            ++*(_DWORD *)(v126 + 4);
            v132 = *(__int64 **)(v126 + 32);
            *(_QWORD *)v123 = v126 + 24;
            *(_QWORD *)(v123 + 8) = v132;
            if ( *v132 != v126 + 24 )
              __fastfail(3u);
            *v132 = v123;
            *(_QWORD *)(v126 + 32) = v123;
          }
          _InterlockedAnd((volatile signed __int32 *)v126, 0xFFFFFF7F);
          v7 = BugCheckParameter2;
LABEL_390:
          v121 = (_QWORD *)(v7 + 160);
          if ( v122 == (_QWORD *)(v7 + 160) )
            goto LABEL_393;
          v106 = v176;
        }
        v125 = *(unsigned __int16 *)(v123 + 18);
LABEL_389:
        KiTryUnwaitThread(v106, v123, v125, 0LL);
        goto LABEL_390;
      }
LABEL_393:
      v121[1] = v121;
      *v121 = v121;
LABEL_394:
      v5 = v178;
    }
LABEL_395:
    v104 = v196;
    goto LABEL_396;
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v5 + 16) & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v43 = *(struct _KEVENT **)(v5 + 80);
      if ( v43 )
      {
LABEL_120:
        KeSetEvent(v43, 0, 0);
        goto LABEL_121;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    }
    v43 = (struct _KEVENT *)(v7 + 152);
    goto LABEL_120;
  }
LABEL_121:
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  v44 = *(void **)(v5 + 80);
  if ( v44 && v7 && (*(_DWORD *)(v5 + 16) & 4) == 0 )
    ObfDereferenceObject(v44);
  if ( (*(_DWORD *)(v5 + 16) & 0x8000) != 0 )
  {
    if ( (unsigned int)sub_140125D7C(v5 + 88, -1LL) )
      return;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread((_QWORD *)v5);
  }
  pIoFreeIrp(v5);
}
