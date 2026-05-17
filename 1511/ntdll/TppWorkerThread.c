/*
 * XREFs of TppWorkerThread @ 0x18002B350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppWaitCompletion @ 0x1800097A0 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x1800099C0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002CC00 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x18002CF40 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     RtlpWaitCouldDeadlock @ 0x18002F6E0 (RtlpWaitCouldDeadlock.c)
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180068308 (TppPoolUpdateTrimmedWorker.c)
 *     RtlBackoff @ 0x180068D00 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075544 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     TppAllocThreadData @ 0x18007939C (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007B0D4 (TppPoolAddWorker.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007C21C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolRemoveWorker @ 0x18007D534 (TppPoolRemoveWorker.c)
 *     TppFreeDirectParamsCache @ 0x18007E09C (TppFreeDirectParamsCache.c)
 *     RtlRegisterThreadWithCsrss @ 0x18007E580 (RtlRegisterThreadWithCsrss.c)
 *     TppFreeThreadData @ 0x18007E73C (TppFreeThreadData.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     TppCallbackPerformDeferredWork @ 0x180080968 (TppCallbackPerformDeferredWork.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppCritResetThread @ 0x180081BB0 (TppCritResetThread.c)
 *     TppQueueRemoveHead @ 0x18008A524 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008AF40 (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A50E0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A87D0 (ZwWaitForWorkViaWorkerFactory.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5174 (TppAdjustRunningThreadGoal.c)
 *     TppCheckForTransactions @ 0x1800F54E4 (TppCheckForTransactions.c)
 *     TppExceptionFilter @ 0x1800F5534 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800F56FC (TppTerminateProcess.c)
 *     TppETWWorkerNodeSwitch @ 0x1800F5848 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F58D4 (TppWorkerpInnerExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  struct _PEB *v6; // rbx
  _LIST_ENTRY *Blink; // rcx
  _OWORD **v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // esi
  _OWORD *v11; // rbx
  int v12; // ecx
  volatile signed __int64 *v13; // r9
  __int64 v14; // rbx
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  __int64 v17; // r8
  unsigned int v18; // r14d
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // edi
  __int64 UniqueThread; // rcx
  volatile signed __int64 *v26; // rsi
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // rbx
  volatile signed __int64 v29; // rcx
  signed __int64 v30; // rax
  __int64 (__fastcall ***v31)(__int64, __int64); // rbx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  struct _TEB *v35; // rcx
  __int64 (__fastcall *v36)(__int64, __int64); // rdi
  signed __int64 v37; // rax
  char v38; // r8
  signed __int64 v39; // rtt
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  void (__fastcall *v44)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 Heap; // rax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  int v50; // ebx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int16 v53; // bx
  __int16 v54; // di
  __int64 v55; // rcx
  unsigned __int16 v56; // bx
  unsigned __int16 v57; // di
  unsigned __int64 v58; // rbx
  bool v59; // zf
  signed __int64 v60; // rax
  unsigned __int16 v61; // di
  unsigned __int16 v62; // si
  signed __int64 v63; // rtt
  __int64 v65; // r8
  int v66; // r8d
  __int64 v67; // rcx
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  __int64 v70; // rdx
  __int64 v71; // r8
  struct _PEB *v72; // rbx
  __int128 v73; // kr00_16
  __int64 v74; // [rsp+20h] [rbp-3E8h]
  char v75; // [rsp+31h] [rbp-3D7h]
  char v76; // [rsp+32h] [rbp-3D6h]
  bool v77; // [rsp+33h] [rbp-3D5h]
  char v78; // [rsp+34h] [rbp-3D4h]
  char v79; // [rsp+35h] [rbp-3D3h]
  char v80; // [rsp+36h] [rbp-3D2h] BYREF
  char v81; // [rsp+37h] [rbp-3D1h]
  char v82; // [rsp+38h] [rbp-3D0h]
  char v83; // [rsp+39h] [rbp-3CFh]
  int v84; // [rsp+3Ch] [rbp-3CCh]
  char v85; // [rsp+40h] [rbp-3C8h]
  char v86; // [rsp+41h] [rbp-3C7h]
  char v87; // [rsp+42h] [rbp-3C6h]
  unsigned __int8 v88; // [rsp+43h] [rbp-3C5h] BYREF
  char v89; // [rsp+44h] [rbp-3C4h]
  char v90; // [rsp+45h] [rbp-3C3h]
  char v91; // [rsp+46h] [rbp-3C2h]
  char v92; // [rsp+47h] [rbp-3C1h]
  int v93; // [rsp+48h] [rbp-3C0h]
  int v94; // [rsp+4Ch] [rbp-3BCh]
  signed __int64 v95; // [rsp+50h] [rbp-3B8h]
  int v96; // [rsp+58h] [rbp-3B0h] BYREF
  signed __int64 v97; // [rsp+60h] [rbp-3A8h]
  unsigned int v98; // [rsp+68h] [rbp-3A0h]
  __int64 v99; // [rsp+70h] [rbp-398h]
  int j; // [rsp+78h] [rbp-390h]
  signed __int64 v101; // [rsp+80h] [rbp-388h]
  struct _PEB *v102; // [rsp+88h] [rbp-380h]
  int v103; // [rsp+90h] [rbp-378h] BYREF
  __int64 v104; // [rsp+98h] [rbp-370h]
  _QWORD *v105; // [rsp+A0h] [rbp-368h] BYREF
  _OWORD *v106; // [rsp+A8h] [rbp-360h]
  int v107; // [rsp+B0h] [rbp-358h]
  int v108; // [rsp+B8h] [rbp-350h] BYREF
  int v109; // [rsp+C0h] [rbp-348h]
  int v110[3]; // [rsp+C8h] [rbp-340h] BYREF
  int v111; // [rsp+D4h] [rbp-334h]
  int v112; // [rsp+D8h] [rbp-330h] BYREF
  unsigned int v113; // [rsp+E0h] [rbp-328h]
  int v114; // [rsp+F0h] [rbp-318h]
  int v115; // [rsp+F4h] [rbp-314h]
  _DWORD v116[2]; // [rsp+F8h] [rbp-310h] BYREF
  __int64 (__fastcall ***v117)(__int64, __int64); // [rsp+100h] [rbp-308h]
  HANDLE v118; // [rsp+110h] [rbp-2F8h] BYREF
  volatile signed __int64 *v119; // [rsp+118h] [rbp-2F0h]
  unsigned __int64 v120; // [rsp+120h] [rbp-2E8h] BYREF
  unsigned __int64 *v121; // [rsp+128h] [rbp-2E0h]
  __int64 v122; // [rsp+130h] [rbp-2D8h]
  __int64 v123; // [rsp+138h] [rbp-2D0h]
  int v124; // [rsp+140h] [rbp-2C8h]
  signed __int32 v125[4]; // [rsp+144h] [rbp-2C4h] BYREF
  __int64 v126; // [rsp+170h] [rbp-298h]
  struct _TEB *v127; // [rsp+178h] [rbp-290h]
  struct _TEB *v128; // [rsp+198h] [rbp-270h]
  __int64 v129; // [rsp+1A0h] [rbp-268h]
  struct _TEB *v130; // [rsp+1B8h] [rbp-250h]
  __int64 v131; // [rsp+1C0h] [rbp-248h]
  struct _TEB *v132; // [rsp+1C8h] [rbp-240h]
  struct _TEB *v133; // [rsp+1D0h] [rbp-238h]
  __int64 v134; // [rsp+1E0h] [rbp-228h]
  struct _TEB *v135; // [rsp+1E8h] [rbp-220h]
  _OWORD v136[23]; // [rsp+1F0h] [rbp-218h] BYREF
  char v137[6]; // [rsp+360h] [rbp-A8h] BYREF
  __int16 v138; // [rsp+366h] [rbp-A2h]
  __int64 v139; // [rsp+380h] [rbp-88h]
  int v140; // [rsp+388h] [rbp-80h]
  unsigned int v141; // [rsp+38Ch] [rbp-7Ch]
  __int16 v142; // [rsp+390h] [rbp-78h]
  unsigned __int16 v143; // [rsp+392h] [rbp-76h]
  int v144; // [rsp+394h] [rbp-74h]
  int v145; // [rsp+398h] [rbp-70h]
  _QWORD v146[2]; // [rsp+3A0h] [rbp-68h] BYREF
  _QWORD v147[2]; // [rsp+3B0h] [rbp-58h] BYREF
  _QWORD v148[2]; // [rsp+3C0h] [rbp-48h] BYREF

  v95 = a1;
  v118 = 0LL;
  v99 = a1;
  v79 = 0;
  v75 = 0;
  v82 = 0;
  v76 = 0;
  v80 = 0;
  v83 = 0;
  v78 = 0;
  v105 = 0LL;
  v84 = 0;
  RtlRegisterThreadWithCsrss();
  v102 = NtCurrentPeb();
  TppCritSetThread(&v118);
  TppAllocThreadData(&v105);
  if ( v105 )
    *v105 = v136;
  memset(v136, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v93 = -1073741558;
  }
  else
  {
    v131 = *(_QWORD *)(a1 + 56);
    v93 = NtWorkerFactoryWorkerReady();
    if ( v93 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v82;
LABEL_8:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_224;
      TppPoolAddWorker(a1, v136);
      v76 = 1;
      v6 = v102;
      RtlAcquireSRWLockExclusive(&v102->TppWorkerpListLock);
      Blink = v102->TppWorkerpList.Blink;
      *(_QWORD *)&v136[0] = &v102->TppWorkerpList;
      *((_QWORD *)&v136[0] + 1) = Blink;
      if ( Blink->Flink != &v102->TppWorkerpList )
        __fastfail(3u);
      Blink->Flink = (_LIST_ENTRY *)v136;
      v6->TppWorkerpList.Blink = (_LIST_ENTRY *)v136;
      v75 = 1;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v6->TppWorkerpListLock);
      memset((char *)&v136[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v79 = 1;
      TppGetCurrentThreadNumaNode(a1, (_DWORD *)&v136[21] + 2, 0LL);
LABEL_12:
      while ( 1 )
      {
        v84 = 0;
        memset(&v136[19], 0, 0x20uLL);
        v8 = *(_OWORD ***)&v136[21];
        v94 = 16;
        if ( !*(_QWORD *)&v136[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v136[21] + 8LL) != 1 )
          goto LABEL_191;
        v9 = *(_QWORD *)&v136[21];
        memset(**(void ***)&v136[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v136[21] + 12LL));
        v10 = *(_DWORD *)(v9 + 12);
        v94 = v10;
        v11 = *v8;
LABEL_15:
        v106 = v11;
        v96 = 0;
        v134 = *(_QWORD *)(a1 + 56);
        v12 = ZwWaitForWorkViaWorkerFactory(v134, v11, v10, &v96, (char *)&v136[16] + 8);
        v93 = v12;
        if ( v12 )
          v96 = 0;
        if ( (BYTE12(v136[17]) & 1) != 0 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v136[16] + 1));
          HIDWORD(v136[17]) &= ~1u;
          v12 = v93;
          LODWORD(v11) = (_DWORD)v106;
          v10 = v94;
        }
        if ( v12 )
        {
          v47 = v12 - 128;
          if ( !v47 )
            goto LABEL_224;
          v48 = v47 - 64;
          if ( !v48 )
          {
            TppCallbackCheckThreadAfterCallback(0LL);
            continue;
          }
          if ( v48 == 66 )
          {
            v78 = 1;
            goto LABEL_224;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v136, (_DWORD)v11, v96, v10, a1, (__int64)&v80) )
            goto LABEL_224;
          if ( !v80 )
          {
            v14 = *(_QWORD *)&v136[19];
            if ( !*(_QWORD *)&v136[19] )
              goto LABEL_25;
            v104 = *(_QWORD *)&v136[19];
            *(_QWORD *)&v136[9] = *(_QWORD *)(*(_QWORD *)&v136[19] + 56LL);
            *((_QWORD *)&v136[9] + 1) = *(_QWORD *)&v136[19];
            v112 = *(unsigned __int8 *)(*(_QWORD *)&v136[19] + 68LL);
            v40 = *(unsigned int *)(*(_QWORD *)&v136[19] + 64LL);
            v41 = DWORD2(v136[21]);
            v42 = *(_DWORD *)(a1 + 428);
            v43 = DWORD2(v136[21]);
            if ( (_DWORD)v40 == DWORD2(v136[21]) )
            {
              if ( v42 == -1 && !LOBYTE(v136[22]) )
              {
                LOBYTE(v136[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v40));
              }
            }
            else
            {
              if ( v42 == -1 )
              {
                if ( LOBYTE(v136[22]) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v136[21])));
                else
                  LOBYTE(v136[22]) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v40));
              }
              DWORD2(v136[21]) = v40;
              v43 = *(_QWORD *)(a1 + 48);
              v61 = *(_WORD *)(v43 + 16 * v40 + 8);
              v62 = *(_WORD *)(v43 + 16 * v41 + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, v41, v40, v62, *(_WORD *)(v43 + 16 * v40 + 8));
              if ( v62 != v61 )
              {
                v146[1] = v61;
                v146[0] = 0LL;
                NtSetInformationThread(-2LL, 30LL, v146);
                NtSetInformationThread(-2LL, 13LL, &v112);
              }
            }
            v136[18] = NtCurrentTeb()->ActivityId;
            if ( *((_QWORD *)&v136[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v136[11] + 1) + 436LL) & 1) == 0 )
            {
              LODWORD(v136[10]) |= 8u;
              v133 = NtCurrentTeb();
              v65 = LODWORD(v136[10]);
              if ( v133->IsImpersonating )
              {
                v65 = LODWORD(v136[10]) | 4u;
                LODWORD(v136[10]) |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v43, v41, v65, v13) )
                LODWORD(v136[10]) = v66 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v107 = 1;
                v89 = 1;
                LODWORD(v136[10]) |= 0x20u;
              }
              else
              {
                v107 = 0;
                v89 = 0;
              }
              v128 = NtCurrentTeb();
              if ( v128->PreferredLanguages )
              {
                v90 = 1;
                LODWORD(v136[10]) |= 0x40u;
              }
              else
              {
                v90 = 0;
              }
              v135 = NtCurrentTeb();
              if ( v135->SavedPriorityState )
              {
                v91 = 1;
                LODWORD(v136[10]) |= 0x80u;
              }
              else
              {
                v91 = 0;
              }
            }
            v44 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 56);
            if ( (char *)v44 == (char *)TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((char *)&v136[3] + 8, v104, *((_QWORD *)&v136[19] + 1), &v136[20]);
            }
            else if ( (char *)v44 == (char *)TppIopExecuteCallback )
            {
              TppIopExecuteCallback((__int64)&v136[3] + 8, v104, *((__int64 *)&v136[19] + 1), (__int64)&v136[20]);
            }
            else if ( (char *)v44 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration((__int64)&v136[3] + 8, v104, *((__int64 *)&v136[19] + 1), (__int64)&v136[20]);
            }
            else if ( (char *)v44 == (char *)TppWaitCompletion )
            {
              TppWaitCompletion((__int64)&v136[3] + 8, v104, *((__int64 *)&v136[19] + 1));
            }
            else
            {
              v44((char *)&v136[3] + 8, v104, *((_QWORD *)&v136[19] + 1), &v136[20]);
            }
            while ( 1 )
            {
              if ( (BYTE4(v136[8]) & 4) != 0 )
                v83 = 1;
              v77 = LODWORD(v136[8]) == 4;
              TppCallbackEpilog((char *)&v136[3] + 8);
              *(_QWORD *)&v136[2] = 0LL;
              if ( v83 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v37 = *(_QWORD *)(a1 + 8);
              v101 = v37;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                {
                  v109 = 0;
                  goto LABEL_224;
                }
                if ( HIDWORD(v37) && ((v101 & 0x8000u) == 0LL || v77) )
                {
                  v38 = 0;
                  HIDWORD(v101) = HIDWORD(v37) - 1;
                }
                else
                {
                  v38 = 1;
                  LODWORD(v101) = (unsigned __int16)(v101 ^ (v101 + 1)) ^ (unsigned int)v101;
                }
                v39 = v37;
                v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v101, v37);
                v101 = v37;
              }
              while ( v39 != v37 );
              v80 = v38;
              v109 = 1;
              if ( v38 )
                goto LABEL_12;
LABEL_25:
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v17 = (unsigned int)TppNumberNodes;
              v18 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v17 = (unsigned int)TppNumberNodes;
              }
              for ( i = 0; ; ++i )
              {
                v116[1] = i;
                if ( i >= (unsigned int)v17 )
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
              if ( v18 >= (unsigned int)v17 )
                v18 = 0;
              v98 = v18;
              if ( &v88 )
                v88 = Number;
              v108 = v88;
              v22 = DWORD2(v136[21]);
              v23 = *(_DWORD *)(a1 + 428);
              if ( v18 == DWORD2(v136[21]) )
              {
                if ( v23 == -1 && !LOBYTE(v136[22]) )
                {
                  LOBYTE(v136[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
              }
              else
              {
                if ( v23 == -1 )
                {
                  if ( LOBYTE(v136[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v136[21])));
                  else
                    LOBYTE(v136[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
                DWORD2(v136[21]) = v18;
                v55 = *(_QWORD *)(a1 + 48);
                v56 = *(_WORD *)(v55 + 16LL * v18 + 8);
                v57 = *(_WORD *)(v55 + 16 * v22 + 8);
                if ( MEMORY[0x7FFE0386] )
                  TppETWWorkerNodeSwitch(a1, v22, v18, v57, *(_WORD *)(v55 + 16LL * v18 + 8));
                if ( v57 != v56 )
                {
                  v148[1] = v56;
                  v148[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v148);
                  NtSetInformationThread(-2LL, 13LL, &v108);
                }
              }
              v113 = v18;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(v136[21]) < 0x10
                || (v49 = TppAreNodeWorkersSteadyState(a1, v22)) != 0 )
              {
                v24 = 0;
                for ( j = 0; ; j = v24 )
                {
                  if ( v24 > 2 )
                    goto LABEL_126;
                  UniqueThread = 3LL * v98;
                  v22 = *(_QWORD *)(a1 + 8LL * v24 + 16) + 24LL * v98;
                  v119 = (volatile signed __int64 *)v22;
                  v26 = (volatile signed __int64 *)(v22 + 16);
                  v103 = 0;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 16), 0LL) )
                    break;
LABEL_42:
                  v27 = v119;
                  v28 = (volatile signed __int64 *)*v119;
                  v29 = **(_QWORD **)v119;
                  if ( *(volatile signed __int64 **)(*v119 + 8) != v119 || *(volatile signed __int64 **)(v29 + 8) != v28 )
                    __fastfail(3u);
                  *v119 = v29;
                  *(_QWORD *)(v29 + 8) = v27;
                  v13 = v27 + 2;
                  v30 = _InterlockedCompareExchange64(v27 + 2, 0LL, 1LL);
                  if ( v30 != 1 )
                  {
                    do
                    {
                      v17 = -1LL;
                      if ( (v30 & 6) == 2 )
                        v17 = 3LL;
                      v22 = v17 + v30;
                      v63 = v30;
                      v30 = _InterlockedCompareExchange64(v13, v17 + v30, v30);
                    }
                    while ( v63 != v30 );
                    if ( v17 == 3 )
                      RtlpWakeSRWLock(v13, v22, 0LL);
                  }
                  if ( v28 != v119 && v28 )
                  {
                    v31 = (__int64 (__fastcall ***)(__int64, __int64))(v28 - 2);
                    goto LABEL_49;
                  }
                  ++v24;
                }
                v58 = *v26;
                while ( 2 )
                {
                  while ( (v58 & 1) != 0 )
                  {
                    if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v22, v17, v13, v74) )
                      ZwTerminateProcess(-1LL, 3221225547LL);
                    UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
                    v123 = UniqueThread;
                    v125[0] = 3;
                    v122 = 0LL;
                    LOBYTE(UniqueThread) = 0;
                    v85 = 0;
                    if ( (v58 & 2) != 0 )
                    {
                      v121 = 0LL;
                      v120 = v58 & 0xFFFFFFFFFFFFFFF0uLL;
                      v124 = -1;
                      v22 = (unsigned __int64)&v120 | v58 & 8 | 7;
                      v97 = v22;
                      if ( (v58 & 4) == 0 )
                      {
                        LOBYTE(UniqueThread) = 1;
                        v85 = 1;
                      }
                    }
                    else
                    {
                      v121 = &v120;
                      v124 = v58 >> 4;
                      if ( v124 > 1 )
                        v22 = (unsigned __int64)&v120 | 0xB;
                      else
                        v22 = (unsigned __int64)&v120 + 3;
                      v97 = v22;
                      if ( !(unsigned int)(v58 >> 4) )
                        v124 = -2;
                    }
                    v60 = _InterlockedCompareExchange64(v26, v22, v58);
                    v59 = v58 == v60;
                    v58 = v60;
                    v97 = v60;
                    if ( !v59 )
                      goto LABEL_162;
                    if ( (_BYTE)UniqueThread )
                      RtlpOptimizeSRWLockList(v26);
                    if ( MEMORY[0x7FFE036A] > 1u )
                    {
                      for ( UniqueThread = (unsigned int)SRWLockSpinCount; ; UniqueThread = (unsigned int)(UniqueThread - 1) )
                      {
                        v114 = UniqueThread;
                        if ( !(_DWORD)UniqueThread || (v125[0] & 2) == 0 )
                          break;
                        _mm_pause();
                      }
                    }
                    if ( _interlockedbittestandreset(v125, 1u) )
                    {
                      do
                        NtWaitForAlertByThreadId(v26, 0LL);
                      while ( (v125[0] & 4) == 0 );
                    }
                  }
                  v97 = v58 + 1;
                  v97 = _InterlockedCompareExchange64(v26, v58 + 1, v58);
                  if ( v58 == v97 )
                    goto LABEL_42;
LABEL_162:
                  RtlBackoff(&v103);
                  _m_prefetchw((const void *)v26);
                  v58 = *v26;
                  v97 = *v26;
                  continue;
                }
              }
LABEL_126:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                {
                  v115 = 0;
                  goto LABEL_224;
                }
                v50 = 0;
LABEL_128:
                j = v50;
                if ( v50 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v126 = *(_QWORD *)(a1 + 8 * (v50 + 2LL)) + 24LL * v18;
                v51 = TppQueueRemoveHead(v126, v22);
                if ( v51 )
                  break;
                if ( ++v18 >= TppNumberNodes )
                  v18 = 0;
                v113 = v18;
                if ( v18 == v98 )
                {
                  ++v50;
                  goto LABEL_128;
                }
              }
              v31 = (__int64 (__fastcall ***)(__int64, __int64))(v51 - 16);
LABEL_49:
              v117 = v31;
              v110[0] = *((unsigned __int8 *)v31 + 12);
              v32 = DWORD2(v136[21]);
              v33 = *(_DWORD *)(a1 + 428);
              if ( v18 == DWORD2(v136[21]) )
              {
                if ( v33 == -1 && !LOBYTE(v136[22]) )
                {
                  LOBYTE(v136[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
              }
              else
              {
                if ( v33 == -1 )
                {
                  if ( LOBYTE(v136[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v136[21])));
                  else
                    LOBYTE(v136[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v18));
                }
                DWORD2(v136[21]) = v18;
                v52 = *(_QWORD *)(a1 + 48);
                v53 = *(_WORD *)(v52 + 16LL * v18 + 8);
                v54 = *(_WORD *)(v52 + 16 * v32 + 8);
                if ( MEMORY[0x7FFE0386] )
                {
                  v138 = 7209;
                  v139 = a1;
                  v140 = v32;
                  v141 = v18;
                  v142 = v54;
                  v143 = v53;
                  v67 = *(_QWORD *)(a1 + 40);
                  v144 = *(_DWORD *)(v67 + 4 * v32);
                  v145 = *(_DWORD *)(v67 + 4LL * v18);
                  NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 28LL, v137);
                }
                if ( v54 != v53 )
                {
                  v147[1] = v53;
                  v147[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v147);
                  NtSetInformationThread(-2LL, 13LL, v110);
                }
              }
              if ( v18 == v98 )
              {
                if ( HIDWORD(v136[21]) < 0x10 )
                  v34 = HIDWORD(v136[21]) + 1;
                else
                  v34 = 16;
              }
              else
              {
                v34 = 0;
              }
              HIDWORD(v136[21]) = v34;
              v115 = 1;
              if ( (BYTE12(v136[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v136[3] + 8, v32);
                HIDWORD(v136[17]) &= ~1u;
              }
              *(_QWORD *)&v136[2] = v117;
              *(_QWORD *)&v136[9] = **v117;
              *((_QWORD *)&v136[9] + 1) = v117;
              *((_QWORD *)&v136[11] + 1) = *(_QWORD *)&v136[3];
              v136[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v136[3] && (*(_BYTE *)(*(_QWORD *)&v136[3] + 436LL) & 1) == 0 )
              {
                LODWORD(v136[10]) |= 8u;
                v130 = NtCurrentTeb();
                if ( v130->IsImpersonating )
                  LODWORD(v136[10]) |= 4u;
                v35 = NtCurrentTeb();
                if ( (unsigned __int64)v35->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                  || v35->TxnScopeEnterCallback
                  || v35->TxnScopeExitCallback
                  || v35->TxnScopeContext
                  || v35->TxFsContext != 65534 )
                {
                  v81 = 1;
                  LODWORD(v136[10]) |= 0x10u;
                }
                else
                {
                  v81 = 0;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v111 = 1;
                  v92 = 1;
                  LODWORD(v136[10]) |= 0x20u;
                }
                else
                {
                  v111 = 0;
                  v92 = 0;
                }
                v132 = NtCurrentTeb();
                if ( v132->PreferredLanguages )
                {
                  v86 = 1;
                  LODWORD(v136[10]) |= 0x40u;
                }
                else
                {
                  v86 = 0;
                }
                v127 = NtCurrentTeb();
                if ( v127->SavedPriorityState )
                {
                  v87 = 1;
                  LODWORD(v136[10]) |= 0x80u;
                }
                else
                {
                  v87 = 0;
                }
              }
              v36 = **v117;
              if ( v36 == TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((char *)&v136[3] + 8, v117);
              }
              else if ( v36 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((__int64)&v136[3] + 8, (__int64)v117);
              }
              else if ( v36 == RtlpTpWorkCallback )
              {
                RtlpTpWorkCallback((__int64)&v136[3] + 8, (__int64)v117);
              }
              else
              {
                v36((__int64)&v136[3] + 8, (__int64)v117);
              }
            }
            _m_prefetchw((const void *)(a1 + 8));
            v68 = *(_QWORD *)(a1 + 8);
            v95 = v68;
            do
            {
              LODWORD(v95) = (unsigned __int16)(v95 ^ (v95 + 1)) ^ (unsigned int)v95;
              v69 = v68;
              v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v95, v68);
              v95 = v68;
            }
            while ( v69 != v68 );
            v116[0] = 3;
            v129 = *(_QWORD *)(a1 + 56);
            NtSetInformationWorkerFactory(v129, 9LL, v116);
LABEL_224:
            TppCallbackPerformDeferredWork((char *)&v136[3] + 8);
            if ( v79 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v75 )
            {
              v72 = v102;
              RtlAcquireSRWLockExclusive(&v102->TppWorkerpListLock);
              v73 = v136[0];
              if ( *(_OWORD **)(*(_QWORD *)&v136[0] + 8LL) != v136 || **((_OWORD ***)&v136[0] + 1) != v136 )
                __fastfail(3u);
              **((_QWORD **)&v136[0] + 1) = *(_QWORD *)&v136[0];
              *(_QWORD *)(v73 + 8) = *((_QWORD *)&v73 + 1);
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v72->TppWorkerpListLock);
            }
            if ( v76 )
            {
              TppPoolRemoveWorker(v136);
              if ( v78 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(
                (const void **)&TppPoolpSerializedPool,
                (__int64)&TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree(a1, v70, v71);
            }
            TppCritResetThread(v118);
            TppFreeThreadData(v105);
            TppFreeDirectParamsCache(v136);
            v93 = 0;
            RtlExitUserThread(0LL);
          }
        }
      }
      v125[3] = TppHeapTag + 3145728;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      v11 = (_OWORD *)Heap;
      if ( Heap )
      {
        v46 = Heap + 896;
        *(_QWORD *)v46 = v11;
        *(_DWORD *)(v46 + 8) = 1;
        *(_DWORD *)(v46 + 12) = 16;
        *(_QWORD *)&v136[21] = v46;
        v10 = 16;
      }
      else
      {
LABEL_191:
        v10 = 1;
        v11 = &v136[19];
      }
      v94 = v10;
      goto LABEL_15;
    }
  }
  v5 = 1;
  v82 = 1;
  goto LABEL_8;
}
