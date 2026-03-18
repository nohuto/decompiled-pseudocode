/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0087988 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0087A3C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C000F8D8 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C000F9E0 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     VidSchCancelDeviceCommand @ 0x1C0026320 (VidSchCancelDeviceCommand.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C5B4 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004C5E0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004F948 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0050B90 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0052154 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0052898 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF64 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005BC3C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005C074 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005C0A4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005C124 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D69C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064AA0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0068CB4 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068DF0 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0068ED0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0087650 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0087734 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0087818 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0087898 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C0088F0C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C008A410 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A98C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C008AF30 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C008B3EC (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C009F0B8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchiResumeFlipQueues @ 0x1C00A02C0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00A1DA4 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  int v8; // r11d
  bool *v9; // r10
  __int64 v10; // r8
  bool v11; // r12
  struct _VIDMM_DEFERRED_COMMAND *v12; // r14
  __int64 v14; // r15
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rsi
  struct _LIST_ENTRY *v16; // r9
  unsigned int v17; // r13d
  int v18; // eax
  __int64 v19; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  unsigned int updated; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  struct _VIDMM_LOCAL_ALLOC *v31; // r12
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // r8
  volatile signed __int32 *v34; // rcx
  __int64 v35; // r9
  _DWORD *v36; // rax
  struct _VIDSCH_SYNC_OBJECT *v37; // r13
  unsigned __int64 v38; // r15
  unsigned int v39; // r12d
  bool v40; // zf
  unsigned int v41; // ebx
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _KEVENT *v45; // rcx
  __int64 result; // rax
  struct _VIDMM_GLOBAL_ALLOC *v47; // r15
  int v48; // ecx
  unsigned int v49; // eax
  __int64 v50; // rcx
  char v51; // r13
  __int64 v52; // r9
  VIDMM_DEVICE *v53; // r8
  struct _VIDMM_GLOBAL_ALLOC *v54; // rcx
  __int64 v55; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v56; // rax
  __int64 v57; // rax
  PRKPROCESS **v58; // rdx
  __int64 v59; // rcx
  struct _VIDMM_LOCAL_ALLOC *v60; // r8
  __int64 v61; // r9
  VIDMM_DEVICE **v62; // r13
  struct VIDMM_ALLOC **v63; // rcx
  struct VIDMM_ALLOC *v64; // rax
  char v65; // r13
  __int64 v66; // rax
  int v67; // r11d
  __int64 v68; // rax
  unsigned int inited; // eax
  struct VIDMM_DEVICE *v70; // rdx
  __int64 v71; // rcx
  bool v72; // cc
  unsigned int v73; // eax
  _BYTE *v74; // rcx
  int v75; // eax
  unsigned int v76; // edx
  int v77; // ecx
  VIDMM_GLOBAL *v78; // r15
  VIDMM_GLOBAL *v79; // r12
  _QWORD *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  __int64 v83; // rcx
  _QWORD *v84; // rax
  char v85; // r15
  __int64 v86; // r9
  VIDMM_GLOBAL *v87; // rcx
  VIDMM_GLOBAL *v88; // rcx
  VIDMM_SEGMENT ***v89; // rax
  VIDMM_DEVICE **v90; // r13
  VIDMM_SEGMENT **v91; // rcx
  int v92; // eax
  VIDMM_DEVICE *v93; // r13
  VIDMM_DEVICE *i; // r15
  __int64 *v95; // r12
  _QWORD *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rcx
  __int64 v99; // rcx
  struct VIDMM_ALLOC **v100; // r12
  __int64 v101; // rax
  __int64 v102; // r13
  unsigned int v103; // r11d
  struct _D3DDDI_SEGMENTPREFERENCE v104; // ebx
  __int64 v105; // rcx
  int v106; // r12d
  int v107; // r10d
  char v108; // r9
  __int64 v109; // r13
  __int64 v110; // rcx
  int v111; // ecx
  char v112; // al
  int v113; // eax
  int v114; // r12d
  __int64 v115; // r10
  __int64 v116; // r11
  unsigned __int8 v117; // r13
  char v118; // r12
  __int64 v119; // r9
  int v120; // eax
  unsigned __int8 v121; // r12
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ebx
  __int64 v129; // r13
  __int64 v130; // r12
  unsigned __int8 v131; // al
  __int64 v132; // rdx
  __int64 v133; // rcx
  unsigned int v134; // eax
  _QWORD *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __int64 v142; // rdx
  _QWORD *v143; // rcx
  _QWORD *v144; // rax
  VIDMM_DEVICE *v145; // rax
  struct VIDMM_ALLOC **v146; // rdx
  _QWORD *v147; // rcx
  _QWORD *v148; // rdx
  _QWORD *v149; // rcx
  _QWORD *v150; // r13
  _QWORD *v151; // r14
  __int64 v152; // rbx
  __int64 v153; // r9
  __int64 v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rax
  int v157; // eax
  __int64 v158; // rcx
  __int64 v159; // r13
  _QWORD *v160; // rax
  int v161; // r9d
  __int64 v162; // r15
  __int64 v163; // r8
  __int64 v164; // rax
  int v165; // [rsp+20h] [rbp-E0h]
  unsigned int v166; // [rsp+50h] [rbp-B0h]
  char v167; // [rsp+54h] [rbp-ACh]
  char v168; // [rsp+55h] [rbp-ABh]
  struct VIDMM_ALLOC **v169; // [rsp+58h] [rbp-A8h]
  char v170; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v171; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *v172; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *v173; // [rsp+68h] [rbp-98h]
  __int64 v174; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *v175; // [rsp+68h] [rbp-98h]
  char v176; // [rsp+70h] [rbp-90h] BYREF
  char v177; // [rsp+71h] [rbp-8Fh]
  unsigned int v178; // [rsp+74h] [rbp-8Ch]
  int v179; // [rsp+78h] [rbp-88h]
  VIDMM_DEVICE *v180; // [rsp+80h] [rbp-80h]
  bool *v181; // [rsp+88h] [rbp-78h]
  bool v182; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v183[7]; // [rsp+91h] [rbp-6Fh] BYREF
  struct _VIDMM_LOCAL_ALLOC *v184; // [rsp+98h] [rbp-68h]
  int v185; // [rsp+A0h] [rbp-60h] BYREF
  int v186; // [rsp+A8h] [rbp-58h] BYREF
  struct VIDMM_ALLOC *v187; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v188; // [rsp+B8h] [rbp-48h]
  struct _VIDMM_DEFERRED_COMMAND *v189; // [rsp+C0h] [rbp-40h]
  struct _VIDSCH_SYNC_OBJECT *v190; // [rsp+C8h] [rbp-38h]
  int v191; // [rsp+D0h] [rbp-30h]
  int v192; // [rsp+D4h] [rbp-2Ch]
  __int64 v193; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v194; // [rsp+E0h] [rbp-20h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v195; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v196[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v197[24]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v198[32]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v199[16]; // [rsp+140h] [rbp+40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE v201; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = 0;
  v9 = a3;
  v181 = a3;
  v10 = (__int64)a8;
  v11 = 0;
  v177 = a4;
  v12 = a2;
  v189 = a2;
  v190 = a6;
  v14 = 0LL;
  *a8 = 0LL;
  v15 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v180 = 0LL;
  v184 = 0LL;
  if ( v15 )
  {
    v180 = (VIDMM_DEVICE *)*v15;
    v14 = *(_QWORD *)v180;
    v11 = (*(_DWORD *)(*(_QWORD *)v180 + 76LL) & 0x20000000) != 0;
    v184 = *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v180 + 104LL);
  }
  v16 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 1);
  v168 = 0;
  v166 = 0;
  v171 = v16;
  if ( !v16 )
  {
    v16 = (struct _LIST_ENTRY *)v15[1];
    v171 = v16;
  }
  *v9 = 0;
  v17 = 0;
  v18 = *(_DWORD *)a2;
  ++*((_QWORD *)this + 575);
  *((_DWORD *)this + 2) = v18;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 805) = v16;
  *((_QWORD *)this + 806) = v15;
  if ( *((_DWORD *)this + 1604) )
  {
    do
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_p((__int64)this, &EventPagingStartPreparation, v10, *((_QWORD *)this + v17 + 143));
        v8 = 0;
      }
      v19 = v17;
      if ( *((_DWORD *)this + v17 + 414) != *((_DWORD *)this + v17 + 478)
        || *((_DWORD *)this + v17 + 542) != *((_DWORD *)this + v17 + 606) )
      {
        v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v10, v16);
        v84[3] = 270LL;
        v84[4] = 33LL;
        v84[5] = this;
        v84[6] = 0LL;
        v84[7] = 0LL;
        WdLogEvent5_WdCriticalError(v84);
        v8 = 0;
      }
      ++v17;
      *((_DWORD *)this + v19 + 1022) = *((_DWORD *)this + v19 + 414);
      *((_DWORD *)this + v19 + 1086) = *((_DWORD *)this + v19 + 542);
      *((_DWORD *)this + v19 + 958) = 0;
    }
    while ( v17 < *((_DWORD *)this + 1604) );
    v16 = v171;
    v10 = (__int64)a8;
    v9 = v181;
  }
  Flink = v16[2].Flink;
  if ( BYTE4(Flink[10].Flink)
    || _InterlockedCompareExchange((volatile signed __int32 *)&Flink[10], 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2091LL) )
  {
    *((_DWORD *)v12 + 19) = -1071775232;
    *((_BYTE *)v12 + 72) = 1;
  }
  v21 = 1LL;
  if ( *((_BYTE *)v12 + 72) )
  {
    Flink = (struct _LIST_ENTRY *)(unsigned int)(*(_DWORD *)v12 - 203);
    if ( (unsigned int)Flink <= 0xB )
    {
      v67 = 2281;
      if ( _bittest(&v67, (unsigned int)Flink) )
      {
        v24 = *((unsigned int *)v12 + 19);
        v166 = *((_DWORD *)v12 + 19);
        goto LABEL_51;
      }
      v8 = 0;
    }
    if ( *(_DWORD *)v12 == 113 )
      *((_BYTE *)v12 + 64) = 0;
  }
  v22 = *(int *)v12;
  if ( (_DWORD)v22 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(Flink, 1LL, v10, v16) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 43) )
    {
      v137 = *((int *)v15 + 26);
      v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Flink, v21, v10, v16);
      v138[3] = 270LL;
      v138[4] = 42LL;
      v138[5] = this;
      v138[6] = v15;
      v138[7] = v137;
      WdLogEvent5_WdCriticalError(v138);
    }
    v25 = *((_DWORD *)v15 + 7) & 3;
    if ( v25 == 2 )
    {
      VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v15, 0LL, 0LL, 0LL);
    }
    else if ( v25 == 1 )
    {
      VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)Flink, (struct VIDMM_ALLOC *)v15);
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(this, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v139 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Flink, v21, v10, v16);
      v139[3] = 270LL;
      v139[4] = 9LL;
      v139[5] = 0LL;
      v139[6] = 0LL;
      v139[7] = 0LL;
      WdLogEvent5_WdCriticalError(v139);
    }
    VIDMM_DEVICE::CleanupAllocationCommitment((VIDMM_DEVICE *)v171, (struct VIDMM_ALLOC *)v15);
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v199, 0, sizeof(v199));
      v140 = (__int64)v171[2].Flink;
      LODWORD(v199[5]) = 3;
      v199[6] = v15;
      VidSchCancelDeviceCommand(v140, (__int64)v199, 1, 0);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320), v26, v27, v28);
    if ( (**(_DWORD **)(v14 + 504) & 0x20000000) == 0 )
      goto LABEL_33;
    v51 = 1;
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    v53 = (VIDMM_DEVICE *)*v15;
    v54 = (*v15)[5];
    v55 = (__int64)(*v15 + 5);
    if ( v54 != (struct _VIDMM_GLOBAL_ALLOC *)v55 )
    {
      while ( 1 )
      {
        v56 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v54 - 40);
        v54 = *(struct _VIDMM_GLOBAL_ALLOC **)v54;
        if ( v56 != v15 && (*((_DWORD *)v56 + 7) & 4) == 0 )
          break;
        if ( v54 == (struct _VIDMM_GLOBAL_ALLOC *)v55 )
          goto LABEL_99;
      }
      v51 = 0;
    }
LABEL_99:
    if ( v53 != *(VIDMM_DEVICE **)(v14 + 104) )
    {
      if ( v51 )
        *((_BYTE *)v53 + 32) |= 2u;
LABEL_115:
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320), v55, (__int64)v53, v52);
      if ( !v168 )
      {
LABEL_47:
        *((_DWORD *)v15 + 7) |= 4u;
        v34 = (volatile signed __int32 *)v15[26];
        if ( v34 && _InterlockedExchangeAdd(v34 + 8, 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)this + 2),
            (struct DXGTERMINATIONTRACKER *)v15[26]);
        goto LABEL_50;
      }
LABEL_33:
      if ( !v11 )
      {
        if ( *(_QWORD *)(v14 + 136) )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v29, v21, v10, v30);
          v31 = v184;
          LOBYTE(v165) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v14 + 136) + 48LL))(
            *(_QWORD *)(v14 + 136),
            v14,
            0LL,
            0LL,
            v165,
            v184);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          v31 = v184;
        }
        if ( *(_QWORD *)(v14 + 264) )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v29, v21, v10, v30);
          v80 = (_QWORD *)(v14 + 232);
          v81 = *(_QWORD *)(v14 + 232);
          v82 = *(_QWORD **)(v14 + 240);
          if ( *(_QWORD *)(v81 + 8) != v14 + 232 || (_QWORD *)*v82 != v80 )
            __fastfail(3u);
          *v82 = v81;
          *(_QWORD *)(v81 + 8) = v82;
          v83 = *(_QWORD *)(v14 + 264);
          *v80 = 0LL;
          *(_QWORD *)(v14 + 240) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 88LL))(v83, v14);
        }
        if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
        {
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v31);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v14 + 8));
          *(_DWORD *)(v14 + 84) &= ~2u;
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v161 = *((_DWORD *)this + 9982);
            if ( v161 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q((__int64)v32, &EventBlockThread, v33, v161);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
        }
        *((_QWORD *)this + 4990) = KeGetCurrentThread();
        if ( *(_QWORD *)(v14 + 416) )
          VIDMM_GLOBAL::RemoveAllocationFromOfferList(v32, (struct _VIDMM_GLOBAL_ALLOC *)v14);
        if ( *(_QWORD *)(v14 + 432) )
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v32, (struct _VIDMM_GLOBAL_ALLOC *)v14);
        *((_QWORD *)this + 4990) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
        KeLeaveCriticalRegion();
      }
      goto LABEL_47;
    }
    if ( !v51 )
      goto LABEL_115;
    v57 = WdLogNewEntry5_WdEvent(v54, v55, v53, v52);
    *(_QWORD *)(v57 + 24) = v14;
    *(_QWORD *)(v57 + 32) = v15;
    WdLogEvent5_WdEvent(v57);
    if ( *(_QWORD *)(v14 + 264) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v59, v58, v60, v61);
      v141 = (_QWORD *)(v14 + 232);
      v142 = *(_QWORD *)(v14 + 232);
      v143 = *(_QWORD **)(v14 + 240);
      if ( *(_QWORD *)(v142 + 8) != v14 + 232 || (_QWORD *)*v143 != v141 )
        __fastfail(3u);
      *v143 = v142;
      *(_QWORD *)(v142 + 8) = v143;
      *v141 = 0LL;
      *(_QWORD *)(v14 + 240) = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 264) + 88LL))(*(_QWORD *)(v14 + 264), v14);
    }
    *(_BYTE *)(*(_QWORD *)(v14 + 104) + 32LL) |= 2u;
    if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v14 + 8));
      *(_DWORD *)(v14 + 84) &= ~2u;
    }
    v62 = (VIDMM_DEVICE **)(v14 + 296);
    v63 = *(struct VIDMM_ALLOC ***)(v14 + 296);
    v169 = *(struct VIDMM_ALLOC ***)(v14 + 104);
    if ( v63 != (struct VIDMM_ALLOC **)(v14 + 296) )
    {
      while ( 1 )
      {
        v40 = (*(_BYTE *)(v63 - 3) & 2) == 0;
        v58 = (PRKPROCESS **)(v63 - 7);
        v63 = (struct VIDMM_ALLOC **)*v63;
        v172 = (VIDMM_DEVICE *)v58;
        if ( v40 )
          break;
        if ( v63 == v62 )
          goto LABEL_107;
      }
      v61 = *(_QWORD *)(v14 + 136);
      if ( v61 )
      {
        VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), v61, *(_QWORD *)(v14 + 16), 1);
        VidMmRecordAlloc(this, v14, (__int64)v172, *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
        v58 = (PRKPROCESS **)v172;
      }
      v68 = *(_QWORD *)(v14 + 136);
      *(_QWORD *)(v14 + 104) = v58;
      if ( v68
        && (*(_DWORD *)(v68 + 56) & 0x1001) != 0
        && *(int *)(v14 + 348) > 0
        && (KeStackAttachProcess(*v58[1], &v201),
            LODWORD(v180) = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
                              this,
                              (struct _VIDMM_LOCAL_ALLOC *)v169,
                              *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104)),
            KeUnstackDetachProcess(&v201),
            (int)v180 < 0) )
      {
        _InterlockedIncrement(&dword_1C0035554);
        v144 = (_QWORD *)WdLogNewEntry5_WdLowResource(v63);
        v144[3] = v14;
        v144[4] = *(_QWORD *)(v14 + 8);
        v144[5] = (int)v180;
        WdLogEvent5_WdLowResource(v144);
        v145 = *v62;
        v175 = *v62;
        if ( *v62 != (VIDMM_DEVICE *)v62 )
        {
          v146 = v169;
          do
          {
            v147 = (_QWORD *)((char *)v145 - 56);
            if ( (struct VIDMM_ALLOC **)((char *)v145 - 56) != v146 )
            {
              v148 = v147 + 5;
              v149 = (_QWORD *)v147[5];
              if ( v149 != v148 )
              {
                v150 = v149;
                v151 = v148;
                do
                {
                  v152 = *(_QWORD *)(*(v150 - 4) + 32LL);
                  VidSchiMarkDeviceAsError(v152, 13);
                  VidSchSuspendResumeDevice(v152, 1, 0, 0);
                  VidSchSuspendResumeDevice(v152, 0, 0, 0);
                  v150 = (_QWORD *)*v150;
                }
                while ( v150 != v151 );
                v145 = v175;
                v62 = (VIDMM_DEVICE **)(v14 + 296);
              }
              v146 = v169;
            }
            v145 = *(VIDMM_DEVICE **)v145;
            v175 = v145;
          }
          while ( v145 != (VIDMM_DEVICE *)v62 );
          v12 = v189;
        }
        v153 = *(_QWORD *)(v14 + 136);
        v65 = 1;
        *(_DWORD *)(v14 + 76) |= 0x20000000u;
        v154 = *(_QWORD *)(v14 + 16);
        *(_DWORD *)(v14 + 80) ^= (*(_DWORD *)(v14 + 80) ^ *(_DWORD *)(v153 + 20)) & 0x1F;
        v168 = 1;
        VidMmRecordAlloc(this, v14, (__int64)v169, v153, v154, 0);
        VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 1);
      }
      else
      {
        v65 = 0;
      }
      goto LABEL_113;
    }
LABEL_107:
    if ( *(_DWORD *)(v14 + 160) && g_IsInternalRelease )
    {
      v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v58, v60, v61);
      v155[3] = 270LL;
      v155[4] = 9LL;
      v155[5] = 0LL;
      v155[6] = 0LL;
      v155[7] = 0LL;
      WdLogEvent5_WdCriticalError(v155);
    }
    v168 = 1;
    v167 = 1;
    v63 = (struct VIDMM_ALLOC **)v15[2][5];
    if ( v63 )
    {
      v64 = v63[7];
      if ( !v64 )
      {
LABEL_112:
        v65 = v167;
        goto LABEL_113;
      }
      if ( !*((_DWORD *)v64 + 14) )
      {
        *(_DWORD *)(v14 + 84) |= 1u;
        goto LABEL_112;
      }
      v70 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5041);
      v187 = 0LL;
      if ( (int)VIDMM_GLOBAL::OpenOneAllocation(this, v70, (struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL, 0, 0LL, &v187, v183) < 0 )
      {
        _InterlockedIncrement(&dword_1C0035554);
        v156 = WdLogNewEntry5_WdLowResource(v71);
        *(_QWORD *)(v156 + 24) = v14;
        *(_QWORD *)(v156 + 32) = *(_QWORD *)(v14 + 8);
        WdLogEvent5_WdLowResource(v156);
        v65 = 1;
      }
      else
      {
        v167 = 0;
        v168 = 0;
        v60 = *(struct _VIDMM_LOCAL_ALLOC **)v187;
        *(_DWORD *)(v14 + 84) |= 4u;
        v72 = *(_DWORD *)(v14 + 348) <= 0;
        *(_QWORD *)(v14 + 104) = v60;
        if ( v72
          || (v157 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(this, (struct _VIDMM_LOCAL_ALLOC *)v169, v60),
              v159 = v157,
              v157 >= 0) )
        {
          v63 = v169;
          if ( !v169[1] )
            goto LABEL_112;
          v61 = *(_QWORD *)(v14 + 136);
          if ( !v61 )
            goto LABEL_112;
          VidMmRecordAlloc(this, v14, (__int64)v169, v61, *(_QWORD *)(v14 + 16), 1);
          VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
          v65 = 0;
        }
        else
        {
          _InterlockedIncrement(&dword_1C0035554);
          v160 = (_QWORD *)WdLogNewEntry5_WdLowResource(v158);
          v160[3] = v14;
          v160[4] = *(_QWORD *)(v14 + 8);
          v160[5] = v159;
          WdLogEvent5_WdLowResource(v160);
          v191 = 0;
          VIDMM_GLOBAL::CloseOneAllocation(this, v187, 0LL, 0, 0, 0LL);
          *(_DWORD *)(v14 + 84) &= ~4u;
          v65 = 1;
          v168 = 1;
          *(_QWORD *)(v14 + 104) = 0LL;
        }
      }
    }
    else
    {
      v65 = 1;
    }
LABEL_113:
    v66 = WdLogNewEntry5_WdEvent(v63, v58, v60, v61);
    *(_QWORD *)(v66 + 24) = *(_QWORD *)(v14 + 104);
    WdLogEvent5_WdEvent(v66);
    if ( v65 )
      *(_QWORD *)(v14 + 104) = 0LL;
    goto LABEL_115;
  }
  if ( (_DWORD)v22 != 113 )
  {
    if ( (_DWORD)v22 == 206 )
    {
      v47 = **v15;
      if ( *((_DWORD *)v47 + 86) )
      {
        if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v15) && (*((_DWORD *)v47 + 19) & 0x40) == 0 )
        {
          v136 = WdLogNewEntry5_WdWarning(v50);
          *(_QWORD *)(v136 + 24) = v47;
          WdLogEvent5_WdWarning(v136);
          v24 = 3221225473LL;
          v166 = -1073741823;
          goto LABEL_51;
        }
        v10 = (__int64)a8;
        v21 = 1LL;
      }
      if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
        v48 = 1;
      else
        v48 = v8;
      if ( v48 | *((_DWORD *)v15 + 42) && *(_WORD *)(*((_QWORD *)v47 + 63) + 4LL) < 2u )
      {
        v49 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v15, 0LL, a7, v9, (struct VIDMM_ALLOC **)v10);
        v24 = v49;
        v166 = v49;
        goto LABEL_51;
      }
      goto LABEL_50;
    }
    switch ( (int)v22 )
    {
      case 119:
        updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                    this,
                    *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v12 + 4),
                    (struct VIDMM_ALLOC **)v10);
        goto LABEL_19;
      case 203:
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(Flink, 1LL, v10, v16) + 24) = v15;
        if ( *(_BYTE *)(v14 + 96) )
        {
          v24 = 3223191814LL;
          v166 = -1071775482;
        }
        else
        {
          if ( !*(_DWORD *)(v14 + 164) )
          {
            v74 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v21, v10, v16);
              v74 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
            }
            if ( *(_QWORD *)(v14 + 136) )
            {
              v75 = **(_DWORD **)(v14 + 504);
              if ( (v75 & 0x40000000) == 0
                && ((v75 & 0x20000000) == 0 || v75 >= 0)
                && (v75 & 0x80000) == 0
                && (v75 & 0x20000) == 0 )
              {
                if ( *v74 )
                  WdLogNewEntry5_WdTrace(v74, v21, v10, v16);
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v14);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
              }
            }
          }
          v76 = 4;
          v77 = **(_DWORD **)(v14 + 504);
          if ( (v77 & 0x20000) != 0 )
          {
            v76 = *((_DWORD *)v12 + 8);
          }
          else if ( (v77 & 0x40000000) != 0 || v77 < 0 )
          {
            v76 = 3;
          }
          v166 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v15, v76, a7, v181, a8);
          v24 = v166;
          if ( (v166 & 0x80000000) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 164));
          v78 = (VIDMM_GLOBAL *)((char *)this + 3720);
          v79 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
          if ( v79 != (VIDMM_GLOBAL *)((char *)this + 3720) )
          {
            do
            {
              v89 = (VIDMM_SEGMENT ***)*((_QWORD *)v79 - 7);
              v90 = (VIDMM_DEVICE **)((char *)v79 - 56);
              v79 = *(VIDMM_GLOBAL **)v79;
              v91 = *v89;
              v92 = *((_DWORD *)*v89 + 32);
              if ( v92 )
              {
                if ( v92 == 1 )
                  VIDMM_SEGMENT::ReclaimResource(v91[17], (struct _VIDMM_GLOBAL_ALLOC *)v91);
                VIDMM_DEVICE::AddCommitment(v90[1], (struct VIDMM_ALLOC *)v90);
              }
            }
            while ( v79 != v78 );
            v24 = v166;
          }
          *((_QWORD *)this + 466) = (char *)this + 3720;
          *(_QWORD *)v78 = v78;
        }
        goto LABEL_51;
      case 207:
        if ( !*((_DWORD *)v15 + 42) && (*((_BYTE *)v15 + 25) & 1) == 0 )
        {
          if ( (*((_DWORD *)v12 + 8) & 1) != 0 )
            v10 = 1LL;
          else
            LOBYTE(v10) = 0;
          VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v15, v10, (__int64)v16);
        }
        _InterlockedDecrement((volatile signed __int32 *)v15 + 45);
        break;
      case 208:
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(Flink, 1LL, v10, v16) + 24) = v14;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 496, 0LL);
        if ( *(_QWORD *)(v14 + 264) )
        {
          v96 = (_QWORD *)(v14 + 232);
          v97 = *(_QWORD *)(v14 + 232);
          v98 = *(_QWORD **)(v14 + 240);
          if ( *(_QWORD *)(v97 + 8) != v14 + 232 || (_QWORD *)*v98 != v96 )
            __fastfail(3u);
          *v98 = v97;
          *(_QWORD *)(v97 + 8) = v98;
          v99 = *(_QWORD *)(v14 + 264);
          *v96 = 0LL;
          *(_QWORD *)(v14 + 240) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 88LL))(v99, v14);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
        }
        VIDMM_GLOBAL::CalculateLockData(this, &v186, v15);
        if ( v186 == 4 )
        {
          v100 = a8;
        }
        else
        {
          KeStackAttachProcess(**((PRKPROCESS **)v180 + 1), &ApcState);
          v100 = a8;
          v166 = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct VIDMM_LOCK2_DATA *)&v186,
                   (struct VIDMM_ALLOC *)v15,
                   *((void ***)v12 + 4),
                   *((_DWORD *)v12 + 10),
                   v181,
                   a8);
          KeUnstackDetachProcess(&ApcState);
          if ( v186 != 4 )
            goto LABEL_219;
        }
        v166 = VIDMM_GLOBAL::LockInternal(
                 this,
                 (struct VIDMM_LOCK2_DATA *)&v186,
                 (struct VIDMM_ALLOC *)v15,
                 *((void ***)v12 + 4),
                 *((_DWORD *)v12 + 10),
                 v181,
                 v100);
LABEL_219:
        ExReleasePushLockExclusiveEx(v14 + 496, 0LL);
        KeLeaveCriticalRegion();
        break;
      case 209:
        inited = VIDMM_GLOBAL::InitContextAllocation(
                   (ADAPTER_RENDER **)this,
                   (__int64 **)v15,
                   1,
                   v9,
                   (struct VIDMM_ALLOC **)v10);
        v24 = inited;
        v166 = inited;
        goto LABEL_51;
      case 210:
        v35 = 0LL;
        v21 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 504) + 4LL);
        if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 42) && (unsigned __int16)v21 < 2u )
        {
          v73 = VIDMM_GLOBAL::PageInOneAllocation(
                  (__int64)this,
                  (__int64 **)v15,
                  0LL,
                  a7,
                  v9,
                  (struct VIDMM_ALLOC **)v10);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          v24 = v73;
          v166 = v73;
          goto LABEL_51;
        }
        v24 = 0LL;
        goto LABEL_52;
      case 211:
        v93 = (VIDMM_DEVICE *)(*((_QWORD *)v12 + 4) + 296LL);
        v173 = v93;
        for ( i = *(VIDMM_DEVICE **)v93; i != v93; i = *(VIDMM_DEVICE **)i )
        {
          v95 = (__int64 *)*((_QWORD *)i - 2);
          if ( v95 != (__int64 *)((char *)i - 16) )
          {
            do
            {
              VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v95 - 5, 0LL, (__int64)v16);
              v95 = (__int64 *)*v95;
            }
            while ( v95 != (__int64 *)((char *)i - 16) );
            v93 = v173;
          }
        }
        break;
      case 212:
        VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v15, *((_DWORD *)v12 + 8));
        break;
      case 213:
        VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16, 0, 0xFFFFFFFF);
        VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v171);
        v85 = 0;
        if ( !v171[11].Flink )
        {
          v85 = 1;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v196,
            (struct _KTHREAD **)&v171->Flink[2595]);
          VIDMM_GLOBAL::InsertToPenaltyBox((__int64)v171->Flink, (__int64)v171, 4LL, v86);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v196);
        }
        if ( v15 )
          VIDMM_GLOBAL::FaultOneAllocation((VIDMM_GLOBAL *)v171->Flink, (VIDMM_DEVICE **)v15);
        else
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v171);
        VIDMM_GLOBAL::EvictFromFaultedList(v87, (struct VIDMM_DEVICE *)v171);
        v166 = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v171);
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v171, 0);
        VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v171);
        if ( v85 )
        {
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v197,
            (struct _KTHREAD **)&v171->Flink[2595]);
          VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v88, v171 + 11);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v197);
        }
        break;
      case 214:
        v101 = *(_DWORD *)(v14 + 76) & 0x3F;
        v102 = *((_QWORD *)this + 5017);
        v103 = *(_DWORD *)(v14 + 68);
        v104.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
        v105 = 456 * v101;
        v106 = *(_DWORD *)(v14 + 76) >> 7;
        v107 = *((_DWORD *)v12 + 12) >> 1;
        LOBYTE(v106) = (*(_DWORD *)(v14 + 76) & 0x80) != 0;
        LOBYTE(v107) = (*((_DWORD *)v12 + 12) & 2) != 0;
        v108 = (*((_DWORD *)v12 + 12) & 4) != 0;
        LODWORD(v184) = *(_DWORD *)(v14 + 76) & 0x3F;
        v109 = 456 * v101 + v102;
        v188 = v101;
        v174 = 456 * v101;
        v178 = v103;
        LODWORD(v180) = v106;
        v179 = v107;
        v170 = v108;
        if ( (_BYTE)v107 )
        {
          v110 = *(_QWORD *)(v14 + 136);
          v103 = *((_DWORD *)v12 + 9);
          v178 = v103;
          if ( v110
            && *(_DWORD *)(v14 + 128)
            && !_bittest((const int *)&v103, (unsigned __int8)(*(_BYTE *)(v110 + 20) - *(_BYTE *)(v109 + 4))) )
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
            v10 = (__int64)a8;
            v108 = v170;
            LOBYTE(v107) = v179;
            v103 = v178;
          }
          *(_DWORD *)(v14 + 68) = v103;
          v111 = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (*((unsigned __int8 *)v12 + 53) << 6)) & 0x40;
          *(_DWORD *)(v14 + 76) = v111;
          v112 = v111 ^ (*((_BYTE *)v12 + 52) << 7);
          LODWORD(v180) = *((unsigned __int8 *)v12 + 52);
          v113 = v111 ^ v112 & 0x80;
          v105 = v174;
          *(_DWORD *)(v14 + 76) = v113;
        }
        if ( (*((_DWORD *)v12 + 12) & 1) != 0 )
        {
          v114 = 1 << (*(_WORD *)(v109 + 12) - *(_BYTE *)(v109 + 4));
          if ( (*((_DWORD *)v12 + 11) & 1) != 0 )
          {
            if ( *(_DWORD *)(v14 + 128) && (*(_DWORD *)(*(_QWORD *)(v14 + 136) + 56LL) & 0x1000) != 0 )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
              v10 = (__int64)a8;
              v108 = v170;
              LOBYTE(v107) = v179;
              v103 = v178;
            }
            if ( (*(_DWORD *)(v14 + 76) & 0x40) != 0 )
              *(_DWORD *)(v14 + 68) &= ~v114;
            *(_DWORD *)v15[12] |= 0x8000u;
          }
          v105 = v174;
        }
        if ( !v108 )
          goto LABEL_257;
        v104.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v12 + 10);
        v115 = 0LL;
        v116 = 0LL;
        if ( v104.0 )
        {
          if ( (*(_BYTE *)&v104.0 & 0x1F) != 0 )
          {
            v115 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * ((*((_DWORD *)v12 + 10) & 0x1Fu) + *(_DWORD *)(v105 + *((_QWORD *)this + 5017) + 4) - 1));
            v105 = v174;
            v117 = *(_BYTE *)(v115 + 56) & 1;
          }
          else
          {
            v117 = (unsigned __int8)v180;
          }
          if ( ((v104.Value >> 6) & 0x1F) != 0 )
          {
            v105 = ((v104.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(v105 + *((_QWORD *)this + 5017) + 4);
            v116 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v105);
          }
        }
        else
        {
          v117 = (unsigned __int8)v180;
        }
        v118 = 0;
        if ( !*(_DWORD *)(v14 + 128) )
          goto LABEL_254;
        v119 = *(_QWORD *)(v14 + 136);
        if ( v115 != v119 && v116 != v119 )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v14);
          VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
LABEL_252:
          v10 = (__int64)a8;
          goto LABEL_253;
        }
        if ( *(_DWORD *)(v14 + 72) != v104.0 )
        {
          v105 = *(_QWORD *)(v14 + 104);
          if ( v105 )
          {
            if ( *(_QWORD *)(v105 + 8) )
            {
              v118 = 1;
              VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), v119, *(_QWORD *)(v14 + 16), 1);
              goto LABEL_252;
            }
          }
        }
LABEL_253:
        v108 = v170;
LABEL_254:
        v120 = (*(_DWORD *)(v14 + 76) ^ (v117 << 10)) & 0x400;
        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v104;
        *(_DWORD *)(v14 + 76) ^= v120;
        if ( v118 )
        {
          VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
          v10 = (__int64)a8;
          v108 = v170;
        }
        v103 = v178;
        LOBYTE(v107) = v179;
LABEL_257:
        v21 = *(unsigned int *)(v14 + 76);
        v121 = *(_DWORD *)(v14 + 76) >> 12;
        v179 = v121;
        if ( v108 && (_BYTE)v107 )
        {
          v105 = (unsigned int)v21 ^ ((unsigned int)v21 ^ (*((_DWORD *)v12 + 8) << 12)) & 0xF0000;
          *(_DWORD *)(v14 + 76) = v105;
          *(_DWORD *)(v14 + 76) = v105 ^ ((unsigned __int16)v105 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v12 + 8) << 12)) & 0xF000;
        }
        if ( v108 != (_BYTE)v107 )
        {
          if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                  (VIDMM_GLOBAL *)v105,
                  *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                  v103) )
          {
            v124 = WdLogNewEntry5_WdAssertion(v123, v122);
            *(_QWORD *)(v124 + 24) = 10567LL;
            WdLogEvent5_WdAssertion(v124);
            VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
          }
          MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, (unsigned int)v184, v104, &v182);
          v185 = 0;
          if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                  this,
                  (unsigned int)v184,
                  v178,
                  MostPreferredSegment,
                  (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v185) )
          {
            v127 = WdLogNewEntry5_WdAssertion(v126, v21);
            *(_QWORD *)(v127 + 24) = 10579LL;
            WdLogEvent5_WdAssertion(v127);
            VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
          }
          v10 = (__int64)a8;
          *(_DWORD *)(v14 + 76) ^= (*(_DWORD *)(v14 + 76) ^ (v185 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v185 << 12)) & 0xF000;
        }
        v128 = v121 >> 4;
        if ( (v128 != (HIWORD(*(_DWORD *)(v14 + 76)) & 0xF)
           || ((v121 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0)
          && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 42) )
        {
          v129 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL) + 8 * v188);
          v130 = *(_QWORD *)(v129 + 48) + 264LL * (*(_DWORD *)(v14 + 76) & 0x3F);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v198,
            (struct _KTHREAD **)(v129 + 328));
          VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v129);
          v131 = v179;
          if ( (((unsigned __int8)v179 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0 )
          {
            *(_QWORD *)(v130 + 8LL * (v179 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
            v132 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
            *(_QWORD *)(v130 + 8 * v132 + 136) += *(_QWORD *)(v14 + 16);
          }
          if ( v128 != (*(_WORD *)(v14 + 78) & 0xF) )
          {
            *(_QWORD *)(v130 + 8LL * (v131 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
            v133 = v130 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
            *(_QWORD *)(v133 + 72) += *(_QWORD *)(v14 + 16);
          }
          VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v129);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v198);
          v10 = (__int64)a8;
        }
        *((_DWORD *)v12 + 12) &= 0xFFFFFFF8;
        if ( *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 42) && *(_WORD *)(*(_QWORD *)(v14 + 504) + 4LL) < 2u )
        {
          v134 = VIDMM_GLOBAL::PageInOneAllocation(
                   (__int64)this,
                   (__int64 **)v15,
                   0LL,
                   a7,
                   v181,
                   (struct VIDMM_ALLOC **)v10);
          v24 = v134;
          v166 = v134;
          goto LABEL_51;
        }
        break;
      default:
        v135 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Flink, 1LL, v10, v16);
        v135[3] = 270LL;
        v135[4] = 5LL;
        v135[5] = v22;
        v135[6] = -1073741811LL;
        v135[7] = 0LL;
        WdLogEvent5_WdCriticalError(v135);
        break;
    }
LABEL_50:
    v24 = v166;
    goto LABEL_51;
  }
  updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              (VIDMM_GLOBAL *)Flink,
              (struct _VIDMM_DEFERRED_COMMAND *)((char *)v12 + 32),
              (struct VIDMM_ALLOC **)v10);
LABEL_19:
  v166 = updated;
  v24 = updated;
  if ( updated == -1073741267 )
  {
    *v181 = 1;
LABEL_318:
    VIDMM_GLOBAL::EndPreparation(this, v21, 0LL, 0, 0LL, 0LL);
    goto LABEL_72;
  }
LABEL_51:
  v35 = 0LL;
LABEL_52:
  if ( *v181 )
    goto LABEL_318;
  v36 = (_DWORD *)*((_QWORD *)v12 + 3);
  if ( v36 )
    *v36 = v24;
  v37 = v190;
  v38 = a5;
  v39 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v40 = *((_DWORD *)this + 1604) == 0;
  v195 = v37;
  v194 = a5;
  if ( !v40 )
  {
    do
    {
      v41 = 0;
      v42 = 456LL * v39;
      if ( *(_DWORD *)(v42 + *((_QWORD *)this + 5017) + 8) )
      {
        do
        {
          v43 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v41 + *(_DWORD *)(v42 + *((_QWORD *)this + 5017) + 4)));
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v43 + 144LL))(v43, v21, v10, v35);
          ++v41;
        }
        while ( v41 < *(_DWORD *)(v42 + *((_QWORD *)this + 5017) + 8) );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_p(v24, &EventPagingEndPreparation, v10, *((_QWORD *)this + v39 + 143));
      if ( *((_DWORD *)this + v39 + 414) != *((_DWORD *)this + v39 + 478)
        || *((_DWORD *)this + v39 + 542) != *((_DWORD *)this + v39 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v39, 0LL, 0LL, 0LL, 0, 0);
      }
      v24 = *((_QWORD *)this + v39 + 143);
      if ( v24 )
        *(_DWORD *)(v24 + 172) = *(_DWORD *)(v24 + 168);
      ++v39;
    }
    while ( v39 < *((_DWORD *)this + 1604) );
    v12 = v189;
    v38 = a5;
    v35 = 0LL;
    v37 = v190;
  }
  if ( *((_BYTE *)this + 41696) )
  {
    v162 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * *((unsigned int *)this + 10425));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *(_DWORD *)(v162 + 372));
    v163 = *(_QWORD *)(v162 + 40);
    v193 = 0LL;
    v176 = 0;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      *(_QWORD *)(v162 + 144),
      0,
      v163,
      0,
      (__int64)VIDMM_SEGMENT::ResumeDevicesOnAllocationCB,
      v162,
      0LL,
      (__int64)&v193,
      (__int64)&v176);
    if ( *(_BYTE *)(v162 + 465) )
    {
      v164 = *(_QWORD *)(v162 + 8);
      *(_BYTE *)(v162 + 465) = 0;
      VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v164 + 16) + 384LL));
    }
    v38 = a5;
    v35 = 0LL;
    *((_BYTE *)this + 41696) = 0;
    *((_DWORD *)this + 10425) = -1;
  }
  if ( v177 )
  {
    v44 = *((_QWORD *)this + 2);
    v192 = 0;
    VidSchSignalSyncObjectsFromGpu(
      *(unsigned int *)(*(_QWORD *)(v44 + 384) + 56LL),
      *(_QWORD **)(*(_QWORD *)(v44 + 384) + 224LL),
      1u,
      (char *)&v195,
      0,
      &v194);
    v24 = *((unsigned int *)this + 1604);
    if ( (unsigned int)v24 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL), v37, v38, (unsigned int)((1 << v24) - 1));
    v35 = 0LL;
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
LABEL_72:
  if ( *(_DWORD *)v12 == 200 )
  {
    v45 = (struct _KEVENT *)(*((_QWORD *)v12 + 2) + 72LL);
LABEL_79:
    KeSetEvent(v45, 0, 0);
    goto LABEL_80;
  }
  if ( !*v181 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 44, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v21, v10, v35) + 24) = v15;
    v45 = (struct _KEVENT *)(v15 + 23);
    goto LABEL_79;
  }
LABEL_80:
  result = v166;
  *((_DWORD *)v12 + 19) = v166;
  return result;
}
