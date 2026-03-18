/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C00700C0 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C000FBE4 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001DB8C (-IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_iq @ 0x1C001E834 (Template_iq.c)
 *     Template_ppp @ 0x1C001E8B0 (Template_ppp.c)
 *     Template_ppx @ 0x1C001E92C (Template_ppx.c)
 *     Template_ppxx @ 0x1C001E9B0 (Template_ppxx.c)
 *     Template_qqtqttp @ 0x1C001EA44 (Template_qqtqttp.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C004B768 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C004B780 (-SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004BB50 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BF90 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004C060 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C004EB54 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0051EE0 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0059EF0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF64 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B9A0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005D46C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064D90 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0067C00 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0069CC4 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006A894 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C008748C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0088DA0 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C008FF48 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C0090D08 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0090D74 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0091D64 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098630 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C009B3E8 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009BD84 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C009BE20 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C009C2D8 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C009C450 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C009C5D4 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v3; // rcx
  char *v4; // rdi
  unsigned __int8 v5; // r12
  char v6; // r14
  unsigned __int8 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // bl
  union _LARGE_INTEGER *v13; // rbx
  _QWORD *v14; // rax
  NTSTATUS v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  DXGPUSHLOCK *v24; // rsi
  __int64 **v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  __int64 **v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rsi
  __int64 v39; // rdi
  struct VIDMM_PAGING_QUEUE_PACKET *v40; // r14
  struct VIDMM_DEVICE *v41; // r12
  VIDMM_PAGING_QUEUE *v42; // rax
  VIDMM_PAGING_QUEUE *v43; // r13
  int v44; // eax
  __int64 *v45; // rbx
  int v46; // edx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  VIDMM_PAGING_QUEUE *v56; // rdx
  VIDMM_PAGING_QUEUE **v57; // rcx
  VIDMM_PAGING_QUEUE **v58; // rcx
  VIDMM_PAGING_QUEUE *v59; // rdx
  VIDMM_PAGING_QUEUE **v60; // rcx
  VIDMM_PAGING_QUEUE *v61; // rdx
  VIDMM_PAGING_QUEUE **v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  GUID *v68; // rsi
  char v69; // r11
  struct VIDMM_GLOBAL **v70; // rbx
  unsigned __int8 v71; // r10
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  char *v74; // r15
  char v75; // bl
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rax
  __int64 v81; // rcx
  _DWORD *v82; // rdi
  int v83; // eax
  bool v84; // zf
  int v85; // ebx
  __int64 v86; // rax
  volatile signed __int64 **v87; // r15
  char v88; // r13
  unsigned int v89; // r12d
  __int64 v90; // rbx
  VIDMM_PROCESS_BUDGET_STATE *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // r9d
  _QWORD *v96; // r9
  int v97; // r10d
  unsigned int *v98; // rdi
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // rbx
  volatile signed __int64 *v103; // rax
  volatile signed __int64 *v104; // r10
  __int64 i; // rax
  _QWORD *v106; // rax
  struct _VIDSCH_SYNC_OBJECT *v107; // rax
  unsigned __int64 v108; // r9
  VIDMM_GLOBAL *v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rbx
  __int64 v112; // rax
  VIDMM_COMMIT_TELEMETRY *v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  struct VIDMM_PAGING_QUEUE_PACKET **v118; // rcx
  _QWORD *v119; // rax
  VIDMM_PAGING_QUEUE *v120; // rcx
  VIDMM_PAGING_QUEUE **v121; // rax
  struct _KEVENT *v122; // rcx
  __int64 v123; // rcx
  int v124; // edi
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rcx
  _BOOL8 v128; // rbx
  struct VIDMM_GLOBAL **v129; // rax
  const GUID *v130; // rcx
  int v131; // esi
  int v132; // eax
  _QWORD *v133; // rdi
  char IsProcessCommitRelinquished; // bl
  const CHAR *v135; // r8
  struct VIDMM_DEVICE *v136; // rax
  int v137; // ebx
  ULONG v138; // edi
  int v139; // ebx
  ULONG TimeIncrement; // eax
  struct VIDMM_DEVICE *v141; // rbx
  VIDMM_DEVICE *v142; // rsi
  struct VIDMM_DEVICE *v143; // rdi
  VIDMM_GLOBAL *v144; // rbx
  char v145; // si
  unsigned int v146; // r14d
  __int64 v147; // r9
  __int64 v148; // rdi
  __int64 v149; // r11
  _BYTE *v150; // r8
  __int64 v151; // rcx
  unsigned __int64 v152; // r10
  char v153; // al
  __int64 v154; // rdx
  __int64 v155; // rcx
  VIDMM_GLOBAL *v156; // rbx
  __int64 v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // r8
  int v161; // r9d
  bool IsPenaltyBoxEmptyWithoutLock; // bl
  VIDMM_GLOBAL *v163; // rbx
  __int64 v164; // r14
  char v165; // bl
  unsigned int j; // edi
  __int64 v167; // r11
  _QWORD **v168; // rdx
  _QWORD **v169; // r10
  _QWORD *v170; // rcx
  _QWORD **v171; // r9
  _QWORD *v172; // r8
  __int64 v173; // rax
  int v174; // r9d
  __int64 **v175; // rdx
  __int64 *v176; // rax
  __int64 v177; // rcx
  __int64 *k; // r8
  __int64 *v179; // rcx
  __int64 v180; // rcx
  __int64 v181; // r8
  VIDMM_GLOBAL *v182; // rsi
  _QWORD *v183; // r14
  __int64 v184; // rcx
  __int64 v185; // r8
  int v186; // r9d
  bool v187; // bl
  __int64 v188; // rbx
  __int64 v189; // rbx
  char v190; // r12
  __int64 v191; // rdx
  _QWORD *v192; // rdi
  VIDMM_GLOBAL *v193; // rcx
  _QWORD *v194; // rbx
  __int64 v195; // r8
  __int16 v196; // ax
  VIDMM_GLOBAL *v197; // rbx
  VIDMM_GLOBAL **v198; // rdx
  __int64 v199; // rdx
  VIDMM_GLOBAL *v200; // rcx
  _QWORD *v201; // rax
  VIDMM_GLOBAL *v202; // rdi
  __int64 v203; // rsi
  unsigned int v204; // r8d
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rcx
  char v208; // bl
  __int64 v209; // rdx
  __int64 v210; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v212; // rcx
  VIDMM_GLOBAL *v213; // rsi
  unsigned int m; // r15d
  __int64 v215; // rbx
  unsigned int n; // r14d
  _DWORD *v217; // rdi
  int v218; // eax
  int v219; // eax
  int v220; // eax
  _QWORD **v221; // rdi
  _QWORD *ii; // rbx
  __int64 **v223; // rcx
  VIDMM_GLOBAL *v224; // rdi
  __int64 v225; // rbx
  char v226; // [rsp+50h] [rbp-B0h]
  bool v227; // [rsp+51h] [rbp-AFh] BYREF
  char v228; // [rsp+52h] [rbp-AEh]
  char v229; // [rsp+53h] [rbp-ADh]
  char v230; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v231; // [rsp+55h] [rbp-ABh]
  char v232; // [rsp+56h] [rbp-AAh]
  bool v233; // [rsp+57h] [rbp-A9h] BYREF
  bool v234; // [rsp+58h] [rbp-A8h] BYREF
  int v235; // [rsp+5Ch] [rbp-A4h]
  int v236; // [rsp+60h] [rbp-A0h]
  VIDMM_WORKER_THREAD *v237; // [rsp+68h] [rbp-98h]
  int v238; // [rsp+70h] [rbp-90h]
  LPCGUID pRelatedActivityId; // [rsp+78h] [rbp-88h]
  VIDMM_PAGING_QUEUE *v240; // [rsp+80h] [rbp-80h]
  struct VIDMM_DEVICE *v241; // [rsp+88h] [rbp-78h]
  struct VIDMM_ALLOC *v242; // [rsp+90h] [rbp-70h] BYREF
  bool v243; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v244; // [rsp+A0h] [rbp-60h]
  char *v245; // [rsp+A8h] [rbp-58h]
  _DWORD *v246; // [rsp+B0h] [rbp-50h]
  struct VIDMM_DEVICE *v247; // [rsp+B8h] [rbp-48h]
  union _LARGE_INTEGER v248; // [rsp+C0h] [rbp-40h] BYREF
  char *v249; // [rsp+D0h] [rbp-30h]
  PVOID Object; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v251; // [rsp+E0h] [rbp-20h]
  _BYTE v252[24]; // [rsp+E8h] [rbp-18h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+100h] [rbp+0h] BYREF
  struct VIDMM_ALLOC *v254; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v255[32]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v256[10]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v257[18]; // [rsp+180h] [rbp+80h] BYREF

  v1 = this;
  v237 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 19) + 24LL), Executive, 0, 0, 0LL);
  VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v1, 1);
  v4 = (char *)v1 + 48;
  v5 = 0;
  v251 = *((_QWORD *)v1 + 19);
  v3 = v251;
  v226 = 0;
  v6 = 0;
  *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
  v229 = 0;
  Object = (PVOID)(v3 + 24);
  v7 = 0;
  v234 = 0;
  v233 = 0;
  v249 = (char *)v1 + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 48, 0LL);
  *((_QWORD *)v1 + 7) = KeGetCurrentThread();
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v233;
        *((_QWORD *)v1 + 2) = 0LL;
        if ( v5 || v12 || v7 )
          *((_QWORD *)v1 + 21) = 0LL;
        v248 = *(union _LARGE_INTEGER *)((char *)v1 + 168);
        if ( v248.QuadPart == 0x8000000000000000uLL )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
            v14[3] = v5;
            v14[4] = v12;
            v14[5] = v7;
          }
          v13 = 0LL;
        }
        else
        {
          v13 = &v248;
        }
        *((_QWORD *)v4 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v4, 0LL);
        KeLeaveCriticalRegion();
        v15 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v13, 0LL);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v4, 0LL);
        *((_QWORD *)v4 + 1) = KeGetCurrentThread();
        v16 = *(_QWORD *)v1;
        v17 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(v16 + 4608) = v17 * KeQueryTimeIncrement();
        v20 = *(_QWORD *)v1;
        v21 = *(_QWORD *)(*(_QWORD *)v1 + 4608LL);
        if ( v21 - *(_QWORD *)(*(_QWORD *)v1 + 7120LL) > qword_1C0035308 )
        {
          *(_QWORD *)(v20 + 7104) = 0LL;
          *(_DWORD *)(v20 + 7112) = 0;
          *(_QWORD *)(v20 + 7120) = v21;
        }
        v7 = 0;
        v233 = 0;
        v231 = 0;
        *((_BYTE *)v1 + 160) = 0;
        v235 = 0;
        v228 = 0;
        v232 = 0;
        if ( !v15 )
        {
          if ( *((_DWORD *)v1 + 7) == *((_DWORD *)v1 + 6) )
          {
LABEL_31:
            if ( g_IsInternalReleaseOrDbg )
            {
              v29 = WdLogNewEntry5_WdTrace(v20, v21, v18, v19);
              v20 = *((int *)v1 + 6);
              *(_QWORD *)(v29 + 24) = v20;
            }
            *((_DWORD *)v1 + 44) = 0;
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v22 = WdLogNewEntry5_WdTrace(v20, v21, v18, v19);
              *(_QWORD *)(v22 + 24) = *((int *)v1 + 6);
              *(_QWORD *)(v22 + 32) = *((int *)v1 + 7);
            }
            v20 = *((unsigned int *)v1 + 7);
            *((_DWORD *)v1 + 44) = 1;
            if ( (unsigned int)(v20 - 2) <= 3 )
            {
              KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41064LL), Executive, 0, 0, 0LL);
              v23 = *(_QWORD *)v1;
              v24 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 39984LL);
              DXGPUSHLOCK::AcquireExclusive(v24);
              v25 = (__int64 **)(v23 + 39968);
              while ( 1 )
              {
                v26 = *v25;
                v27 = **v25;
                if ( (__int64 **)(*v25)[1] != v25 || *(__int64 **)(v27 + 8) != v26 )
                  __fastfail(3u);
                *v25 = (__int64 *)v27;
                *(_QWORD *)(v27 + 8) = v25;
                if ( v26 == (__int64 *)v25 )
                  break;
                (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v26[2] + 24LL))(
                  v26[2],
                  0LL,
                  v26[3],
                  v26[4]);
                operator delete(v26);
              }
              *((_QWORD *)v24 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v24, 0LL);
              KeLeaveCriticalRegion();
            }
            else if ( (_DWORD)v20 == 1 )
            {
              VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v1, 1);
            }
          }
          v5 = 1;
          v226 = 1;
          goto LABEL_35;
        }
        if ( v15 != 258 )
          goto LABEL_31;
        if ( g_IsInternalReleaseOrDbg )
        {
          v28 = WdLogNewEntry5_WdTrace(v20, v21, v18, v19);
          v20 = *((_QWORD *)v1 + 21);
          *(_QWORD *)(v28 + 24) = v20;
        }
LABEL_35:
        if ( *((_QWORD *)v1 + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          Template_iq(v20, v21, v18);
        v30 = *(_QWORD *)v1;
        *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
        v31 = v30 + 39984;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v30 + 39984, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v34 = *(_DWORD *)(v30 + 40000);
            if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v32, &EventBlockThread, v33, v34);
          }
          ExAcquirePushLockExclusiveEx(v30 + 39984, 0LL);
        }
        v35 = (__int64 **)(v30 + 39968);
        *(_QWORD *)(v31 + 8) = KeGetCurrentThread();
        while ( 1 )
        {
          v36 = *v35;
          v37 = **v35;
          if ( (__int64 **)(*v35)[1] != v35 || *(__int64 **)(v37 + 8) != v36 )
            __fastfail(3u);
          *v35 = (__int64 *)v37;
          v38 = v36;
          *(_QWORD *)(v37 + 8) = v35;
          if ( v36 == (__int64 *)v35 )
            break;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v36[2] + 24LL))(
            v36[2],
            0LL,
            v36[3],
            v36[4]);
          operator delete(v38);
        }
        *(_QWORD *)(v31 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v31, 0LL);
        KeLeaveCriticalRegion();
        if ( !v5 && !v6 && !v234 )
          break;
        v39 = 0LL;
        v40 = 0LL;
        v244 = 0LL;
        v41 = 0LL;
        v241 = 0LL;
        v229 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v1 + 128, 0LL);
        *((_QWORD *)v1 + 17) = KeGetCurrentThread();
        v42 = (VIDMM_WORKER_THREAD *)((char *)v1 + 96);
        v43 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 12);
        v240 = v43;
        if ( v43 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
        {
          v43 = 0LL;
          v44 = *((_DWORD *)v1 + 7) - 1;
          v240 = 0LL;
          if ( (v44 & 0xFFFFFFFD) != 0 )
            goto LABEL_99;
          v45 = *(__int64 **)v1;
          DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
            (DXGAUTOPUSHLOCKSHARED *)v252,
            (struct DXGPUSHLOCK *const)(*(_QWORD *)v1 + 41520LL));
          if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v45, 1) )
          {
            if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v45, 2) )
            {
              if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v45, 3) )
              {
                if ( !*(_BYTE *)(v45[3] + 2091) || VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v45, 4) )
                {
                  v229 = 0;
                  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v252);
                  v241 = 0LL;
LABEL_77:
                  v43 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 10);
                  v42 = (VIDMM_WORKER_THREAD *)((char *)v1 + 80);
                  v240 = v43;
                  if ( v43 == (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
                  {
                    v43 = (VIDMM_PAGING_QUEUE *)v39;
                    v240 = (VIDMM_PAGING_QUEUE *)v39;
                    if ( *((_BYTE *)v1 + 216) )
                    {
                      v55 = *(_QWORD *)v1;
                      *((_BYTE *)v1 + 216) = 0;
                      *((_QWORD *)v1 + 28) = *(_QWORD *)(v55 + 4608);
                    }
                    if ( v41 && *(_QWORD *)(*(_QWORD *)v1 + 4608LL) - *((_QWORD *)v1 + 28) >= qword_1C00353B0 )
                      goto LABEL_84;
                    v43 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 8);
                    v42 = (VIDMM_WORKER_THREAD *)((char *)v1 + 64);
                    v240 = v43;
                    if ( v43 == (VIDMM_WORKER_THREAD *)((char *)v1 + 64) )
                    {
                      v43 = (VIDMM_PAGING_QUEUE *)v39;
                      v240 = (VIDMM_PAGING_QUEUE *)v39;
LABEL_84:
                      *((_BYTE *)v1 + 216) = 1;
                      goto LABEL_99;
                    }
                    v56 = *(VIDMM_PAGING_QUEUE **)v43;
                    v57 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v43 + 1);
                    if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v43 + 8LL) != v43 || *v57 != v43 )
                      __fastfail(3u);
                    *v57 = v56;
                    *((_QWORD *)v56 + 1) = v57;
                    v58 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 9);
                    if ( *v58 != v42 )
                      __fastfail(3u);
                  }
                  else
                  {
                    v59 = *(VIDMM_PAGING_QUEUE **)v43;
                    v60 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v43 + 1);
                    if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v43 + 8LL) != v43 || *v60 != v43 )
                      __fastfail(3u);
                    *v60 = v59;
                    *((_QWORD *)v59 + 1) = v60;
                    v58 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 11);
                    if ( *v58 != v42 )
                      __fastfail(3u);
                  }
                  goto LABEL_96;
                }
                v46 = 4;
              }
              else
              {
                v46 = 3;
              }
            }
            else
            {
              v46 = 2;
            }
          }
          else
          {
            v46 = 1;
          }
          v47 = v45[3];
          v229 = 1;
          v39 = v45[2 * (unsigned int)(v46 - 1) + 5193] - 176;
          if ( !*(_BYTE *)(v47 + 2091) )
          {
            if ( v46 == 2 )
            {
              v48 = *(_QWORD **)(v39 + 232);
              if ( v48 )
              {
                v49 = v48[27];
                if ( v49 > *(_QWORD *)(*v48 + 4608LL) )
                {
                  v50 = 8;
                  v51 = v45[576] - v49;
LABEL_72:
                  VIDMM_WORKER_THREAD::SetTimeout(*v45, v51, v50);
                  v39 = 0LL;
                }
              }
            }
            else if ( v46 == 3 )
            {
              v52 = v45[576];
              v53 = *(_QWORD *)(v39 + 208);
              if ( v52 < v53 )
              {
                v51 = v52 - v53;
                v50 = 6;
                goto LABEL_72;
              }
            }
          }
          DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v252);
          v241 = (struct VIDMM_DEVICE *)v39;
          v41 = (struct VIDMM_DEVICE *)v39;
          if ( v39 )
          {
            v54 = *(_DWORD *)(v39 + 52);
            v39 = 0LL;
            if ( (v54 & 7) == 1 )
              goto LABEL_99;
          }
          goto LABEL_77;
        }
        v61 = *(VIDMM_PAGING_QUEUE **)v43;
        v62 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v43 + 1);
        if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v43 + 8LL) != v43 || *v62 != v43 )
          __fastfail(3u);
        *v62 = v61;
        *((_QWORD *)v61 + 1) = v62;
        v58 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 13);
        if ( *v58 != v42 )
          __fastfail(3u);
LABEL_96:
        *(_QWORD *)v43 = v42;
        *((_QWORD *)v43 + 1) = v58;
        *v58 = v43;
        *((_QWORD *)v42 + 1) = v43;
        v63 = (_QWORD *)((char *)v43 + 32);
        v40 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v43 + 4);
        v41 = (struct VIDMM_DEVICE *)*((_QWORD *)v43 + 18);
        v241 = v41;
        v244 = v40;
        v64 = *(_QWORD *)v40;
        if ( *((VIDMM_PAGING_QUEUE **)v40 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v43 + 32)
          || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v64 + 8) != v40 )
        {
          __fastfail(3u);
        }
        *v63 = v64;
        *(_QWORD *)(v64 + 8) = v63;
        *(_QWORD *)v40 = v39;
        *((_QWORD *)v40 + 1) = v39;
LABEL_99:
        *((_QWORD *)v1 + 2) = v41;
        *((_QWORD *)v1 + 17) = v39;
        ExReleasePushLockExclusiveEx((char *)v1 + 128, 0LL);
        KeLeaveCriticalRegion();
        if ( v41 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            Template_ppp(v66, &EventVidMmSelectOperation, v10, *((_QWORD *)v41 + 3), v43, v40);
          if ( v43 )
          {
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v66, v65, v10, v11) + 24) = v43;
            if ( *((_BYTE *)v40 + 24) && *((_DWORD *)v40 + 12) == 206 )
            {
              v67 = MEMORY[0xFFFFF78000000320];
              *((_QWORD *)v40 + 18) = v67 * KeQueryTimeIncrement();
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v66, v65, v10, v11) + 24) = v41;
          }
        }
        v68 = (GUID *)((char *)v1 + 184);
        pRelatedActivityId = (LPCGUID)((char *)v1 + 184);
        while ( 2 )
        {
          while ( 2 )
          {
            v69 = v228;
            while ( 1 )
            {
LABEL_112:
              v70 = (struct VIDMM_GLOBAL **)v237;
LABEL_113:
              v71 = 0;
              v242 = (struct VIDMM_ALLOC *)v39;
              v227 = 0;
              *(_QWORD *)v68->Data4 = v39;
              *(_QWORD *)&v68[1].Data1 = v39;
              *(_QWORD *)&v68->Data1 = v39;
              v68[1].Data4[0] = 0;
              v230 = 0;
              v236 = 2;
              if ( v41 )
              {
                v11 = *((_QWORD *)v41 + 2);
                v230 = 0;
                if ( v11 )
                {
                  v10 = (unsigned int)v39;
                  if ( *(_DWORD *)(*(_QWORD *)v41 + 6416LL) )
                  {
                    while ( 1 )
                    {
                      v72 = (_QWORD *)(*(_QWORD *)(v11 + 48) + 264LL * (unsigned int)v10);
                      if ( v72[25] > v72[3] || v72[26] > v72[4] )
                        break;
                      v10 = (unsigned int)(v10 + 1);
                      if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)v41 + 6416LL) )
                        goto LABEL_121;
                    }
                    v71 = 1;
                    v230 = 1;
                  }
LABEL_121:
                  v73 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 32LL);
                  if ( *(_BYTE *)(v73 + 290) )
                  {
                    v236 = v39;
                    LOBYTE(v10) = 1;
                    goto LABEL_127;
                  }
                  if ( (*(_DWORD *)(v73 + 292) & 1) != 0 )
                  {
                    v236 = 1;
                    LOBYTE(v10) = 1;
                    goto LABEL_127;
                  }
                }
                v236 = 2;
              }
              LOBYTE(v10) = 0;
LABEL_127:
              v8 = v71 + 2LL * v235;
              v9 = (__int64)&unk_1C002B710;
              v74 = (char *)&unk_1C002B710 + 24 * v8 + 12 * (unsigned __int8)v10;
              v245 = v74;
              if ( !v43 )
                break;
              v75 = v74[8];
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_ppx((__int64)&unk_1C002B710, v8, v10, v43, v40, *((_QWORD *)v40 + 5));
              if ( *((_BYTE *)v40 + 24) )
              {
                KeQueryPerformanceCounter(&PerformanceFrequency);
                v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v77, v76, v78, v79);
                v81 = *((int *)v40 + 12);
                v82 = (_DWORD *)((char *)v40 + 48);
                v246 = (_DWORD *)((char *)v40 + 48);
                v80[3] = v81;
                v80[4] = v40;
                v80[5] = *((_QWORD *)v40 + 8);
                v80[6] = *((_QWORD *)v40 + 7);
                v80[7] = *((_QWORD *)v40 + 4);
                WdLogEvent5_WdEvent(v80);
                v83 = VIDMM_GLOBAL::ProcessDeferredCommand(
                        *(VIDMM_GLOBAL **)v237,
                        (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v40 + 48),
                        &v227,
                        *((_BYTE *)v40 + 25),
                        *((_QWORD *)v40 + 4),
                        *((struct _VIDSCH_SYNC_OBJECT **)v43 + 11),
                        v75,
                        &v242);
                v84 = *((_BYTE *)v40 + 24) == 0;
                v85 = v83;
                v238 = v83;
                if ( v84 )
                {
                  v86 = *((_QWORD *)v40 + 9);
                  if ( !v86 )
                  {
                    v86 = *((_QWORD *)v40 + 8);
                    if ( v86 )
                      v86 = *(_QWORD *)(v86 + 8);
                  }
                }
                else
                {
                  v86 = *((_QWORD *)v40 + 7);
                }
                v87 = *(volatile signed __int64 ***)(v86 + 16);
                v88 = 0;
                v89 = 0;
                if ( *((_DWORD *)*v87 + 1604) )
                {
                  do
                  {
                    v90 = 33LL * v89;
                    v91 = (VIDMM_PROCESS_BUDGET_STATE *)&v87[6][v90];
                    if ( v87 != (volatile signed __int64 **)-328LL
                      && v87[42] == (volatile signed __int64 *)KeGetCurrentThread() )
                    {
                      v92 = WdLogNewEntry5_WdAssertion(v9, v8);
                      *(_QWORD *)(v92 + 24) = 1142LL;
                      WdLogEvent5_WdAssertion(v92);
                    }
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v87 + 41, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v95 = *((_DWORD *)v87 + 86);
                        if ( v95 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          Template_q(v93, &EventBlockThread, v94, v95);
                      }
                      ExAcquirePushLockSharedEx(v87 + 41, 0LL);
                    }
                    v96 = (_QWORD *)((char *)v91 + 184);
                    v97 = 0;
                    v98 = (unsigned int *)(v90 * 8 + *((_QWORD *)*v87 + 5150) + 224LL);
                    while ( 1 )
                    {
                      v99 = *(v96 - 6);
                      if ( v97 == 1 )
                      {
                        v100 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v91);
                        v99 = v100 + v101;
                      }
                      v102 = *v98;
                      if ( v99 > *v96 * (v102 + 100) / 0x64uLL || v99 < *v96 * (100 - v102) / 0x64uLL )
                        break;
                      ++v97;
                      ++v98;
                      ++v96;
                      if ( v97 >= 2 )
                        goto LABEL_154;
                    }
                    v88 = 1;
LABEL_154:
                    ExReleasePushLockSharedEx(v87 + 41, 0LL);
                    KeLeaveCriticalRegion();
                    v103 = *v87;
                    ++v89;
                  }
                  while ( v89 < *((_DWORD *)*v87 + 1604) );
                  if ( v88 )
                  {
                    v10 = *((unsigned int *)v103 + 1604);
                    v8 = 0LL;
                    v104 = *v87;
                    if ( (_DWORD)v10 )
                    {
                      v11 = *((_QWORD *)v103 + 5150);
                      while ( 2 )
                      {
                        v9 = v11 + 264LL * (unsigned int)v8;
                        for ( i = 0LL; i < 2; ++i )
                        {
                          if ( *(_BYTE *)(v9 + i + 256) )
                          {
                            _InterlockedIncrement64(v104 + 5203);
                            v9 = *v104;
                            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*v104 + 8) )
                              KeSetEvent(*(PRKEVENT *)(v9 + 152), 0, 0);
                            goto LABEL_165;
                          }
                        }
                        v8 = (unsigned int)(v8 + 1);
                        if ( (unsigned int)v8 < (unsigned int)v10 )
                          continue;
                        break;
                      }
                    }
                  }
LABEL_165:
                  v40 = v244;
                  v85 = v238;
                  v82 = v246;
                  v74 = v245;
                  v41 = v241;
                  v43 = v240;
                  v68 = (GUID *)pRelatedActivityId;
                }
                else
                {
                  v74 = v245;
                  v41 = v241;
                  v43 = v240;
                }
              }
              else
              {
                v106 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
                v82 = (_DWORD *)((char *)v40 + 48);
                v106[3] = *((int *)v40 + 12);
                v106[4] = v40;
                v106[5] = *((unsigned __int8 *)v40 + 25);
                v106[6] = *((_QWORD *)v40 + 4);
                WdLogEvent5_WdEvent(v106);
                v242 = 0LL;
                v107 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v43 + 11);
                v108 = *((_QWORD *)v40 + 4);
                v109 = *(VIDMM_GLOBAL **)v237;
                v110 = *((unsigned __int8 *)v40 + 25);
                v227 = 0;
                v85 = VIDMM_GLOBAL::ProcessSystemCommand(
                        (unsigned __int64)v109,
                        (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v40 + 48),
                        v110,
                        v108,
                        v107);
                v238 = v85;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_ppxx(v9, &EventPagingQueueComplete, v10, v43, v40, *((_QWORD *)v40 + 5), 0LL);
              if ( v85 == -1071775232 )
              {
                v238 = 0;
              }
              else if ( *((_BYTE *)v40 + 24) && (!v227 || *((_BYTE *)v40 + 120)) && *((_QWORD *)v40 + 9) )
              {
                v238 = 0;
              }
              else if ( v85 < 0 )
              {
                goto LABEL_199;
              }
              if ( *((_BYTE *)v40 + 24)
                && *v82 == 206
                && (v111 = MEMORY[0xFFFFF78000000320],
                    v112 = v111 * KeQueryTimeIncrement(),
                    *((_QWORD *)v40 + 19) = v112,
                    v112 - *((_QWORD *)v40 + 17) > 1000000) )
              {
                VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v68, *(struct VIDMM_GLOBAL **)v237, v41, 0LL);
                VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v113, v40);
                v39 = 0LL;
                *(_QWORD *)v68->Data4 = 0LL;
                *(_QWORD *)&v68[1].Data1 = 0LL;
                *(_QWORD *)&v68->Data1 = 0LL;
                v68[1].Data4[0] = 0;
              }
              else
              {
                v39 = 0LL;
              }
              v114 = *((_QWORD *)v43 + 10);
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v114 + 128, 0LL);
              *(_QWORD *)(v114 + 136) = KeGetCurrentThread();
              v118 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v43 + 3);
              if ( *v118 != (VIDMM_PAGING_QUEUE *)((char *)v43 + 16) )
                __fastfail(3u);
              *(_QWORD *)v40 = (char *)v43 + 16;
              *((_QWORD *)v40 + 1) = v118;
              *v118 = v40;
              *((_QWORD *)v43 + 3) = v40;
              --*((_DWORD *)v43 + 34);
              if ( *((VIDMM_PAGING_QUEUE **)v43 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v43 + 32)
                && *((_DWORD *)v43 + 28) == 1 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  v119 = (_QWORD *)WdLogNewEntry5_WdTrace(v118, v115, v116, v117);
                  v119[3] = v43;
                  v119[4] = *((int *)v43 + 28);
                  v119[5] = 0LL;
                }
                v120 = *(VIDMM_PAGING_QUEUE **)v43;
                v121 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v43 + 1);
                if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v43 + 8LL) != v43 || *v121 != v43 )
                  __fastfail(3u);
                *v121 = v120;
                *((_QWORD *)v120 + 1) = v121;
                v122 = (struct _KEVENT *)*((_QWORD *)v43 + 15);
                *(_QWORD *)v43 = 0LL;
                *((_QWORD *)v43 + 1) = 0LL;
                *((_DWORD *)v43 + 28) = 0;
                KeSetEvent(v122, 0, 0);
              }
              --*(_DWORD *)(*((_QWORD *)v43 + 18) + 64LL);
              --*(_DWORD *)(*((_QWORD *)v43 + 10) + 144LL);
              v123 = *((_QWORD *)v43 + 10) + 128LL;
              *(_QWORD *)(v123 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v123, 0LL);
              KeLeaveCriticalRegion();
              v69 = v228;
              if ( v228 != 1 )
              {
                v85 = v238;
                goto LABEL_199;
              }
              v43 = 0LL;
              v240 = 0LL;
              v40 = 0LL;
              v244 = 0LL;
            }
            if ( !v41 )
            {
              v5 = v229;
              v226 = v229;
              goto LABEL_256;
            }
            if ( v69 == 1 && (*((_DWORD *)*v70 + 1616) & 0x4000) != 0 )
            {
              v85 = -1073741823;
              v227 = 0;
            }
            else
            {
              v85 = VIDMM_DEVICE::Resume(v41, (unsigned __int8)v74[8], &v227, &v242);
LABEL_199:
              v71 = v230;
            }
            v124 = v236;
            if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
              Template_qqtqttp(
                (__int64)v242,
                v227,
                (unsigned __int8)v74[8],
                v85,
                v235,
                v71,
                v236,
                v74[8],
                v227,
                (char)v242);
            if ( v85 >= 0 )
              goto LABEL_255;
            if ( v232 )
            {
              v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10, v11);
              v125[3] = 270LL;
              v125[4] = 54LL;
              v125[5] = v41;
              v125[6] = v43;
              v125[7] = v40;
              WdLogEvent5_WdCriticalError(v125);
            }
            v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v9);
            v127 = v85;
            v128 = v227;
            v126[5] = v127;
            v126[3] = v40;
            v126[4] = v41;
            v126[6] = v128;
            WdLogEvent5_WdWarning(v126);
            v129 = (struct VIDMM_GLOBAL **)v237;
            *((_BYTE *)v237 + 160) = 1;
            if ( !v128 )
            {
LABEL_235:
              v232 = 1;
              v136 = v41;
              if ( v43 && *((_BYTE *)v40 + 24) )
              {
                v84 = *((_QWORD *)v40 + 9) == 0LL;
                *((_BYTE *)v40 + 120) = 1;
                if ( v84 )
                {
                  v136 = (struct VIDMM_DEVICE *)*((_QWORD *)v40 + 7);
                  if ( !v136 )
                  {
                    v136 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v40 + 8) + 8LL);
                    goto LABEL_240;
                  }
LABEL_241:
                  v9 = *((_QWORD *)v136 + 4);
                  if ( v9 )
                    VidSchiMarkDeviceAsError(v9, 12);
                }
              }
              else
              {
LABEL_240:
                if ( v136 )
                  goto LABEL_241;
              }
              if ( v227 )
              {
                v68 = (GUID *)pRelatedActivityId;
                v39 = 0LL;
                v235 = 0;
                continue;
              }
              if ( v43 )
                VIDMM_PAGING_QUEUE::ReclaimPacket(v43, v40);
LABEL_255:
              v5 = v226;
              LODWORD(v39) = 0;
LABEL_256:
              v1 = v237;
              if ( *((_DWORD *)v237 + 7) == 1 )
              {
                v144 = *(VIDMM_GLOBAL **)v237;
                v145 = 0;
                v146 = v39;
                if ( *(_DWORD *)(*(_QWORD *)v237 + 6416LL) )
                {
                  do
                  {
                    v147 = 232LL;
                    v148 = 264LL * v146;
                    v149 = 2LL;
                    v150 = (_BYTE *)(v148 + *((_QWORD *)v144 + 5150) + 256LL);
                    do
                    {
                      v151 = v148 + *((_QWORD *)v144 + 5150);
                      v152 = *(_QWORD *)(v147 + v151 - 216);
                      if ( v152 )
                        v153 = (__int64)(100 - 100LL * *(_QWORD *)(v147 + v151) / v152) < (unsigned int)dword_1C0035388;
                      else
                        v153 = 0;
                      if ( v153 != *v150 )
                      {
                        v145 = 1;
                        *v150 = v153;
                      }
                      v147 += 8LL;
                      ++v150;
                      --v149;
                    }
                    while ( v149 );
                    ++v146;
                  }
                  while ( v146 < *((_DWORD *)v144 + 1604) );
                }
                v84 = ((unsigned __int8)v145 | *((_BYTE *)v1 + 160)) == 0;
                *((_BYTE *)v1 + 160) |= v145;
                if ( !v84 )
                  VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v1, 0);
                VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v1, &v234);
                v156 = *(VIDMM_GLOBAL **)v1;
                v157 = *(_QWORD *)v1 + 41520LL;
                if ( *(_QWORD *)v1 != -41520LL && *(struct _KTHREAD **)(*(_QWORD *)v1 + 41528LL) == KeGetCurrentThread() )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v155, v154);
                  *(_QWORD *)(v158 + 24) = 1142LL;
                  WdLogEvent5_WdAssertion(v158);
                }
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v157, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v161 = *(_DWORD *)(v157 + 16);
                    if ( v161 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      Template_q(v159, &EventBlockThread, v160, v161);
                  }
                  ExAcquirePushLockSharedEx(v157, 0LL);
                }
                IsPenaltyBoxEmptyWithoutLock = VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v156, 1);
                ExReleasePushLockSharedEx(v157, 0LL);
                KeLeaveCriticalRegion();
                if ( !IsPenaltyBoxEmptyWithoutLock )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
                  v5 = 1;
                  v226 = 1;
                }
              }
              v7 = v231;
              goto LABEL_283;
            }
            break;
          }
          v70 = v129;
          while ( 1 )
          {
            VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v68, *v70, v41, v242);
            if ( !v230 )
              VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v130, v74[8]);
            v131 = v235;
            v247 = 0LL;
            v132 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v70, v41, v242);
            if ( !v132 )
              goto LABEL_229;
            if ( v132 == -1071775484 )
              break;
            if ( (**((_DWORD **)v242 + 12) & 0x20000) != 0
              && *((_BYTE *)v40 + 24)
              && *((_DWORD *)v40 + 12) == 203
              && *((_DWORD *)v40 + 20) == 5
              && (*(_BYTE *)(456LL * (*(_DWORD *)(**(_QWORD **)v242 + 76LL) & 0x3F) + *((_QWORD *)*v70 + 5017) + 421) & 4) == 0 )
            {
              *((_DWORD *)v40 + 20) = 6;
              v235 = v131;
LABEL_229:
              v68 = (GUID *)pRelatedActivityId;
              v39 = 0LL;
              v69 = v228;
              goto LABEL_113;
            }
            VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)pRelatedActivityId, v74[8]);
            if ( v124 <= 0 )
            {
              if ( !v228 )
              {
                v137 = MEMORY[0xFFFFF78000000320];
                v138 = v137 * KeQueryTimeIncrement();
                VIDMM_GLOBAL::EvictForDefragPass(*(VIDMM_GLOBAL **)v237);
                v139 = MEMORY[0xFFFFF78000000320];
                TimeIncrement = KeQueryTimeIncrement();
                VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(pRelatedActivityId, v139 * TimeIncrement - v138);
                v69 = 1;
                v235 = v131;
                v68 = (GUID *)pRelatedActivityId;
                v39 = 0LL;
                v228 = 1;
                goto LABEL_112;
              }
              v133 = *(_QWORD **)(*(_QWORD *)v242 + 8LL);
              IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v133);
              if ( !g_UnrecoverablePagingFailureDebugMode
                && !KdRefreshDebuggerNotPresent()
                && !IsProcessCommitRelinquished )
              {
                v135 = "\n"
                       "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                       "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                       "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*"
                       ")0x%p)\"\n"
                       "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
                if ( !v40 )
                  v135 = "\n"
                         "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                         "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                         "Paging operation type: Failure to resume device\n";
                DbgPrintEx(0x65u, 0, v135, v41, v40, v43);
                DbgPrintEx(
                  0x65u,
                  0,
                  "\n"
                  "We broke into the debugger to allow a chance for debugging this issue.\n"
                  "\n"
                  "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagin"
                  "gFailureDebugMode=1\"\n"
                  "or \"ed 0x%p 1\"\n"
                  "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_Unrecovera"
                  "blePagingFailureDebugMode=2\"\n"
                  "or \"ed 0x%p 2\"\n"
                  "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailur"
                  "eDebugMode=3\"\n"
                  "or \"ed 0x%p 3\"\n"
                  "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after ste"
                  "pping through the code is done.!!!\n"
                  "\n",
                  (const void *)&g_UnrecoverablePagingFailureDebugMode,
                  (const void *)&g_UnrecoverablePagingFailureDebugMode,
                  (const void *)&g_UnrecoverablePagingFailureDebugMode);
                __debugbreak();
              }
              if ( !KdRefreshDebuggerNotPresent() )
              {
                if ( IsProcessCommitRelinquished )
                {
                  v11 = v133[4];
                  if ( v11 )
                  {
                    if ( !*(_BYTE *)(v11 + 364) )
                    {
                      DbgPrintEx(
                        0x65u,
                        0,
                        "\n"
                        "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                        "virtual address space torn down, yet we do not detect ourselves in the frozen state for that pro"
                        "cess.\n"
                        "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                      __debugbreak();
                    }
                  }
                }
              }
              goto LABEL_235;
            }
            v236 = --v124;
            v235 = v131;
            if ( !v227 )
              goto LABEL_235;
            v68 = (GUID *)pRelatedActivityId;
          }
          v141 = v247;
          v142 = v41;
          v143 = v247;
          if ( (*((_DWORD *)v41 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v41, v247) )
          {
            v143 = v41;
            v142 = v141;
          }
          VIDMM_DEVICE::Yield(v142, v143);
          if ( v143 == v41 )
          {
            v68 = (GUID *)pRelatedActivityId;
            v39 = 0LL;
            continue;
          }
          break;
        }
        v1 = v237;
        v5 = v226;
        v4 = (char *)v237 + 48;
        if ( v43 )
        {
          VIDMM_PAGING_QUEUE::RewindPacket(v43, v40);
          v6 = v229;
          v7 = v231;
          v4 = v249;
        }
        else
        {
          v6 = v229;
          v7 = v231;
        }
      }
LABEL_283:
      if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
      {
        if ( dword_1C0035360 )
        {
          v163 = *(VIDMM_GLOBAL **)v1;
          v164 = *(_QWORD *)(*(_QWORD *)v1 + 41624LL);
          if ( v164 == *(_QWORD *)(*(_QWORD *)v1 + 41632LL) )
          {
            v165 = 0;
          }
          else
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
              Template_q(v9, &EventVidMmProfilerEnter, v10, 14001);
            for ( j = 0; j < *((_DWORD *)v163 + 1604); ++j )
            {
              memset(v257, 0, 0x118uLL);
              DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
                (DXGAUTOPUSHLOCKSHARED *)v255,
                (VIDMM_GLOBAL *)((char *)v163 + 40968));
              VIDMM_GLOBAL::SetupBudgetState(v163, (struct VIDMM_BUDGET_STATE *)v257, j);
              VIDMM_GLOBAL::AssignBudgets(v163, (struct VIDMM_BUDGET_STATE *)v257, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
              if ( *(_QWORD *)(264LL * j + *((_QWORD *)v163 + 5150) + 24) )
              {
                v167 = 0LL;
                v168 = (_QWORD **)&v257[3] + 1;
                do
                {
                  v169 = (_QWORD **)*(v168 - 1);
                  v170 = v168 - 1;
                  if ( v169 != v168 - 1 )
                  {
                    v171 = v168 - 7;
                    v172 = *(v168 - 6);
                    if ( (_QWORD **)(*(v168 - 7))[1] != v168 - 7 || (_QWORD **)*v172 != v171 )
                      __fastfail(3u);
                    if ( v169[1] != v170 || (_QWORD *)**v168 != v170 )
                      __fastfail(3u);
                    *v172 = v170;
                    *(v168 - 6) = *v168;
                    **v168 = v171;
                    *v168 = v172;
                    v173 = *v170;
                    if ( *(_QWORD **)(*v170 + 8LL) != v170 || (_QWORD *)*v172 != v170 )
                      __fastfail(3u);
                    *v172 = v173;
                    *(_QWORD *)(v173 + 8) = v172;
                    *v168 = v170;
                    *v170 = v170;
                  }
                  ++v167;
                  v168 += 2;
                }
                while ( v167 < 3 );
                VIDMM_GLOBAL::AssignBudgets(
                  v163,
                  (struct VIDMM_BUDGET_STATE *)v257,
                  D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
              }
              v174 = 0;
              v175 = (__int64 **)&v257[3];
              do
              {
                v176 = *v175;
                v177 = **v175;
                if ( (__int64 **)(*v175)[1] != v175 || *(__int64 **)(v177 + 8) != v176 )
                  __fastfail(3u);
                *v175 = (__int64 *)v177;
                *(_QWORD *)(v177 + 8) = v175;
                for ( k = (__int64 *)&v257[v174 + 3]; v176 != k; v179[1] = (__int64)v175 )
                {
                  *v176 = 0LL;
                  v176[1] = 0LL;
                  v176 = *v175;
                  v179 = (__int64 *)**v175;
                  if ( (__int64 **)(*v175)[1] != v175 || (__int64 *)v179[1] != v176 )
                    __fastfail(3u);
                  *v175 = v179;
                }
                ++v174;
                v175 += 2;
              }
              while ( v174 < 3 );
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v255);
            }
            *((_QWORD *)v163 + 5204) = v164;
            VIDMM_GLOBAL::SendBudgetChangeNotifications(v163);
            v165 = 1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
              Template_q(v180, &EventVidMmProfilerExit, v181, 14001);
          }
          VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v165);
        }
        v182 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C00352B8 )
        {
          v183 = (_QWORD *)((char *)v182 + 39896);
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v182 + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v186 = *((_DWORD *)v182 + 9982);
              if ( v186 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v184, &EventBlockThread, v185, v186);
            }
            ExAcquirePushLockSharedEx((char *)v182 + 39912, 0LL);
          }
          v187 = *v183 != (_QWORD)v183;
          ExReleasePushLockSharedEx((char *)v182 + 39912, 0LL);
          KeLeaveCriticalRegion();
          if ( v187 )
          {
            v188 = *((_QWORD *)v182 + 576) - *((_QWORD *)v182 + 883);
            if ( (*((_DWORD *)v182 + 1616) & 0x8000) != 0 || v188 >= qword_1C00352B8 )
            {
              v190 = 0;
              DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v182 + 39912));
              v192 = (_QWORD *)*v183;
              if ( (_QWORD *)*v183 != v183 )
              {
                v190 = 1;
                VIDMM_GLOBAL::StartPreparation((__int64)v182, v191, 0LL, 0LL, 1001);
                do
                {
                  v194 = v192 - 52;
                  v192 = (_QWORD *)*v192;
                  VIDMM_GLOBAL::RemoveAllocationFromOfferList(v193, (struct _VIDMM_GLOBAL_ALLOC *)v194);
                  v195 = v194[63];
                  v196 = *(_WORD *)(v195 + 4);
                  if ( v196 && v196 != 3 )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      Template_p((__int64)v193, &EventProcessOfferAllocation, v195, v194);
                    v193 = (VIDMM_GLOBAL *)v194[17];
                    if ( !v193 || (*((_DWORD *)v193 + 14) & 0x1001) != 0 )
                    {
                      v197 = (VIDMM_GLOBAL *)(v194 + 52);
                      v198 = (VIDMM_GLOBAL **)*((_QWORD *)v182 + 4995);
                      if ( *v198 != (VIDMM_GLOBAL *)((char *)v182 + 39952) )
                        __fastfail(3u);
                      *(_QWORD *)v197 = (char *)v182 + 39952;
                      *((_QWORD *)v197 + 1) = v198;
                      *v198 = v197;
                      *((_QWORD *)v182 + 4995) = v197;
                    }
                    else if ( *((_DWORD *)v194 + 32) == 2 )
                    {
                      VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v193, (struct _VIDMM_GLOBAL_ALLOC *)v194);
                    }
                  }
                }
                while ( v192 != v183 );
              }
              *((_QWORD *)v182 + 4990) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v182 + 39912, 0LL);
              KeLeaveCriticalRegion();
              *((_QWORD *)v182 + 883) = *((_QWORD *)v182 + 576);
              v189 = -qword_1C00352B8;
              if ( v190 )
                VIDMM_GLOBAL::EndPreparation(v182, v199, 0LL, 0, 0LL, 0LL);
            }
            else
            {
              v189 = v188 - qword_1C00352B8;
            }
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v182, v189, 3);
          }
          v1 = v237;
        }
        v200 = *(VIDMM_GLOBAL **)v1;
        if ( *(_DWORD *)(*(_QWORD *)v1 + 6464LL)
          || *((_QWORD *)v200 + 888) < (unsigned __int64)qword_1C00352F8
          && *((_DWORD *)v200 + 1778) < (unsigned int)dword_1C0035300 )
        {
          VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v200);
          v201 = (_QWORD *)(*(_QWORD *)v1 + 3720LL);
          v201[1] = v201;
          *v201 = v201;
          v202 = *(VIDMM_GLOBAL **)v1;
          if ( qword_1C00352B0 )
          {
            v203 = 0x8000000000000000uLL;
            if ( *((_BYTE *)v202 + 40098) )
            {
              v204 = *((_DWORD *)v202 + 926);
              v205 = 0LL;
              if ( v204 )
              {
                while ( 1 )
                {
                  v206 = *(_QWORD *)(*((_QWORD *)v202 + 464) + 8 * v205);
                  if ( (*(_DWORD *)(v206 + 56) & 0x1001) != 0 && *(_QWORD *)(v206 + 168) != v206 + 168 )
                    break;
                  v205 = (unsigned int)(v205 + 1);
                  if ( (unsigned int)v205 >= v204 )
                    goto LABEL_358;
                }
                *((_QWORD *)v202 + 882) = *((_QWORD *)v202 + 576);
                *((_BYTE *)v202 + 40098) = 0;
                v203 = -qword_1C00352B0;
              }
            }
            else
            {
              v207 = *((_QWORD *)v202 + 576) - *((_QWORD *)v202 + 882);
              if ( v207 < qword_1C00352B0 )
              {
                v203 = v207 - qword_1C00352B0;
              }
              else
              {
                VIDMM_GLOBAL::StartPreparation((__int64)v202, qword_1C00352B0, 0LL, 0LL, 207);
                v208 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v202);
                VIDMM_GLOBAL::EndPreparation(v202, v209, 0LL, 0, 0LL, 0LL);
                if ( !v208 )
                  *((_BYTE *)v202 + 40098) = 1;
              }
            }
LABEL_358:
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v202, v203, 2);
          }
        }
        v5 = v226;
        if ( !v226 && !VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)v1) )
        {
          v7 = 1;
          *(_QWORD *)(v210 + 7120) = *(_QWORD *)(v210 + 4608);
          *(_QWORD *)(v210 + 7104) = 0LL;
          *(_DWORD *)(v210 + 7112) = 0;
        }
        NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)v1, &v233);
        if ( NextPendingTermination )
        {
          memset(v256, 0, sizeof(v256));
          v212 = *(VIDMM_GLOBAL **)v1;
          v256[2] = NextPendingTermination;
          LODWORD(v256[0]) = 200;
          VIDMM_GLOBAL::ProcessDeferredCommand(
            v212,
            (struct _VIDMM_DEFERRED_COMMAND *)v256,
            &v243,
            0,
            0LL,
            0LL,
            0,
            &v254);
        }
        v213 = *(VIDMM_GLOBAL **)v1;
        if ( *(_BYTE *)(*(_QWORD *)v1 + 40874LL) )
        {
          for ( m = 0; m < *((_DWORD *)v213 + 1604); ++m )
          {
            v215 = *((_QWORD *)v213 + 5017) + 456LL * m;
            if ( !*(_DWORD *)(v215 + 416) && (*(_BYTE *)(v215 + 420) & 0x40) == 0 )
            {
              for ( n = 0; n < *(_DWORD *)(v215 + 8); ++n )
              {
                v9 = n + *(_DWORD *)(v215 + 4);
                v217 = *(_DWORD **)(*((_QWORD *)v213 + 464) + 8 * v9);
                if ( v217[90] != -1 )
                {
                  if ( (*(_BYTE *)(v215 + 420) & 0x40) == 0 )
                  {
                    v218 = ((v217[14] >> 12) & 1) != 0 ? 0 : v217[4] + 1;
                    if ( v218 == *(_DWORD *)(v215 + 44)
                      || (((v217[14] >> 12) & 1) == 0 ? (v219 = v217[4] + 1) : (v219 = 0), v219 == *(_DWORD *)(v215 + 28)) )
                    {
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v213, m);
                      *(_BYTE *)(v215 + 420) |= 0x40u;
                    }
                  }
                  (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v213 + 5008))(
                    *((_QWORD *)v213 + 5009),
                    (unsigned int)v217[90],
                    0LL);
                }
              }
            }
          }
          v1 = v237;
          *((_BYTE *)v213 + 40874) = 0;
        }
      }
      v6 = v229;
      v4 = (char *)v1 + 48;
    }
    while ( v5 );
    v220 = *((_DWORD *)v1 + 7);
    if ( v220 != *((_DWORD *)v1 + 6) )
    {
      if ( v220 == 5 )
      {
        v221 = (_QWORD **)(*(_QWORD *)v1 + 41608LL);
        for ( ii = *v221; ii != v221; ii = (_QWORD *)*ii )
        {
          v223 = (__int64 **)(ii - 24);
          if ( !*(ii - 2) && v223[3] )
            VIDMM_DEVICE::FullySuspend(v223);
        }
      }
      VIDMM_WORKER_THREAD::SetWorkerThreadStatus((__int64)v1, *((_DWORD *)v1 + 7));
      if ( *((_DWORD *)v1 + 7) == 2 )
        break;
    }
    v224 = *(VIDMM_GLOBAL **)v1;
    v225 = 0LL;
    v6 = v229;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v9 = *(_QWORD *)(*((_QWORD *)v224 + 464) + 8 * v225);
        if ( (*(_BYTE *)(v9 + 58) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v9);
        v225 = (unsigned int)(v225 + 1);
      }
      while ( (unsigned int)v225 < *((_DWORD *)v224 + 926) );
      v6 = v229;
    }
    v4 = (char *)v1 + 48;
  }
  *((_QWORD *)v1 + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 48, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
