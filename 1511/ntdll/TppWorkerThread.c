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
  char v2; // di
  _RTL_SRWLOCK *v3; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v6; // rbx
  ULONG DoNotUseThisField_high; // esi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v9; // ecx
  volatile signed __int64 *v10; // r9
  __int64 v11; // rbx
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned int i; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // edi
  __int64 UniqueThread; // rcx
  volatile signed __int64 *v23; // rsi
  volatile signed __int64 *v24; // rax
  volatile signed __int64 *v25; // rbx
  volatile signed __int64 v26; // rcx
  signed __int64 v27; // rax
  __int64 (__fastcall ***v28)(_TP_CALLBACK_INSTANCE *, __int64); // rbx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  struct _TEB *v32; // rcx
  __int64 (__fastcall *v33)(_TP_CALLBACK_INSTANCE *, __int64); // rdi
  signed __int64 v34; // rax
  char v35; // r8
  signed __int64 v36; // rtt
  __int64 v37; // r8
  __int64 AlpcSendMessagePort_low; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(PTP_CALLBACK_INSTANCE); // rbx
  ULONG *Heap; // rax
  _PORT_MESSAGE *v43; // rax
  NTSTATUS v44; // ecx
  NTSTATUS v45; // ecx
  int v46; // eax
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int16 v50; // bx
  __int16 v51; // di
  __int64 v52; // rcx
  unsigned __int16 v53; // bx
  unsigned __int16 v54; // di
  unsigned __int64 v55; // rbx
  bool v56; // zf
  signed __int64 v57; // rax
  unsigned __int16 v58; // di
  unsigned __int16 v59; // si
  signed __int64 v60; // rtt
  __int64 AlpcSendMessageFlags; // r8
  int v63; // r8d
  __int64 v64; // rcx
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  _RTL_SRWLOCK *v67; // rbx
  PPORT_MESSAGE v68; // rax
  PVOID AlpcSendMessagePort; // rcx
  PWORKER_FACTORY_DEFERRED_WORK DeferredWork; // [rsp+20h] [rbp-3E8h]
  char v71; // [rsp+31h] [rbp-3D7h]
  char v72; // [rsp+32h] [rbp-3D6h]
  bool v73; // [rsp+33h] [rbp-3D5h]
  char v74; // [rsp+34h] [rbp-3D4h]
  char v75; // [rsp+35h] [rbp-3D3h]
  char v76; // [rsp+36h] [rbp-3D2h] BYREF
  char v77; // [rsp+37h] [rbp-3D1h]
  char v78; // [rsp+38h] [rbp-3D0h]
  char v79; // [rsp+39h] [rbp-3CFh]
  int v80; // [rsp+3Ch] [rbp-3CCh]
  char v81; // [rsp+40h] [rbp-3C8h]
  char v82; // [rsp+41h] [rbp-3C7h]
  char v83; // [rsp+42h] [rbp-3C6h]
  unsigned __int8 v84; // [rsp+43h] [rbp-3C5h] BYREF
  char v85; // [rsp+44h] [rbp-3C4h]
  char v86; // [rsp+45h] [rbp-3C3h]
  char v87; // [rsp+46h] [rbp-3C2h]
  char v88; // [rsp+47h] [rbp-3C1h]
  NTSTATUS v89; // [rsp+48h] [rbp-3C0h]
  int v90; // [rsp+4Ch] [rbp-3BCh]
  signed __int64 v91; // [rsp+50h] [rbp-3B8h]
  ULONG PacketsReturned; // [rsp+58h] [rbp-3B0h] BYREF
  signed __int64 v93; // [rsp+60h] [rbp-3A8h]
  unsigned int v94; // [rsp+68h] [rbp-3A0h]
  __int64 v95; // [rsp+70h] [rbp-398h]
  int j; // [rsp+78h] [rbp-390h]
  signed __int64 v97; // [rsp+80h] [rbp-388h]
  struct _PEB *v98; // [rsp+88h] [rbp-380h]
  int v99; // [rsp+90h] [rbp-378h] BYREF
  __int64 v100; // [rsp+98h] [rbp-370h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-368h] BYREF
  ULONG *v102; // [rsp+A8h] [rbp-360h]
  int v103; // [rsp+B0h] [rbp-358h]
  int v104; // [rsp+B8h] [rbp-350h] BYREF
  int v105; // [rsp+C0h] [rbp-348h]
  int v106[3]; // [rsp+C8h] [rbp-340h] BYREF
  int v107; // [rsp+D4h] [rbp-334h]
  int v108; // [rsp+D8h] [rbp-330h] BYREF
  unsigned int v109; // [rsp+E0h] [rbp-328h]
  int v110; // [rsp+F0h] [rbp-318h]
  int v111; // [rsp+F4h] [rbp-314h]
  _DWORD WorkerFactoryInformation[2]; // [rsp+F8h] [rbp-310h] BYREF
  __int64 (__fastcall ***v113)(_TP_CALLBACK_INSTANCE *, __int64); // [rsp+100h] [rbp-308h]
  HANDLE v114; // [rsp+110h] [rbp-2F8h] BYREF
  volatile signed __int64 *v115; // [rsp+118h] [rbp-2F0h]
  unsigned __int64 v116; // [rsp+120h] [rbp-2E8h] BYREF
  unsigned __int64 *v117; // [rsp+128h] [rbp-2E0h]
  __int64 v118; // [rsp+130h] [rbp-2D8h]
  __int64 v119; // [rsp+138h] [rbp-2D0h]
  int v120; // [rsp+140h] [rbp-2C8h]
  signed __int32 v121[4]; // [rsp+144h] [rbp-2C4h] BYREF
  __int64 v122; // [rsp+170h] [rbp-298h]
  struct _TEB *v123; // [rsp+178h] [rbp-290h]
  struct _TEB *v124; // [rsp+198h] [rbp-270h]
  HANDLE v125; // [rsp+1A0h] [rbp-268h]
  struct _TEB *v126; // [rsp+1B8h] [rbp-250h]
  HANDLE v127; // [rsp+1C0h] [rbp-248h]
  struct _TEB *v128; // [rsp+1C8h] [rbp-240h]
  struct _TEB *v129; // [rsp+1D0h] [rbp-238h]
  HANDLE v130; // [rsp+1E0h] [rbp-228h]
  struct _TEB *v131; // [rsp+1E8h] [rbp-220h]
  _WORKER_FACTORY_DEFERRED_WORK v132[15]; // [rsp+1F0h] [rbp-218h] BYREF
  char Fields[6]; // [rsp+360h] [rbp-A8h] BYREF
  __int16 v134; // [rsp+366h] [rbp-A2h]
  __int64 v135; // [rsp+380h] [rbp-88h]
  int v136; // [rsp+388h] [rbp-80h]
  unsigned int v137; // [rsp+38Ch] [rbp-7Ch]
  __int16 v138; // [rsp+390h] [rbp-78h]
  unsigned __int16 v139; // [rsp+392h] [rbp-76h]
  int v140; // [rsp+394h] [rbp-74h]
  int v141; // [rsp+398h] [rbp-70h]
  _QWORD ThreadInformation[2]; // [rsp+3A0h] [rbp-68h] BYREF
  _QWORD v143[2]; // [rsp+3B0h] [rbp-58h] BYREF
  _QWORD v144[2]; // [rsp+3C0h] [rbp-48h] BYREF

  v91 = a1;
  v114 = 0LL;
  v95 = a1;
  v75 = 0;
  v71 = 0;
  v78 = 0;
  v72 = 0;
  v76 = 0;
  v79 = 0;
  v74 = 0;
  BaseAddress = 0LL;
  v80 = 0;
  RtlRegisterThreadWithCsrss();
  v98 = NtCurrentPeb();
  TppCritSetThread(&v114);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = v132;
  memset(v132, 0, sizeof(v132));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v89 = -1073741558;
  }
  else
  {
    v127 = *(HANDLE *)(a1 + 56);
    v89 = NtWorkerFactoryWorkerReady(v127);
    if ( v89 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v78;
LABEL_8:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_224;
      TppPoolAddWorker(a1, v132);
      v72 = 1;
      v3 = (_RTL_SRWLOCK *)v98;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v98->TppWorkerpListLock);
      Blink = (struct _PEB **)v98->TppWorkerpList.Blink;
      v132[0].AlpcSendMessage = (PPORT_MESSAGE)&v98->TppWorkerpList;
      v132[0].AlpcSendMessagePort = Blink;
      if ( *Blink != (struct _PEB *)&v98->TppWorkerpList )
        __fastfail(3u);
      *Blink = (struct _PEB *)v132;
      v3[115].Value = (unsigned __int64)v132;
      v71 = 1;
      RtlReleaseSRWLockExclusive(v3 + 113);
      memset(&v132[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v75 = 1;
      TppGetCurrentThreadNumaNode(a1, &v132[14].AlpcSendMessagePort, 0LL);
LABEL_12:
      while ( 1 )
      {
        v80 = 0;
        memset(&v132[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = v132[14].AlpcSendMessage;
        v90 = 16;
        if ( !v132[14].AlpcSendMessage )
          break;
        if ( LODWORD(v132[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_191;
        v6 = v132[14].AlpcSendMessage;
        memset(*(void **)v132[14].AlpcSendMessage, 0, 56LL * HIDWORD(v132[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v6->DoNotUseThisField);
        v90 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_15:
        v102 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v130 = *(HANDLE *)(a1 + 56);
        v9 = ZwWaitForWorkViaWorkerFactory(
               v130,
               (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
               DoNotUseThisField_high,
               &PacketsReturned,
               &v132[11]);
        v89 = v9;
        if ( v9 )
          PacketsReturned = 0;
        if ( (v132[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v132[11].AlpcSendMessage);
          v132[11].Flags &= ~1u;
          v9 = v89;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v102;
          DoNotUseThisField_high = v90;
        }
        if ( v9 )
        {
          v44 = v9 - 128;
          if ( !v44 )
            goto LABEL_224;
          v45 = v44 - 64;
          if ( !v45 )
          {
            TppCallbackCheckThreadAfterCallback(0LL);
            continue;
          }
          if ( v45 == 66 )
          {
            v74 = 1;
            goto LABEL_224;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)v132,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v76) )
            goto LABEL_224;
          if ( !v76 )
          {
            v11 = *(_QWORD *)&v132[12].AlpcSendMessageFlags;
            if ( !*(_QWORD *)&v132[12].AlpcSendMessageFlags )
              goto LABEL_25;
            v100 = *(_QWORD *)&v132[12].AlpcSendMessageFlags;
            v132[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&v132[12].AlpcSendMessageFlags + 56LL);
            v132[6].AlpcSendMessagePort = *(PVOID *)&v132[12].AlpcSendMessageFlags;
            v108 = *(unsigned __int8 *)(*(_QWORD *)&v132[12].AlpcSendMessageFlags + 68LL);
            v37 = *(unsigned int *)(*(_QWORD *)&v132[12].AlpcSendMessageFlags + 64LL);
            AlpcSendMessagePort_low = LODWORD(v132[14].AlpcSendMessagePort);
            v39 = *(_DWORD *)(a1 + 428);
            v40 = LODWORD(v132[14].AlpcSendMessagePort);
            if ( (_DWORD)v37 == LODWORD(v132[14].AlpcSendMessagePort) )
            {
              if ( v39 == -1 && !LOBYTE(v132[14].AlpcSendMessageFlags) )
              {
                LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v37));
              }
            }
            else
            {
              if ( v39 == -1 )
              {
                if ( LOBYTE(v132[14].AlpcSendMessageFlags) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                  + 4LL * LODWORD(v132[14].AlpcSendMessagePort)));
                else
                  LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v37));
              }
              LODWORD(v132[14].AlpcSendMessagePort) = v37;
              v40 = *(_QWORD *)(a1 + 48);
              v58 = *(_WORD *)(v40 + 16 * v37 + 8);
              v59 = *(_WORD *)(v40 + 16 * AlpcSendMessagePort_low + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v37, v59, *(_WORD *)(v40 + 16 * v37 + 8));
              if ( v59 != v58 )
              {
                ThreadInformation[1] = v58;
                ThreadInformation[0] = 0LL;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v108, 4u);
              }
            }
            *(_GUID *)&v132[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
            if ( *(_QWORD *)&v132[7].AlpcSendMessageFlags
              && (*(_BYTE *)(*(_QWORD *)&v132[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
            {
              v132[6].AlpcSendMessageFlags |= 8u;
              v129 = NtCurrentTeb();
              AlpcSendMessageFlags = v132[6].AlpcSendMessageFlags;
              if ( v129->IsImpersonating )
              {
                AlpcSendMessageFlags = v132[6].AlpcSendMessageFlags | 4;
                v132[6].AlpcSendMessageFlags |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v40, AlpcSendMessagePort_low, AlpcSendMessageFlags, v10) )
                v132[6].AlpcSendMessageFlags = v63 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v103 = 1;
                v85 = 1;
                v132[6].AlpcSendMessageFlags |= 0x20u;
              }
              else
              {
                v103 = 0;
                v85 = 0;
              }
              v124 = NtCurrentTeb();
              if ( v124->PreferredLanguages )
              {
                v86 = 1;
                v132[6].AlpcSendMessageFlags |= 0x40u;
              }
              else
              {
                v86 = 0;
              }
              v131 = NtCurrentTeb();
              if ( v131->SavedPriorityState )
              {
                v87 = 1;
                v132[6].AlpcSendMessageFlags |= 0x80u;
              }
              else
              {
                v87 = 0;
              }
            }
            v41 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE))(v11 + 56);
            if ( v41 == TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((PTP_CALLBACK_INSTANCE)&v132[2].AlpcSendMessagePort);
            }
            else if ( (char *)v41 == (char *)TppIopExecuteCallback )
            {
              TppIopExecuteCallback(
                &v132[2].AlpcSendMessagePort,
                v100,
                (__int64)v132[13].AlpcSendMessage,
                (__int64)&v132[13].AlpcSendMessagePort);
            }
            else if ( (char *)v41 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration(
                (__int64)&v132[2].AlpcSendMessagePort,
                v100,
                (_RTL_SRWLOCK *)v132[13].AlpcSendMessage,
                (__int64)&v132[13].AlpcSendMessagePort);
            }
            else if ( (char *)v41 == (char *)TppWaitCompletion )
            {
              TppWaitCompletion(
                (PTP_CALLBACK_INSTANCE)&v132[2].AlpcSendMessagePort,
                v100,
                (__int64)v132[13].AlpcSendMessage);
            }
            else
            {
              ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v41)(
                &v132[2].AlpcSendMessagePort,
                v100,
                v132[13].AlpcSendMessage,
                &v132[13].AlpcSendMessagePort);
            }
            while ( 1 )
            {
              if ( (BYTE4(v132[5].AlpcSendMessagePort) & 4) != 0 )
                v79 = 1;
              v73 = LODWORD(v132[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&v132[2].AlpcSendMessagePort);
              v132[1].AlpcSendMessagePort = 0LL;
              if ( v79 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v34 = *(_QWORD *)(a1 + 8);
              v97 = v34;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                {
                  v105 = 0;
                  goto LABEL_224;
                }
                if ( HIDWORD(v34) && ((v97 & 0x8000u) == 0LL || v73) )
                {
                  v35 = 0;
                  HIDWORD(v97) = HIDWORD(v34) - 1;
                }
                else
                {
                  v35 = 1;
                  LODWORD(v97) = (unsigned __int16)(v97 ^ (v97 + 1)) ^ (unsigned int)v97;
                }
                v36 = v34;
                v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v97, v34);
                v97 = v34;
              }
              while ( v36 != v34 );
              v76 = v35;
              v105 = 1;
              if ( v35 )
                goto LABEL_12;
LABEL_25:
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v14 = (unsigned int)TppNumberNodes;
              v15 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v14 = (unsigned int)TppNumberNodes;
              }
              for ( i = 0; ; ++i )
              {
                WorkerFactoryInformation[1] = i;
                if ( i >= (unsigned int)v14 )
                  goto LABEL_32;
                v17 = 16LL * i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v17 + 8) == Group )
                {
                  v18 = *(_QWORD *)v17;
                  if ( _bittest64(&v18, Number) )
                    break;
                }
              }
              v15 = i;
LABEL_32:
              if ( v15 >= (unsigned int)v14 )
                v15 = 0;
              v94 = v15;
              if ( &v84 )
                v84 = Number;
              v104 = v84;
              v19 = LODWORD(v132[14].AlpcSendMessagePort);
              v20 = *(_DWORD *)(a1 + 428);
              if ( v15 == LODWORD(v132[14].AlpcSendMessagePort) )
              {
                if ( v20 == -1 && !LOBYTE(v132[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v15));
                }
              }
              else
              {
                if ( v20 == -1 )
                {
                  if ( LOBYTE(v132[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL * LODWORD(v132[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v15));
                }
                LODWORD(v132[14].AlpcSendMessagePort) = v15;
                v52 = *(_QWORD *)(a1 + 48);
                v53 = *(_WORD *)(v52 + 16LL * v15 + 8);
                v54 = *(_WORD *)(v52 + 16 * v19 + 8);
                if ( MEMORY[0x7FFE0386] )
                  TppETWWorkerNodeSwitch(a1, v19, v15, v54, *(_WORD *)(v52 + 16LL * v15 + 8));
                if ( v54 != v53 )
                {
                  v144[1] = v53;
                  v144[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v144, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v104, 4u);
                }
              }
              v109 = v15;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(v132[14].AlpcSendMessagePort) < 0x10
                || (v46 = TppAreNodeWorkersSteadyState(a1, v19)) != 0 )
              {
                v21 = 0;
                for ( j = 0; ; j = v21 )
                {
                  if ( v21 > 2 )
                    goto LABEL_126;
                  UniqueThread = 3LL * v94;
                  v19 = *(_QWORD *)(a1 + 8LL * v21 + 16) + 24LL * v94;
                  v115 = (volatile signed __int64 *)v19;
                  v23 = (volatile signed __int64 *)(v19 + 16);
                  v99 = 0;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 16), 0LL) )
                    break;
LABEL_42:
                  v24 = v115;
                  v25 = (volatile signed __int64 *)*v115;
                  v26 = **(_QWORD **)v115;
                  if ( *(volatile signed __int64 **)(*v115 + 8) != v115 || *(volatile signed __int64 **)(v26 + 8) != v25 )
                    __fastfail(3u);
                  *v115 = v26;
                  *(_QWORD *)(v26 + 8) = v24;
                  v10 = v24 + 2;
                  v27 = _InterlockedCompareExchange64(v24 + 2, 0LL, 1LL);
                  if ( v27 != 1 )
                  {
                    do
                    {
                      v14 = -1LL;
                      if ( (v27 & 6) == 2 )
                        v14 = 3LL;
                      v19 = v14 + v27;
                      v60 = v27;
                      v27 = _InterlockedCompareExchange64(v10, v14 + v27, v27);
                    }
                    while ( v60 != v27 );
                    if ( v14 == 3 )
                      RtlpWakeSRWLock(v10, v19, 0LL);
                  }
                  if ( v25 != v115 && v25 )
                  {
                    v28 = (__int64 (__fastcall ***)(_TP_CALLBACK_INSTANCE *, __int64))(v25 - 2);
                    goto LABEL_49;
                  }
                  ++v21;
                }
                v55 = *v23;
                while ( 2 )
                {
                  while ( (v55 & 1) != 0 )
                  {
                    if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v19, v14, v10, DeferredWork) )
                      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
                    UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
                    v119 = UniqueThread;
                    v121[0] = 3;
                    v118 = 0LL;
                    LOBYTE(UniqueThread) = 0;
                    v81 = 0;
                    if ( (v55 & 2) != 0 )
                    {
                      v117 = 0LL;
                      v116 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
                      v120 = -1;
                      v19 = (unsigned __int64)&v116 | v55 & 8 | 7;
                      v93 = v19;
                      if ( (v55 & 4) == 0 )
                      {
                        LOBYTE(UniqueThread) = 1;
                        v81 = 1;
                      }
                    }
                    else
                    {
                      v117 = &v116;
                      v120 = v55 >> 4;
                      if ( v120 > 1 )
                        v19 = (unsigned __int64)&v116 | 0xB;
                      else
                        v19 = (unsigned __int64)&v116 + 3;
                      v93 = v19;
                      if ( !(unsigned int)(v55 >> 4) )
                        v120 = -2;
                    }
                    v57 = _InterlockedCompareExchange64(v23, v19, v55);
                    v56 = v55 == v57;
                    v55 = v57;
                    v93 = v57;
                    if ( !v56 )
                      goto LABEL_162;
                    if ( (_BYTE)UniqueThread )
                      RtlpOptimizeSRWLockList(v23);
                    if ( MEMORY[0x7FFE036A] > 1u )
                    {
                      for ( UniqueThread = (unsigned int)SRWLockSpinCount; ; UniqueThread = (unsigned int)(UniqueThread - 1) )
                      {
                        v110 = UniqueThread;
                        if ( !(_DWORD)UniqueThread || (v121[0] & 2) == 0 )
                          break;
                        _mm_pause();
                      }
                    }
                    if ( _interlockedbittestandreset(v121, 1u) )
                    {
                      do
                        NtWaitForAlertByThreadId((PVOID)v23, 0LL);
                      while ( (v121[0] & 4) == 0 );
                    }
                  }
                  v93 = v55 + 1;
                  v93 = _InterlockedCompareExchange64(v23, v55 + 1, v55);
                  if ( v55 == v93 )
                    goto LABEL_42;
LABEL_162:
                  RtlBackoff(&v99);
                  _m_prefetchw((const void *)v23);
                  v55 = *v23;
                  v93 = *v23;
                  continue;
                }
              }
LABEL_126:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                {
                  v111 = 0;
                  goto LABEL_224;
                }
                v47 = 0;
LABEL_128:
                j = v47;
                if ( v47 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v122 = *(_QWORD *)(a1 + 8 * (v47 + 2LL)) + 24LL * v15;
                v48 = TppQueueRemoveHead(v122, v19);
                if ( v48 )
                  break;
                if ( ++v15 >= TppNumberNodes )
                  v15 = 0;
                v109 = v15;
                if ( v15 == v94 )
                {
                  ++v47;
                  goto LABEL_128;
                }
              }
              v28 = (__int64 (__fastcall ***)(_TP_CALLBACK_INSTANCE *, __int64))(v48 - 16);
LABEL_49:
              v113 = v28;
              v106[0] = *((unsigned __int8 *)v28 + 12);
              v29 = LODWORD(v132[14].AlpcSendMessagePort);
              v30 = *(_DWORD *)(a1 + 428);
              if ( v15 == LODWORD(v132[14].AlpcSendMessagePort) )
              {
                if ( v30 == -1 && !LOBYTE(v132[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v15));
                }
              }
              else
              {
                if ( v30 == -1 )
                {
                  if ( LOBYTE(v132[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL * LODWORD(v132[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(v132[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v15));
                }
                LODWORD(v132[14].AlpcSendMessagePort) = v15;
                v49 = *(_QWORD *)(a1 + 48);
                v50 = *(_WORD *)(v49 + 16LL * v15 + 8);
                v51 = *(_WORD *)(v49 + 16 * v29 + 8);
                if ( MEMORY[0x7FFE0386] )
                {
                  v134 = 7209;
                  v135 = a1;
                  v136 = v29;
                  v137 = v15;
                  v138 = v51;
                  v139 = v50;
                  v64 = *(_QWORD *)(a1 + 40);
                  v140 = *(_DWORD *)(v64 + 4 * v29);
                  v141 = *(_DWORD *)(v64 + 4LL * v15);
                  NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x1Cu, Fields);
                }
                if ( v51 != v50 )
                {
                  v143[1] = v50;
                  v143[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v143, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v106, 4u);
                }
              }
              if ( v15 == v94 )
              {
                if ( HIDWORD(v132[14].AlpcSendMessagePort) < 0x10 )
                  v31 = HIDWORD(v132[14].AlpcSendMessagePort) + 1;
                else
                  v31 = 16;
              }
              else
              {
                v31 = 0;
              }
              HIDWORD(v132[14].AlpcSendMessagePort) = v31;
              v111 = 1;
              if ( (v132[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&v132[2].AlpcSendMessagePort, v29);
                v132[11].Flags &= ~1u;
              }
              v132[1].AlpcSendMessagePort = v113;
              v132[6].AlpcSendMessage = (PPORT_MESSAGE)**v113;
              v132[6].AlpcSendMessagePort = v113;
              *(_QWORD *)&v132[7].AlpcSendMessageFlags = v132[2].AlpcSendMessage;
              *(_GUID *)&v132[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( v132[2].AlpcSendMessage && (*(_BYTE *)(&v132[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v132[6].AlpcSendMessageFlags |= 8u;
                v126 = NtCurrentTeb();
                if ( v126->IsImpersonating )
                  v132[6].AlpcSendMessageFlags |= 4u;
                v32 = NtCurrentTeb();
                if ( (unsigned __int64)v32->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                  || v32->TxnScopeEnterCallback
                  || v32->TxnScopeExitCallback
                  || v32->TxnScopeContext
                  || v32->TxFsContext != 65534 )
                {
                  v77 = 1;
                  v132[6].AlpcSendMessageFlags |= 0x10u;
                }
                else
                {
                  v77 = 0;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v107 = 1;
                  v88 = 1;
                  v132[6].AlpcSendMessageFlags |= 0x20u;
                }
                else
                {
                  v107 = 0;
                  v88 = 0;
                }
                v128 = NtCurrentTeb();
                if ( v128->PreferredLanguages )
                {
                  v82 = 1;
                  v132[6].AlpcSendMessageFlags |= 0x40u;
                }
                else
                {
                  v82 = 0;
                }
                v123 = NtCurrentTeb();
                if ( v123->SavedPriorityState )
                {
                  v83 = 1;
                  v132[6].AlpcSendMessageFlags |= 0x80u;
                }
                else
                {
                  v83 = 0;
                }
              }
              v33 = **v113;
              if ( (char *)v33 == (char *)TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((PTP_CALLBACK_INSTANCE)&v132[2].AlpcSendMessagePort);
              }
              else if ( v33 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((PTP_CALLBACK_INSTANCE)&v132[2].AlpcSendMessagePort, (__int64)v113);
              }
              else if ( v33 == RtlpTpWorkCallback )
              {
                RtlpTpWorkCallback((_TP_CALLBACK_INSTANCE *)&v132[2].AlpcSendMessagePort, (__int64)v113);
              }
              else
              {
                v33((_TP_CALLBACK_INSTANCE *)&v132[2].AlpcSendMessagePort, (__int64)v113);
              }
            }
            _m_prefetchw((const void *)(a1 + 8));
            v65 = *(_QWORD *)(a1 + 8);
            v91 = v65;
            do
            {
              LODWORD(v91) = (unsigned __int16)(v91 ^ (v91 + 1)) ^ (unsigned int)v91;
              v66 = v65;
              v65 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v91, v65);
              v91 = v65;
            }
            while ( v66 != v65 );
            WorkerFactoryInformation[0] = 3;
            v125 = *(HANDLE *)(a1 + 56);
            NtSetInformationWorkerFactory(v125, WorkerFactoryCallbackType, WorkerFactoryInformation, 4u);
LABEL_224:
            TppCallbackPerformDeferredWork(&v132[2].AlpcSendMessagePort);
            if ( v75 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v71 )
            {
              v67 = (_RTL_SRWLOCK *)v98;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v98->TppWorkerpListLock);
              v68 = v132[0].AlpcSendMessage;
              AlpcSendMessagePort = v132[0].AlpcSendMessagePort;
              if ( v132[0].AlpcSendMessage->ClientId.UniqueProcess != v132
                || *(_WORKER_FACTORY_DEFERRED_WORK **)v132[0].AlpcSendMessagePort != v132 )
              {
                __fastfail(3u);
              }
              *(_QWORD *)v132[0].AlpcSendMessagePort = v132[0].AlpcSendMessage;
              v68->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v67 + 113);
            }
            if ( v72 )
            {
              TppPoolRemoveWorker(v132);
              if ( v74 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v114);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(v132);
            v89 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v121[3] = TppHeapTag + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v43 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v43->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v43->DoNotUseThisField) = 1;
        HIDWORD(v43->DoNotUseThisField) = 16;
        v132[14].AlpcSendMessage = v43;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_191:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &v132[12].AlpcSendMessageFlags;
      }
      v90 = DoNotUseThisField_high;
      goto LABEL_15;
    }
  }
  v2 = 1;
  v78 = 1;
  goto LABEL_8;
}
