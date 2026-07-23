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
  char v2; // di
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v4; // rbx
  ULONG DoNotUseThisField_high; // esi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v7; // ecx
  __int64 v8; // rbx
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  unsigned int v11; // r8d
  unsigned int v12; // r14d
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // edi
  volatile signed __int64 *v19; // rsi
  volatile signed __int64 *v20; // rax
  volatile signed __int64 *v21; // rbx
  volatile signed __int64 v22; // rcx
  volatile signed __int64 *v23; // r9
  signed __int64 v24; // rax
  __int64 (__fastcall ***v25)(PTP_CALLBACK_INSTANCE); // rbx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  struct _TEB *v29; // rcx
  __int64 (__fastcall *v30)(PTP_CALLBACK_INSTANCE); // rdi
  signed __int64 v31; // rax
  char v32; // r8
  signed __int64 v33; // rtt
  __int64 v34; // r8
  __int64 AlpcSendMessagePort_low; // rdx
  int v36; // eax
  __int64 v37; // rcx
  __int64 (__fastcall *v38)(PTP_CALLBACK_INSTANCE, __int64, __int64); // rbx
  ULONG *Heap; // rax
  _PORT_MESSAGE *v40; // rax
  int v41; // ebx
  __int64 v42; // rax
  NTSTATUS v43; // ecx
  NTSTATUS v44; // ecx
  unsigned __int64 v45; // rbx
  char v46; // cl
  bool v47; // zf
  signed __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int16 v50; // bx
  __int16 v51; // di
  int k; // ecx
  __int64 v54; // r8
  signed __int64 v55; // rtt
  unsigned __int16 v56; // di
  unsigned __int16 v57; // si
  __int64 v58; // rcx
  unsigned __int16 v59; // bx
  unsigned __int16 v60; // di
  __int64 AlpcSendMessageFlags; // r8
  int v62; // r8d
  __int64 v63; // rcx
  signed __int64 v64; // rax
  signed __int64 v65; // rtt
  PPORT_MESSAGE v66; // rax
  PVOID AlpcSendMessagePort; // rdx
  char v68; // [rsp+31h] [rbp-3C7h]
  char v69; // [rsp+32h] [rbp-3C6h]
  bool v70; // [rsp+33h] [rbp-3C5h]
  char v71; // [rsp+34h] [rbp-3C4h]
  char v72; // [rsp+35h] [rbp-3C3h]
  char v73; // [rsp+36h] [rbp-3C2h] BYREF
  char v74; // [rsp+37h] [rbp-3C1h]
  char v75; // [rsp+38h] [rbp-3C0h]
  char v76; // [rsp+39h] [rbp-3BFh]
  int v77; // [rsp+3Ch] [rbp-3BCh]
  char v78; // [rsp+40h] [rbp-3B8h]
  char v79; // [rsp+41h] [rbp-3B7h]
  char v80; // [rsp+42h] [rbp-3B6h]
  unsigned __int8 v81; // [rsp+43h] [rbp-3B5h] BYREF
  char v82; // [rsp+44h] [rbp-3B4h]
  char v83; // [rsp+45h] [rbp-3B3h]
  char v84; // [rsp+46h] [rbp-3B2h]
  char v85; // [rsp+47h] [rbp-3B1h]
  NTSTATUS v86; // [rsp+48h] [rbp-3B0h]
  int v87; // [rsp+4Ch] [rbp-3ACh]
  signed __int64 v88; // [rsp+50h] [rbp-3A8h]
  int j; // [rsp+5Ch] [rbp-39Ch]
  signed __int64 v90; // [rsp+60h] [rbp-398h]
  ULONG PacketsReturned; // [rsp+68h] [rbp-390h] BYREF
  __int64 v92; // [rsp+70h] [rbp-388h]
  unsigned int v93; // [rsp+78h] [rbp-380h]
  signed __int64 v94; // [rsp+80h] [rbp-378h]
  int v95; // [rsp+88h] [rbp-370h] BYREF
  __int64 v96; // [rsp+90h] [rbp-368h]
  PVOID BaseAddress; // [rsp+98h] [rbp-360h] BYREF
  ULONG *v98; // [rsp+A0h] [rbp-358h]
  _DWORD v99[3]; // [rsp+A8h] [rbp-350h] BYREF
  int WorkerFactoryInformation; // [rsp+B4h] [rbp-344h] BYREF
  unsigned int v101; // [rsp+B8h] [rbp-340h]
  int v102; // [rsp+BCh] [rbp-33Ch]
  int v103[4]; // [rsp+C0h] [rbp-338h] BYREF
  _DWORD v104[3]; // [rsp+D0h] [rbp-328h] BYREF
  int v105; // [rsp+DCh] [rbp-31Ch]
  int v106; // [rsp+E0h] [rbp-318h]
  __int64 (__fastcall ***v107)(PTP_CALLBACK_INSTANCE); // [rsp+E8h] [rbp-310h]
  int v108; // [rsp+F0h] [rbp-308h]
  __int64 v109; // [rsp+100h] [rbp-2F8h] BYREF
  volatile signed __int64 *v110; // [rsp+108h] [rbp-2F0h]
  unsigned __int64 v111; // [rsp+110h] [rbp-2E8h] BYREF
  unsigned __int64 *v112; // [rsp+118h] [rbp-2E0h]
  __int64 v113; // [rsp+120h] [rbp-2D8h]
  void *UniqueThread; // [rsp+128h] [rbp-2D0h]
  int v115; // [rsp+130h] [rbp-2C8h]
  signed __int32 v116[4]; // [rsp+134h] [rbp-2C4h] BYREF
  __int64 v117; // [rsp+160h] [rbp-298h]
  struct _TEB *v118; // [rsp+168h] [rbp-290h]
  struct _TEB *v119; // [rsp+188h] [rbp-270h]
  HANDLE v120; // [rsp+190h] [rbp-268h]
  struct _TEB *v121; // [rsp+1A8h] [rbp-250h]
  HANDLE v122; // [rsp+1B0h] [rbp-248h]
  struct _TEB *v123; // [rsp+1B8h] [rbp-240h]
  struct _TEB *v124; // [rsp+1C0h] [rbp-238h]
  HANDLE v125; // [rsp+1D0h] [rbp-228h]
  struct _TEB *v126; // [rsp+1D8h] [rbp-220h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+1E0h] [rbp-218h] BYREF
  char Fields[6]; // [rsp+350h] [rbp-A8h] BYREF
  __int16 v129; // [rsp+356h] [rbp-A2h]
  __int64 v130; // [rsp+370h] [rbp-88h]
  int v131; // [rsp+378h] [rbp-80h]
  unsigned int v132; // [rsp+37Ch] [rbp-7Ch]
  __int16 v133; // [rsp+380h] [rbp-78h]
  unsigned __int16 v134; // [rsp+382h] [rbp-76h]
  int v135; // [rsp+384h] [rbp-74h]
  int v136; // [rsp+388h] [rbp-70h]
  _QWORD ThreadInformation[2]; // [rsp+390h] [rbp-68h] BYREF
  _QWORD v138[2]; // [rsp+3A0h] [rbp-58h] BYREF
  _QWORD v139[2]; // [rsp+3B0h] [rbp-48h] BYREF

  v88 = a1;
  v109 = 0LL;
  v92 = a1;
  v72 = 0;
  v68 = 0;
  v75 = 0;
  v69 = 0;
  v73 = 0;
  v76 = 0;
  v71 = 0;
  BaseAddress = 0LL;
  v77 = 0;
  RtlRegisterThreadWithCsrss();
  TppCritSetThread(&v109);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v86 = -1073741558;
  }
  else
  {
    v122 = *(HANDLE *)(a1 + 56);
    v86 = NtWorkerFactoryWorkerReady(v122);
    if ( v86 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v75;
LABEL_8:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_223;
      TppPoolAddWorker(a1, DeferredWork);
      v69 = 1;
      RtlAcquireSRWLockExclusive(&TppWorkerpListLock);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = off_180143888;
      if ( *off_180143888 != (_UNKNOWN *)&TppWorkerpList )
        __fastfail(3u);
      *off_180143888 = DeferredWork;
      off_180143888 = (_UNKNOWN **)DeferredWork;
      v68 = 1;
      RtlReleaseSRWLockExclusive(&TppWorkerpListLock);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v72 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
LABEL_12:
      while ( 1 )
      {
        v77 = 0;
        *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags = 0LL;
        memset(&DeferredWork[13], 0, sizeof(_WORKER_FACTORY_DEFERRED_WORK));
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v87 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_189;
        v4 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v4->DoNotUseThisField);
        v87 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_15:
        v98 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v125 = *(HANDLE *)(a1 + 56);
        v7 = ZwWaitForWorkViaWorkerFactory(
               v125,
               (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
               DoNotUseThisField_high,
               &PacketsReturned,
               &DeferredWork[11]);
        v86 = v7;
        if ( v7 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v7 = v86;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v98;
          DoNotUseThisField_high = v87;
        }
        if ( v7 )
        {
          v43 = v7 - 128;
          if ( !v43 )
            goto LABEL_223;
          v44 = v43 - 64;
          if ( !v44 )
          {
            TppCallbackCheckThreadAfterCallback(0LL);
            continue;
          }
          if ( v44 == 66 )
          {
            v71 = 1;
            goto LABEL_223;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v73) )
            goto LABEL_223;
          if ( !v73 )
          {
            v8 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( !*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
              goto LABEL_25;
            v96 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 56LL);
            DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
            v99[0] = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
            v34 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
            AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
            v36 = *(_DWORD *)(a1 + 428);
            v37 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
            if ( (_DWORD)v34 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
            {
              if ( v36 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
              {
                LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v34));
              }
            }
            else
            {
              if ( v36 == -1 )
              {
                if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                  + 4LL * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                else
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v34));
              }
              LODWORD(DeferredWork[14].AlpcSendMessagePort) = v34;
              v37 = *(_QWORD *)(a1 + 48);
              v56 = *(_WORD *)(v37 + 16 * v34 + 8);
              v57 = *(_WORD *)(v37 + 16 * AlpcSendMessagePort_low + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v34, v57, *(_WORD *)(v37 + 16 * v34 + 8));
              if ( v57 != v56 )
              {
                ThreadInformation[1] = v56;
                ThreadInformation[0] = 0LL;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v99, 4u);
              }
            }
            *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
            if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
              && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
            {
              DeferredWork[6].AlpcSendMessageFlags |= 8u;
              v124 = NtCurrentTeb();
              AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags;
              if ( v124->IsImpersonating )
              {
                AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags | 4;
                DeferredWork[6].AlpcSendMessageFlags |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v37, AlpcSendMessagePort_low, AlpcSendMessageFlags) )
                DeferredWork[6].AlpcSendMessageFlags = v62 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v108 = 1;
                v82 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
              }
              else
              {
                v108 = 0;
                v82 = 0;
              }
              v119 = NtCurrentTeb();
              if ( v119->PreferredLanguages )
              {
                v83 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
              }
              else
              {
                v83 = 0;
              }
              v126 = NtCurrentTeb();
              if ( v126->SavedPriorityState )
              {
                v84 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              else
              {
                v84 = 0;
              }
            }
            v38 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE, __int64, __int64))(v8 + 56);
            if ( (char *)v38 == (char *)TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
            }
            else if ( (char *)v38 == (char *)TppIopExecuteCallback )
            {
              TppIopExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
            }
            else if ( (char *)v38 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration(
                &DeferredWork[2].AlpcSendMessagePort,
                v96,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
            }
            else if ( v38 == TppWaitCompletion )
            {
              TppWaitCompletion(
                (PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort,
                v96,
                (__int64)DeferredWork[13].AlpcSendMessage);
            }
            else
            {
              ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v38)(
                &DeferredWork[2].AlpcSendMessagePort,
                v96,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
            }
            while ( 1 )
            {
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v76 = 1;
              v70 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v76 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v31 = *(_QWORD *)(a1 + 8);
              v94 = v31;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                {
                  v106 = 0;
                  goto LABEL_223;
                }
                if ( HIDWORD(v31) && ((v94 & 0x8000u) == 0LL || v70) )
                {
                  v32 = 0;
                  HIDWORD(v94) = HIDWORD(v31) - 1;
                }
                else
                {
                  v32 = 1;
                  LODWORD(v94) = (unsigned __int16)(v94 ^ (v94 + 1)) ^ (unsigned int)v94;
                }
                v33 = v31;
                v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v94, v31);
                v94 = v31;
              }
              while ( v33 != v31 );
              v73 = v32;
              v106 = 1;
              if ( v32 )
                goto LABEL_12;
LABEL_25:
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v11 = TppNumberNodes;
              v12 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v11 = TppNumberNodes;
              }
              for ( i = 0; ; ++i )
              {
                v99[2] = i;
                if ( i >= v11 )
                  goto LABEL_32;
                v14 = 16LL * i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v14 + 8) == Group )
                {
                  v15 = *(_QWORD *)v14;
                  if ( _bittest64(&v15, Number) )
                    break;
                }
              }
              v12 = i;
LABEL_32:
              if ( v12 >= v11 )
                v12 = 0;
              v93 = v12;
              if ( &v81 )
                v81 = Number;
              v104[0] = v81;
              v16 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v17 = *(_DWORD *)(a1 + 428);
              if ( v12 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v17 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v12));
                }
              }
              else
              {
                if ( v17 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v12));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v12;
                v58 = *(_QWORD *)(a1 + 48);
                v59 = *(_WORD *)(v58 + 16LL * v12 + 8);
                v60 = *(_WORD *)(v58 + 16 * v16 + 8);
                if ( MEMORY[0x7FFE0386] )
                  TppETWWorkerNodeSwitch(a1, v16, v12, v60, *(_WORD *)(v58 + 16LL * v12 + 8));
                if ( v60 != v59 )
                {
                  v139[1] = v59;
                  v139[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v139, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v104, 4u);
                }
              }
              v101 = v12;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(DeferredWork[14].AlpcSendMessagePort) < 0x10
                || (unsigned int)TppAreNodeWorkersSteadyState(a1, v16) )
              {
                v18 = 0;
                for ( j = 0; ; j = v18 )
                {
                  if ( v18 > 2 )
                    goto LABEL_115;
                  v16 = *(_QWORD *)(a1 + 8LL * v18 + 16) + 24LL * v93;
                  v110 = (volatile signed __int64 *)v16;
                  v19 = (volatile signed __int64 *)(v16 + 16);
                  v95 = 0;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 16), 0LL) )
                    break;
LABEL_42:
                  v20 = v110;
                  v21 = (volatile signed __int64 *)*v110;
                  v22 = **(_QWORD **)v110;
                  if ( *(volatile signed __int64 **)(*v110 + 8) != v110 || *(volatile signed __int64 **)(v22 + 8) != v21 )
                    __fastfail(3u);
                  *v110 = v22;
                  *(_QWORD *)(v22 + 8) = v20;
                  v23 = v20 + 2;
                  v24 = _InterlockedCompareExchange64(v20 + 2, 0LL, 1LL);
                  if ( v24 != 1 )
                  {
                    do
                    {
                      v54 = -1LL;
                      if ( (v24 & 6) == 2 )
                        v54 = 3LL;
                      v16 = v54 + v24;
                      v55 = v24;
                      v24 = _InterlockedCompareExchange64(v23, v54 + v24, v24);
                    }
                    while ( v55 != v24 );
                    if ( v54 == 3 )
                      RtlpWakeSRWLock(v23, v16, 0LL);
                  }
                  if ( v21 != v110 && v21 )
                  {
                    v25 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v21 - 2);
                    goto LABEL_49;
                  }
                  ++v18;
                }
                v45 = *v19;
                while ( 2 )
                {
                  while ( (v45 & 1) != 0 )
                  {
                    if ( RtlpWaitCouldDeadlock() )
                      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
                    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                    v116[0] = 3;
                    v113 = 0LL;
                    v46 = 0;
                    v78 = 0;
                    if ( (v45 & 2) != 0 )
                    {
                      v112 = 0LL;
                      v111 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
                      v115 = -1;
                      v16 = (unsigned __int64)&v111 | v45 & 8 | 7;
                      v90 = v16;
                      if ( (v45 & 4) == 0 )
                      {
                        v46 = 1;
                        v78 = 1;
                      }
                    }
                    else
                    {
                      v112 = &v111;
                      v115 = v45 >> 4;
                      if ( v115 > 1 )
                        v16 = (unsigned __int64)&v111 | 0xB;
                      else
                        v16 = (unsigned __int64)&v111 + 3;
                      v90 = v16;
                      if ( !(unsigned int)(v45 >> 4) )
                        v115 = -2;
                    }
                    v48 = _InterlockedCompareExchange64(v19, v16, v45);
                    v47 = v45 == v48;
                    v45 = v48;
                    v90 = v48;
                    if ( !v47 )
                      goto LABEL_143;
                    if ( v46 )
                      RtlpOptimizeSRWLockList(v19);
                    if ( MEMORY[0x7FFE036A] > 1u )
                    {
                      for ( k = SRWLockSpinCount; ; --k )
                      {
                        v104[2] = k;
                        if ( !k || (v116[0] & 2) == 0 )
                          break;
                        _mm_pause();
                      }
                    }
                    if ( _interlockedbittestandreset(v116, 1u) )
                    {
                      do
                        NtWaitForAlertByThreadId((PVOID)v19, 0LL);
                      while ( (v116[0] & 4) == 0 );
                    }
                  }
                  v90 = v45 + 1;
                  v90 = _InterlockedCompareExchange64(v19, v45 + 1, v45);
                  if ( v45 == v90 )
                    goto LABEL_42;
LABEL_143:
                  RtlBackoff(&v95);
                  _m_prefetchw((const void *)v19);
                  v45 = *v19;
                  v90 = *v19;
                  continue;
                }
              }
LABEL_115:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                {
                  v102 = 0;
                  goto LABEL_223;
                }
                v41 = 0;
LABEL_117:
                j = v41;
                if ( v41 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v117 = *(_QWORD *)(a1 + 8 * (v41 + 2LL)) + 24LL * v12;
                v42 = TppQueueRemoveHead(v117, v16);
                if ( v42 )
                  break;
                if ( ++v12 >= TppNumberNodes )
                  v12 = 0;
                v101 = v12;
                if ( v12 == v93 )
                {
                  ++v41;
                  goto LABEL_117;
                }
              }
              v25 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v42 - 16);
LABEL_49:
              v107 = v25;
              v103[0] = *((unsigned __int8 *)v25 + 12);
              v26 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v27 = *(_DWORD *)(a1 + 428);
              if ( v12 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v27 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v12));
                }
              }
              else
              {
                if ( v27 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v12));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v12;
                v49 = *(_QWORD *)(a1 + 48);
                v50 = *(_WORD *)(v49 + 16LL * v12 + 8);
                v51 = *(_WORD *)(v49 + 16 * v26 + 8);
                if ( MEMORY[0x7FFE0386] )
                {
                  v129 = 7209;
                  v130 = a1;
                  v131 = v26;
                  v132 = v12;
                  v133 = v51;
                  v134 = v50;
                  v63 = *(_QWORD *)(a1 + 40);
                  v135 = *(_DWORD *)(v63 + 4 * v26);
                  v136 = *(_DWORD *)(v63 + 4LL * v12);
                  NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x1Cu, Fields);
                }
                if ( v51 != v50 )
                {
                  v138[1] = v50;
                  v138[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v138, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v103, 4u);
                }
              }
              if ( v12 == v93 )
              {
                if ( HIDWORD(DeferredWork[14].AlpcSendMessagePort) < 0x10 )
                  v28 = HIDWORD(DeferredWork[14].AlpcSendMessagePort) + 1;
                else
                  v28 = 16;
              }
              else
              {
                v28 = 0;
              }
              HIDWORD(DeferredWork[14].AlpcSendMessagePort) = v28;
              v102 = 1;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v26);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v107;
              DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v107;
              DeferredWork[6].AlpcSendMessagePort = v107;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v121 = NtCurrentTeb();
                if ( v121->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags |= 4u;
                v29 = NtCurrentTeb();
                if ( (unsigned __int64)v29->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                  || v29->TxnScopeEnterCallback
                  || v29->TxnScopeExitCallback
                  || v29->TxnScopeContext
                  || v29->TxFsContext != 65534 )
                {
                  v74 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x10u;
                }
                else
                {
                  v74 = 0;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v105 = 1;
                  v85 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                }
                else
                {
                  v105 = 0;
                  v85 = 0;
                }
                v123 = NtCurrentTeb();
                if ( v123->PreferredLanguages )
                {
                  v79 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                }
                else
                {
                  v79 = 0;
                }
                v118 = NtCurrentTeb();
                if ( v118->SavedPriorityState )
                {
                  v80 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
                }
                else
                {
                  v80 = 0;
                }
              }
              v30 = **v107;
              if ( v30 == TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v30 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else
              {
                ((void (__fastcall *)(PVOID *, __int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE)))v30)(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v107);
              }
            }
            _m_prefetchw((const void *)(a1 + 8));
            v64 = *(_QWORD *)(a1 + 8);
            v88 = v64;
            do
            {
              LODWORD(v88) = (unsigned __int16)(v88 ^ (v88 + 1)) ^ (unsigned int)v88;
              v65 = v64;
              v64 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v88, v64);
              v88 = v64;
            }
            while ( v65 != v64 );
            WorkerFactoryInformation = 3;
            v120 = *(HANDLE *)(a1 + 56);
            NtSetInformationWorkerFactory(v120, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_223:
            TppCallbackPerformDeferredWork(&DeferredWork[2].AlpcSendMessagePort);
            if ( v72 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v68 )
            {
              RtlAcquireSRWLockExclusive(&TppWorkerpListLock);
              v66 = DeferredWork[0].AlpcSendMessage;
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v66->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(&TppWorkerpListLock);
            }
            if ( v69 )
            {
              TppPoolRemoveWorker(DeferredWork);
              if ( v71 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v109);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(DeferredWork);
            v86 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v116[3] = TppHeapTag + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v40 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v40->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v40->DoNotUseThisField) = 1;
        HIDWORD(v40->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v40;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_189:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v87 = DoNotUseThisField_high;
      goto LABEL_15;
    }
  }
  v2 = 1;
  v75 = 1;
  goto LABEL_8;
}
