/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0064A40 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00116D8 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_iq @ 0x1C001D4C0 (Template_iq.c)
 *     Template_ppp @ 0x1C001D53C (Template_ppp.c)
 *     Template_ppx @ 0x1C001D5B8 (Template_ppx.c)
 *     Template_ppxx @ 0x1C001D63C (Template_ppxx.c)
 *     Template_qqtqttp @ 0x1C001D6D0 (Template_qqtqttp.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0041B8C (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0041BA4 (-SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0041C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004222C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0043318 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0043340 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0049A4C (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055944 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0056550 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0061470 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00798C8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007AA08 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C007EDB4 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C007FA78 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C007FBBC (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0080BFC (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C0086104 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0086790 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0086830 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C0086F2C (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0087068 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0087510 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00878B8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  int v1; // r12d
  VIDMM_WORKER_THREAD *v2; // r13
  struct _KTHREAD *CurrentThread; // rcx
  struct VIDMM_PAGING_QUEUE_PACKET *v4; // r15
  __int64 v5; // rcx
  unsigned __int8 v6; // r14
  char v7; // al
  union _LARGE_INTEGER *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdi
  NTSTATUS v11; // esi
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  DXGPUSHLOCK *v18; // rsi
  __int64 **v19; // rdi
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 **v27; // rdi
  __int64 *v28; // rbx
  __int64 v29; // rax
  PRKEVENT *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct VIDMM_DEVICE *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  VIDMM_PAGING_QUEUE *v38; // rax
  VIDMM_PAGING_QUEUE *v39; // rsi
  bool v40; // zf
  __int64 *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  bool v47; // bl
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ebx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  bool v57; // bl
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  bool v64; // bl
  _QWORD *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdx
  int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rbx
  VIDMM_COMMIT_TELEMETRY *v73; // r14
  char v74; // r11
  unsigned __int8 v75; // r10
  _QWORD *v76; // rdx
  __int64 v77; // rax
  VIDMM_PAGING_QUEUE *v78; // rdx
  VIDMM_PAGING_QUEUE **v79; // rcx
  VIDMM_PAGING_QUEUE **v80; // rcx
  VIDMM_PAGING_QUEUE *v81; // rdx
  VIDMM_PAGING_QUEUE **v82; // rcx
  VIDMM_PAGING_QUEUE *v83; // rdx
  VIDMM_PAGING_QUEUE **v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  char *v89; // r13
  unsigned __int8 v90; // bl
  __int64 v91; // rdx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rcx
  _DWORD *v95; // rdi
  int v96; // eax
  int v97; // ebx
  __int64 v98; // rax
  __int64 *v99; // r15
  char v100; // r13
  unsigned int v101; // r12d
  VIDMM_PROCESS_BUDGET_STATE *v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  int v106; // r9d
  _QWORD *v107; // r10
  int v108; // r9d
  unsigned int *v109; // rdi
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // r10
  __int64 i; // rax
  _QWORD *v117; // rax
  unsigned __int64 v118; // r9
  __int64 v119; // r8
  __int64 v120; // rbx
  __int64 v121; // rax
  VIDMM_GLOBAL *v122; // rax
  __int64 v123; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET **v124; // rcx
  VIDMM_PAGING_QUEUE *v125; // rcx
  VIDMM_PAGING_QUEUE **v126; // rax
  struct _KEVENT *v127; // rcx
  __int64 v128; // rcx
  int v129; // edi
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rcx
  _BOOL8 v133; // rbx
  VIDMM_WORKER_THREAD *v134; // rax
  VIDMM_PAGING_QUEUE *v135; // rbx
  __int64 v136; // rax
  struct VIDMM_ALLOC *v137; // r8
  int v138; // esi
  int v139; // eax
  const CHAR *v140; // r8
  struct VIDMM_DEVICE *v141; // rax
  int v142; // ebx
  ULONG v143; // edi
  int v144; // ebx
  ULONG TimeIncrement; // eax
  struct VIDMM_DEVICE *v146; // rbx
  VIDMM_DEVICE *v147; // rsi
  struct VIDMM_DEVICE *v148; // rdi
  VIDMM_GLOBAL *v149; // rbx
  char v150; // si
  unsigned int v151; // r14d
  __int64 v152; // rdi
  __int64 v153; // r11
  __int64 v154; // rcx
  unsigned __int64 v155; // r10
  char v156; // al
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  VIDMM_GLOBAL *v161; // rbx
  __int64 v162; // rdi
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // r8
  int v166; // r9d
  bool v167; // bl
  VIDMM_GLOBAL *v168; // rbx
  __int64 v169; // r14
  unsigned __int8 v170; // bl
  unsigned int j; // edi
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // r11
  _QWORD **v175; // rdx
  _QWORD **v176; // r10
  _QWORD *v177; // rcx
  _QWORD **v178; // r9
  _QWORD *v179; // r8
  __int64 v180; // rax
  int v181; // r9d
  __int64 **v182; // rdx
  __int64 *v183; // rax
  __int64 v184; // rcx
  __int64 *k; // r8
  __int64 *v186; // rcx
  __int64 v187; // rcx
  VIDMM_GLOBAL *v188; // r14
  VIDMM_GLOBAL **v189; // r15
  __int64 v190; // rcx
  __int64 v191; // r8
  int v192; // r9d
  bool v193; // bl
  __int64 v194; // rdx
  __int64 v195; // r8
  VIDMM_GLOBAL *v196; // rbx
  VIDMM_GLOBAL *v197; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v198; // rdi
  VIDMM_GLOBAL **v199; // rax
  VIDMM_GLOBAL *v200; // rsi
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rcx
  VIDMM_GLOBAL **v204; // rdx
  __int64 v205; // rdx
  VIDMM_GLOBAL *v206; // rcx
  _QWORD *v207; // rax
  VIDMM_GLOBAL *v208; // rdi
  __int64 v209; // rsi
  unsigned int v210; // r8d
  __int64 v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rcx
  char v214; // bl
  __int64 v215; // rdx
  __int64 v216; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v218; // rcx
  VIDMM_GLOBAL *v219; // rsi
  unsigned int m; // r15d
  __int64 v221; // rbx
  unsigned int n; // r14d
  _DWORD *v223; // rdi
  int v224; // eax
  int v225; // eax
  int v226; // edx
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  char v228; // [rsp+50h] [rbp-B0h]
  bool v229; // [rsp+51h] [rbp-AFh] BYREF
  char v230; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v231; // [rsp+53h] [rbp-ADh]
  char v232; // [rsp+54h] [rbp-ACh]
  bool v233; // [rsp+55h] [rbp-ABh] BYREF
  char v234; // [rsp+56h] [rbp-AAh]
  bool v235; // [rsp+57h] [rbp-A9h] BYREF
  int v236; // [rsp+58h] [rbp-A8h]
  int v237; // [rsp+5Ch] [rbp-A4h]
  VIDMM_PAGING_QUEUE *v238; // [rsp+60h] [rbp-A0h]
  int v239; // [rsp+68h] [rbp-98h]
  int v240; // [rsp+6Ch] [rbp-94h]
  VIDMM_WORKER_THREAD *v241; // [rsp+70h] [rbp-90h]
  struct VIDMM_DEVICE *v242; // [rsp+78h] [rbp-88h]
  struct VIDMM_ALLOC *v243; // [rsp+80h] [rbp-80h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v244; // [rsp+88h] [rbp-78h]
  bool v245; // [rsp+90h] [rbp-70h] BYREF
  char *v246; // [rsp+98h] [rbp-68h]
  _DWORD *v247; // [rsp+A0h] [rbp-60h]
  VIDMM_COMMIT_TELEMETRY *v248; // [rsp+A8h] [rbp-58h]
  struct VIDMM_DEVICE *v249; // [rsp+B0h] [rbp-50h]
  __int64 v250; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v252; // [rsp+C8h] [rbp-38h]
  struct VIDMM_ALLOC *v253; // [rsp+D0h] [rbp-30h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v255[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v256[24]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v257[10]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v258[6]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v259[15]; // [rsp+190h] [rbp+90h] BYREF

  v2 = this;
  v241 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v2 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  v4 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v2 + 15) + 24LL), Executive, 0, 0, 0LL);
  VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v2, 1);
  v6 = 0;
  LOBYTE(v1) = 0;
  v252 = *((_QWORD *)v2 + 15);
  v5 = v252;
  v231 = 0;
  *((_QWORD *)v2 + 17) = 0x8000000000000000uLL;
  v237 = v1;
  Object = (PVOID)(v5 + 24);
  v7 = 0;
  v235 = 0;
  v233 = 0;
  while ( 1 )
  {
    if ( (_BYTE)v1 || v233 || v7 )
      *((_QWORD *)v2 + 17) = 0LL;
    v8 = (union _LARGE_INTEGER *)&v250;
    v250 = *((_QWORD *)v2 + 17);
    if ( v250 == 0x8000000000000000uLL )
      v8 = 0LL;
    v9 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v8, 0LL);
    v10 = *(_QWORD *)v2;
    v11 = v9;
    v12 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v10 + 4608) = v12 * KeQueryTimeIncrement();
    v14 = *(_QWORD *)v2;
    v15 = *(_QWORD *)(*(_QWORD *)v2 + 4608LL);
    v16 = v15 - *(_QWORD *)(*(_QWORD *)v2 + 7088LL);
    if ( v16 > qword_1C002F2F8 )
    {
      *(_QWORD *)(v14 + 7072) = 0LL;
      *(_DWORD *)(v14 + 7080) = 0;
      *(_QWORD *)(v14 + 7088) = v15;
    }
    v233 = 0;
    v232 = 0;
    *((_BYTE *)v2 + 128) = 0;
    v236 = 0;
    v228 = 0;
    v234 = 0;
    if ( !v11 )
    {
      v16 = *((unsigned int *)v2 + 5);
      if ( (_DWORD)v16 == *((_DWORD *)v2 + 4) )
      {
LABEL_22:
        *((_DWORD *)v2 + 36) = 0;
      }
      else
      {
        v14 = 1LL;
        *((_DWORD *)v2 + 36) = 1;
        if ( (unsigned int)(v16 - 2) <= 2 )
        {
          KeWaitForSingleObject((PVOID)(*(_QWORD *)v2 + 40800LL), Executive, 0, 0, 0LL);
          v17 = *(_QWORD *)v2;
          v18 = (DXGPUSHLOCK *)(*(_QWORD *)v2 + 39912LL);
          DXGPUSHLOCK::AcquireExclusive(v18);
          v19 = (__int64 **)(v17 + 39896);
          while ( 1 )
          {
            v20 = *v19;
            v21 = **v19;
            if ( (__int64 **)(*v19)[1] != v19 || *(__int64 **)(v21 + 8) != v20 )
              __fastfail(3u);
            *v19 = (__int64 *)v21;
            *(_QWORD *)(v21 + 8) = v19;
            if ( v20 == (__int64 *)v19 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v20[2] + 24LL))(
              v20[2],
              0LL,
              v20[3],
              v20[4]);
            operator delete(v20);
          }
          *((_QWORD *)v18 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v18, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_DWORD)v16 == 1 )
        {
          VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v2, 1);
        }
      }
      LOBYTE(v1) = 1;
      v237 = v1;
      goto LABEL_24;
    }
    if ( v11 != 258 )
      goto LABEL_22;
LABEL_24:
    if ( *((_QWORD *)v2 + 17) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_iq(v16, v14, v13);
    v22 = *(_QWORD *)v2;
    *((_QWORD *)v2 + 17) = 0x8000000000000000uLL;
    v23 = v22 + 39912;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 39912, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v22 + 39928);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockExclusiveEx(v22 + 39912, 0LL);
    }
    v27 = (__int64 **)(v22 + 39896);
    *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
    while ( 1 )
    {
      v28 = *v27;
      v29 = **v27;
      if ( (__int64 **)(*v27)[1] != v27 || *(__int64 **)(v29 + 8) != v28 )
        __fastfail(3u);
      *v27 = (__int64 *)v29;
      *(_QWORD *)(v29 + 8) = v27;
      if ( v28 == (__int64 *)v27 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v28[2] + 24LL))(
        v28[2],
        0LL,
        v28[3],
        v28[4]);
      operator delete(v28);
    }
    *(_QWORD *)(v23 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v23, 0LL);
    KeLeaveCriticalRegion();
    if ( !(_BYTE)v1 && !v6 && !v235 )
      break;
    v244 = 0LL;
    v33 = 0LL;
    v242 = 0LL;
    v231 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v2 + 104, 0LL);
    *((_QWORD *)v2 + 14) = KeGetCurrentThread();
    v38 = (VIDMM_WORKER_THREAD *)((char *)v2 + 72);
    v39 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v2 + 9);
    v238 = v39;
    if ( v39 != (VIDMM_WORKER_THREAD *)((char *)v2 + 72) )
    {
      v83 = *(VIDMM_PAGING_QUEUE **)v39;
      v84 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v39 + 1);
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v39 + 8LL) != v39 || *v84 != v39 )
        __fastfail(3u);
      *v84 = v83;
      *((_QWORD *)v83 + 1) = v84;
      v80 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v2 + 10);
      *(_QWORD *)v39 = v38;
      *((_QWORD *)v39 + 1) = v80;
      if ( *v80 != v38 )
        __fastfail(3u);
      goto LABEL_123;
    }
    v40 = *((_DWORD *)v2 + 5) == 1;
    v39 = 0LL;
    v238 = 0LL;
    if ( !v40 )
      goto LABEL_87;
    v41 = *(__int64 **)v2;
    v42 = *(_QWORD *)v2 + 41208LL;
    if ( *(_QWORD *)v2 != -41208LL && *(struct _KTHREAD **)(*(_QWORD *)v2 + 41216LL) == KeGetCurrentThread() )
    {
      v43 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      *(_QWORD *)(v43 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v43);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v42, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v46 = *(_DWORD *)(v42 + 16);
        if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v44, &EventBlockThread, v45, v46);
      }
      ExAcquirePushLockSharedEx(v42, 0LL);
    }
    v47 = v41[5154] == (_QWORD)(v41 + 5154);
    ExReleasePushLockSharedEx(v42, 0LL);
    KeLeaveCriticalRegion();
    if ( v47 )
    {
      if ( v42 && *(struct _KTHREAD **)(v42 + 8) == KeGetCurrentThread() )
      {
        v53 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        *(_QWORD *)(v53 + 24) = 1155LL;
        WdLogEvent5_WdAssertion(v53);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v42, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v56 = *(_DWORD *)(v42 + 16);
          if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v54, &EventBlockThread, v55, v56);
        }
        ExAcquirePushLockSharedEx(v42, 0LL);
      }
      v57 = v41[5156] == (_QWORD)(v41 + 5156);
      ExReleasePushLockSharedEx(v42, 0LL);
      KeLeaveCriticalRegion();
      if ( v57 )
      {
        if ( v42 && *(struct _KTHREAD **)(v42 + 8) == KeGetCurrentThread() )
        {
          v60 = WdLogNewEntry5_WdAssertion(v59, v58, v50, v51);
          *(_QWORD *)(v60 + 24) = 1155LL;
          WdLogEvent5_WdAssertion(v60);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v42, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v63 = *(_DWORD *)(v42 + 16);
            if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v61, &EventBlockThread, v62, v63);
          }
          ExAcquirePushLockSharedEx(v42, 0LL);
        }
        v64 = v41[5158] == (_QWORD)(v41 + 5158);
        ExReleasePushLockSharedEx(v42, 0LL);
        KeLeaveCriticalRegion();
        if ( v64 )
        {
          v231 = 0;
          v242 = 0LL;
          goto LABEL_104;
        }
        v52 = 3;
      }
      else
      {
        v52 = 2;
      }
    }
    else
    {
      v52 = 1;
    }
    v231 = 1;
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v255, (struct _KTHREAD **)v42, v50, v51);
    v33 = (struct VIDMM_DEVICE *)(v41[2 * (unsigned int)(v52 - 1) + 5154] - 168);
    v242 = v33;
    if ( v52 == 2 )
    {
      v65 = (_QWORD *)*((_QWORD *)v33 + 26);
      if ( v65 )
      {
        v66 = v65[24];
        if ( v66 > *(_QWORD *)(*v65 + 4608LL) )
        {
          v67 = v41[576] - v66;
          v68 = 8;
LABEL_80:
          VIDMM_WORKER_THREAD::SetTimeout(*v41, v67, v68);
          v33 = 0LL;
          v242 = 0LL;
        }
      }
    }
    else if ( v52 == 3 )
    {
      v69 = v41[576];
      v70 = *((_QWORD *)v33 + 23);
      if ( v69 < v70 )
      {
        v67 = v69 - v70;
        v68 = 6;
        goto LABEL_80;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v255);
    if ( v33 && (*((_DWORD *)v33 + 13) & 3) == 1 )
    {
      v39 = v238;
      goto LABEL_87;
    }
LABEL_104:
    v39 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v2 + 7);
    v38 = (VIDMM_WORKER_THREAD *)((char *)v2 + 56);
    v238 = v39;
    if ( v39 == (VIDMM_WORKER_THREAD *)((char *)v2 + 56) )
    {
      v40 = *((_BYTE *)v2 + 184) == 0;
      v39 = 0LL;
      v238 = 0LL;
      if ( !v40 )
      {
        v77 = *(_QWORD *)v2;
        *((_BYTE *)v2 + 184) = 0;
        *((_QWORD *)v2 + 24) = *(_QWORD *)(v77 + 4608);
      }
      if ( v33 && *(_QWORD *)(*(_QWORD *)v2 + 4608LL) - *((_QWORD *)v2 + 24) >= qword_1C002F3A8 )
        goto LABEL_111;
      v39 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v2 + 5);
      v38 = (VIDMM_WORKER_THREAD *)((char *)v2 + 40);
      v238 = v39;
      if ( v39 == (VIDMM_WORKER_THREAD *)((char *)v2 + 40) )
      {
        v39 = 0LL;
        v238 = 0LL;
LABEL_111:
        *((_BYTE *)v2 + 184) = 1;
        goto LABEL_87;
      }
      v78 = *(VIDMM_PAGING_QUEUE **)v39;
      v79 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v39 + 1);
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v39 + 8LL) != v39 || *v79 != v39 )
        __fastfail(3u);
      *v79 = v78;
      *((_QWORD *)v78 + 1) = v79;
      v80 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v2 + 6);
      *(_QWORD *)v39 = v38;
      *((_QWORD *)v39 + 1) = v80;
      if ( *v80 != v38 )
        __fastfail(3u);
    }
    else
    {
      v81 = *(VIDMM_PAGING_QUEUE **)v39;
      v82 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v39 + 1);
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v39 + 8LL) != v39 || *v82 != v39 )
        __fastfail(3u);
      *v82 = v81;
      *((_QWORD *)v81 + 1) = v82;
      v80 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v2 + 8);
      *(_QWORD *)v39 = v38;
      *((_QWORD *)v39 + 1) = v80;
      if ( *v80 != v38 )
        __fastfail(3u);
    }
LABEL_123:
    *v80 = v39;
    *((_QWORD *)v38 + 1) = v39;
    v85 = (_QWORD *)((char *)v39 + 32);
    v4 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v39 + 4);
    v33 = (struct VIDMM_DEVICE *)*((_QWORD *)v39 + 17);
    v242 = v33;
    v244 = v4;
    v86 = *(_QWORD *)v4;
    if ( *((VIDMM_PAGING_QUEUE **)v4 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v39 + 32)
      || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v86 + 8) != v4 )
    {
      __fastfail(3u);
    }
    *v85 = v86;
    *(_QWORD *)(v86 + 8) = v85;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
LABEL_87:
    *((_QWORD *)v2 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 104, 0LL);
    KeLeaveCriticalRegion();
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
        Template_ppp(v71, &EventVidMmSelectOperation, v31, *((_QWORD *)v33 + 3), v39, v4);
      if ( v39 && *((_BYTE *)v4 + 24) && *((_DWORD *)v4 + 12) == 206 )
      {
        v72 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v4 + 17) = v72 * KeQueryTimeIncrement();
      }
    }
    v73 = (VIDMM_WORKER_THREAD *)((char *)v2 + 152);
    v248 = (VIDMM_WORKER_THREAD *)((char *)v2 + 152);
LABEL_95:
    while ( 2 )
    {
      while ( 2 )
      {
        v74 = v228;
        while ( 1 )
        {
LABEL_96:
          v75 = 0;
          v243 = 0LL;
          v229 = 0;
          *((_QWORD *)v73 + 1) = 0LL;
          *((_QWORD *)v73 + 2) = 0LL;
          *(_QWORD *)v73 = 0LL;
          *((_BYTE *)v73 + 24) = 0;
          v230 = 0;
          v240 = 2;
          if ( v33 )
          {
            v32 = *((_QWORD *)v33 + 2);
            v230 = 0;
            if ( v32 )
            {
              v31 = 0LL;
              if ( *(_DWORD *)(*(_QWORD *)v33 + 6416LL) )
              {
                while ( 1 )
                {
                  v76 = (_QWORD *)(*(_QWORD *)(v32 + 48) + 240LL * (unsigned int)v31);
                  if ( v76[22] > v76[3] || v76[23] > v76[4] )
                    break;
                  v31 = (unsigned int)(v31 + 1);
                  if ( (unsigned int)v31 >= *(_DWORD *)(*(_QWORD *)v33 + 6416LL) )
                    goto LABEL_127;
                }
                v75 = 1;
                v230 = 1;
              }
LABEL_127:
              v87 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 32LL);
              if ( *(_BYTE *)(v87 + 314) )
              {
                v240 = 0;
                LOBYTE(v31) = 1;
                goto LABEL_133;
              }
              if ( (*(_DWORD *)(v87 + 316) & 1) != 0 )
              {
                v240 = 1;
                LOBYTE(v31) = 1;
                goto LABEL_133;
              }
            }
            v240 = 2;
          }
          LOBYTE(v31) = 0;
LABEL_133:
          v88 = v75 + 2LL * v236;
          v30 = (PRKEVENT *)&unk_1C0026530;
          v89 = (char *)&unk_1C0026530 + 24 * v88 + 12 * (unsigned __int8)v31;
          v246 = v89;
          if ( !v39 )
            break;
          v90 = v89[8];
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppx((__int64)&unk_1C0026530, v88, v31, v39, v4, *((_QWORD *)v4 + 5));
          if ( *((_BYTE *)v4 + 24) )
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            v93 = (_QWORD *)WdLogNewEntry5_WdEvent(v92, v91);
            v94 = *((int *)v4 + 12);
            v95 = (_DWORD *)((char *)v4 + 48);
            v247 = (_DWORD *)((char *)v4 + 48);
            v93[3] = v94;
            v93[4] = v4;
            v93[5] = *((_QWORD *)v4 + 8);
            v93[6] = *((_QWORD *)v4 + 7);
            v93[7] = *((_QWORD *)v4 + 4);
            WdLogEvent5_WdEvent(v93);
            v96 = VIDMM_GLOBAL::ProcessDeferredCommand(
                    *(VIDMM_GLOBAL **)v241,
                    (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v4 + 48),
                    &v229,
                    *((_BYTE *)v4 + 25),
                    *((_QWORD *)v4 + 4),
                    *((struct _VIDSCH_SYNC_OBJECT **)v39 + 11),
                    v90,
                    &v243);
            v40 = *((_BYTE *)v4 + 24) == 0;
            v97 = v96;
            v239 = v96;
            if ( v40 )
            {
              v98 = *((_QWORD *)v4 + 9);
              if ( !v98 )
              {
                v98 = *((_QWORD *)v4 + 8);
                if ( v98 )
                  v98 = *(_QWORD *)(v98 + 8);
              }
            }
            else
            {
              v98 = *((_QWORD *)v4 + 7);
            }
            v99 = *(__int64 **)(v98 + 16);
            v100 = 0;
            v101 = 0;
            if ( *(_DWORD *)(*v99 + 6416) )
            {
              do
              {
                v102 = (VIDMM_PROCESS_BUDGET_STATE *)(v99[6] + 240LL * v101);
                if ( v99 != (__int64 *)-304LL && (struct _KTHREAD *)v99[39] == KeGetCurrentThread() )
                {
                  v103 = WdLogNewEntry5_WdAssertion(v30, v88, v31, v32);
                  *(_QWORD *)(v103 + 24) = 1155LL;
                  WdLogEvent5_WdAssertion(v103);
                }
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v99 + 38, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v106 = *((_DWORD *)v99 + 80);
                    if ( v106 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                      Template_q(v104, &EventBlockThread, v105, v106);
                  }
                  ExAcquirePushLockSharedEx(v99 + 38, 0LL);
                }
                v107 = (_QWORD *)((char *)v102 + 160);
                v108 = 0;
                v109 = (unsigned int *)(264LL * v101 + *(_QWORD *)(*v99 + 40888) + 224LL);
                while ( 1 )
                {
                  v110 = *(v107 - 3);
                  if ( v108 == 1 )
                  {
                    v111 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v102);
                    v110 = v111 + v112;
                  }
                  v113 = *v109;
                  if ( v110 > *v107 * (v113 + 100) / 0x64uLL || v110 < *v107 * (100 - v113) / 0x64uLL )
                    break;
                  ++v108;
                  ++v109;
                  ++v107;
                  if ( v108 >= 2 )
                    goto LABEL_160;
                }
                v100 = 1;
LABEL_160:
                ExReleasePushLockSharedEx(v99 + 38, 0LL);
                KeLeaveCriticalRegion();
                v114 = *v99;
                ++v101;
              }
              while ( v101 < *(_DWORD *)(*v99 + 6416) );
              if ( v100 )
              {
                v31 = *(unsigned int *)(v114 + 6416);
                v88 = 0LL;
                v32 = *v99;
                if ( (_DWORD)v31 )
                {
                  v115 = *(_QWORD *)(v114 + 40888);
                  while ( 2 )
                  {
                    v30 = (PRKEVENT *)(v115 + 264LL * (unsigned int)v88);
                    for ( i = 0LL; i < 2; ++i )
                    {
                      if ( *((_BYTE *)v30 + i + 256) )
                      {
                        _InterlockedIncrement64((volatile signed __int64 *)(v32 + 41280));
                        v30 = *(PRKEVENT **)v32;
                        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v32 + 8LL) )
                          KeSetEvent(v30[15], 0, 0);
                        goto LABEL_171;
                      }
                    }
                    v88 = (unsigned int)(v88 + 1);
                    if ( (unsigned int)v88 < (unsigned int)v31 )
                      continue;
                    break;
                  }
                }
              }
LABEL_171:
              v4 = v244;
              v97 = v239;
              v95 = v247;
              v73 = v248;
              v33 = v242;
              v89 = v246;
              v39 = v238;
            }
            else
            {
              v4 = v244;
              v33 = v242;
              v89 = v246;
            }
          }
          else
          {
            v117 = (_QWORD *)WdLogNewEntry5_WdEvent(v30, v88);
            v95 = (_DWORD *)((char *)v4 + 48);
            v117[3] = *((int *)v4 + 12);
            v117[4] = v4;
            v117[5] = *((unsigned __int8 *)v4 + 25);
            v117[6] = *((_QWORD *)v4 + 4);
            WdLogEvent5_WdEvent(v117);
            v243 = 0LL;
            v118 = *((_QWORD *)v4 + 4);
            v119 = *((unsigned __int8 *)v4 + 25);
            Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v39 + 11);
            v229 = 0;
            v97 = VIDMM_GLOBAL::ProcessSystemCommand(
                    *(VIDMM_GLOBAL **)v241,
                    (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v4 + 48),
                    v119,
                    v118,
                    Timeout);
            v239 = v97;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppxx((__int64)v30, &EventPagingQueueComplete, v31, v39, v4, *((_QWORD *)v4 + 5), 0LL);
          if ( v97 == -1071775232 )
          {
            v239 = 0;
          }
          else if ( *((_BYTE *)v4 + 24) && (!v229 || *((_BYTE *)v4 + 120)) && *((_QWORD *)v4 + 9) )
          {
            v239 = 0;
          }
          else if ( v97 < 0 )
          {
            goto LABEL_204;
          }
          if ( *((_BYTE *)v4 + 24) )
          {
            if ( *v95 == 206 )
            {
              v120 = MEMORY[0xFFFFF78000000320];
              v121 = v120 * KeQueryTimeIncrement();
              *((_QWORD *)v4 + 18) = v121;
              if ( v121 - *((_QWORD *)v4 + 16) > 1000000 )
              {
                v122 = *(VIDMM_GLOBAL **)v241;
                if ( !*((_BYTE *)v73 + 24) )
                {
                  *((_QWORD *)v73 + 1) = v33;
                  *((_QWORD *)v73 + 2) = 0LL;
                  *(_QWORD *)v73 = v122;
                  *((_BYTE *)v73 + 24) = 1;
                }
                VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v73, v4);
                *((_QWORD *)v73 + 1) = 0LL;
                *((_QWORD *)v73 + 2) = 0LL;
                *(_QWORD *)v73 = 0LL;
                *((_BYTE *)v73 + 24) = 0;
              }
            }
          }
          v123 = *((_QWORD *)v39 + 10) + 104LL;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v123, 0LL);
          *(_QWORD *)(v123 + 8) = KeGetCurrentThread();
          v124 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v39 + 3);
          *(_QWORD *)v4 = (char *)v39 + 16;
          *((_QWORD *)v4 + 1) = v124;
          if ( *v124 != (VIDMM_PAGING_QUEUE *)((char *)v39 + 16) )
            __fastfail(3u);
          *v124 = v4;
          *((_QWORD *)v39 + 3) = v4;
          if ( *((VIDMM_PAGING_QUEUE **)v39 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v39 + 32)
            && *((_DWORD *)v39 + 28) == 1 )
          {
            v125 = *(VIDMM_PAGING_QUEUE **)v39;
            v126 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v39 + 1);
            if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v39 + 8LL) != v39 || *v126 != v39 )
              __fastfail(3u);
            *v126 = v125;
            *((_QWORD *)v125 + 1) = v126;
            v127 = (struct _KEVENT *)*((_QWORD *)v39 + 15);
            *(_QWORD *)v39 = 0LL;
            *((_QWORD *)v39 + 1) = 0LL;
            *((_DWORD *)v39 + 28) = 0;
            KeSetEvent(v127, 0, 0);
          }
          v128 = *((_QWORD *)v39 + 10) + 104LL;
          *(_QWORD *)(v128 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v128, 0LL);
          KeLeaveCriticalRegion();
          v74 = v228;
          if ( v228 != 1 )
          {
            v97 = v239;
            goto LABEL_204;
          }
          v39 = 0LL;
          v238 = 0LL;
          v4 = 0LL;
          v244 = 0LL;
        }
        if ( !v33 )
        {
          v1 = v231;
          v237 = v231;
          goto LABEL_258;
        }
        if ( v74 == 1 && (gVidMmGlobalFault & 0x10000) != 0 )
        {
          v97 = -1073741823;
          v229 = 0;
        }
        else
        {
          v97 = VIDMM_DEVICE::Resume(v33, v89[8], &v229, &v243);
LABEL_204:
          v75 = v230;
        }
        v129 = v240;
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          Template_qqtqttp((__int64)v243, v229, (unsigned __int8)v89[8], v97, v236, v75, v240, v89[8], v229, (char)v243);
        if ( v97 >= 0 )
          goto LABEL_257;
        if ( v234 )
        {
          v130 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v88, v31, v32);
          v130[3] = 270LL;
          v130[4] = 54LL;
          v130[5] = v33;
          v130[6] = v39;
          v130[7] = v4;
          WdLogEvent5_WdCriticalError(v130);
        }
        v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v30);
        v132 = v97;
        v133 = v229;
        v131[5] = v132;
        v131[3] = v4;
        v131[4] = v33;
        v131[6] = v133;
        WdLogEvent5_WdWarning(v131);
        v134 = v241;
        *((_BYTE *)v241 + 128) = 1;
        if ( !v133 )
        {
LABEL_235:
          v234 = 1;
          v141 = v33;
          if ( v39 && *((_BYTE *)v4 + 24) )
          {
            v40 = *((_QWORD *)v4 + 9) == 0LL;
            *((_BYTE *)v4 + 120) = 1;
            if ( v40 )
            {
              v141 = (struct VIDMM_DEVICE *)*((_QWORD *)v4 + 7);
              if ( !v141 )
              {
                v141 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v4 + 8) + 8LL);
                goto LABEL_240;
              }
LABEL_241:
              v30 = (PRKEVENT *)*((_QWORD *)v141 + 4);
              if ( v30 )
                VidSchiMarkDeviceAsError((__int64)v30, 12);
            }
          }
          else
          {
LABEL_240:
            if ( v141 )
              goto LABEL_241;
          }
          if ( v229 )
          {
            v236 = 0;
            continue;
          }
          if ( v39 )
            VIDMM_PAGING_QUEUE::ReclaimPacket(v39, v4);
LABEL_257:
          v1 = v237;
LABEL_258:
          v2 = v241;
          if ( *((_DWORD *)v241 + 5) == 1 )
          {
            v149 = *(VIDMM_GLOBAL **)v241;
            v150 = 0;
            v151 = 0;
            if ( *(_DWORD *)(*(_QWORD *)v241 + 6416LL) )
            {
              do
              {
                v32 = 232LL;
                v152 = 264LL * v151;
                v153 = 2LL;
                v31 = v152 + *((_QWORD *)v149 + 5111) + 256LL;
                do
                {
                  v154 = v152 + *((_QWORD *)v149 + 5111);
                  v155 = *(_QWORD *)(v32 + v154 - 216);
                  if ( v155 )
                    v156 = (__int64)(100 - 100LL * *(_QWORD *)(v32 + v154) / v155) < (unsigned int)dword_1C002F378;
                  else
                    v156 = 0;
                  if ( v156 != *(_BYTE *)v31 )
                  {
                    v150 = 1;
                    *(_BYTE *)v31 = v156;
                  }
                  v32 += 8LL;
                  ++v31;
                  --v153;
                }
                while ( v153 );
                ++v151;
              }
              while ( v151 < *((_DWORD *)v149 + 1604) );
            }
            v40 = ((unsigned __int8)v150 | *((_BYTE *)v2 + 128)) == 0;
            *((_BYTE *)v2 + 128) |= v150;
            if ( !v40 )
              VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v2, 0);
            VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v2, &v235, v31, v32);
            v161 = *(VIDMM_GLOBAL **)v2;
            v162 = *(_QWORD *)v2 + 41208LL;
            if ( *(_QWORD *)v2 != -41208LL && *(struct _KTHREAD **)(*(_QWORD *)v2 + 41216LL) == KeGetCurrentThread() )
            {
              v163 = WdLogNewEntry5_WdAssertion(v158, v157, v159, v160);
              *(_QWORD *)(v163 + 24) = 1155LL;
              WdLogEvent5_WdAssertion(v163);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v162, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v166 = *(_DWORD *)(v162 + 16);
                if ( v166 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v164, &EventBlockThread, v165, v166);
              }
              ExAcquirePushLockSharedEx(v162, 0LL);
            }
            v167 = *((_QWORD *)v161 + 5154) == (_QWORD)v161 + 41232;
            ExReleasePushLockSharedEx(v162, 0LL);
            KeLeaveCriticalRegion();
            v1 = (unsigned __int8)v1;
            if ( !v167 )
              v1 = 1;
            v237 = v1;
          }
          goto LABEL_283;
        }
        break;
      }
      v135 = v238;
      while ( 1 )
      {
        v136 = *(_QWORD *)v134;
        v137 = v243;
        if ( !*((_BYTE *)v73 + 24) )
        {
          *((_QWORD *)v73 + 1) = v33;
          *((_QWORD *)v73 + 2) = v137;
          *(_QWORD *)v73 = v136;
          *((_BYTE *)v73 + 24) = 1;
        }
        if ( !v230 )
        {
          VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v73, v89[8]);
          v137 = v243;
        }
        v138 = v236;
        v249 = 0LL;
        v139 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v241, v33, v137);
        if ( !v139 )
          goto LABEL_233;
        if ( v139 == -1071775484 )
          break;
        if ( (**((_DWORD **)v243 + 12) & 0x20000) != 0
          && *((_BYTE *)v4 + 24)
          && *((_DWORD *)v4 + 12) == 203
          && *((_DWORD *)v4 + 20) == 5
          && (*(_BYTE *)(456LL * (*(_DWORD *)(**(_QWORD **)v243 + 76LL) & 0x3F)
                       + *(_QWORD *)(*(_QWORD *)v241 + 40048LL)
                       + 421) & 4) == 0 )
        {
          *((_DWORD *)v4 + 20) = 6;
          v236 = v138;
LABEL_233:
          v39 = v135;
          goto LABEL_95;
        }
        VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(v73, v89[8]);
        if ( v129 <= 0 )
        {
          if ( !v228 )
          {
            v142 = MEMORY[0xFFFFF78000000320];
            v143 = v142 * KeQueryTimeIncrement();
            VIDMM_GLOBAL::EvictForDefragPass(*(VIDMM_GLOBAL **)v241);
            v144 = MEMORY[0xFFFFF78000000320];
            TimeIncrement = KeQueryTimeIncrement();
            VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(v73, v144 * TimeIncrement - v143);
            v74 = 1;
            v236 = v138;
            v39 = v238;
            v228 = 1;
            goto LABEL_96;
          }
          if ( !g_UnrecoverablePagingFailureDebugMode && !KdRefreshDebuggerNotPresent() )
          {
            v140 = "\n"
                   "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                   "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                   "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%"
                   "p)\"\n"
                   "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
            if ( !v4 )
              v140 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to resume device\n";
            DbgPrintEx(0x65u, 0, v140, v33, v4, v135);
            DbgPrintEx(
              0x65u,
              0,
              "\n"
              "We broke into the debugger to allow a chance for debugging this issue.\n"
              "\n"
              "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFai"
              "lureDebugMode=1\"\n"
              "or \"ed 0x%p 1\"\n"
              "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverableP"
              "agingFailureDebugMode=2\"\n"
              "or \"ed 0x%p 2\"\n"
              "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDeb"
              "ugMode=3\"\n"
              "or \"ed 0x%p 3\"\n"
              "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after steppin"
              "g through the code is done.!!!\n"
              "\n",
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode);
            __debugbreak();
          }
          v39 = v135;
          goto LABEL_235;
        }
        v134 = v241;
        --v129;
        v236 = v138;
      }
      v146 = v249;
      v147 = v33;
      v148 = v249;
      if ( (*((_DWORD *)v33 + 13) & 3) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v33, v249) )
      {
        v148 = v33;
        v147 = v146;
      }
      VIDMM_DEVICE::Yield(v147, v148);
      if ( v148 == v33 )
      {
        v39 = v238;
        continue;
      }
      break;
    }
    if ( v238 )
      VIDMM_PAGING_QUEUE::RewindPacket(v238, v4);
    v2 = v241;
    v1 = v237;
LABEL_254:
    v6 = v231;
    v4 = 0LL;
    v7 = v232;
  }
LABEL_283:
  if ( (unsigned int)(*((_DWORD *)v2 + 4) - 3) > 1 )
  {
    if ( dword_1C002F350 )
    {
      v168 = *(VIDMM_GLOBAL **)v2;
      v169 = *(_QWORD *)(*(_QWORD *)v2 + 41280LL);
      if ( v169 == *(_QWORD *)(*(_QWORD *)v2 + 41288LL) )
      {
        v170 = 0;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          Template_q((__int64)v30, &EventVidMmProfilerEnter, v31, 14001);
        for ( j = 0; j < *((_DWORD *)v168 + 1604); ++j )
        {
          memset(v258, 0, sizeof(v258));
          memset(v259, 0, 0xE8uLL);
          DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
            (DXGAUTOPUSHLOCKSHARED *)v256,
            (struct _KTHREAD **)v168 + 5088,
            v172,
            v173);
          VIDMM_GLOBAL::SetupBudgetState(v168, (struct VIDMM_BUDGET_STATE *)v258, j);
          VIDMM_GLOBAL::AssignBudgets(v168, (struct VIDMM_BUDGET_STATE *)v258, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
          if ( *(_QWORD *)(264LL * j + *((_QWORD *)v168 + 5111) + 24) )
          {
            v174 = 0LL;
            v175 = (_QWORD **)v259 + 1;
            do
            {
              v176 = (_QWORD **)*(v175 - 1);
              v177 = v175 - 1;
              if ( v176 != v175 - 1 )
              {
                v178 = v175 - 7;
                v179 = *(v175 - 6);
                if ( (_QWORD **)(*(v175 - 7))[1] != v175 - 7 || (_QWORD **)*v179 != v178 )
                  __fastfail(3u);
                if ( v176[1] != v177 || (_QWORD *)**v175 != v177 )
                  __fastfail(3u);
                *v179 = v177;
                *(v175 - 6) = *v175;
                **v175 = v178;
                *v175 = v179;
                v180 = *v177;
                if ( *(_QWORD **)(*v177 + 8LL) != v177 || (_QWORD *)*v179 != v177 )
                  __fastfail(3u);
                *v179 = v180;
                *(_QWORD *)(v180 + 8) = v179;
                *v175 = v177;
                *v177 = v177;
              }
              ++v174;
              v175 += 2;
            }
            while ( v174 < 3 );
            VIDMM_GLOBAL::AssignBudgets(v168, (struct VIDMM_BUDGET_STATE *)v258, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
          }
          v181 = 0;
          v182 = (__int64 **)v259;
          do
          {
            v183 = *v182;
            v184 = **v182;
            if ( (__int64 **)(*v182)[1] != v182 || *(__int64 **)(v184 + 8) != v183 )
              __fastfail(3u);
            *v182 = (__int64 *)v184;
            *(_QWORD *)(v184 + 8) = v182;
            for ( k = (__int64 *)&v259[v181]; v183 != k; v186[1] = (__int64)v182 )
            {
              *v183 = 0LL;
              v183[1] = 0LL;
              v183 = *v182;
              v186 = (__int64 *)**v182;
              if ( (__int64 **)(*v182)[1] != v182 || (__int64 *)v186[1] != v183 )
                __fastfail(3u);
              *v182 = v186;
            }
            ++v181;
            v182 += 2;
          }
          while ( v181 < 3 );
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v256);
        }
        *((_QWORD *)v168 + 5161) = v169;
        VIDMM_GLOBAL::SendBudgetChangeNotifications(v168);
        v170 = 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          Template_q(v187, &EventVidMmProfilerExit, v31, 14001);
      }
      VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v2, v170, v31, (_QWORD *)v32);
    }
    v188 = *(VIDMM_GLOBAL **)v2;
    if ( qword_1C002F2A8 )
    {
      v189 = (VIDMM_GLOBAL **)((char *)v188 + 39824);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v188 + 39840, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v192 = *((_DWORD *)v188 + 9964);
          if ( v192 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v190, &EventBlockThread, v191, v192);
        }
        ExAcquirePushLockSharedEx((char *)v188 + 39840, 0LL);
      }
      v193 = *v189 != (VIDMM_GLOBAL *)v189;
      ExReleasePushLockSharedEx((char *)v188 + 39840, 0LL);
      KeLeaveCriticalRegion();
      if ( v193 )
      {
        v194 = *((_QWORD *)v188 + 576) - *((_QWORD *)v188 + 879);
        if ( v194 < qword_1C002F2A8 )
        {
          v205 = v194 - qword_1C002F2A8;
        }
        else
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v188 + 39840));
          v196 = *v189;
          while ( v196 != (VIDMM_GLOBAL *)v189 )
          {
            v197 = *(VIDMM_GLOBAL **)v196;
            v198 = (VIDMM_GLOBAL *)((char *)v196 - 400);
            v199 = (VIDMM_GLOBAL **)*((_QWORD *)v196 + 1);
            if ( *(VIDMM_GLOBAL **)(*(_QWORD *)v196 + 8LL) != v196 || *v199 != v196 )
              __fastfail(3u);
            *v199 = v197;
            v200 = v196;
            *((_QWORD *)v197 + 1) = v199;
            v201 = *((_QWORD *)v198 + 59);
            v196 = *(VIDMM_GLOBAL **)v196;
            *((_QWORD *)v198 + 50) = 0LL;
            v202 = *(unsigned int *)(v201 + 4);
            if ( (_DWORD)v202 && (_DWORD)v202 != 3 )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_p(v202, &EventProcessOfferAllocation, v195, v198);
              v203 = *((_QWORD *)v198 + 16);
              if ( !v203 || (*(_DWORD *)(v203 + 56) & 1) != 0 )
              {
                v204 = (VIDMM_GLOBAL **)*((_QWORD *)v188 + 4986);
                *(_QWORD *)v200 = (char *)v188 + 39880;
                *((_QWORD *)v198 + 51) = v204;
                if ( *v204 != (VIDMM_GLOBAL *)((char *)v188 + 39880) )
                  __fastfail(3u);
                *v204 = v200;
                *((_QWORD *)v188 + 4986) = v200;
              }
              else if ( *((_DWORD *)v198 + 30) == 2 )
              {
                VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v203, v198);
              }
            }
          }
          *((_QWORD *)v188 + 4981) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v188 + 39840, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)v188 + 879) = *((_QWORD *)v188 + 576);
          v205 = -qword_1C002F2A8;
        }
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v188, v205, 3);
      }
      v2 = v241;
    }
    v206 = *(VIDMM_GLOBAL **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 7072LL) < (unsigned __int64)qword_1C002F2E8
      && *((_DWORD *)v206 + 1770) < (unsigned int)dword_1C002F2F0 )
    {
      VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v206);
      v207 = (_QWORD *)(*(_QWORD *)v2 + 3720LL);
      v207[1] = v207;
      *v207 = v207;
      v208 = *(VIDMM_GLOBAL **)v2;
      if ( qword_1C002F2A0 )
      {
        v209 = 0x8000000000000000uLL;
        if ( *((_BYTE *)v208 + 40010) )
        {
          v210 = *((_DWORD *)v208 + 926);
          v211 = 0LL;
          if ( v210 )
          {
            while ( 1 )
            {
              v212 = *(_QWORD *)(*((_QWORD *)v208 + 464) + 8 * v211);
              if ( (*(_DWORD *)(v212 + 56) & 0x1001) != 0 && *(_QWORD *)(v212 + 168) != v212 + 168 )
                break;
              v211 = (unsigned int)(v211 + 1);
              if ( (unsigned int)v211 >= v210 )
                goto LABEL_356;
            }
            *((_QWORD *)v208 + 878) = *((_QWORD *)v208 + 576);
            *((_BYTE *)v208 + 40010) = 0;
            v209 = -qword_1C002F2A0;
          }
        }
        else
        {
          v213 = *((_QWORD *)v208 + 576) - *((_QWORD *)v208 + 878);
          if ( v213 < qword_1C002F2A0 )
          {
            v209 = v213 - qword_1C002F2A0;
          }
          else
          {
            VIDMM_GLOBAL::StartPreparation((__int64)v208, qword_1C002F2A0, 0LL, 0LL, 207);
            v214 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v208);
            VIDMM_GLOBAL::EndPreparation(v208, v215, 0LL, 0, 0LL, 0LL);
            if ( !v214 )
              *((_BYTE *)v208 + 40010) = 1;
          }
        }
LABEL_356:
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v208, v209, 2);
      }
    }
    if ( !(_BYTE)v1 && !VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)v2) )
    {
      *(_QWORD *)(v216 + 7088) = *(_QWORD *)(v216 + 4608);
      *(_QWORD *)(v216 + 7072) = 0LL;
      *(_DWORD *)(v216 + 7080) = 0;
      v232 = 1;
    }
    NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)v2, &v233);
    if ( NextPendingTermination )
    {
      memset(v257, 0, sizeof(v257));
      v218 = *(VIDMM_GLOBAL **)v2;
      v257[2] = NextPendingTermination;
      LODWORD(v257[0]) = 200;
      VIDMM_GLOBAL::ProcessDeferredCommand(v218, (struct _VIDMM_DEFERRED_COMMAND *)v257, &v245, 0, 0LL, 0LL, 0, &v253);
    }
    v219 = *(VIDMM_GLOBAL **)v2;
    if ( *(_BYTE *)(*(_QWORD *)v2 + 40610LL) )
    {
      for ( m = 0; m < *((_DWORD *)v219 + 1604); ++m )
      {
        v221 = *((_QWORD *)v219 + 5006) + 456LL * m;
        if ( !*(_DWORD *)(v221 + 416) && (*(_BYTE *)(v221 + 420) & 0x40) == 0 )
        {
          for ( n = 0; n < *(_DWORD *)(v221 + 8); ++n )
          {
            v223 = *(_DWORD **)(*((_QWORD *)v219 + 464) + 8LL * (n + *(_DWORD *)(v221 + 4)));
            if ( v223[90] != -1 )
            {
              if ( (*(_BYTE *)(v221 + 420) & 0x40) == 0 )
              {
                v224 = ((v223[14] >> 12) & 1) != 0 ? 0 : v223[4] + 1;
                if ( v224 == *(_DWORD *)(v221 + 44)
                  || (((v223[14] >> 12) & 1) == 0 ? (v225 = v223[4] + 1) : (v225 = 0), v225 == *(_DWORD *)(v221 + 28)) )
                {
                  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v219, m);
                  *(_BYTE *)(v221 + 420) |= 0x40u;
                }
              }
              (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v219 + 4997))(
                *((_QWORD *)v219 + 4998),
                (unsigned int)v223[90],
                0LL);
            }
          }
        }
      }
      *((_BYTE *)v219 + 40610) = 0;
    }
  }
  if ( (_BYTE)v1 )
    goto LABEL_254;
  v226 = *((_DWORD *)v2 + 5);
  if ( v226 == *((_DWORD *)v2 + 4) )
    goto LABEL_254;
  VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v2, v226);
  if ( *((_DWORD *)v2 + 5) != 2 )
    goto LABEL_254;
  ObfDereferenceObject(*((PVOID *)v2 + 1));
  PsTerminateSystemThread(0);
}
