/*
 * XREFs of TppWorkerThread @ 0x18001E740
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF40 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x180020170 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     TppWaitCompletion @ 0x18003AC50 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x18003AE90 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B190 (TppIopExecuteCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DE8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     TppAllocThreadData @ 0x18007CE3C (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007FFE0 (TppPoolAddWorker.c)
 *     TppCritSetThread @ 0x1800810C0 (TppCritSetThread.c)
 *     TppPoolRemoveWorker @ 0x180081E58 (TppPoolRemoveWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x180081FD0 (RtlRegisterThreadWithCsrss.c)
 *     TppFreeDirectParamsCache @ 0x180082CC4 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180082F3C (TppFreeThreadData.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008339C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 *     TppCallbackPerformDeferredWork @ 0x180086378 (TppCallbackPerformDeferredWork.c)
 *     TppCritResetThread @ 0x1800865A4 (TppCritResetThread.c)
 *     TppQueueRemoveHead @ 0x18008EC14 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008EC78 (TppAreNodeWorkersSteadyState.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090ECC (TppWorkerpInnerExceptionFilter.c)
 *     TppExceptionFilter @ 0x180090EF4 (TppExceptionFilter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A6440 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A9BF0 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
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
  __int64 (__fastcall ***v18)(PTP_CALLBACK_INSTANCE); // rbx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  struct _TEB *v22; // rcx
  __int64 (__fastcall *v23)(PTP_CALLBACK_INSTANCE); // rax
  signed __int64 v24; // rax
  char v25; // r8
  signed __int64 v26; // rtt
  char v27; // di
  _RTL_SRWLOCK *v28; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v31; // rbx
  ULONG DoNotUseThisField_high; // esi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 AlpcSendMessagePort_low; // rdx
  int v38; // eax
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(PTP_CALLBACK_INSTANCE); // rax
  int v42; // ebx
  __int64 v43; // rax
  ULONG *Heap; // rax
  _PORT_MESSAGE *v45; // rax
  NTSTATUS v46; // ecx
  NTSTATUS v47; // ecx
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
  __int64 AlpcSendMessageFlags; // r8
  int v65; // r8d
  __int64 v66; // rcx
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  _RTL_SRWLOCK *v69; // rbx
  PPORT_MESSAGE v70; // rax
  PVOID AlpcSendMessagePort; // rdx
  bool v72; // [rsp+32h] [rbp-3C6h]
  char v73; // [rsp+33h] [rbp-3C5h] BYREF
  char v74; // [rsp+34h] [rbp-3C4h]
  char v75; // [rsp+35h] [rbp-3C3h]
  char v76; // [rsp+36h] [rbp-3C2h]
  char v77; // [rsp+37h] [rbp-3C1h]
  char v78; // [rsp+38h] [rbp-3C0h]
  char v79; // [rsp+39h] [rbp-3BFh]
  int v80; // [rsp+3Ch] [rbp-3BCh]
  char v81; // [rsp+40h] [rbp-3B8h]
  char v82; // [rsp+41h] [rbp-3B7h]
  unsigned __int8 v83; // [rsp+42h] [rbp-3B6h] BYREF
  char v84; // [rsp+43h] [rbp-3B5h]
  char v85; // [rsp+44h] [rbp-3B4h]
  char v86; // [rsp+45h] [rbp-3B3h]
  char v87; // [rsp+46h] [rbp-3B2h]
  char v88; // [rsp+47h] [rbp-3B1h]
  NTSTATUS v89; // [rsp+48h] [rbp-3B0h]
  int v90; // [rsp+4Ch] [rbp-3ACh]
  signed __int64 v91; // [rsp+50h] [rbp-3A8h]
  ULONG PacketsReturned; // [rsp+58h] [rbp-3A0h] BYREF
  int j; // [rsp+5Ch] [rbp-39Ch]
  unsigned int v94; // [rsp+60h] [rbp-398h]
  signed __int64 v95; // [rsp+68h] [rbp-390h]
  __int64 v96; // [rsp+70h] [rbp-388h]
  signed __int64 v97; // [rsp+78h] [rbp-380h]
  struct _PEB *v98; // [rsp+80h] [rbp-378h]
  int v99; // [rsp+88h] [rbp-370h] BYREF
  __int64 v100; // [rsp+90h] [rbp-368h]
  ULONG *v101; // [rsp+98h] [rbp-360h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-358h] BYREF
  int v103; // [rsp+A8h] [rbp-350h]
  int WorkerFactoryInformation; // [rsp+ACh] [rbp-34Ch] BYREF
  int v105; // [rsp+B0h] [rbp-348h]
  int v106; // [rsp+B4h] [rbp-344h]
  int v107; // [rsp+C0h] [rbp-338h]
  int v108; // [rsp+C8h] [rbp-330h] BYREF
  int v109; // [rsp+D0h] [rbp-328h]
  unsigned int v110; // [rsp+D4h] [rbp-324h]
  int v111; // [rsp+D8h] [rbp-320h] BYREF
  unsigned int v112; // [rsp+E0h] [rbp-318h]
  int v113; // [rsp+E8h] [rbp-310h] BYREF
  __int64 (__fastcall ***v114)(PTP_CALLBACK_INSTANCE); // [rsp+F0h] [rbp-308h]
  __int64 v115; // [rsp+F8h] [rbp-300h] BYREF
  volatile signed __int64 *v116; // [rsp+108h] [rbp-2F0h]
  unsigned __int64 v117; // [rsp+110h] [rbp-2E8h] BYREF
  unsigned __int64 *v118; // [rsp+118h] [rbp-2E0h]
  __int64 v119; // [rsp+120h] [rbp-2D8h]
  void *UniqueThread; // [rsp+128h] [rbp-2D0h]
  int v121; // [rsp+130h] [rbp-2C8h]
  signed __int32 v122[5]; // [rsp+134h] [rbp-2C4h] BYREF
  HANDLE v123; // [rsp+160h] [rbp-298h]
  HANDLE v124; // [rsp+168h] [rbp-290h]
  struct _TEB *v125; // [rsp+180h] [rbp-278h]
  struct _TEB *v126; // [rsp+188h] [rbp-270h]
  struct _TEB *v127; // [rsp+190h] [rbp-268h]
  __int64 v128; // [rsp+1A0h] [rbp-258h]
  struct _TEB *v129; // [rsp+1A8h] [rbp-250h]
  struct _TEB *v130; // [rsp+1B0h] [rbp-248h]
  struct _TEB *v131; // [rsp+1B8h] [rbp-240h]
  HANDLE v132; // [rsp+1D0h] [rbp-228h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+1E0h] [rbp-218h] BYREF
  char Fields[6]; // [rsp+350h] [rbp-A8h] BYREF
  __int16 v135; // [rsp+356h] [rbp-A2h]
  __int64 v136; // [rsp+370h] [rbp-88h]
  int v137; // [rsp+378h] [rbp-80h]
  unsigned int v138; // [rsp+37Ch] [rbp-7Ch]
  __int16 v139; // [rsp+380h] [rbp-78h]
  unsigned __int16 v140; // [rsp+382h] [rbp-76h]
  int v141; // [rsp+384h] [rbp-74h]
  int v142; // [rsp+388h] [rbp-70h]
  _QWORD ThreadInformation[2]; // [rsp+390h] [rbp-68h] BYREF
  _QWORD v144[2]; // [rsp+3A0h] [rbp-58h] BYREF
  _QWORD v145[2]; // [rsp+3B0h] [rbp-48h] BYREF

  v91 = a1;
  v115 = 0LL;
  v96 = a1;
  v74 = 0;
  v75 = 0;
  v78 = 0;
  v76 = 0;
  v73 = 0;
  v79 = 0;
  v77 = 0;
  BaseAddress = 0LL;
  v80 = 0;
  RtlRegisterThreadWithCsrss();
  v98 = NtCurrentPeb();
  TppCritSetThread(&v115);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v89 = -1073741558;
  }
  else
  {
    v123 = *(HANDLE *)(a1 + 56);
    v89 = NtWorkerFactoryWorkerReady(v123);
    if ( v89 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v27 = v78;
LABEL_74:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v27 )
        goto LABEL_225;
      TppPoolAddWorker(a1, DeferredWork);
      v76 = 1;
      v28 = (_RTL_SRWLOCK *)v98;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v98->TppWorkerpListLock);
      Blink = (struct _PEB **)v98->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v98->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v98->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v28[115].Value = (unsigned __int64)DeferredWork;
      v75 = 1;
      RtlReleaseSRWLockExclusive(v28 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v74 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
      while ( 1 )
      {
        v80 = 0;
        memset(&DeferredWork[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v90 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_191;
        v31 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v31->DoNotUseThisField);
        v90 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_81:
        v101 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v124 = *(HANDLE *)(a1 + 56);
        v34 = ZwWaitForWorkViaWorkerFactory(
                v124,
                (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
                DoNotUseThisField_high,
                &PacketsReturned,
                &DeferredWork[11]);
        v89 = v34;
        if ( v34 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v34 = v89;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v101;
          DoNotUseThisField_high = v90;
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
            v77 = 1;
            goto LABEL_225;
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
            goto LABEL_225;
          if ( !v73 )
          {
            v35 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( !*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
              goto LABEL_4;
            v100 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 56LL);
            DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
            v108 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
            v36 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
            AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
            v38 = *(_DWORD *)(a1 + 428);
            v39 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
            if ( (_DWORD)v36 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
            {
              if ( v38 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
              {
                LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
              }
            }
            else
            {
              if ( v38 == -1 )
              {
                if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                  + 4LL * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                else
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
              }
              LODWORD(DeferredWork[14].AlpcSendMessagePort) = v36;
              v39 = *(_QWORD *)(a1 + 48);
              v58 = *(_WORD *)(v39 + 16 * v36 + 8);
              v59 = *(_WORD *)(v39 + 16 * AlpcSendMessagePort_low + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v36, v59, *(_WORD *)(v39 + 16 * v36 + 8));
              if ( v59 != v58 )
              {
                ThreadInformation[1] = v58;
                ThreadInformation[0] = 0LL;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v108, 4u);
              }
            }
            *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
            if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
              && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
            {
              DeferredWork[6].AlpcSendMessageFlags |= 8u;
              v125 = NtCurrentTeb();
              AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags;
              if ( v125->IsImpersonating )
              {
                AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags | 4;
                DeferredWork[6].AlpcSendMessageFlags |= 4u;
              }
              if ( (unsigned __int8)TppCheckForTransactions(v39, AlpcSendMessagePort_low, AlpcSendMessageFlags) )
                DeferredWork[6].AlpcSendMessageFlags = v65 | 0x10;
              if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              {
                v109 = 1;
                v88 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
              }
              else
              {
                v109 = 0;
                v88 = 0;
              }
              v126 = NtCurrentTeb();
              if ( v126->PreferredLanguages )
              {
                v81 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
              }
              else
              {
                v81 = 0;
              }
              v127 = NtCurrentTeb();
              if ( v127->SavedPriorityState )
              {
                v82 = 1;
                DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              else
              {
                v82 = 0;
              }
            }
            v40 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE))(v35 + 56);
            if ( (char *)v40 == (char *)TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback(
                &DeferredWork[2].AlpcSendMessagePort,
                v100,
                (__int64)DeferredWork[13].AlpcSendMessage);
            }
            else if ( v40 == TppIopExecuteCallback )
            {
              TppIopExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
            }
            else if ( (char *)v40 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration(
                &DeferredWork[2].AlpcSendMessagePort,
                v100,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
            }
            else if ( v40 == TppWaitCompletion )
            {
              TppWaitCompletion((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
            }
            else
            {
              ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v40)(
                &DeferredWork[2].AlpcSendMessagePort,
                v100,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
            }
LABEL_57:
            if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
              v79 = 1;
            v72 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
            TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
            DeferredWork[1].AlpcSendMessagePort = 0LL;
            if ( v79 )
            {
              _m_prefetchw((const void *)(a1 + 8));
              v67 = *(_QWORD *)(a1 + 8);
              v91 = v67;
              do
              {
                LODWORD(v91) = (unsigned __int16)(v91 ^ (v91 + 1)) ^ (unsigned int)v91;
                v68 = v67;
                v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v91, v67);
                v91 = v67;
              }
              while ( v68 != v67 );
              WorkerFactoryInformation = 3;
              v132 = *(HANDLE *)(a1 + 56);
              NtSetInformationWorkerFactory(v132, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
              goto LABEL_225;
            }
            if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              TppAdjustRunningThreadGoal(a1);
            _m_prefetchw((const void *)(a1 + 8));
            v24 = *(_QWORD *)(a1 + 8);
            v97 = v24;
            do
            {
              if ( *(_BYTE *)(a1 + 376) )
              {
                v105 = 0;
                goto LABEL_225;
              }
              if ( HIDWORD(v24) && ((v97 & 0x8000u) == 0LL || v72) )
              {
                v25 = 0;
                HIDWORD(v97) = HIDWORD(v24) - 1;
              }
              else
              {
                v25 = 1;
                LODWORD(v97) = (unsigned __int16)(v97 ^ (v97 + 1)) ^ (unsigned int)v97;
              }
              v26 = v24;
              v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v97, v24);
              v97 = v24;
            }
            while ( v26 != v24 );
            v73 = v25;
            v105 = 1;
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
              v110 = i;
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
            v94 = v5;
            if ( &v83 )
              v83 = Number;
            v111 = v83;
            v9 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
            v10 = *(_DWORD *)(a1 + 428);
            if ( v5 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
            {
              if ( v10 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
              {
                LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
              }
            }
            else
            {
              if ( v10 == -1 )
              {
                if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                  + 4LL * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                else
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
              }
              LODWORD(DeferredWork[14].AlpcSendMessagePort) = v5;
              v51 = *(_QWORD *)(a1 + 48);
              v52 = *(_WORD *)(v51 + 16LL * v5 + 8);
              v53 = *(_WORD *)(v51 + 16 * v9 + 8);
              if ( MEMORY[0x7FFE0386] )
                TppETWWorkerNodeSwitch(a1, v9, v5, v53, *(_WORD *)(v51 + 16LL * v5 + 8));
              if ( v53 != v52 )
              {
                v144[1] = v52;
                v144[0] = 0LL;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v144, 0x10u);
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v111, 4u);
              }
            }
            v112 = v5;
            if ( *(_DWORD *)(a1 + 428) == -1
              && HIDWORD(DeferredWork[14].AlpcSendMessagePort) >= 0x10
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
                    v128 = *(_QWORD *)(a1 + 8 * (v42 + 2LL)) + 24LL * v5;
                    v43 = TppQueueRemoveHead(v128, v9);
                    if ( v43 )
                      break;
                    if ( ++v5 >= TppNumberNodes )
                      v5 = 0;
                    v112 = v5;
                    if ( v5 == v94 )
                    {
                      ++v42;
                      goto LABEL_121;
                    }
                  }
                  v18 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v43 - 16);
LABEL_28:
                  v114 = v18;
                  v113 = *((unsigned __int8 *)v18 + 12);
                  v19 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
                  v20 = *(_DWORD *)(a1 + 428);
                  if ( v5 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
                  {
                    if ( v20 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    {
                      LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                    }
                  }
                  else
                  {
                    if ( v20 == -1 )
                    {
                      if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                        + 4LL
                                                                        * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                      else
                        LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                    }
                    LODWORD(DeferredWork[14].AlpcSendMessagePort) = v5;
                    v48 = *(_QWORD *)(a1 + 48);
                    v49 = *(_WORD *)(v48 + 16LL * v5 + 8);
                    v50 = *(_WORD *)(v48 + 16 * v19 + 8);
                    if ( MEMORY[0x7FFE0386] )
                    {
                      v135 = 7209;
                      v136 = a1;
                      v137 = v19;
                      v138 = v5;
                      v139 = v50;
                      v140 = v49;
                      v66 = *(_QWORD *)(a1 + 40);
                      v141 = *(_DWORD *)(v66 + 4 * v19);
                      v142 = *(_DWORD *)(v66 + 4LL * v5);
                      NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x1Cu, Fields);
                    }
                    if ( v50 != v49 )
                    {
                      v145[1] = v49;
                      v145[0] = 0LL;
                      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v145, 0x10u);
                      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v113, 4u);
                    }
                  }
                  if ( v5 == v94 )
                  {
                    if ( HIDWORD(DeferredWork[14].AlpcSendMessagePort) < 0x10 )
                      v21 = HIDWORD(DeferredWork[14].AlpcSendMessagePort) + 1;
                    else
                      v21 = 16;
                  }
                  else
                  {
                    v21 = 0;
                  }
                  HIDWORD(DeferredWork[14].AlpcSendMessagePort) = v21;
                  v106 = 1;
                  if ( (DeferredWork[11].Flags & 1) != 0 )
                  {
                    TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v19);
                    DeferredWork[11].Flags &= ~1u;
                  }
                  DeferredWork[1].AlpcSendMessagePort = v114;
                  DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v114;
                  DeferredWork[6].AlpcSendMessagePort = v114;
                  *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
                  *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
                  if ( DeferredWork[2].AlpcSendMessage
                    && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
                  {
                    DeferredWork[6].AlpcSendMessageFlags |= 8u;
                    v129 = NtCurrentTeb();
                    if ( v129->IsImpersonating )
                      DeferredWork[6].AlpcSendMessageFlags |= 4u;
                    v22 = NtCurrentTeb();
                    if ( (unsigned __int64)v22->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
                      || v22->TxnScopeEnterCallback
                      || v22->TxnScopeExitCallback
                      || v22->TxnScopeContext
                      || v22->TxFsContext != 65534 )
                    {
                      DeferredWork[6].AlpcSendMessageFlags |= 0x10u;
                    }
                    if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                    {
                      v103 = 1;
                      v85 = 1;
                      DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                    }
                    else
                    {
                      v103 = 0;
                      v85 = 0;
                    }
                    v130 = NtCurrentTeb();
                    if ( v130->PreferredLanguages )
                    {
                      v86 = 1;
                      DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                    }
                    else
                    {
                      v86 = 0;
                    }
                    v131 = NtCurrentTeb();
                    if ( v131->SavedPriorityState )
                    {
                      v87 = 1;
                      DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
                    }
                    else
                    {
                      v87 = 0;
                    }
                  }
                  v23 = **v114;
                  if ( v23 == TppWorkpExecuteCallback )
                  {
                    TppWorkpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
                  }
                  else if ( v23 == TppTimerpExecuteCallback )
                  {
                    TppTimerpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
                  }
                  else if ( v23 == RtlpTpWorkCallback )
                  {
                    RtlpTpWorkCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
                  }
                  else
                  {
                    v23((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
                  }
                  goto LABEL_57;
                }
                break;
              }
              v106 = 0;
LABEL_225:
              TppCallbackPerformDeferredWork(&DeferredWork[2].AlpcSendMessagePort);
              if ( v74 )
                _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
              if ( v75 )
              {
                v69 = (_RTL_SRWLOCK *)v98;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v98->TppWorkerpListLock);
                v70 = DeferredWork[0].AlpcSendMessage;
                AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
                if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                  || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
                {
                  __fastfail(3u);
                }
                *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
                v70->ClientId.UniqueProcess = AlpcSendMessagePort;
                RtlReleaseSRWLockExclusive(v69 + 113);
              }
              if ( v76 )
              {
                TppPoolRemoveWorker(DeferredWork);
                if ( v77 )
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
              TppCritResetThread(v115);
              TppFreeThreadData(BaseAddress);
              TppFreeDirectParamsCache(DeferredWork);
              v89 = 0;
              RtlExitUserThread(0);
            }
            v11 = 0;
            for ( j = 0; ; j = v11 )
            {
              if ( v11 > 2 )
                goto LABEL_119;
              v9 = *(_QWORD *)(a1 + 8LL * v11 + 16) + 24LL * v94;
              v116 = (volatile signed __int64 *)v9;
              v12 = (volatile signed __int64 *)(v9 + 16);
              v99 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
                break;
LABEL_21:
              v13 = v116;
              v14 = (volatile signed __int64 *)*v116;
              v15 = **(_QWORD **)v116;
              if ( *(volatile signed __int64 **)(*v116 + 8) != v116 || *(volatile signed __int64 **)(v15 + 8) != v14 )
                __fastfail(3u);
              *v116 = v15;
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
              if ( v14 != v116 && v14 )
              {
                v18 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v14 - 2);
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
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
                UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                v122[0] = 3;
                v119 = 0LL;
                v55 = 0;
                v84 = 0;
                if ( (v54 & 2) != 0 )
                {
                  v118 = 0LL;
                  v117 = v54 & 0xFFFFFFFFFFFFFFF0uLL;
                  v121 = -1;
                  v9 = (unsigned __int64)&v117 | v54 & 8 | 7;
                  v95 = v9;
                  if ( (v54 & 4) == 0 )
                  {
                    v55 = 1;
                    v84 = 1;
                  }
                }
                else
                {
                  v118 = &v117;
                  v121 = v54 >> 4;
                  if ( v121 > 1 )
                    v9 = (unsigned __int64)&v117 | 0xB;
                  else
                    v9 = (unsigned __int64)&v117 + 3;
                  v95 = v9;
                  if ( !(unsigned int)(v54 >> 4) )
                    v121 = -2;
                }
                v57 = _InterlockedCompareExchange64(v12, v9, v54);
                v56 = v54 == v57;
                v54 = v57;
                v95 = v57;
                if ( !v56 )
                  goto LABEL_162;
                if ( v55 )
                  RtlpOptimizeSRWLockList(v12);
                if ( MEMORY[0x7FFE036A] > 1u )
                {
                  for ( k = SRWLockSpinCount; ; --k )
                  {
                    v107 = k;
                    if ( !k || (v122[0] & 2) == 0 )
                      break;
                    _mm_pause();
                  }
                }
                if ( _interlockedbittestandreset(v122, 1u) )
                {
                  do
                    NtWaitForAlertByThreadId((PVOID)v12, 0LL);
                  while ( (v122[0] & 4) == 0 );
                }
              }
              v95 = v54 + 1;
              v95 = _InterlockedCompareExchange64(v12, v54 + 1, v54);
              if ( v54 == v95 )
                goto LABEL_21;
LABEL_162:
              RtlBackoff(&v99);
              _m_prefetchw((const void *)v12);
              v54 = *v12;
              v95 = *v12;
              continue;
            }
          }
        }
      }
      v122[4] = TppHeapTag + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v45 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v45->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v45->DoNotUseThisField) = 1;
        HIDWORD(v45->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v45;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_191:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v90 = DoNotUseThisField_high;
      goto LABEL_81;
    }
  }
  v27 = 1;
  v78 = 1;
  goto LABEL_74;
}
