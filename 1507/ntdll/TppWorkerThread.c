/*
 * XREFs of TppWorkerThread @ 0x180039390
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     TppWaitCompletion @ 0x18000B250 (TppWaitCompletion.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003AC50 (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppPrepareDirectParams @ 0x18003B540 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppTimerpExecuteCallback @ 0x18003C590 (TppTimerpExecuteCallback.c)
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180063784 (TppPoolUpdateTrimmedWorker.c)
 *     TppAllocThreadData @ 0x18006F5AC (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x180070374 (TppPoolAddWorker.c)
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     TppPoolRemoveWorker @ 0x180072180 (TppPoolRemoveWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800726A0 (RtlRegisterThreadWithCsrss.c)
 *     TppFreeDirectParamsCache @ 0x1800727C0 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180072AAC (TppFreeThreadData.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     TppCallbackPerformDeferredWork @ 0x180074E98 (TppCallbackPerformDeferredWork.c)
 *     TppCritResetThread @ 0x18007521C (TppCritResetThread.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppQueueRemoveHead @ 0x18007F0C0 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18007F124 (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x180093910 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180095460 (ZwWaitForWorkViaWorkerFactory.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5774 (TppAdjustRunningThreadGoal.c)
 *     TppCheckForTransactions @ 0x1800F5AE4 (TppCheckForTransactions.c)
 *     TppExceptionFilter @ 0x1800F5B34 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800F5CFC (TppTerminateProcess.c)
 *     TppETWWorkerNodeSwitch @ 0x1800F5E48 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F5ED4 (TppWorkerpInnerExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD **v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // esi
  _OWORD *v12; // rbx
  int v13; // ecx
  __int64 v14; // rbx
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  unsigned int v17; // r8d
  unsigned int v18; // r14d
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // edi
  volatile signed __int64 *v25; // rsi
  volatile signed __int64 *v26; // rax
  volatile signed __int64 *v27; // rbx
  volatile signed __int64 v28; // rcx
  volatile signed __int64 *v29; // r9
  signed __int64 v30; // rax
  volatile signed __int64 *v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  struct _TEB *v35; // rcx
  void (__fastcall *v36)(char *, volatile signed __int64 *); // rdi
  signed __int64 v37; // rax
  char v38; // r8
  signed __int64 v39; // rtt
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(__int64, __int64, __int64); // rbx
  __int64 Heap; // rax
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  unsigned __int64 v51; // rbx
  char v52; // cl
  bool v53; // zf
  signed __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int16 v56; // bx
  __int16 v57; // di
  int k; // ecx
  __int64 v60; // r8
  signed __int64 v61; // rtt
  unsigned __int16 v62; // di
  unsigned __int16 v63; // si
  __int64 v64; // rcx
  unsigned __int16 v65; // bx
  unsigned __int16 v66; // di
  __int64 v67; // r8
  int v68; // r8d
  __int64 v69; // rcx
  signed __int64 v70; // rax
  signed __int64 v71; // rtt
  char *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int128 v75; // rax
  char v76; // [rsp+31h] [rbp-3C7h]
  char v77; // [rsp+32h] [rbp-3C6h]
  bool v78; // [rsp+33h] [rbp-3C5h]
  char v79; // [rsp+34h] [rbp-3C4h]
  char v80; // [rsp+35h] [rbp-3C3h]
  char v81; // [rsp+36h] [rbp-3C2h] BYREF
  char v82; // [rsp+37h] [rbp-3C1h]
  char v83; // [rsp+38h] [rbp-3C0h]
  char v84; // [rsp+39h] [rbp-3BFh]
  int v85; // [rsp+3Ch] [rbp-3BCh]
  char v86; // [rsp+40h] [rbp-3B8h]
  char v87; // [rsp+41h] [rbp-3B7h]
  char v88; // [rsp+42h] [rbp-3B6h]
  unsigned __int8 v89; // [rsp+43h] [rbp-3B5h] BYREF
  char v90; // [rsp+44h] [rbp-3B4h]
  char v91; // [rsp+45h] [rbp-3B3h]
  char v92; // [rsp+46h] [rbp-3B2h]
  char v93; // [rsp+47h] [rbp-3B1h]
  int v94; // [rsp+48h] [rbp-3B0h]
  int v95; // [rsp+4Ch] [rbp-3ACh]
  signed __int64 v96; // [rsp+50h] [rbp-3A8h]
  int j; // [rsp+5Ch] [rbp-39Ch]
  signed __int64 v98; // [rsp+60h] [rbp-398h]
  int v99; // [rsp+68h] [rbp-390h] BYREF
  __int64 v100; // [rsp+70h] [rbp-388h]
  unsigned int v101; // [rsp+78h] [rbp-380h]
  signed __int64 v102; // [rsp+80h] [rbp-378h]
  int v103; // [rsp+88h] [rbp-370h] BYREF
  __int64 v104; // [rsp+90h] [rbp-368h]
  _QWORD *v105; // [rsp+98h] [rbp-360h] BYREF
  _OWORD *v106; // [rsp+A0h] [rbp-358h]
  _DWORD v107[3]; // [rsp+A8h] [rbp-350h] BYREF
  int v108; // [rsp+B4h] [rbp-344h] BYREF
  unsigned int v109; // [rsp+B8h] [rbp-340h]
  int v110; // [rsp+BCh] [rbp-33Ch]
  int v111[4]; // [rsp+C0h] [rbp-338h] BYREF
  _DWORD v112[3]; // [rsp+D0h] [rbp-328h] BYREF
  int v113; // [rsp+DCh] [rbp-31Ch]
  int v114; // [rsp+E0h] [rbp-318h]
  volatile signed __int64 *v115; // [rsp+E8h] [rbp-310h]
  int v116; // [rsp+F0h] [rbp-308h]
  __int64 v117; // [rsp+100h] [rbp-2F8h] BYREF
  volatile signed __int64 *v118; // [rsp+108h] [rbp-2F0h]
  unsigned __int64 v119; // [rsp+110h] [rbp-2E8h] BYREF
  unsigned __int64 *v120; // [rsp+118h] [rbp-2E0h]
  __int64 v121; // [rsp+120h] [rbp-2D8h]
  void *UniqueThread; // [rsp+128h] [rbp-2D0h]
  int v123; // [rsp+130h] [rbp-2C8h]
  signed __int32 v124[4]; // [rsp+134h] [rbp-2C4h] BYREF
  __int64 v125; // [rsp+160h] [rbp-298h]
  struct _TEB *v126; // [rsp+168h] [rbp-290h]
  struct _TEB *v127; // [rsp+188h] [rbp-270h]
  __int64 v128; // [rsp+190h] [rbp-268h]
  struct _TEB *v129; // [rsp+1A8h] [rbp-250h]
  __int64 v130; // [rsp+1B0h] [rbp-248h]
  struct _TEB *v131; // [rsp+1B8h] [rbp-240h]
  struct _TEB *v132; // [rsp+1C0h] [rbp-238h]
  __int64 v133; // [rsp+1D0h] [rbp-228h]
  struct _TEB *v134; // [rsp+1D8h] [rbp-220h]
  _OWORD v135[23]; // [rsp+1E0h] [rbp-218h] BYREF
  char v136[6]; // [rsp+350h] [rbp-A8h] BYREF
  __int16 v137; // [rsp+356h] [rbp-A2h]
  __int64 v138; // [rsp+370h] [rbp-88h]
  int v139; // [rsp+378h] [rbp-80h]
  unsigned int v140; // [rsp+37Ch] [rbp-7Ch]
  __int16 v141; // [rsp+380h] [rbp-78h]
  unsigned __int16 v142; // [rsp+382h] [rbp-76h]
  int v143; // [rsp+384h] [rbp-74h]
  int v144; // [rsp+388h] [rbp-70h]
  _QWORD v145[2]; // [rsp+390h] [rbp-68h] BYREF
  _QWORD v146[2]; // [rsp+3A0h] [rbp-58h] BYREF
  _QWORD v147[2]; // [rsp+3B0h] [rbp-48h] BYREF

  v96 = a1;
  v117 = 0LL;
  v100 = a1;
  v80 = 0;
  v76 = 0;
  v83 = 0;
  v77 = 0;
  v81 = 0;
  v84 = 0;
  v79 = 0;
  v105 = 0LL;
  v85 = 0;
  RtlRegisterThreadWithCsrss();
  TppCritSetThread(&v117);
  TppAllocThreadData(&v105);
  if ( v105 )
    *v105 = v135;
  memset(v135, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v94 = -1073741558;
  }
  else
  {
    v130 = *(_QWORD *)(a1 + 56);
    v94 = NtWorkerFactoryWorkerReady();
    if ( v94 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v83;
LABEL_8:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_223;
      TppPoolAddWorker(a1, v135);
      v77 = 1;
      RtlAcquireSRWLockExclusive(&TppWorkerpListLock, v6, v7, v8);
      *(_QWORD *)&v135[0] = &TppWorkerpList;
      *((_QWORD *)&v135[0] + 1) = off_180143888;
      if ( *off_180143888 != (_UNKNOWN *)&TppWorkerpList )
        __fastfail(3u);
      *off_180143888 = v135;
      off_180143888 = (_UNKNOWN **)v135;
      v76 = 1;
      RtlReleaseSRWLockExclusive(&TppWorkerpListLock);
      memset((char *)&v135[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v80 = 1;
      TppGetCurrentThreadNumaNode(a1, (char *)&v135[21] + 8, 0LL);
LABEL_12:
      while ( 1 )
      {
        v85 = 0;
        memset(&v135[19], 0, 32);
        v9 = *(_OWORD ***)&v135[21];
        v95 = 16;
        if ( !*(_QWORD *)&v135[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v135[21] + 8LL) != 1 )
          goto LABEL_189;
        v10 = *(_QWORD *)&v135[21];
        memset(**(void ***)&v135[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v135[21] + 12LL));
        v11 = *(_DWORD *)(v10 + 12);
        v95 = v11;
        v12 = *v9;
LABEL_15:
        v106 = v12;
        v99 = 0;
        v133 = *(_QWORD *)(a1 + 56);
        v13 = ZwWaitForWorkViaWorkerFactory(v133, v12, v11, &v99, (char *)&v135[16] + 8);
        v94 = v13;
        if ( v13 )
          v99 = 0;
        if ( (BYTE12(v135[17]) & 1) != 0 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v135[16] + 1));
          HIDWORD(v135[17]) &= ~1u;
          v13 = v94;
          LODWORD(v12) = (_DWORD)v106;
          v11 = v95;
        }
        if ( v13 )
        {
          v49 = v13 - 128;
          if ( !v49 )
            goto LABEL_223;
          v50 = v49 - 64;
          if ( !v50 )
          {
            TppCallbackCheckThreadAfterCallback(0LL);
            continue;
          }
          if ( v50 == 66 )
          {
            v79 = 1;
            goto LABEL_223;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v135, (_DWORD)v12, v99, v11, a1, (__int64)&v81) )
            goto LABEL_223;
          if ( !v81 )
          {
            v14 = *(_QWORD *)&v135[19];
            if ( !*(_QWORD *)&v135[19] )
              goto LABEL_25;
            v104 = *(_QWORD *)&v135[19];
            *(_QWORD *)&v135[9] = *(_QWORD *)(*(_QWORD *)&v135[19] + 56LL);
            *((_QWORD *)&v135[9] + 1) = *(_QWORD *)&v135[19];
            v107[0] = *(unsigned __int8 *)(*(_QWORD *)&v135[19] + 68LL);
            v40 = *(unsigned int *)(*(_QWORD *)&v135[19] + 64LL);
            v41 = DWORD2(v135[21]);
            v42 = *(_DWORD *)(a1 + 428);
            v43 = DWORD2(v135[21]);
            if ( (_DWORD)v40 == DWORD2(v135[21]) )
            {
              if ( v42 == -1 && !LOBYTE(v135[22]) )
              {
                LOBYTE(v135[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v40));
              }
            }
            else
            {
              if ( v42 == -1 )
              {
                if ( LOBYTE(v135[22]) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v135[21])));
                else
                  LOBYTE(v135[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v40));
              }
              DWORD2(v135[21]) = v40;
              v43 = *(_QWORD *)(a1 + 48);
              v62 = *(_WORD *)(v43 + 16 * v40 + 8);
              v63 = *(_WORD *)(v43 + 16 * v41 + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, v41, v40, v63, *(_WORD *)(v43 + 16 * v40 + 8));
              if ( v63 != v62 )
              {
                v145[1] = v62;
                v145[0] = 0LL;
                NtSetInformationThread(-2LL, 30LL, v145);
                NtSetInformationThread(-2LL, 13LL, v107);
              }
            }
            v135[18] = NtCurrentTeb()->ActivityId;
            if ( *((_QWORD *)&v135[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v135[11] + 1) + 436LL) & 1) == 0 )
            {
              LODWORD(v135[10]) |= 8u;
              v132 = NtCurrentTeb();
              v67 = LODWORD(v135[10]);
              if ( v132->IsImpersonating )
              {
                v67 = LODWORD(v135[10]) | 4u;
                LODWORD(v135[10]) |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v43, v41, v67) )
                LODWORD(v135[10]) = v68 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v116 = 1;
                v90 = 1;
                LODWORD(v135[10]) |= 0x20u;
              }
              else
              {
                v116 = 0;
                v90 = 0;
              }
              v127 = NtCurrentTeb();
              if ( v127->PreferredLanguages )
              {
                v91 = 1;
                LODWORD(v135[10]) |= 0x40u;
              }
              else
              {
                v91 = 0;
              }
              v134 = NtCurrentTeb();
              if ( v134->SavedPriorityState )
              {
                v92 = 1;
                LODWORD(v135[10]) |= 0x80u;
              }
              else
              {
                v92 = 0;
              }
            }
            v44 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v14 + 56);
            if ( (char *)v44 == (char *)TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((char *)&v135[3] + 8, v104, *((_QWORD *)&v135[19] + 1), &v135[20]);
            }
            else if ( (char *)v44 == (char *)TppIopExecuteCallback )
            {
              TppIopExecuteCallback((char *)&v135[3] + 8, v104, *((_QWORD *)&v135[19] + 1), &v135[20]);
            }
            else if ( (char *)v44 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration((char *)&v135[3] + 8, v104, *((_QWORD *)&v135[19] + 1), &v135[20]);
            }
            else if ( v44 == TppWaitCompletion )
            {
              TppWaitCompletion((__int64)&v135[3] + 8, v104, *((__int64 *)&v135[19] + 1));
            }
            else
            {
              ((void (__fastcall *)(char *, __int64, _QWORD, _OWORD *))v44)(
                (char *)&v135[3] + 8,
                v104,
                *((_QWORD *)&v135[19] + 1),
                &v135[20]);
            }
            while ( 1 )
            {
              if ( (BYTE4(v135[8]) & 4) != 0 )
                v84 = 1;
              v78 = LODWORD(v135[8]) == 4;
              TppCallbackEpilog((char *)&v135[3] + 8);
              *(_QWORD *)&v135[2] = 0LL;
              if ( v84 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v37 = *(_QWORD *)(a1 + 8);
              v102 = v37;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                {
                  v114 = 0;
                  goto LABEL_223;
                }
                if ( HIDWORD(v37) && ((v102 & 0x8000u) == 0LL || v78) )
                {
                  v38 = 0;
                  HIDWORD(v102) = HIDWORD(v37) - 1;
                }
                else
                {
                  v38 = 1;
                  LODWORD(v102) = (unsigned __int16)(v102 ^ (v102 + 1)) ^ (unsigned int)v102;
                }
                v39 = v37;
                v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v102, v37);
                v102 = v37;
              }
              while ( v39 != v37 );
              v81 = v38;
              v114 = 1;
              if ( v38 )
                goto LABEL_12;
LABEL_25:
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v17 = TppNumberNodes;
              v18 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v17 = TppNumberNodes;
              }
              for ( i = 0; ; ++i )
              {
                v107[2] = i;
                if ( i >= v17 )
                  goto LABEL_32;
                v20 = 16LL * i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v20 + 8) == Group )
                {
                  v21 = *(_QWORD *)v20;
                  if ( _bittest64(&v21, Number) )
                    break;
                }
              }
              v18 = i;
LABEL_32:
              if ( v18 >= v17 )
                v18 = 0;
              v101 = v18;
              if ( &v89 )
                v89 = Number;
              v112[0] = v89;
              v22 = DWORD2(v135[21]);
              v23 = *(_DWORD *)(a1 + 428);
              if ( v18 == DWORD2(v135[21]) )
              {
                if ( v23 == -1 && !LOBYTE(v135[22]) )
                {
                  LOBYTE(v135[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
              }
              else
              {
                if ( v23 == -1 )
                {
                  if ( LOBYTE(v135[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v135[21])));
                  else
                    LOBYTE(v135[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
                DWORD2(v135[21]) = v18;
                v64 = *(_QWORD *)(a1 + 48);
                v65 = *(_WORD *)(v64 + 16LL * v18 + 8);
                v66 = *(_WORD *)(v64 + 16 * v22 + 8);
                if ( MEMORY[0x7FFE0386] )
                  TppETWWorkerNodeSwitch(a1, v22, v18, v66, *(_WORD *)(v64 + 16LL * v18 + 8));
                if ( v66 != v65 )
                {
                  v147[1] = v65;
                  v147[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v147);
                  NtSetInformationThread(-2LL, 13LL, v112);
                }
              }
              v109 = v18;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(v135[21]) < 0x10
                || (unsigned int)TppAreNodeWorkersSteadyState(a1, v22) )
              {
                v24 = 0;
                for ( j = 0; ; j = v24 )
                {
                  if ( v24 > 2 )
                    goto LABEL_115;
                  v22 = *(_QWORD *)(a1 + 8LL * v24 + 16) + 24LL * v101;
                  v118 = (volatile signed __int64 *)v22;
                  v25 = (volatile signed __int64 *)(v22 + 16);
                  v103 = 0;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 16), 0LL) )
                    break;
LABEL_42:
                  v26 = v118;
                  v27 = (volatile signed __int64 *)*v118;
                  v28 = **(_QWORD **)v118;
                  if ( *(volatile signed __int64 **)(*v118 + 8) != v118 || *(volatile signed __int64 **)(v28 + 8) != v27 )
                    __fastfail(3u);
                  *v118 = v28;
                  *(_QWORD *)(v28 + 8) = v26;
                  v29 = v26 + 2;
                  v30 = _InterlockedCompareExchange64(v26 + 2, 0LL, 1LL);
                  if ( v30 != 1 )
                  {
                    do
                    {
                      v60 = -1LL;
                      if ( (v30 & 6) == 2 )
                        v60 = 3LL;
                      v22 = v60 + v30;
                      v61 = v30;
                      v30 = _InterlockedCompareExchange64(v29, v60 + v30, v30);
                    }
                    while ( v61 != v30 );
                    if ( v60 == 3 )
                      RtlpWakeSRWLock(v29, v22, 0LL);
                  }
                  if ( v27 != v118 && v27 )
                  {
                    v31 = v27 - 2;
                    goto LABEL_49;
                  }
                  ++v24;
                }
                v51 = *v25;
                while ( 2 )
                {
                  while ( (v51 & 1) != 0 )
                  {
                    if ( RtlpWaitCouldDeadlock() )
                      ZwTerminateProcess(-1LL, 3221225547LL);
                    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                    v124[0] = 3;
                    v121 = 0LL;
                    v52 = 0;
                    v86 = 0;
                    if ( (v51 & 2) != 0 )
                    {
                      v120 = 0LL;
                      v119 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
                      v123 = -1;
                      v22 = (unsigned __int64)&v119 | v51 & 8 | 7;
                      v98 = v22;
                      if ( (v51 & 4) == 0 )
                      {
                        v52 = 1;
                        v86 = 1;
                      }
                    }
                    else
                    {
                      v120 = &v119;
                      v123 = v51 >> 4;
                      if ( v123 > 1 )
                        v22 = (unsigned __int64)&v119 | 0xB;
                      else
                        v22 = (unsigned __int64)&v119 + 3;
                      v98 = v22;
                      if ( !(unsigned int)(v51 >> 4) )
                        v123 = -2;
                    }
                    v54 = _InterlockedCompareExchange64(v25, v22, v51);
                    v53 = v51 == v54;
                    v51 = v54;
                    v98 = v54;
                    if ( !v53 )
                      goto LABEL_143;
                    if ( v52 )
                      RtlpOptimizeSRWLockList(v25);
                    if ( MEMORY[0x7FFE036A] > 1u )
                    {
                      for ( k = SRWLockSpinCount; ; --k )
                      {
                        v112[2] = k;
                        if ( !k || (v124[0] & 2) == 0 )
                          break;
                        _mm_pause();
                      }
                    }
                    if ( _interlockedbittestandreset(v124, 1u) )
                    {
                      do
                        NtWaitForAlertByThreadId(v25, 0LL);
                      while ( (v124[0] & 4) == 0 );
                    }
                  }
                  v98 = v51 + 1;
                  v98 = _InterlockedCompareExchange64(v25, v51 + 1, v51);
                  if ( v51 == v98 )
                    goto LABEL_42;
LABEL_143:
                  RtlBackoff(&v103);
                  _m_prefetchw((const void *)v25);
                  v51 = *v25;
                  v98 = *v25;
                  continue;
                }
              }
LABEL_115:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                {
                  v110 = 0;
                  goto LABEL_223;
                }
                v47 = 0;
LABEL_117:
                j = v47;
                if ( v47 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v125 = *(_QWORD *)(a1 + 8 * (v47 + 2LL)) + 24LL * v18;
                v48 = TppQueueRemoveHead(v125, v22);
                if ( v48 )
                  break;
                if ( ++v18 >= TppNumberNodes )
                  v18 = 0;
                v109 = v18;
                if ( v18 == v101 )
                {
                  ++v47;
                  goto LABEL_117;
                }
              }
              v31 = (volatile signed __int64 *)(v48 - 16);
LABEL_49:
              v115 = v31;
              v111[0] = *((unsigned __int8 *)v31 + 12);
              v32 = DWORD2(v135[21]);
              v33 = *(_DWORD *)(a1 + 428);
              if ( v18 == DWORD2(v135[21]) )
              {
                if ( v33 == -1 && !LOBYTE(v135[22]) )
                {
                  LOBYTE(v135[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
              }
              else
              {
                if ( v33 == -1 )
                {
                  if ( LOBYTE(v135[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v135[21])));
                  else
                    LOBYTE(v135[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
                DWORD2(v135[21]) = v18;
                v55 = *(_QWORD *)(a1 + 48);
                v56 = *(_WORD *)(v55 + 16LL * v18 + 8);
                v57 = *(_WORD *)(v55 + 16 * v32 + 8);
                if ( MEMORY[0x7FFE0386] )
                {
                  v137 = 7209;
                  v138 = a1;
                  v139 = v32;
                  v140 = v18;
                  v141 = v57;
                  v142 = v56;
                  v69 = *(_QWORD *)(a1 + 40);
                  v143 = *(_DWORD *)(v69 + 4 * v32);
                  v144 = *(_DWORD *)(v69 + 4LL * v18);
                  NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 28LL, v136);
                }
                if ( v57 != v56 )
                {
                  v146[1] = v56;
                  v146[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v146);
                  NtSetInformationThread(-2LL, 13LL, v111);
                }
              }
              if ( v18 == v101 )
              {
                if ( HIDWORD(v135[21]) < 0x10 )
                  v34 = HIDWORD(v135[21]) + 1;
                else
                  v34 = 16;
              }
              else
              {
                v34 = 0;
              }
              HIDWORD(v135[21]) = v34;
              v110 = 1;
              if ( (BYTE12(v135[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v135[3] + 8, v32);
                HIDWORD(v135[17]) &= ~1u;
              }
              *(_QWORD *)&v135[2] = v115;
              *(_QWORD *)&v135[9] = **(_QWORD **)v115;
              *((_QWORD *)&v135[9] + 1) = v115;
              *((_QWORD *)&v135[11] + 1) = *(_QWORD *)&v135[3];
              v135[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v135[3] && (*(_BYTE *)(*(_QWORD *)&v135[3] + 436LL) & 1) == 0 )
              {
                LODWORD(v135[10]) |= 8u;
                v129 = NtCurrentTeb();
                if ( v129->IsImpersonating )
                  LODWORD(v135[10]) |= 4u;
                v35 = NtCurrentTeb();
                if ( (unsigned __int64)v35->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                  || v35->TxnScopeEnterCallback
                  || v35->TxnScopeExitCallback
                  || v35->TxnScopeContext
                  || v35->TxFsContext != 65534 )
                {
                  v82 = 1;
                  LODWORD(v135[10]) |= 0x10u;
                }
                else
                {
                  v82 = 0;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v113 = 1;
                  v93 = 1;
                  LODWORD(v135[10]) |= 0x20u;
                }
                else
                {
                  v113 = 0;
                  v93 = 0;
                }
                v131 = NtCurrentTeb();
                if ( v131->PreferredLanguages )
                {
                  v87 = 1;
                  LODWORD(v135[10]) |= 0x40u;
                }
                else
                {
                  v87 = 0;
                }
                v126 = NtCurrentTeb();
                if ( v126->SavedPriorityState )
                {
                  v88 = 1;
                  LODWORD(v135[10]) |= 0x80u;
                }
                else
                {
                  v88 = 0;
                }
              }
              v36 = **(void (__fastcall ***)(char *, volatile signed __int64 *))v115;
              if ( (char *)v36 == (char *)TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((char *)&v135[3] + 8, v115);
              }
              else if ( (char *)v36 == (char *)TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((char *)&v135[3] + 8, v115);
              }
              else
              {
                v36((char *)&v135[3] + 8, v115);
              }
            }
            _m_prefetchw((const void *)(a1 + 8));
            v70 = *(_QWORD *)(a1 + 8);
            v96 = v70;
            do
            {
              LODWORD(v96) = (unsigned __int16)(v96 ^ (v96 + 1)) ^ (unsigned int)v96;
              v71 = v70;
              v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v96, v70);
              v96 = v70;
            }
            while ( v71 != v70 );
            v108 = 3;
            v128 = *(_QWORD *)(a1 + 56);
            NtSetInformationWorkerFactory(v128, 9LL, &v108, 4LL);
LABEL_223:
            TppCallbackPerformDeferredWork((char *)&v135[3] + 8);
            if ( v80 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v76 )
            {
              RtlAcquireSRWLockExclusive(&TppWorkerpListLock, v72, v73, v74);
              v75 = v135[0];
              if ( *(_OWORD **)(*(_QWORD *)&v135[0] + 8LL) != v135 || **((_OWORD ***)&v135[0] + 1) != v135 )
                __fastfail(3u);
              **((_QWORD **)&v135[0] + 1) = *(_QWORD *)&v135[0];
              *(_QWORD *)(v75 + 8) = *((_QWORD *)&v75 + 1);
              RtlReleaseSRWLockExclusive(&TppWorkerpListLock);
            }
            if ( v77 )
            {
              TppPoolRemoveWorker(v135);
              if ( v79 )
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
            TppCritResetThread(v117);
            TppFreeThreadData(v105);
            TppFreeDirectParamsCache(v135);
            v94 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v124[3] = TppHeapTag + 3145728;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      v12 = (_OWORD *)Heap;
      if ( Heap )
      {
        v46 = Heap + 896;
        *(_QWORD *)v46 = v12;
        *(_DWORD *)(v46 + 8) = 1;
        *(_DWORD *)(v46 + 12) = 16;
        *(_QWORD *)&v135[21] = v46;
        v11 = 16;
      }
      else
      {
LABEL_189:
        v11 = 1;
        v12 = &v135[19];
      }
      v95 = v11;
      goto LABEL_15;
    }
  }
  v5 = 1;
  v83 = 1;
  goto LABEL_8;
}
