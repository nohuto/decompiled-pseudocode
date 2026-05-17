/*
 * XREFs of TppWorkerThread @ 0x18001E750
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF50 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x180020180 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x18003AEA0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B1A0 (TppIopExecuteCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1DC (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DF8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlBackoff @ 0x180063170 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AD8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076174 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     TppAllocThreadData @ 0x18007CE4C (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007FFF0 (TppPoolAddWorker.c)
 *     TppCritSetThread @ 0x1800810D0 (TppCritSetThread.c)
 *     TppPoolRemoveWorker @ 0x180081E68 (TppPoolRemoveWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x180081FE0 (RtlRegisterThreadWithCsrss.c)
 *     TppFreeDirectParamsCache @ 0x180082CD4 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180082F4C (TppFreeThreadData.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800833AC (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 *     TppCallbackPerformDeferredWork @ 0x180086388 (TppCallbackPerformDeferredWork.c)
 *     TppCritResetThread @ 0x1800865B4 (TppCritResetThread.c)
 *     TppQueueRemoveHead @ 0x18008EC24 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008EC88 (TppAreNodeWorkersSteadyState.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090EDC (TppWorkerpInnerExceptionFilter.c)
 *     TppExceptionFilter @ 0x180090F04 (TppExceptionFilter.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A6440 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A9BF0 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 *     TppCheckForTransactions @ 0x1800FE4C4 (TppCheckForTransactions.c)
 *     TppTerminateProcess @ 0x1800FE668 (TppTerminateProcess.c)
 *     TppETWWorkerNodeSwitch @ 0x1800FE7B4 (TppETWWorkerNodeSwitch.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  unsigned int v4; // r8d
  unsigned int v5; // r14d
  unsigned int i; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  int v11; // edi
  volatile signed __int64 *v12; // rsi
  volatile signed __int64 *v13; // rax
  volatile signed __int64 *v14; // rbx
  volatile signed __int64 v15; // rcx
  volatile signed __int64 *v16; // r9
  signed __int64 v17; // rax
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  struct _TEB *v22; // rcx
  void (__fastcall *v23)(char *); // rax
  signed __int64 v24; // rax
  char v25; // r8
  signed __int64 v26; // rtt
  char v27; // di
  struct _PEB *v28; // rbx
  _LIST_ENTRY *Blink; // rcx
  _OWORD **v30; // rdi
  __int64 v31; // rbx
  unsigned int v32; // esi
  _OWORD *v33; // rbx
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(__int64, __int64, __int64); // rax
  int v42; // ebx
  __int64 v43; // rax
  __int64 Heap; // rax
  __int64 v45; // rax
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // rcx
  unsigned __int16 v49; // bx
  __int16 v50; // di
  __int64 v51; // rcx
  unsigned __int16 v52; // bx
  unsigned __int16 v53; // di
  unsigned __int64 v54; // rbx
  char v55; // cl
  bool v56; // zf
  signed __int64 v57; // rax
  unsigned __int16 v58; // di
  unsigned __int16 v59; // si
  __int64 v60; // r8
  signed __int64 v61; // rtt
  int k; // ecx
  __int64 v64; // r8
  int v65; // r8d
  __int64 v66; // rcx
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  struct _PEB *v69; // rbx
  __int128 v70; // rax
  bool v71; // [rsp+32h] [rbp-3C6h]
  char v72; // [rsp+33h] [rbp-3C5h] BYREF
  char v73; // [rsp+34h] [rbp-3C4h]
  char v74; // [rsp+35h] [rbp-3C3h]
  char v75; // [rsp+36h] [rbp-3C2h]
  char v76; // [rsp+37h] [rbp-3C1h]
  char v77; // [rsp+38h] [rbp-3C0h]
  char v78; // [rsp+39h] [rbp-3BFh]
  int v79; // [rsp+3Ch] [rbp-3BCh]
  char v80; // [rsp+40h] [rbp-3B8h]
  char v81; // [rsp+41h] [rbp-3B7h]
  unsigned __int8 v82; // [rsp+42h] [rbp-3B6h] BYREF
  char v83; // [rsp+43h] [rbp-3B5h]
  char v84; // [rsp+44h] [rbp-3B4h]
  char v85; // [rsp+45h] [rbp-3B3h]
  char v86; // [rsp+46h] [rbp-3B2h]
  char v87; // [rsp+47h] [rbp-3B1h]
  int v88; // [rsp+48h] [rbp-3B0h]
  int v89; // [rsp+4Ch] [rbp-3ACh]
  signed __int64 v90; // [rsp+50h] [rbp-3A8h]
  int v91; // [rsp+58h] [rbp-3A0h] BYREF
  int j; // [rsp+5Ch] [rbp-39Ch]
  unsigned int v93; // [rsp+60h] [rbp-398h]
  signed __int64 v94; // [rsp+68h] [rbp-390h]
  __int64 v95; // [rsp+70h] [rbp-388h]
  signed __int64 v96; // [rsp+78h] [rbp-380h]
  struct _PEB *v97; // [rsp+80h] [rbp-378h]
  int v98; // [rsp+88h] [rbp-370h] BYREF
  __int64 v99; // [rsp+90h] [rbp-368h]
  _OWORD *v100; // [rsp+98h] [rbp-360h]
  _QWORD *v101; // [rsp+A0h] [rbp-358h] BYREF
  int v102; // [rsp+A8h] [rbp-350h]
  int v103; // [rsp+ACh] [rbp-34Ch] BYREF
  int v104; // [rsp+B0h] [rbp-348h]
  int v105; // [rsp+B4h] [rbp-344h]
  int v106; // [rsp+C0h] [rbp-338h]
  int v107; // [rsp+C8h] [rbp-330h] BYREF
  int v108; // [rsp+D0h] [rbp-328h]
  unsigned int v109; // [rsp+D4h] [rbp-324h]
  int v110; // [rsp+D8h] [rbp-320h] BYREF
  unsigned int v111; // [rsp+E0h] [rbp-318h]
  int v112; // [rsp+E8h] [rbp-310h] BYREF
  volatile signed __int64 *v113; // [rsp+F0h] [rbp-308h]
  __int64 v114; // [rsp+F8h] [rbp-300h] BYREF
  volatile signed __int64 *v115; // [rsp+108h] [rbp-2F0h]
  unsigned __int64 v116; // [rsp+110h] [rbp-2E8h] BYREF
  unsigned __int64 *v117; // [rsp+118h] [rbp-2E0h]
  __int64 v118; // [rsp+120h] [rbp-2D8h]
  void *UniqueThread; // [rsp+128h] [rbp-2D0h]
  int v120; // [rsp+130h] [rbp-2C8h]
  signed __int32 v121[5]; // [rsp+134h] [rbp-2C4h] BYREF
  __int64 v122; // [rsp+160h] [rbp-298h]
  __int64 v123; // [rsp+168h] [rbp-290h]
  struct _TEB *v124; // [rsp+180h] [rbp-278h]
  struct _TEB *v125; // [rsp+188h] [rbp-270h]
  struct _TEB *v126; // [rsp+190h] [rbp-268h]
  __int64 v127; // [rsp+1A0h] [rbp-258h]
  struct _TEB *v128; // [rsp+1A8h] [rbp-250h]
  struct _TEB *v129; // [rsp+1B0h] [rbp-248h]
  struct _TEB *v130; // [rsp+1B8h] [rbp-240h]
  __int64 v131; // [rsp+1D0h] [rbp-228h]
  _OWORD v132[23]; // [rsp+1E0h] [rbp-218h] BYREF
  char v133[6]; // [rsp+350h] [rbp-A8h] BYREF
  __int16 v134; // [rsp+356h] [rbp-A2h]
  __int64 v135; // [rsp+370h] [rbp-88h]
  int v136; // [rsp+378h] [rbp-80h]
  unsigned int v137; // [rsp+37Ch] [rbp-7Ch]
  __int16 v138; // [rsp+380h] [rbp-78h]
  unsigned __int16 v139; // [rsp+382h] [rbp-76h]
  int v140; // [rsp+384h] [rbp-74h]
  int v141; // [rsp+388h] [rbp-70h]
  _QWORD v142[2]; // [rsp+390h] [rbp-68h] BYREF
  _QWORD v143[2]; // [rsp+3A0h] [rbp-58h] BYREF
  _QWORD v144[2]; // [rsp+3B0h] [rbp-48h] BYREF

  v90 = a1;
  v114 = 0LL;
  v95 = a1;
  v73 = 0;
  v74 = 0;
  v77 = 0;
  v75 = 0;
  v72 = 0;
  v78 = 0;
  v76 = 0;
  v101 = 0LL;
  v79 = 0;
  RtlRegisterThreadWithCsrss();
  v97 = NtCurrentPeb();
  TppCritSetThread(&v114);
  TppAllocThreadData(&v101);
  if ( v101 )
    *v101 = v132;
  memset(v132, 0, 0x168uLL);
  RtlAcquireSRWLockShared(a1 + 368);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v88 = -1073741558;
  }
  else
  {
    v122 = *(_QWORD *)(a1 + 56);
    v88 = NtWorkerFactoryWorkerReady();
    if ( v88 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v27 = v77;
LABEL_74:
      RtlReleaseSRWLockShared(a1 + 368);
      if ( v27 )
        goto LABEL_225;
      TppPoolAddWorker(a1, v132);
      v75 = 1;
      v28 = v97;
      RtlAcquireSRWLockExclusive(&v97->TppWorkerpListLock);
      Blink = v97->TppWorkerpList.Blink;
      if ( Blink->Flink != &v97->TppWorkerpList )
        __fastfail(3u);
      *(_QWORD *)&v132[0] = &v97->TppWorkerpList;
      *((_QWORD *)&v132[0] + 1) = Blink;
      Blink->Flink = (_LIST_ENTRY *)v132;
      v28->TppWorkerpList.Blink = (_LIST_ENTRY *)v132;
      v74 = 1;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v28->TppWorkerpListLock);
      memset((char *)&v132[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v73 = 1;
      TppGetCurrentThreadNumaNode(a1, (char *)&v132[21] + 8, 0LL);
      while ( 1 )
      {
        v79 = 0;
        memset(&v132[19], 0, 0x20uLL);
        v30 = *(_OWORD ***)&v132[21];
        v89 = 16;
        if ( !*(_QWORD *)&v132[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v132[21] + 8LL) != 1 )
          goto LABEL_191;
        v31 = *(_QWORD *)&v132[21];
        memset(**(void ***)&v132[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v132[21] + 12LL));
        v32 = *(_DWORD *)(v31 + 12);
        v89 = v32;
        v33 = *v30;
LABEL_81:
        v100 = v33;
        v91 = 0;
        v123 = *(_QWORD *)(a1 + 56);
        v34 = ZwWaitForWorkViaWorkerFactory(v123, v33, v32, &v91, (char *)&v132[16] + 8);
        v88 = v34;
        if ( v34 )
          v91 = 0;
        if ( (BYTE12(v132[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v132[16] + 1));
          HIDWORD(v132[17]) &= ~1u;
          v34 = v88;
          LODWORD(v33) = (_DWORD)v100;
          v32 = v89;
        }
        if ( v34 )
        {
          v46 = v34 - 128;
          if ( !v46 )
            goto LABEL_225;
          v47 = v46 - 64;
          if ( !v47 )
          {
            TppCallbackCheckThreadAfterCallback(0LL);
            continue;
          }
          if ( v47 == 66 )
          {
            v76 = 1;
            goto LABEL_225;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v132, (_DWORD)v33, v91, v32, a1, (__int64)&v72) )
            goto LABEL_225;
          if ( !v72 )
          {
            v35 = *(_QWORD *)&v132[19];
            if ( !*(_QWORD *)&v132[19] )
              goto LABEL_4;
            v99 = *(_QWORD *)&v132[19];
            *(_QWORD *)&v132[9] = *(_QWORD *)(*(_QWORD *)&v132[19] + 56LL);
            *((_QWORD *)&v132[9] + 1) = *(_QWORD *)&v132[19];
            v107 = *(unsigned __int8 *)(*(_QWORD *)&v132[19] + 68LL);
            v36 = *(unsigned int *)(*(_QWORD *)&v132[19] + 64LL);
            v37 = DWORD2(v132[21]);
            v38 = *(_DWORD *)(a1 + 428);
            v39 = DWORD2(v132[21]);
            if ( (_DWORD)v36 == DWORD2(v132[21]) )
            {
              if ( v38 == -1 && !LOBYTE(v132[22]) )
              {
                LOBYTE(v132[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
              }
            }
            else
            {
              if ( v38 == -1 )
              {
                if ( LOBYTE(v132[22]) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v132[21])));
                else
                  LOBYTE(v132[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
              }
              DWORD2(v132[21]) = v36;
              v39 = *(_QWORD *)(a1 + 48);
              v58 = *(_WORD *)(v39 + 16 * v36 + 8);
              v59 = *(_WORD *)(v39 + 16 * v37 + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, v37, v36, v59, *(_WORD *)(v39 + 16 * v36 + 8));
              if ( v59 != v58 )
              {
                v142[1] = v58;
                v142[0] = 0LL;
                NtSetInformationThread(-2LL, 30LL, v142);
                NtSetInformationThread(-2LL, 13LL, &v107);
              }
            }
            v132[18] = NtCurrentTeb()->ActivityId;
            if ( *((_QWORD *)&v132[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v132[11] + 1) + 436LL) & 1) == 0 )
            {
              LODWORD(v132[10]) |= 8u;
              v124 = NtCurrentTeb();
              v64 = LODWORD(v132[10]);
              if ( v124->IsImpersonating )
              {
                v64 = LODWORD(v132[10]) | 4u;
                LODWORD(v132[10]) |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v39, v37, v64) )
                LODWORD(v132[10]) = v65 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v108 = 1;
                v87 = 1;
                LODWORD(v132[10]) |= 0x20u;
              }
              else
              {
                v108 = 0;
                v87 = 0;
              }
              v125 = NtCurrentTeb();
              if ( v125->PreferredLanguages )
              {
                v80 = 1;
                LODWORD(v132[10]) |= 0x40u;
              }
              else
              {
                v80 = 0;
              }
              v126 = NtCurrentTeb();
              if ( v126->SavedPriorityState )
              {
                v81 = 1;
                LODWORD(v132[10]) |= 0x80u;
              }
              else
              {
                v81 = 0;
              }
            }
            v40 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v35 + 56);
            if ( v40 == TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((__int64)&v132[3] + 8, v99, *((__int64 *)&v132[19] + 1));
            }
            else if ( (char *)v40 == (char *)TppIopExecuteCallback )
            {
              TppIopExecuteCallback((char *)&v132[3] + 8, v99, *((_QWORD *)&v132[19] + 1), &v132[20]);
            }
            else if ( (char *)v40 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration((char *)&v132[3] + 8, v99, *((_QWORD *)&v132[19] + 1), &v132[20]);
            }
            else if ( (char *)v40 == (char *)TppWaitCompletion )
            {
              TppWaitCompletion((char *)&v132[3] + 8, v99, *((_QWORD *)&v132[19] + 1), &v132[20]);
            }
            else
            {
              ((void (__fastcall *)(char *, __int64, _QWORD, _OWORD *))v40)(
                (char *)&v132[3] + 8,
                v99,
                *((_QWORD *)&v132[19] + 1),
                &v132[20]);
            }
LABEL_57:
            if ( (BYTE4(v132[8]) & 4) != 0 )
              v78 = 1;
            v71 = LODWORD(v132[8]) == 4;
            TppCallbackEpilog((char *)&v132[3] + 8);
            *(_QWORD *)&v132[2] = 0LL;
            if ( v78 )
            {
              _m_prefetchw((const void *)(a1 + 8));
              v67 = *(_QWORD *)(a1 + 8);
              v90 = v67;
              do
              {
                LODWORD(v90) = (unsigned __int16)(v90 ^ (v90 + 1)) ^ (unsigned int)v90;
                v68 = v67;
                v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v90, v67);
                v90 = v67;
              }
              while ( v68 != v67 );
              v103 = 3;
              v131 = *(_QWORD *)(a1 + 56);
              NtSetInformationWorkerFactory(v131, 9LL, &v103);
              goto LABEL_225;
            }
            if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              TppAdjustRunningThreadGoal(a1);
            _m_prefetchw((const void *)(a1 + 8));
            v24 = *(_QWORD *)(a1 + 8);
            v96 = v24;
            do
            {
              if ( *(_BYTE *)(a1 + 376) )
              {
                v104 = 0;
                goto LABEL_225;
              }
              if ( HIDWORD(v24) && ((v96 & 0x8000u) == 0LL || v71) )
              {
                v25 = 0;
                HIDWORD(v96) = HIDWORD(v24) - 1;
              }
              else
              {
                v25 = 1;
                LODWORD(v96) = (unsigned __int16)(v96 ^ (v96 + 1)) ^ (unsigned int)v96;
              }
              v26 = v24;
              v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v96, v24);
              v96 = v24;
            }
            while ( v26 != v24 );
            v72 = v25;
            v104 = 1;
            if ( v25 )
              continue;
LABEL_4:
            Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
            Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
            v4 = TppNumberNodes;
            v5 = TppNumberNodes;
            if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            {
              TppAdjustRunningThreadGoal(a1);
              v4 = TppNumberNodes;
            }
            for ( i = 0; ; ++i )
            {
              v109 = i;
              if ( i >= v4 )
                goto LABEL_11;
              v7 = 16LL * i + *(_QWORD *)(a1 + 48);
              if ( *(_WORD *)(v7 + 8) == Group )
              {
                v8 = *(_QWORD *)v7;
                if ( _bittest64(&v8, Number) )
                  break;
              }
            }
            v5 = i;
LABEL_11:
            if ( v5 >= v4 )
              v5 = 0;
            v93 = v5;
            if ( &v82 )
              v82 = Number;
            v110 = v82;
            v9 = DWORD2(v132[21]);
            v10 = *(_DWORD *)(a1 + 428);
            if ( v5 == DWORD2(v132[21]) )
            {
              if ( v10 == -1 && !LOBYTE(v132[22]) )
              {
                LOBYTE(v132[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
              }
            }
            else
            {
              if ( v10 == -1 )
              {
                if ( LOBYTE(v132[22]) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v132[21])));
                else
                  LOBYTE(v132[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
              }
              DWORD2(v132[21]) = v5;
              v51 = *(_QWORD *)(a1 + 48);
              v52 = *(_WORD *)(v51 + 16LL * v5 + 8);
              v53 = *(_WORD *)(v51 + 16 * v9 + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, v9, v5, v53, *(_WORD *)(v51 + 16LL * v5 + 8));
              if ( v53 != v52 )
              {
                v143[1] = v52;
                v143[0] = 0LL;
                NtSetInformationThread(-2LL, 30LL, v143);
                NtSetInformationThread(-2LL, 13LL, &v110);
              }
            }
            v111 = v5;
            if ( *(_DWORD *)(a1 + 428) == -1
              && HIDWORD(v132[21]) >= 0x10
              && !(unsigned int)TppAreNodeWorkersSteadyState(a1, v9) )
            {
LABEL_119:
              while ( 2 )
              {
                if ( !*(_BYTE *)(a1 + 377) )
                {
                  v42 = 0;
LABEL_121:
                  j = v42;
                  if ( v42 > 2 )
                    continue;
                  while ( 1 )
                  {
                    v127 = *(_QWORD *)(a1 + 8 * (v42 + 2LL)) + 24LL * v5;
                    v43 = TppQueueRemoveHead(v127, v9);
                    if ( v43 )
                      break;
                    if ( ++v5 >= TppNumberNodes )
                      v5 = 0;
                    v111 = v5;
                    if ( v5 == v93 )
                    {
                      ++v42;
                      goto LABEL_121;
                    }
                  }
                  v18 = (volatile signed __int64 *)(v43 - 16);
LABEL_28:
                  v113 = v18;
                  v112 = *((unsigned __int8 *)v18 + 12);
                  v19 = DWORD2(v132[21]);
                  v20 = *(_DWORD *)(a1 + 428);
                  if ( v5 == DWORD2(v132[21]) )
                  {
                    if ( v20 == -1 && !LOBYTE(v132[22]) )
                    {
                      LOBYTE(v132[22]) = 1;
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                    }
                  }
                  else
                  {
                    if ( v20 == -1 )
                    {
                      if ( LOBYTE(v132[22]) )
                        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v132[21])));
                      else
                        LOBYTE(v132[22]) = 1;
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                    }
                    DWORD2(v132[21]) = v5;
                    v48 = *(_QWORD *)(a1 + 48);
                    v49 = *(_WORD *)(v48 + 16LL * v5 + 8);
                    v50 = *(_WORD *)(v48 + 16 * v19 + 8);
                    if ( MEMORY[0x7FFE0386] )
                    {
                      v134 = 7209;
                      v135 = a1;
                      v136 = v19;
                      v137 = v5;
                      v138 = v50;
                      v139 = v49;
                      v66 = *(_QWORD *)(a1 + 40);
                      v140 = *(_DWORD *)(v66 + 4 * v19);
                      v141 = *(_DWORD *)(v66 + 4LL * v5);
                      NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 28LL, v133);
                    }
                    if ( v50 != v49 )
                    {
                      v144[1] = v49;
                      v144[0] = 0LL;
                      NtSetInformationThread(-2LL, 30LL, v144);
                      NtSetInformationThread(-2LL, 13LL, &v112);
                    }
                  }
                  if ( v5 == v93 )
                  {
                    if ( HIDWORD(v132[21]) < 0x10 )
                      v21 = HIDWORD(v132[21]) + 1;
                    else
                      v21 = 16;
                  }
                  else
                  {
                    v21 = 0;
                  }
                  HIDWORD(v132[21]) = v21;
                  v105 = 1;
                  if ( (BYTE12(v132[17]) & 1) != 0 )
                  {
                    TppCallbackSendAndDestroyAlpcMessage((char *)&v132[3] + 8, v19);
                    HIDWORD(v132[17]) &= ~1u;
                  }
                  *(_QWORD *)&v132[2] = v113;
                  *(_QWORD *)&v132[9] = **(_QWORD **)v113;
                  *((_QWORD *)&v132[9] + 1) = v113;
                  *((_QWORD *)&v132[11] + 1) = *(_QWORD *)&v132[3];
                  v132[18] = NtCurrentTeb()->ActivityId;
                  if ( *(_QWORD *)&v132[3] && (*(_BYTE *)(*(_QWORD *)&v132[3] + 436LL) & 1) == 0 )
                  {
                    LODWORD(v132[10]) |= 8u;
                    v128 = NtCurrentTeb();
                    if ( v128->IsImpersonating )
                      LODWORD(v132[10]) |= 4u;
                    v22 = NtCurrentTeb();
                    if ( (unsigned __int64)v22->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                      || v22->TxnScopeEnterCallback
                      || v22->TxnScopeExitCallback
                      || v22->TxnScopeContext
                      || v22->TxFsContext != 65534 )
                    {
                      LODWORD(v132[10]) |= 0x10u;
                    }
                    if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                    {
                      v102 = 1;
                      v84 = 1;
                      LODWORD(v132[10]) |= 0x20u;
                    }
                    else
                    {
                      v102 = 0;
                      v84 = 0;
                    }
                    v129 = NtCurrentTeb();
                    if ( v129->PreferredLanguages )
                    {
                      v85 = 1;
                      LODWORD(v132[10]) |= 0x40u;
                    }
                    else
                    {
                      v85 = 0;
                    }
                    v130 = NtCurrentTeb();
                    if ( v130->SavedPriorityState )
                    {
                      v86 = 1;
                      LODWORD(v132[10]) |= 0x80u;
                    }
                    else
                    {
                      v86 = 0;
                    }
                  }
                  v23 = **(void (__fastcall ***)(char *))v113;
                  if ( (char *)v23 == (char *)TppWorkpExecuteCallback )
                  {
                    TppWorkpExecuteCallback((char *)&v132[3] + 8);
                  }
                  else if ( (char *)v23 == (char *)TppTimerpExecuteCallback )
                  {
                    TppTimerpExecuteCallback((char *)&v132[3] + 8);
                  }
                  else if ( (char *)v23 == (char *)RtlpTpWorkCallback )
                  {
                    RtlpTpWorkCallback((char *)&v132[3] + 8);
                  }
                  else
                  {
                    v23((char *)&v132[3] + 8);
                  }
                  goto LABEL_57;
                }
                break;
              }
              v105 = 0;
LABEL_225:
              TppCallbackPerformDeferredWork((char *)&v132[3] + 8);
              if ( v73 )
                _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
              if ( v74 )
              {
                v69 = v97;
                RtlAcquireSRWLockExclusive(&v97->TppWorkerpListLock);
                v70 = v132[0];
                if ( *(_OWORD **)(*(_QWORD *)&v132[0] + 8LL) != v132 || **((_OWORD ***)&v132[0] + 1) != v132 )
                  __fastfail(3u);
                **((_QWORD **)&v132[0] + 1) = *(_QWORD *)&v132[0];
                *(_QWORD *)(v70 + 8) = *((_QWORD *)&v70 + 1);
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v69->TppWorkerpListLock);
              }
              if ( v75 )
              {
                TppPoolRemoveWorker(v132);
                if ( v76 )
                  TppPoolUpdateTrimmedWorker(a1);
              }
              if ( a1 == TppPoolpGlobalPool )
              {
                TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
              }
              else if ( a1 == TppPoolpSerializedPool )
              {
                TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
              }
              else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
              {
                TppPoolpFree(a1);
              }
              TppCritResetThread(v114);
              TppFreeThreadData(v101);
              TppFreeDirectParamsCache(v132);
              v88 = 0;
              RtlExitUserThread(0LL);
            }
            v11 = 0;
            for ( j = 0; ; j = v11 )
            {
              if ( v11 > 2 )
                goto LABEL_119;
              v9 = *(_QWORD *)(a1 + 8LL * v11 + 16) + 24LL * v93;
              v115 = (volatile signed __int64 *)v9;
              v12 = (volatile signed __int64 *)(v9 + 16);
              v98 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
                break;
LABEL_21:
              v13 = v115;
              v14 = (volatile signed __int64 *)*v115;
              v15 = **(_QWORD **)v115;
              if ( *(volatile signed __int64 **)(*v115 + 8) != v115 || *(volatile signed __int64 **)(v15 + 8) != v14 )
                __fastfail(3u);
              *v115 = v15;
              *(_QWORD *)(v15 + 8) = v13;
              v16 = v13 + 2;
              v17 = _InterlockedCompareExchange64(v13 + 2, 0LL, 1LL);
              if ( v17 != 1 )
              {
                do
                {
                  v60 = -1LL;
                  if ( (v17 & 6) == 2 )
                    v60 = 3LL;
                  v9 = v60 + v17;
                  v61 = v17;
                  v17 = _InterlockedCompareExchange64(v16, v60 + v17, v17);
                }
                while ( v61 != v17 );
                if ( v60 == 3 )
                  RtlpWakeSRWLock(v16, v9, 0LL);
              }
              if ( v14 != v115 && v14 )
              {
                v18 = v14 - 2;
                goto LABEL_28;
              }
              ++v11;
            }
            v54 = *v12;
            while ( 2 )
            {
              while ( (v54 & 1) != 0 )
              {
                if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
                  ZwTerminateProcess(-1LL, 3221225547LL);
                UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                v121[0] = 3;
                v118 = 0LL;
                v55 = 0;
                v83 = 0;
                if ( (v54 & 2) != 0 )
                {
                  v117 = 0LL;
                  v116 = v54 & 0xFFFFFFFFFFFFFFF0uLL;
                  v120 = -1;
                  v9 = (unsigned __int64)&v116 | v54 & 8 | 7;
                  v94 = v9;
                  if ( (v54 & 4) == 0 )
                  {
                    v55 = 1;
                    v83 = 1;
                  }
                }
                else
                {
                  v117 = &v116;
                  v120 = v54 >> 4;
                  if ( v120 > 1 )
                    v9 = (unsigned __int64)&v116 | 0xB;
                  else
                    v9 = (unsigned __int64)&v116 + 3;
                  v94 = v9;
                  if ( !(unsigned int)(v54 >> 4) )
                    v120 = -2;
                }
                v57 = _InterlockedCompareExchange64(v12, v9, v54);
                v56 = v54 == v57;
                v54 = v57;
                v94 = v57;
                if ( !v56 )
                  goto LABEL_162;
                if ( v55 )
                  RtlpOptimizeSRWLockList(v12);
                if ( MEMORY[0x7FFE036A] > 1u )
                {
                  for ( k = SRWLockSpinCount; ; --k )
                  {
                    v106 = k;
                    if ( !k || (v121[0] & 2) == 0 )
                      break;
                    _mm_pause();
                  }
                }
                if ( _interlockedbittestandreset(v121, 1u) )
                {
                  do
                    NtWaitForAlertByThreadId(v12, 0LL);
                  while ( (v121[0] & 4) == 0 );
                }
              }
              v94 = v54 + 1;
              v94 = _InterlockedCompareExchange64(v12, v54 + 1, v54);
              if ( v54 == v94 )
                goto LABEL_21;
LABEL_162:
              RtlBackoff(&v98);
              _m_prefetchw((const void *)v12);
              v54 = *v12;
              v94 = *v12;
              continue;
            }
          }
        }
      }
      v121[4] = TppHeapTag + 3145728;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      v33 = (_OWORD *)Heap;
      if ( Heap )
      {
        v45 = Heap + 896;
        *(_QWORD *)v45 = v33;
        *(_DWORD *)(v45 + 8) = 1;
        *(_DWORD *)(v45 + 12) = 16;
        *(_QWORD *)&v132[21] = v45;
        v32 = 16;
      }
      else
      {
LABEL_191:
        v32 = 1;
        v33 = &v132[19];
      }
      v89 = v32;
      goto LABEL_81;
    }
  }
  v27 = 1;
  v77 = 1;
  goto LABEL_74;
}
