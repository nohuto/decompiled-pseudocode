/*
 * XREFs of IopCompleteRequest @ 0x1400543C0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140620E3C (IopAbortRequest.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     IopUpdateWriteTransferCount @ 0x14009E25C (IopUpdateWriteTransferCount.c)
 *     IopInterlockedAdd @ 0x1400AA794 (IopInterlockedAdd.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     IopDequeueIrpFromFileObject @ 0x1400F57B0 (IopDequeueIrpFromFileObject.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401C48B4 (IopDecrementCompletionContextUsageCount.c)
 *     IopExceptionFilter @ 0x1401C4BE0 (IopExceptionFilter.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401C4DC4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v7; // rsi
  int v8; // eax
  ULONG_PTR v9; // r12
  int v10; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rdi
  _QWORD *v21; // r14
  struct _KPRCB *v22; // r13
  _KTHREAD *v23; // rsi
  bool v24; // al
  char v25; // al
  int v26; // r8d
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  char v31; // al
  __int64 v32; // r8
  __int64 v33; // rdi
  _QWORD *v34; // r14
  struct _KPRCB *v35; // r13
  _KTHREAD *v36; // rsi
  bool v37; // al
  char v38; // al
  int v39; // r8d
  _QWORD *v40; // rdx
  int v41; // eax
  struct _MDL *v42; // rbx
  struct _MDL *Next; // rdi
  __int64 v44; // rcx
  struct _KPRCB *v45; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  struct _KEVENT *v47; // rcx
  void *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdi
  int v52; // ebx
  struct _KPRCB *v53; // rsi
  int v54; // eax
  _QWORD *v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  char v60; // al
  __int64 v61; // rdi
  _QWORD *v62; // r14
  char v63; // r12
  struct _KPRCB *v64; // r13
  _KTHREAD *v65; // rsi
  bool v66; // al
  int v67; // r8d
  _QWORD *v68; // rdx
  _QWORD *v69; // r15
  _QWORD *v70; // rbx
  char v71; // al
  __int64 v72; // r8
  __int64 v73; // rdi
  _QWORD *v74; // r14
  char v75; // r12
  struct _KPRCB *v76; // r13
  _KTHREAD *v77; // rsi
  bool v78; // al
  int v79; // r8d
  _QWORD *v80; // rdx
  ULONG_PTR v81; // rdi
  int v82; // ebx
  struct _KPRCB *v83; // rsi
  int v84; // eax
  _QWORD *v85; // rcx
  _QWORD *v86; // rax
  _QWORD *v87; // rbx
  __int64 v88; // rcx
  _QWORD *v89; // rax
  char v90; // al
  __int64 v91; // rdi
  _QWORD *v92; // r14
  char v93; // r12
  struct _KPRCB *v94; // r13
  _KTHREAD *v95; // rsi
  bool v96; // al
  int v97; // r8d
  _QWORD *v98; // rdx
  _QWORD *v99; // r15
  _QWORD *v100; // rbx
  char v101; // al
  __int64 v102; // r8
  __int64 v103; // rdi
  _QWORD *v104; // r14
  char v105; // r12
  struct _KPRCB *v106; // r13
  _KTHREAD *v107; // rsi
  bool v108; // al
  int v109; // r8d
  _QWORD *v110; // rdx
  unsigned __int8 v111; // al
  int v112; // ebx
  struct _KPRCB *v113; // rsi
  int v114; // eax
  _QWORD *v115; // rcx
  _QWORD *v116; // rax
  _QWORD *v117; // rbx
  __int64 v118; // rcx
  _QWORD *v119; // rax
  char v120; // al
  __int64 v121; // rdi
  _QWORD *v122; // r14
  char v123; // r12
  struct _KPRCB *v124; // r13
  _KTHREAD *v125; // rsi
  bool v126; // al
  int v127; // r8d
  _QWORD *v128; // rdx
  _QWORD *v129; // r15
  _QWORD *v130; // rbx
  char v131; // al
  __int64 v132; // r8
  __int64 v133; // rdi
  _QWORD *v134; // r14
  char v135; // r12
  struct _KPRCB *v136; // r13
  _KTHREAD *v137; // rsi
  bool v138; // al
  int v139; // r8d
  _QWORD *v140; // rdx
  int v141; // eax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rcx
  struct _KTHREAD *v144; // rax
  __int64 v145; // rax
  unsigned __int64 v146; // rcx
  struct _KTHREAD *v147; // rax
  volatile signed __int32 *v148; // rbx
  unsigned __int8 v149; // di
  _QWORD *v150; // rax
  __int64 v151; // rdx
  _QWORD *v152; // rcx
  unsigned __int64 v153; // rax
  int v154; // edi
  unsigned __int8 v155; // bl
  volatile signed __int32 *v156; // rcx
  _QWORD *v157; // rax
  __int64 v158; // rdx
  _QWORD *v159; // rcx
  volatile signed __int64 *v160; // rcx
  int v161; // ecx
  __int64 v162; // rdx
  int v163; // r8d
  __int64 v164; // r8
  int v165; // ecx
  unsigned __int64 v166; // rax
  unsigned __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // [rsp+20h] [rbp-B8h]
  struct _KPRCB *v170; // [rsp+40h] [rbp-98h]
  struct _KPRCB *v171; // [rsp+40h] [rbp-98h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-90h]
  __int64 v173; // [rsp+48h] [rbp-90h]
  ULONG_PTR v174; // [rsp+48h] [rbp-90h]
  ULONG_PTR v175; // [rsp+48h] [rbp-90h]
  ULONG_PTR v176; // [rsp+50h] [rbp-88h]
  struct _KPRCB *v177; // [rsp+50h] [rbp-88h]
  __int64 v178; // [rsp+60h] [rbp-78h]
  _QWORD *v179; // [rsp+68h] [rbp-70h]
  unsigned __int8 v180; // [rsp+68h] [rbp-70h]
  unsigned __int8 v181; // [rsp+68h] [rbp-70h]
  unsigned __int8 v182; // [rsp+70h] [rbp-68h]
  _QWORD *v183; // [rsp+70h] [rbp-68h]
  _QWORD *v184; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *v185; // [rsp+78h] [rbp-60h]
  __int64 v186; // [rsp+80h] [rbp-58h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  char v188; // [rsp+E0h] [rbp+8h]
  PVOID Object; // [rsp+F8h] [rbp+20h]

  v5 = a1 - 120;
  v178 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v185 = CurrentThread;
  v7 = *a4;
  v176 = *a4;
  if ( !a3 || (v188 = 1, *a3 != 1LL) )
    v188 = 0;
  v8 = *(_DWORD *)(v5 + 16);
  if ( (v8 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    v9 = v7 + 152;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v10 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 156) == 1 )
        return;
      v10 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v177 = CurrentPrcb;
    KiAcquireKobjectLockSafe(v9);
    v12 = *(_DWORD *)(v7 + 156);
    *(_DWORD *)(v7 + 156) = 1;
    if ( v12 )
      goto LABEL_71;
    if ( !v10 )
    {
      v13 = (_QWORD *)(v7 + 160);
      v14 = *(_QWORD **)(v7 + 160);
      while ( v14 != v13 )
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        v16 = *v15;
        v17 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *((_BYTE *)v15 + 16);
        if ( v18 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
          {
            v19 = (*(_DWORD *)(v9 + 4))-- == 1;
            if ( v19 )
              break;
          }
        }
        else if ( v18 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v20 = v15[3];
          *v15 = 0LL;
          v21 = (_QWORD *)(v20 + 8);
          __writecr8(2uLL);
          v22 = KeGetCurrentPrcb();
          v23 = v22->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v24 = v23->WaitBlockFill6[68] == 2 && v23->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v22->CurrentThread, v15, v24);
          }
          KiAcquireKobjectLockSafe(v20);
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
            || v23->Queue == (_DISPATCHER_HEADER *volatile)v20 && v23->WaitReason == 15 )
          {
            v25 = 0;
          }
          else
          {
            v25 = KiWakeQueueWaiter(v22, v20, v15);
          }
          if ( !v25 )
          {
            v26 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v26 + 1;
            v27 = *(_QWORD **)(v20 + 32);
            if ( *v27 != v20 + 24 )
              __fastfail(3u);
            *v15 = v20 + 24;
            v15[1] = v27;
            *v27 = v15;
            *(_QWORD *)(v20 + 32) = v15;
            if ( !v26 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters(v22, v20);
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v19 = (*(_DWORD *)(v9 + 4))-- == 1;
          if ( v19 )
            break;
          CurrentPrcb = v177;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
        v13 = (_QWORD *)(v9 + 8);
      }
LABEL_71:
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v177, 0, 1, 0, CurrentIrql);
      return;
    }
    v28 = (_QWORD *)(v7 + 160);
    v29 = *(_QWORD **)(v7 + 160);
    while ( 1 )
    {
      if ( v29 == v28 )
      {
        v28[1] = v28;
        *v28 = v28;
        goto LABEL_71;
      }
      v30 = v29;
      v29 = (_QWORD *)*v29;
      v31 = *((_BYTE *)v30 + 16);
      if ( v31 == 1 )
        break;
      if ( v31 != 2 )
      {
        v32 = 256LL;
        goto LABEL_67;
      }
      *((_BYTE *)v30 + 17) = 5;
      v33 = v30[3];
      *v30 = 0LL;
      v34 = (_QWORD *)(v33 + 8);
      __writecr8(2uLL);
      v35 = KeGetCurrentPrcb();
      v36 = v35->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v37 = v36->WaitBlockFill6[68] == 2 && v36->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(v35->CurrentThread, v30, v37);
      }
      KiAcquireKobjectLockSafe(v33);
      if ( (_QWORD *)*v34 == v34
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || v36->Queue == (_DISPATCHER_HEADER *volatile)v33 && v36->WaitReason == 15 )
      {
        v38 = 0;
      }
      else
      {
        v38 = KiWakeQueueWaiter(v35, v33, v30);
      }
      if ( !v38 )
      {
        v39 = *(_DWORD *)(v33 + 4);
        *(_DWORD *)(v33 + 4) = v39 + 1;
        v40 = *(_QWORD **)(v33 + 32);
        if ( *v40 != v33 + 24 )
          __fastfail(3u);
        *v30 = v33 + 24;
        v30[1] = v40;
        *v40 = v30;
        *(_QWORD *)(v33 + 32) = v30;
        if ( !v39 && (_QWORD *)*v34 != v34 )
          KiWakeOtherQueueWaiters(v35, v33);
      }
      _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
      CurrentPrcb = v177;
LABEL_68:
      v28 = (_QWORD *)(v9 + 8);
    }
    v32 = *((unsigned __int16 *)v30 + 9);
LABEL_67:
    KiTryUnwaitThread(CurrentPrcb, v30, v32, 0LL);
    goto LABEL_68;
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v41 = *(_DWORD *)(v5 + 48);
      if ( v41 != -2147483626 && (v41 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*(_DWORD *)(v5 + 16) & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *(_DWORD *)(v5 + 16) &= 0xFFFFFFCF;
  v42 = *(struct _MDL **)(v5 + 8);
  if ( v42 )
  {
    do
    {
      Next = v42->Next;
      if ( (v42->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(v42->MappedSystemVa, v42);
      if ( (v42->MdlFlags & 8) != 0 )
      {
        v44 = *((unsigned __int16 *)&v42->MdlFlags + 1);
        if ( (unsigned int)v44 >= (unsigned int)KeNumberProcessors_0 )
        {
          v45 = 0LL;
        }
        else
        {
          _mm_lfence();
          v45 = (struct _KPRCB *)KiProcessorBlock[v44];
        }
        if ( !v45 )
          v45 = KeGetCurrentPrcb();
        P = v45->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses, P = v45->PPLookasideList[3].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v42);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(struct _MDL *))P->FreeEx)(v42);
        }
      }
      else
      {
        ExFreePoolWithTag(v42, 0);
      }
      v42 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) != 0xC0000000 )
    goto LABEL_118;
  if ( !*(_BYTE *)(v5 + 65) )
    goto LABEL_106;
  if ( (*(_DWORD *)(v5 + 16) & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
LABEL_118:
    Object = 0LL;
    v186 = 0LL;
    if ( v7 )
    {
      v49 = *(_QWORD *)(v7 + 176);
      if ( v49 )
      {
        if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
        {
          Object = *(PVOID *)v49;
          v186 = *(_QWORD *)(v49 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v7);
        }
        if ( Object )
          ObfReferenceObject(Object);
      }
    }
    v50 = *(_QWORD *)(v5 + 72);
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v50 + 4) = *(_DWORD *)(v5 + 56);
    else
      *(_QWORD *)(v50 + 8) = *(_QWORD *)(v5 + 56);
    *(_DWORD *)v50 = *(_DWORD *)(v5 + 48);
    v51 = *(_QWORD *)(v5 + 80);
    v173 = v51;
    if ( v51 )
    {
      if ( (*(_BYTE *)v51 & 0x7F) != 0 )
      {
        v52 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v51 + 4) == 1 )
        {
LABEL_194:
          if ( !v7 )
            goto LABEL_333;
          if ( (*(_DWORD *)(v5 + 16) & 4) == 0 )
            ObfDereferenceObject(*(PVOID *)(v5 + 80));
          if ( (*(_DWORD *)(v7 + 80) & 2) == 0 || (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
          {
LABEL_333:
            v141 = *(_DWORD *)(v5 + 16);
            if ( (v141 & 0x2000) != 0 )
              v142 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
            else
              v142 = 0LL;
            if ( (v141 & 0x100) != 0 )
            {
              v143 = *(unsigned int *)(v5 + 56);
              if ( v142 )
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v142 + 1232), v143);
              }
              else
              {
                v144 = KeGetCurrentThread();
                v144->ReadTransferCount += v143;
              }
              __addgsqword(0x2E68u, v143);
            }
            else if ( (v141 & 0x200) != 0 )
            {
              IopUpdateWriteTransferCount(*(unsigned int *)(v5 + 56), v142);
            }
            else
            {
              v145 = *(_QWORD *)(v5 + 56);
              if ( v145 >= 0 )
              {
                v146 = (unsigned int)v145;
                if ( v142 )
                {
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v142 + 1248), (unsigned int)v145);
                }
                else
                {
                  v147 = KeGetCurrentThread();
                  v147->OtherTransferCount += v146;
                }
                __addgsqword(0x2E78u, v146);
              }
            }
            if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
            {
              v148 = (volatile signed __int32 *)(v7 + 184);
              v149 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireSpinLockInstrumented(v7 + 184);
              }
              else if ( _interlockedbittestandset64(v148, 0LL) )
              {
                KxWaitForSpinLockAndAcquire(v7 + 184);
              }
              v150 = (_QWORD *)(v5 + 32);
              v151 = *(_QWORD *)(v5 + 32);
              v152 = *(_QWORD **)(v5 + 40);
              if ( *(_QWORD *)(v151 + 8) != v5 + 32 || (_QWORD *)*v152 != v150 )
                __fastfail(3u);
              *v152 = v151;
              *(_QWORD *)(v151 + 8) = v152;
              *(_QWORD *)(v5 + 40) = v5 + 32;
              *v150 = v150;
              ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
              *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
              else
                _InterlockedAnd64((volatile signed __int64 *)v148, 0LL);
              v153 = v149;
              v154 = (int)v185;
            }
            else
            {
              v154 = (int)v185;
              *(_QWORD *)(v5 + 152) = v185;
              v155 = 0;
              if ( v185 )
              {
                v156 = (volatile signed __int32 *)&v185[1].WaitBlockFill11[16];
                v155 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  KiAcquireSpinLockInstrumented(v156);
                }
                else if ( _interlockedbittestandset64(v156, 0LL) )
                {
                  KxWaitForSpinLockAndAcquire(v156);
                }
              }
              v157 = (_QWORD *)(v5 + 32);
              v158 = *(_QWORD *)(v5 + 32);
              v159 = *(_QWORD **)(v5 + 40);
              if ( *(_QWORD *)(v158 + 8) != v5 + 32 || (_QWORD *)*v159 != v157 )
                __fastfail(3u);
              *v159 = v158;
              *(_QWORD *)(v158 + 8) = v159;
              *(_QWORD *)(v5 + 40) = v5 + 32;
              *v157 = v157;
              if ( !v185 )
                goto LABEL_373;
              v160 = (volatile signed __int64 *)&v185[1].WaitBlockFill11[16];
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                KiReleaseSpinLockInstrumented(v160, retaddr);
              else
                _InterlockedAnd64(v160, 0LL);
              v153 = v155;
            }
            __writecr8(v153);
LABEL_373:
            v161 = *(_DWORD *)(v5 + 16) & 0x8000;
            if ( v161 || (*(_QWORD *)(v5 + 88) &= ~1uLL, (v162 = *(_QWORD *)(v5 + 88)) == 0) )
            {
              if ( Object
                && *(_QWORD *)(v5 + 96)
                && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
                 || *(_BYTE *)(v5 + 65)
                 || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
              {
                v164 = 0LL;
                v165 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
                if ( v165 == 8 || v165 == 20 )
                  v164 = 1LL;
                *(_QWORD *)(v5 + 120) = v186;
                *(_DWORD *)(v5 + 184) = 0;
                KeInsertQueueEx(Object, v5 + 168, v164, 0LL);
              }
              else
              {
                if ( !v161 )
                  goto LABEL_392;
                v166 = *(_QWORD *)(v5 + 88);
                do
                {
                  v167 = v166;
                  v168 = ((v166 >> 1) & 3) - 1;
                  v166 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v5 + 88),
                           v166 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v168),
                           v166);
                }
                while ( v167 != v166 );
                if ( !(_DWORD)v168 )
LABEL_392:
                  pIoFreeIrp(v5);
              }
            }
            else
            {
              if ( v188 )
                v163 = *(char *)(v5 + 70);
              else
                v163 = 2;
              KeInitializeApc(
                v5 + 120,
                v154,
                v163,
                (unsigned int)IopUserRundown,
                (__int64)IopUserRundown,
                v162,
                *(_BYTE *)(v5 + 64),
                *(_QWORD *)(v5 + 96));
              KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
            }
            if ( Object )
              ObfDereferenceObject(Object);
            if ( v7 )
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
            return;
          }
          v81 = v7 + 152;
          v174 = v7 + 152;
          if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
          {
            v82 = 0;
            goto LABEL_203;
          }
          if ( *(_DWORD *)(v7 + 156) != 1 )
          {
            v82 = 1;
LABEL_203:
            v180 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v83 = KeGetCurrentPrcb();
            v171 = v83;
            KiAcquireKobjectLockSafe(v81);
            v84 = *(_DWORD *)(v81 + 4);
            *(_DWORD *)(v81 + 4) = 1;
            if ( v84 )
              goto LABEL_263;
            v85 = (_QWORD *)(v81 + 8);
            if ( !v82 )
            {
              v86 = (_QWORD *)*v85;
              while ( v86 != v85 )
              {
                v87 = v86;
                v183 = (_QWORD *)*v86;
                v88 = *v86;
                v89 = (_QWORD *)v86[1];
                if ( *(_QWORD **)(v88 + 8) != v87 || (_QWORD *)*v89 != v87 )
                  __fastfail(3u);
                *v89 = v88;
                *(_QWORD *)(v88 + 8) = v89;
                v90 = *((_BYTE *)v87 + 16);
                if ( v90 == 1 )
                {
                  if ( (unsigned __int8)KiTryUnwaitThread(v83, v87, *((unsigned __int16 *)v87 + 9), 0LL) )
                  {
                    v19 = (*(_DWORD *)(v81 + 4))-- == 1;
                    if ( v19 )
                      break;
                  }
                }
                else if ( v90 == 2 )
                {
                  *((_BYTE *)v87 + 17) = 5;
                  v91 = v87[3];
                  *v87 = 0LL;
                  v92 = (_QWORD *)(v91 + 8);
                  v93 = 0;
                  __writecr8(2uLL);
                  v94 = KeGetCurrentPrcb();
                  v95 = v94->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    v96 = v95->WaitBlockFill6[68] == 2 && v95->NextProcessor == KeGetPcr()->Prcb.Number;
                    EtwTraceEnqueueWork(v94->CurrentThread, v87, v96);
                  }
                  KiAcquireKobjectLockSafe(v91);
                  if ( (_QWORD *)*v92 != v92
                    && *(_DWORD *)(v91 + 40) < *(_DWORD *)(v91 + 44)
                    && (v95->Queue != (_DISPATCHER_HEADER *volatile)v91 || v95->WaitReason != 15) )
                  {
                    v93 = KiWakeQueueWaiter(v94, v91, v87);
                  }
                  if ( !v93 )
                  {
                    v97 = *(_DWORD *)(v91 + 4);
                    *(_DWORD *)(v91 + 4) = v97 + 1;
                    v98 = *(_QWORD **)(v91 + 32);
                    if ( *v98 != v91 + 24 )
                      __fastfail(3u);
                    *v87 = v91 + 24;
                    v87[1] = v98;
                    *v98 = v87;
                    *(_QWORD *)(v91 + 32) = v87;
                    if ( !v97 && (_QWORD *)*v92 != v92 )
                      KiWakeOtherQueueWaiters(v94, v91);
                  }
                  _InterlockedAnd((volatile signed __int32 *)v91, 0xFFFFFF7F);
                  v81 = v174;
                  v19 = (*(_DWORD *)(v174 + 4))-- == 1;
                  if ( v19 )
                    break;
                  v83 = v171;
                }
                else
                {
                  KiTryUnwaitThread(v83, v87, 256LL, 0LL);
                }
                v86 = v183;
                v85 = (_QWORD *)(v81 + 8);
              }
LABEL_263:
              v111 = v180;
LABEL_331:
              LOBYTE(v169) = v111;
              _InterlockedAnd((volatile signed __int32 *)v81, 0xFFFFFF7F);
              KiExitDispatcher((_DWORD)v171, 0, 1, 0, v169);
              v7 = v176;
              goto LABEL_332;
            }
            v99 = (_QWORD *)*v85;
            while ( 1 )
            {
              if ( v99 == v85 )
              {
                v85[1] = v85;
                *v85 = v85;
                v5 = v178;
                goto LABEL_263;
              }
              v100 = v99;
              v99 = (_QWORD *)*v99;
              v101 = *((_BYTE *)v100 + 16);
              if ( v101 == 1 )
                break;
              if ( v101 != 2 )
              {
                v102 = 256LL;
                goto LABEL_259;
              }
              *((_BYTE *)v100 + 17) = 5;
              v103 = v100[3];
              *v100 = 0LL;
              v104 = (_QWORD *)(v103 + 8);
              v105 = 0;
              __writecr8(2uLL);
              v106 = KeGetCurrentPrcb();
              v107 = v106->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v108 = v107->WaitBlockFill6[68] == 2 && v107->NextProcessor == KeGetPcr()->Prcb.Number;
                EtwTraceEnqueueWork(v106->CurrentThread, v100, v108);
              }
              KiAcquireKobjectLockSafe(v103);
              if ( (_QWORD *)*v104 != v104
                && *(_DWORD *)(v103 + 40) < *(_DWORD *)(v103 + 44)
                && (v107->Queue != (_DISPATCHER_HEADER *volatile)v103 || v107->WaitReason != 15) )
              {
                v105 = KiWakeQueueWaiter(v106, v103, v100);
              }
              if ( !v105 )
              {
                v109 = *(_DWORD *)(v103 + 4);
                *(_DWORD *)(v103 + 4) = v109 + 1;
                v110 = *(_QWORD **)(v103 + 32);
                if ( *v110 != v103 + 24 )
                  __fastfail(3u);
                *v100 = v103 + 24;
                v100[1] = v110;
                *v110 = v100;
                *(_QWORD *)(v103 + 32) = v100;
                if ( !v109 && (_QWORD *)*v104 != v104 )
                  KiWakeOtherQueueWaiters(v106, v103);
              }
              _InterlockedAnd((volatile signed __int32 *)v103, 0xFFFFFF7F);
              v81 = v174;
              v83 = v171;
LABEL_260:
              v85 = (_QWORD *)(v81 + 8);
            }
            v102 = *((unsigned __int16 *)v100 + 9);
LABEL_259:
            KiTryUnwaitThread(v83, v100, v102, 0LL);
            goto LABEL_260;
          }
LABEL_332:
          *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
          goto LABEL_333;
        }
        v52 = 1;
      }
      v182 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v53 = KeGetCurrentPrcb();
      v170 = v53;
      KiAcquireKobjectLockSafe(v51);
      v54 = *(_DWORD *)(v51 + 4);
      *(_DWORD *)(v51 + 4) = 1;
      if ( v54 )
        goto LABEL_193;
      v55 = (_QWORD *)(v51 + 8);
      if ( !v52 )
      {
        v56 = (_QWORD *)*v55;
        while ( v56 != v55 )
        {
          v57 = v56;
          v179 = (_QWORD *)*v56;
          v58 = *v56;
          v59 = (_QWORD *)v56[1];
          if ( *(_QWORD **)(v58 + 8) != v57 || (_QWORD *)*v59 != v57 )
            __fastfail(3u);
          *v59 = v58;
          *(_QWORD *)(v58 + 8) = v59;
          v60 = *((_BYTE *)v57 + 16);
          if ( v60 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v53, v57, *((unsigned __int16 *)v57 + 9), 0LL) )
            {
              v19 = (*(_DWORD *)(v51 + 4))-- == 1;
              if ( v19 )
                break;
            }
          }
          else if ( v60 == 2 )
          {
            *((_BYTE *)v57 + 17) = 5;
            v61 = v57[3];
            *v57 = 0LL;
            v62 = (_QWORD *)(v61 + 8);
            v63 = 0;
            __writecr8(2uLL);
            v64 = KeGetCurrentPrcb();
            v65 = v64->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v66 = v65->WaitBlockFill6[68] == 2 && v65->NextProcessor == KeGetPcr()->Prcb.Number;
              EtwTraceEnqueueWork(v64->CurrentThread, v57, v66);
            }
            KiAcquireKobjectLockSafe(v61);
            if ( (_QWORD *)*v62 != v62
              && *(_DWORD *)(v61 + 40) < *(_DWORD *)(v61 + 44)
              && (v65->Queue != (_DISPATCHER_HEADER *volatile)v61 || v65->WaitReason != 15) )
            {
              v63 = KiWakeQueueWaiter(v64, v61, v57);
            }
            if ( !v63 )
            {
              v67 = *(_DWORD *)(v61 + 4);
              *(_DWORD *)(v61 + 4) = v67 + 1;
              v68 = *(_QWORD **)(v61 + 32);
              if ( *v68 != v61 + 24 )
                __fastfail(3u);
              *v57 = v61 + 24;
              v57[1] = v68;
              *v68 = v57;
              *(_QWORD *)(v61 + 32) = v57;
              if ( !v67 && (_QWORD *)*v62 != v62 )
                KiWakeOtherQueueWaiters(v64, v61);
            }
            _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
            v51 = v173;
            v19 = (*(_DWORD *)(v173 + 4))-- == 1;
            if ( v19 )
              break;
            v53 = v170;
          }
          else
          {
            KiTryUnwaitThread(v53, v57, 256LL, 0LL);
          }
          v56 = v179;
          v55 = (_QWORD *)(v51 + 8);
        }
LABEL_193:
        _InterlockedAnd((volatile signed __int32 *)v51, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v170, 0, 1, 0, v182);
        v7 = v176;
        goto LABEL_194;
      }
      v69 = (_QWORD *)*v55;
      while ( 1 )
      {
        if ( v69 == v55 )
        {
          v55[1] = v55;
          *v55 = v55;
          v5 = v178;
          goto LABEL_193;
        }
        v70 = v69;
        v69 = (_QWORD *)*v69;
        v71 = *((_BYTE *)v70 + 16);
        if ( v71 == 1 )
          break;
        if ( v71 != 2 )
        {
          v72 = 256LL;
          goto LABEL_189;
        }
        *((_BYTE *)v70 + 17) = 5;
        v73 = v70[3];
        *v70 = 0LL;
        v74 = (_QWORD *)(v73 + 8);
        v75 = 0;
        __writecr8(2uLL);
        v76 = KeGetCurrentPrcb();
        v77 = v76->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v78 = v77->WaitBlockFill6[68] == 2 && v77->NextProcessor == KeGetPcr()->Prcb.Number;
          EtwTraceEnqueueWork(v76->CurrentThread, v70, v78);
        }
        KiAcquireKobjectLockSafe(v73);
        if ( (_QWORD *)*v74 != v74
          && *(_DWORD *)(v73 + 40) < *(_DWORD *)(v73 + 44)
          && (v77->Queue != (_DISPATCHER_HEADER *volatile)v73 || v77->WaitReason != 15) )
        {
          v75 = KiWakeQueueWaiter(v76, v73, v70);
        }
        if ( !v75 )
        {
          v79 = *(_DWORD *)(v73 + 4);
          *(_DWORD *)(v73 + 4) = v79 + 1;
          v80 = *(_QWORD **)(v73 + 32);
          if ( *v80 != v73 + 24 )
            __fastfail(3u);
          *v70 = v73 + 24;
          v70[1] = v80;
          *v80 = v70;
          *(_QWORD *)(v73 + 32) = v70;
          if ( !v79 && (_QWORD *)*v74 != v74 )
            KiWakeOtherQueueWaiters(v76, v73);
        }
        _InterlockedAnd((volatile signed __int32 *)v73, 0xFFFFFF7F);
        v51 = v173;
        v53 = v170;
LABEL_190:
        v55 = (_QWORD *)(v51 + 8);
      }
      v72 = *((unsigned __int16 *)v70 + 9);
LABEL_189:
      KiTryUnwaitThread(v53, v70, v72, 0LL);
      goto LABEL_190;
    }
    if ( !v7 )
      goto LABEL_333;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
      goto LABEL_332;
    v81 = v7 + 152;
    v175 = v7 + 152;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v112 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 156) == 1 )
        goto LABEL_332;
      v112 = 1;
    }
    v181 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v113 = KeGetCurrentPrcb();
    v171 = v113;
    KiAcquireKobjectLockSafe(v81);
    v114 = *(_DWORD *)(v81 + 4);
    *(_DWORD *)(v81 + 4) = 1;
    if ( v114 )
      goto LABEL_330;
    v115 = (_QWORD *)(v81 + 8);
    if ( !v112 )
    {
      v116 = (_QWORD *)*v115;
      while ( v116 != v115 )
      {
        v117 = v116;
        v184 = (_QWORD *)*v116;
        v118 = *v116;
        v119 = (_QWORD *)v116[1];
        if ( *(_QWORD **)(v118 + 8) != v117 || (_QWORD *)*v119 != v117 )
          __fastfail(3u);
        *v119 = v118;
        *(_QWORD *)(v118 + 8) = v119;
        v120 = *((_BYTE *)v117 + 16);
        if ( v120 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v113, v117, *((unsigned __int16 *)v117 + 9), 0LL) )
          {
            v19 = (*(_DWORD *)(v81 + 4))-- == 1;
            if ( v19 )
              break;
          }
        }
        else if ( v120 == 2 )
        {
          *((_BYTE *)v117 + 17) = 5;
          v121 = v117[3];
          *v117 = 0LL;
          v122 = (_QWORD *)(v121 + 8);
          v123 = 0;
          __writecr8(2uLL);
          v124 = KeGetCurrentPrcb();
          v125 = v124->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v126 = v125->WaitBlockFill6[68] == 2 && v125->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v124->CurrentThread, v117, v126);
          }
          KiAcquireKobjectLockSafe(v121);
          if ( (_QWORD *)*v122 != v122
            && *(_DWORD *)(v121 + 40) < *(_DWORD *)(v121 + 44)
            && (v125->Queue != (_DISPATCHER_HEADER *volatile)v121 || v125->WaitReason != 15) )
          {
            v123 = KiWakeQueueWaiter(v124, v121, v117);
          }
          if ( !v123 )
          {
            v127 = *(_DWORD *)(v121 + 4);
            *(_DWORD *)(v121 + 4) = v127 + 1;
            v128 = *(_QWORD **)(v121 + 32);
            if ( *v128 != v121 + 24 )
              __fastfail(3u);
            *v117 = v121 + 24;
            v117[1] = v128;
            *v128 = v117;
            *(_QWORD *)(v121 + 32) = v117;
            if ( !v127 && (_QWORD *)*v122 != v122 )
              KiWakeOtherQueueWaiters(v124, v121);
          }
          _InterlockedAnd((volatile signed __int32 *)v121, 0xFFFFFF7F);
          v81 = v175;
          v19 = (*(_DWORD *)(v175 + 4))-- == 1;
          if ( v19 )
            break;
          v113 = v171;
        }
        else
        {
          KiTryUnwaitThread(v113, v117, 256LL, 0LL);
        }
        v116 = v184;
        v115 = (_QWORD *)(v81 + 8);
      }
LABEL_330:
      v111 = v181;
      goto LABEL_331;
    }
    v129 = (_QWORD *)*v115;
    while ( 1 )
    {
      if ( v129 == v115 )
      {
        v115[1] = v115;
        *v115 = v115;
        v5 = v178;
        goto LABEL_330;
      }
      v130 = v129;
      v129 = (_QWORD *)*v129;
      v131 = *((_BYTE *)v130 + 16);
      if ( v131 == 1 )
        break;
      if ( v131 != 2 )
      {
        v132 = 256LL;
        goto LABEL_326;
      }
      *((_BYTE *)v130 + 17) = 5;
      v133 = v130[3];
      *v130 = 0LL;
      v134 = (_QWORD *)(v133 + 8);
      v135 = 0;
      __writecr8(2uLL);
      v136 = KeGetCurrentPrcb();
      v137 = v136->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v138 = v137->WaitBlockFill6[68] == 2 && v137->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(v136->CurrentThread, v130, v138);
      }
      KiAcquireKobjectLockSafe(v133);
      if ( (_QWORD *)*v134 != v134
        && *(_DWORD *)(v133 + 40) < *(_DWORD *)(v133 + 44)
        && (v137->Queue != (_DISPATCHER_HEADER *volatile)v133 || v137->WaitReason != 15) )
      {
        v135 = KiWakeQueueWaiter(v136, v133, v130);
      }
      if ( !v135 )
      {
        v139 = *(_DWORD *)(v133 + 4);
        *(_DWORD *)(v133 + 4) = v139 + 1;
        v140 = *(_QWORD **)(v133 + 32);
        if ( *v140 != v133 + 24 )
          __fastfail(3u);
        *v130 = v133 + 24;
        v130[1] = v140;
        *v140 = v130;
        *(_QWORD *)(v133 + 32) = v130;
        if ( !v139 && (_QWORD *)*v134 != v134 )
          KiWakeOtherQueueWaiters(v136, v133);
      }
      _InterlockedAnd((volatile signed __int32 *)v133, 0xFFFFFF7F);
      v81 = v175;
      v113 = v171;
LABEL_327:
      v115 = (_QWORD *)(v81 + 8);
    }
    v132 = *((unsigned __int16 *)v130 + 9);
LABEL_326:
    KiTryUnwaitThread(v113, v130, v132, 0LL);
    goto LABEL_327;
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v5 + 16) & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v47 = *(struct _KEVENT **)(v5 + 80);
      if ( v47 )
      {
LABEL_105:
        KeSetEvent(v47, 0, 0);
        goto LABEL_106;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    }
    v47 = (struct _KEVENT *)(v7 + 152);
    goto LABEL_105;
  }
LABEL_106:
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  v48 = *(void **)(v5 + 80);
  if ( v48 && v7 && (*(_DWORD *)(v5 + 16) & 4) == 0 )
    ObfDereferenceObject(v48);
  if ( (*(_DWORD *)(v5 + 16) & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
      return;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread((_QWORD *)v5);
  }
  pIoFreeIrp(v5);
}
