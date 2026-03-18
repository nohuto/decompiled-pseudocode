/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0038C60 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005D28 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     Template_iq @ 0x1C000FA9C (Template_iq.c)
 *     Template_ppp @ 0x1C000FB18 (Template_ppp.c)
 *     Template_qqtqttp @ 0x1C000FCAC (Template_qqtqttp.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00330E4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ArePendingOffersInList@VIDMM_GLOBAL@@QEAA_NPEAU_LIST_ENTRY@@@Z @ 0x1C0033194 (-ArePendingOffersInList@VIDMM_GLOBAL@@QEAA_NPEAU_LIST_ENTRY@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00331E8 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00338EC (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0035C4C (-CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D0C (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D80 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAPEAVVIDMM_DEVICE@@@Z @ 0x1C0035E60 (-SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0035FBC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0039848 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 *     ?SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0039904 (-SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 *     ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C003DE8C (-GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C003E20C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004B2A8 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C005785C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C0058C30 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0059930 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C005B324 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007059C (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0072F38 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00733B8 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0073750 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  int v1; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  int v4; // r12d
  __int64 v5; // rcx
  bool v6; // r15
  char v7; // al
  union _LARGE_INTEGER *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdi
  NTSTATUS v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // al
  __int64 v17; // rcx
  VIDMM_DEVICE *v18; // rdi
  struct VIDMM_PAGING_QUEUE *v19; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v20; // rbx
  __int64 v21; // rbx
  ULONG TimeIncrement; // eax
  __int64 v23; // rax
  _QWORD *v24; // r15
  int v25; // r13d
  void *v26; // rcx
  char *v27; // rdx
  __int64 v28; // rbx
  ULONG v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  struct VIDMM_ALLOC *v34; // r8
  int v35; // r12d
  int v36; // eax
  const CHAR *v37; // r8
  VIDMM_DEVICE *v38; // rax
  __int64 v39; // rcx
  VIDMM_DEVICE *v40; // r12
  struct VIDMM_DEVICE *v41; // r13
  char v42; // al
  bool v43; // zf
  char IsPenaltyBoxEmpty; // al
  __int64 v45; // rbx
  _QWORD **v46; // r12
  __int64 v47; // rdx
  __int64 v48; // r8
  _QWORD *v49; // rdi
  __int64 v50; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v51; // r14
  _QWORD *v52; // rax
  _QWORD *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rcx
  VIDMM_SEGMENT *v56; // rcx
  _QWORD *v57; // rdx
  __int64 v58; // rdx
  VIDMM_GLOBAL *v59; // rcx
  _QWORD *v60; // rax
  VIDMM_GLOBAL *v61; // rcx
  __int64 v62; // rdi
  unsigned int v63; // r14d
  __int64 v64; // rbx
  _DWORD *v65; // r15
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  char v69; // [rsp+50h] [rbp-59h]
  bool v70; // [rsp+51h] [rbp-58h] BYREF
  bool v71; // [rsp+52h] [rbp-57h] BYREF
  int v72; // [rsp+54h] [rbp-55h]
  bool v73; // [rsp+58h] [rbp-51h] BYREF
  int v74; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v75; // [rsp+60h] [rbp-49h]
  VIDMM_PAGING_QUEUE *v76; // [rsp+68h] [rbp-41h] BYREF
  VIDMM_DEVICE *v77; // [rsp+70h] [rbp-39h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v78; // [rsp+78h] [rbp-31h] BYREF
  bool v79; // [rsp+80h] [rbp-29h] BYREF
  char *v80; // [rsp+88h] [rbp-21h]
  struct VIDMM_ALLOC *v81; // [rsp+90h] [rbp-19h] BYREF
  struct VIDMM_DEVICE *v82; // [rsp+98h] [rbp-11h]
  __int64 v83; // [rsp+A0h] [rbp-9h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v85; // [rsp+B0h] [rbp+7h]
  bool v86; // [rsp+110h] [rbp+67h] BYREF
  bool v87; // [rsp+118h] [rbp+6Fh]
  char v88; // [rsp+120h] [rbp+77h]
  bool v89; // [rsp+128h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)this + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  v4 = 0;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 15) + 24LL), Executive, 0, 0, 0LL);
  VIDMM_WORKER_THREAD::SetWorkerThreadStatus(this, 1LL);
  LOBYTE(v1) = 0;
  v85 = *((_QWORD *)this + 15);
  v5 = v85;
  *((_QWORD *)this + 17) = 0x8000000000000000uLL;
  v6 = 0;
  v87 = 0;
  v72 = v1;
  Object = (PVOID)(v5 + 24);
  v7 = 0;
  v71 = 0;
  v70 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( (_BYTE)v1 || v70 || v7 )
LABEL_5:
          *((_QWORD *)this + 17) = 0LL;
        v8 = (union _LARGE_INTEGER *)&v83;
        v83 = *((_QWORD *)this + 17);
        if ( v83 == 0x8000000000000000uLL )
          v8 = 0LL;
        v9 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v8, 0LL);
        v10 = *(_QWORD *)this;
        v11 = v9;
        v12 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(v10 + 4608) = v12 * KeQueryTimeIncrement();
        v14 = *(_QWORD *)this;
        v15 = *(_QWORD *)(*(_QWORD *)this + 4608LL);
        if ( v15 - *(_QWORD *)(*(_QWORD *)this + 7088LL) > qword_1C00272D8 )
        {
          *(_QWORD *)(v14 + 7072) = 0LL;
          *(_DWORD *)(v14 + 7080) = 0;
          *(_QWORD *)(v14 + 7088) = v15;
        }
        v70 = 0;
        v88 = 0;
        *((_BYTE *)this + 128) = 0;
        v77 = 0LL;
        v76 = 0LL;
        v78 = 0LL;
        v75 = 0;
        v69 = 0;
        if ( v11 )
        {
          if ( v11 == 258 )
            goto LABEL_19;
        }
        else
        {
          v14 = *((unsigned int *)this + 5);
          if ( (_DWORD)v14 != *((_DWORD *)this + 4) )
          {
            *((_DWORD *)this + 36) = 1;
            if ( (unsigned int)(v14 - 2) <= 2 )
            {
              KeWaitForSingleObject((PVOID)(*(_QWORD *)this + 40744LL), Executive, 0, 0, 0LL);
            }
            else if ( (_DWORD)v14 == 1 )
            {
              VIDMM_WORKER_THREAD::SetWorkerThreadStatus(this, 1LL);
            }
            goto LABEL_16;
          }
        }
        *((_DWORD *)this + 36) = 0;
LABEL_16:
        LOBYTE(v1) = 1;
        v72 = v1;
LABEL_19:
        if ( *((_QWORD *)this + 17) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          Template_iq(v14, v15, v13);
        *((_QWORD *)this + 17) = 0x8000000000000000uLL;
        if ( !(_BYTE)v1 && !v6 && !v71 )
          goto LABEL_108;
        v16 = VIDMM_WORKER_THREAD::SelectPagingOperation(this, &v76, &v78, &v77);
        v18 = v77;
        v19 = v76;
        v20 = v78;
        v87 = v16;
        if ( v77 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            Template_ppp(v17, &EventVidMmSelectOperation, v13, *((_QWORD *)v77 + 3), v76, v78);
          if ( v19 && *((_BYTE *)v20 + 24) && *((_DWORD *)v20 + 12) == 206 )
          {
            v21 = MEMORY[0xFFFFF78000000320];
            TimeIncrement = KeQueryTimeIncrement();
            v18 = v77;
            v19 = v76;
            v23 = v21 * TimeIncrement;
            v20 = v78;
            *((_QWORD *)v78 + 17) = v23;
          }
        }
        v24 = (_QWORD *)((char *)this + 152);
LABEL_33:
        v81 = 0LL;
        v25 = 2;
        v74 = 2;
        v86 = 0;
        *((_QWORD *)this + 20) = 0LL;
        *((_QWORD *)this + 21) = 0LL;
        *v24 = 0LL;
        *((_BYTE *)this + 176) = 0;
        v89 = 0;
        if ( !v18
          || (VIDMM_DEVICE::GetBudgetAndVisibilityState(v18, &v89, (enum VIDMM_BUDGET_PRIORITY_BAND *)&v74),
              v25 = v74,
              v74 == 2) )
        {
          LOBYTE(v13) = 0;
        }
        else
        {
          v13 = 1LL;
        }
        v26 = &unk_1C00213C0;
        v27 = (char *)&unk_1C00213C0 + 48 * v75 + 24 * v89 + 12 * (unsigned __int8)v13;
        v80 = v27;
        if ( v19 )
        {
          v4 = VIDMM_WORKER_THREAD::SubmitPacket(this, v19, v20, v27[8], &v86, &v81);
          if ( v4 == -1071775232 )
          {
            v4 = 0;
          }
          else
          {
            if ( v20 && *((_BYTE *)v20 + 24) && (!v86 || *((_BYTE *)v20 + 120)) && *((_QWORD *)v20 + 9) )
              v4 = 0;
            if ( v4 < 0 )
              goto LABEL_57;
          }
          if ( *((_BYTE *)v20 + 24) && *((_DWORD *)v20 + 12) == 206 )
          {
            v28 = MEMORY[0xFFFFF78000000320];
            v29 = KeQueryTimeIncrement();
            v18 = v77;
            v30 = v28 * v29;
            v20 = v78;
            *((_QWORD *)v78 + 18) = v30;
            if ( v30 - *((_QWORD *)v20 + 16) > 1000000 )
            {
              if ( !*((_BYTE *)this + 176) )
              {
                *v24 = *(_QWORD *)this;
                *((_BYTE *)this + 176) = 1;
                *((_QWORD *)this + 20) = v18;
                *((_QWORD *)this + 21) = 0LL;
              }
              VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket((VIDMM_WORKER_THREAD *)((char *)this + 152), v20);
              *((_QWORD *)this + 20) = 0LL;
              *((_QWORD *)this + 21) = 0LL;
              *v24 = 0LL;
              *((_BYTE *)this + 176) = 0;
            }
            v25 = v74;
            v19 = v76;
          }
          VIDMM_PAGING_QUEUE::ReclaimPacket(v19, v20);
        }
        else
        {
          if ( !v18 )
          {
            LOBYTE(v72) = v87;
            goto LABEL_59;
          }
          v4 = VIDMM_DEVICE::Resume(v18, v27[8], &v86, &v81);
        }
LABEL_57:
        v27 = v80;
LABEL_59:
        if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          Template_qqtqttp(v86, (unsigned __int8)v27[8], v89, v4, v75, v89, v25, v27[8], v86, (char)v81);
        if ( v4 >= 0 )
          break;
        if ( v69 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v27);
          v31[3] = 270LL;
          v31[4] = 54LL;
          v31[5] = v18;
          v31[6] = v19;
          v31[7] = v20;
          WdLogEvent5_WdCriticalError(v31);
        }
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v27, v13);
        v32[5] = v4;
        v32[6] = v86;
        v32[3] = v20;
        v32[4] = v18;
        WdLogEvent5_WdWarning(v32);
        *((_BYTE *)this + 128) = 1;
        while ( 1 )
        {
          v4 = 0;
          if ( !v86 )
            goto LABEL_81;
          v33 = *(_QWORD *)this;
          v34 = v81;
          if ( !*((_BYTE *)this + 176) )
          {
            *((_QWORD *)this + 20) = v18;
            *((_QWORD *)this + 21) = v34;
            *v24 = v33;
            *((_BYTE *)this + 176) = 1;
          }
          if ( !v89 )
          {
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(
              (VIDMM_WORKER_THREAD *)((char *)this + 152),
              v80[8]);
            v34 = v81;
          }
          v82 = 0LL;
          v35 = v75;
          v36 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(this, v18, v34);
          if ( !v36 )
            goto LABEL_97;
          if ( v36 == -1071775484 )
            break;
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_WORKER_THREAD *)((char *)this + 152), v80[8]);
          if ( v25 <= 0 )
          {
            v4 = 0;
            if ( !g_UnrecoverablePagingFailureDebugMode && !KdRefreshDebuggerNotPresent() )
            {
              v37 = "\n"
                    "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                    "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                    "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x"
                    "%p)\"\n"
                    "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
              if ( !v78 )
                v37 = "\n"
                      "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                      "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                      "Paging operation type: Failure to resume device\n";
              DbgPrintEx(0x65u, 0, v37, v77, v78, v76);
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "\n"
                "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingF"
                "ailureDebugMode=1\"\n"
                "or \"ed 0x%p 1\"\n"
                "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_Unrecoverabl"
                "ePagingFailureDebugMode=2\"\n"
                "or \"ed 0x%p 2\"\n"
                "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureD"
                "ebugMode=3\"\n"
                "or \"ed 0x%p 3\"\n"
                "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepp"
                "ing through the code is done.!!!\n"
                "\n",
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode);
              __debugbreak();
            }
            v18 = v77;
            v19 = v76;
            v20 = v78;
LABEL_81:
            v69 = 1;
            v38 = v18;
            if ( v19 && *((_BYTE *)v20 + 24) )
            {
              *((_BYTE *)v20 + 120) = 1;
              if ( !*((_QWORD *)v20 + 9) )
              {
                v38 = (VIDMM_DEVICE *)*((_QWORD *)v20 + 7);
                if ( !v38 )
                {
                  v38 = *(VIDMM_DEVICE **)(*((_QWORD *)v20 + 8) + 8LL);
                  goto LABEL_86;
                }
LABEL_87:
                v39 = *((_QWORD *)v38 + 4);
                if ( v39 )
                  VidSchiMarkDeviceAsError(v39, 12);
              }
            }
            else
            {
LABEL_86:
              if ( v38 )
                goto LABEL_87;
            }
            if ( v86 )
              goto LABEL_33;
            if ( v19 )
              VIDMM_PAGING_QUEUE::ReclaimPacket(v19, v20);
            goto LABEL_101;
          }
          v75 = v35;
          v74 = --v25;
        }
        v40 = v82;
        v41 = v82;
        if ( (*((_DWORD *)v18 + 13) & 3) != 0 || !VIDMM_DEVICE::IsBetterYieldCandidate(v18, v82) )
          v40 = v18;
        else
          v41 = v18;
        VIDMM_DEVICE::Yield(v40, v41);
        if ( v41 == v18 )
        {
LABEL_97:
          v4 = 0;
          goto LABEL_33;
        }
        v1 = v72;
        v4 = 0;
        v7 = v88;
        v6 = v87;
        if ( v19 )
        {
          VIDMM_PAGING_QUEUE::RewindPacket(v19, v20);
          v7 = v88;
        }
      }
      v4 = 0;
LABEL_101:
      if ( *((_DWORD *)this + 5) == 1 )
      {
        v42 = VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges(*(VIDMM_GLOBAL **)this);
        v43 = ((unsigned __int8)v42 | *((_BYTE *)this + 128)) == 0;
        *((_BYTE *)this + 128) |= v42;
        if ( !v43 )
          VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 0);
        VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)this, &v71);
        IsPenaltyBoxEmpty = VIDMM_GLOBAL::IsPenaltyBoxEmpty(*(_QWORD *)this, 1);
        v1 = (unsigned __int8)v72;
        if ( !IsPenaltyBoxEmpty )
          v1 = 1;
        v72 = v1;
      }
      else
      {
        v1 = v72;
      }
LABEL_108:
      if ( (unsigned int)(*((_DWORD *)this + 4) - 3) > 1 )
      {
        if ( dword_1C0027328 )
        {
          VIDMM_GLOBAL::RecalculateBudget(*(VIDMM_GLOBAL **)this, &v73, v13);
          VIDMM_GLOBAL::HandleTrimWnf(*(_QWORD *)this, v73);
        }
        v45 = *(_QWORD *)this;
        if ( qword_1C0027288 )
        {
          v46 = (_QWORD **)(v45 + 39824);
          if ( VIDMM_GLOBAL::ArePendingOffersInList(*(VIDMM_GLOBAL **)this, (struct _LIST_ENTRY *)(v45 + 39824)) )
          {
            v47 = *(_QWORD *)(v45 + 4608) - *(_QWORD *)(v45 + 7032);
            if ( v47 < qword_1C0027288 )
            {
              v58 = v47 - qword_1C0027288;
              v4 = 0;
            }
            else
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v45 + 39840));
              v49 = *v46;
              while ( v49 != v46 )
              {
                v50 = *v49;
                v51 = (struct _VIDMM_GLOBAL_ALLOC *)(v49 - 50);
                v52 = (_QWORD *)v49[1];
                if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v52 != v49 )
                  __fastfail(3u);
                *v52 = v50;
                v53 = v49;
                *(_QWORD *)(v50 + 8) = v52;
                v54 = *((_QWORD *)v51 + 59);
                v49 = (_QWORD *)*v49;
                *((_QWORD *)v51 + 50) = 0LL;
                v55 = *(unsigned int *)(v54 + 4);
                if ( (_DWORD)v55 && (_DWORD)v55 != 3 )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                    Template_p(v55, &EventProcessOfferAllocation, v48, v51);
                  v56 = (VIDMM_SEGMENT *)*((_QWORD *)v51 + 16);
                  if ( !v56 || (*((_DWORD *)v56 + 14) & 1) != 0 )
                  {
                    v57 = *(_QWORD **)(v45 + 39872);
                    *v53 = v45 + 39864;
                    *((_QWORD *)v51 + 51) = v57;
                    if ( *v57 != v45 + 39864 )
                      __fastfail(3u);
                    *v57 = v53;
                    *(_QWORD *)(v45 + 39872) = v53;
                  }
                  else if ( *((_DWORD *)v51 + 30) == 2 )
                  {
                    VIDMM_SEGMENT::OfferAllocation(v56, v51);
                  }
                }
              }
              v4 = 0;
              *(_QWORD *)(v45 + 39848) = 0LL;
              ExReleasePushLockExclusiveEx(v45 + 39840, 0LL);
              KeLeaveCriticalRegion();
              *(_QWORD *)(v45 + 7032) = *(_QWORD *)(v45 + 4608);
              v58 = -qword_1C0027288;
            }
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v45, v58, 3);
          }
          else
          {
            v4 = 0;
          }
        }
        if ( VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)this) )
        {
          VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v59);
          v60 = (_QWORD *)(*(_QWORD *)this + 3720LL);
          v60[1] = v60;
          *v60 = v60;
          VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations(*(VIDMM_GLOBAL **)this);
        }
        v1 = v72;
        if ( !(_BYTE)v72 && !VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)this) )
        {
          VIDMM_GLOBAL::ResetCleanupCounters(v61, 1);
          v88 = 1;
        }
        VIDMM_WORKER_THREAD::ProcessPendingTerminations((KSPIN_LOCK **)this, 0, &v79, &v70);
        v62 = *(_QWORD *)this;
        if ( *(_BYTE *)(*(_QWORD *)this + 40554LL) )
        {
          v63 = 0;
          if ( *(_DWORD *)(v62 + 6416) )
          {
            do
            {
              v64 = *(_QWORD *)(v62 + 39992) + 456LL * v63;
              if ( !*(_DWORD *)(v64 + 416) && (*(_BYTE *)(v64 + 420) & 0x40) == 0 )
              {
                if ( *(_DWORD *)(v64 + 8) )
                {
                  do
                  {
                    v65 = *(_DWORD **)(*(_QWORD *)(v62 + 3712) + 8LL * (unsigned int)(v4 + *(_DWORD *)(v64 + 4)));
                    if ( v65[90] != -1 )
                    {
                      if ( (*(_BYTE *)(v64 + 420) & 0x40) == 0 )
                      {
                        v66 = ((v65[14] >> 12) & 1) != 0 ? 0 : v65[4] + 1;
                        if ( v66 == *(_DWORD *)(v64 + 44)
                          || (((v65[14] >> 12) & 1) == 0 ? (v67 = v65[4] + 1) : (v67 = 0), v67 == *(_DWORD *)(v64 + 28)) )
                        {
                          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v62, v63);
                          *(_BYTE *)(v64 + 420) |= 0x40u;
                        }
                      }
                      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v62 + 39920))(
                        *(_QWORD *)(v62 + 39928),
                        (unsigned int)v65[90],
                        0LL);
                    }
                    ++v4;
                  }
                  while ( (unsigned int)v4 < *(_DWORD *)(v64 + 8) );
                }
                v4 = 0;
              }
              ++v63;
            }
            while ( v63 < *(_DWORD *)(v62 + 6416) );
            v1 = v72;
          }
          *(_BYTE *)(v62 + 40554) = 0;
        }
      }
      v7 = v88;
      v6 = v87;
      if ( (_BYTE)v1 )
        goto LABEL_5;
      v68 = *((unsigned int *)this + 5);
    }
    while ( (_DWORD)v68 == *((_DWORD *)this + 4) );
    VIDMM_WORKER_THREAD::SetWorkerThreadStatus(this, v68);
    if ( *((_DWORD *)this + 5) == 2 )
      break;
    v7 = v88;
  }
  ObfDereferenceObject(*((PVOID *)this + 1));
  PsTerminateSystemThread(0);
}
