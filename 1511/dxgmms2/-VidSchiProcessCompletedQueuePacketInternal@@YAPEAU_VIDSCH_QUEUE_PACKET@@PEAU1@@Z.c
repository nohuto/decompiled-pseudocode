/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000E204 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000EA90 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0012EAC (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C000163C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00016E8 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0001BD4 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001CC8 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C000222C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F398 (VidSchiSignalRegisteredEvent.c)
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102F8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0011664 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014A70 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EBAC (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     Template_pp @ 0x1C001F87C (Template_pp.c)
 *     Template_px @ 0x1C0020A14 (Template_px.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r9
  struct _VIDSCH_QUEUE_PACKET **v11; // rdx
  struct _VIDSCH_QUEUE_PACKET **v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _VIDSCH_SYNC_POINT *v16; // r12
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // rbx
  struct _VIDSCH_CONTEXT **v21; // r10
  _VIDSCH_SYNC_POINT *v22; // rbx
  _VIDSCH_SYNC_POINT *v23; // r12
  int v24; // ecx
  __int64 v25; // r12
  BOOL v26; // ebx
  __int64 v27; // r9
  union _ULARGE_INTEGER v28; // rbx
  struct _VIDSCH_GLOBAL *v29; // r10
  struct _KEVENT **v30; // rbx
  KIRQL v31; // r12
  volatile signed __int32 *v32; // rcx
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rcx
  unsigned int i; // ecx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rcx
  _QWORD **v39; // rbx
  _QWORD *v40; // r10
  _VIDSCH_SYNC_POINT *v41; // r12
  struct _KEVENT *v42; // rbx
  struct _KEVENT *v43; // r13
  struct _KEVENT *v44; // rbx
  KIRQL v45; // r13
  struct _KEVENT *v46; // r12
  int v47; // eax
  __int64 v48; // r15
  KSPIN_LOCK *v49; // r15
  _QWORD *v50; // rdi
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _DWORD *v53; // r14
  __int64 **v54; // rbx
  _QWORD *v55; // rax
  __int64 *v56; // rdi
  struct _KEVENT *v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // r9d
  __int64 v62; // r10
  bool v63; // zf
  int v64; // ecx
  __int64 v65; // r8
  unsigned int v66; // r10d
  struct _KEVENT *v67; // r12
  struct _KEVENT *v68; // rbx
  __int64 v69; // rax
  _VIDSCH_SYNC_POINT *v70; // rcx
  __int64 v71; // r9
  unsigned int v72; // r10d
  unsigned int v73; // r11d
  __int64 v74; // r8
  __int64 v75; // rdx
  int v76; // ecx
  _VIDSCH_SYNC_POINT *v77; // r10
  _VIDSCH_SYNC_POINT *v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // r11d
  __int64 v81; // r8
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  struct _KEVENT *v87; // rcx
  _QWORD *v88; // r12
  _QWORD *v89; // r10
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rcx
  void (__fastcall *v93)(_QWORD); // rax
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  void *v96; // rcx
  _QWORD *v97; // r10
  __int64 v98; // rcx
  _QWORD *v99; // rax
  VIDMM_GLOBAL **v100; // rax
  struct _VIDSCH_CONTEXT *v101; // r8
  VIDMM_GLOBAL *v102; // r8
  VIDMM_GLOBAL **v103; // rcx
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // r10
  struct VIDMM_ALLOC *v109; // r11
  __int64 v110; // rcx
  char *v111; // rax
  _QWORD *v112; // r8
  _VIDSCH_SYNC_POINT *v113; // rdx
  _VIDSCH_SYNC_POINT **v114; // rax
  _VIDSCH_SYNC_POINT *v115; // r9
  int v116; // eax
  ULONG v117; // eax
  struct _KEVENT *v118; // r12
  int Flink; // ecx
  struct _VIDSCH_GLOBAL **v120; // rax
  struct _VIDSCH_CONTEXT *v121; // r8
  struct _VIDSCH_GLOBAL *v122; // r8
  struct _VIDSCH_GLOBAL **v123; // rcx
  struct _VIDSCH_GLOBAL **v124; // rax
  struct _VIDSCH_GLOBAL *v125; // rdx
  struct _VIDSCH_GLOBAL *v126; // rdx
  struct _VIDSCH_GLOBAL **v127; // rcx
  struct VIDMM_ALLOC *v128; // r10
  __int64 v129; // rcx
  _QWORD *v130; // rax
  struct _VIDSCH_GLOBAL *v131; // r8
  _VIDSCH_SYNC_POINT *v132; // rdx
  _VIDSCH_SYNC_POINT **v133; // rax
  __int64 v134; // r9
  int v135; // ecx
  int v136; // ecx
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  struct _VIDSCH_CONTEXT *v139; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v140; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v141; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v142; // [rsp+40h] [rbp-C0h]
  unsigned int v143; // [rsp+48h] [rbp-B8h]
  unsigned int v144; // [rsp+48h] [rbp-B8h]
  __int64 v145; // [rsp+50h] [rbp-B0h]
  _QWORD *v146; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_GLOBAL **v147; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_GLOBAL **v148; // [rsp+50h] [rbp-B0h]
  VIDMM_GLOBAL *v149; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_GLOBAL *v150; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_GLOBAL *v151; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_GLOBAL *v152; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL **v153; // [rsp+60h] [rbp-A0h]
  _QWORD *v154; // [rsp+60h] [rbp-A0h]
  struct _VIDSCH_GLOBAL *v155; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL *v156; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v157; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v158; // [rsp+68h] [rbp-98h]
  _VIDSCH_SYNC_POINT *v159; // [rsp+70h] [rbp-90h]
  unsigned int v160; // [rsp+70h] [rbp-90h]
  __int64 v161; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v162; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v163; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v164; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v165; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v166; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v168; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v169; // [rsp+138h] [rbp+38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v170; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v172; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+198h] [rbp+98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v174; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1C8h] [rbp+C8h] BYREF
  _VIDSCH_SYNC_POINT *v176; // [rsp+230h] [rbp+130h]
  unsigned int v177; // [rsp+230h] [rbp+130h]
  KIRQL v178; // [rsp+230h] [rbp+130h]
  KIRQL v179; // [rsp+230h] [rbp+130h]
  KIRQL v180; // [rsp+230h] [rbp+130h]
  _VIDSCH_SYNC_POINT *v181; // [rsp+230h] [rbp+130h]
  KIRQL v182; // [rsp+238h] [rbp+138h]
  BOOL v183; // [rsp+240h] [rbp+140h]
  BOOL v184; // [rsp+248h] [rbp+148h]

  v3 = *((_QWORD *)a1 + 10);
  v4 = 0;
  v184 = 0;
  v183 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(v3 + 104);
  v143 = 0;
  v161 = 0LL;
  v8 = *(_QWORD *)(v6 + 24);
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v92 = *(_QWORD *)(v3 + 56);
    if ( !v92 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v92 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pp(v92, &AbortQueuePacket, a3, a1, v92);
  }
  v9 = *((_DWORD *)a1 + 19);
  if ( (v9 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 19) = v9 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 96LL) + 2952LL) != -1 )
    {
      v93 = *(void (__fastcall **)(_QWORD))(v8 + 2488);
      if ( v93 )
        v93(*(_QWORD *)(v8 + 2520));
    }
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v32 = (volatile signed __int32 *)*((_QWORD *)a1 + 35);
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v32, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
    v33 = (volatile signed __int32 *)*((_QWORD *)a1 + 34);
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v33, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
  }
  v182 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1824), &LockHandle);
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v138[3] = 281LL;
    v138[4] = 512LL;
    v138[5] = v8;
    v138[6] = v3;
    v138[7] = a1;
    WdLogEvent5_WdCriticalError(v138);
    JUMPOUT(0x1C0019214LL);
  }
  if ( (*((_DWORD *)a1 + 19) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId(a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v11 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  v12 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( v11[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || *v12 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
  {
    __fastfail(3u);
  }
  *v12 = (struct _VIDSCH_QUEUE_PACKET *)v11;
  v13 = (_QWORD *)(v3 + 664);
  v11[1] = (struct _VIDSCH_QUEUE_PACKET *)v12;
  if ( (_QWORD *)*v13 == v13 )
  {
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0 )
    {
      VidSchiUpdateContextStatus(v3, 10LL, 10132LL);
    }
    else if ( (*(_DWORD *)(v3 + 176) & 0x10) == 0
           && (*(_DWORD *)(v3 + 176) & 0x40) == 0
           && (*(_DWORD *)(v3 + 176) & 0x100) == 0 )
    {
      VidSchiUpdateContextStatus(v3, 0LL, 10165LL);
    }
  }
  else
  {
    v14 = *v13 - 32LL;
    v11 = (struct _VIDSCH_QUEUE_PACKET **)*(unsigned int *)(v14 + 76);
    if ( (*(_DWORD *)(v14 + 76) & 3) == 1 )
    {
      v11 = (struct _VIDSCH_QUEUE_PACKET **)((unsigned int)v11 | 2);
      v161 = *v13 - 32LL;
      *(_DWORD *)(v14 + 76) = (_DWORD)v11;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 176) >> 9) | *(_BYTE *)(v3 + 176)) & 2) == 0 )
    {
      VidSchiUpdateContextStatus(v3, 10LL, 10113LL);
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 19) & 4) != 0 )
    goto LABEL_29;
  v15 = *((_QWORD *)a1 + 97);
  v16 = *(_VIDSCH_SYNC_POINT **)(*((_QWORD *)a1 + 10) + 104LL);
  v176 = v16;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 784) = *((_QWORD *)a1 + 98);
    goto LABEL_162;
  }
  if ( *((_QWORD *)a1 + 98) )
  {
LABEL_162:
    v86 = *((_QWORD *)a1 + 98);
    if ( v86 )
      *(_QWORD *)(v86 + 776) = *((_QWORD *)a1 + 97);
    *((_QWORD *)a1 + 97) = 0LL;
    *((_QWORD *)a1 + 98) = 0LL;
    goto LABEL_22;
  }
  if ( (*((_DWORD *)a1 + 64) & 2) != 0 )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 65), 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 65));
    *((_QWORD *)a1 + 65) = 0LL;
  }
  else if ( *((_DWORD *)a1 + 65) )
  {
    do
    {
      LOBYTE(v10) = 1;
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + v4 + 33), v11, (char *)a1 + 8 * v4 + 520, v10);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 65) );
    v4 = 0;
  }
LABEL_22:
  *((_DWORD *)a1 + 19) |= 4u;
  if ( (*((_DWORD *)a1 + 64) & 2) == 0 && *((_DWORD *)a1 + 65) )
  {
    do
    {
      v17 = *((_QWORD *)a1 + v4 + 33);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 32), 0xFFFFFFFF) == 1 )
      {
        if ( *(_DWORD *)(v17 + 40) == 3 )
        {
          ObfDereferenceObject(*(PVOID *)(v17 + 48));
          *(_QWORD *)(v17 + 48) = 0LL;
        }
        else if ( *(_DWORD *)(v17 + 40) == 4 && !*(_QWORD *)(v17 + 16) )
        {
          VIDMM_GLOBAL::FreeFenceStorageSlot(
            (struct VIDMM_MONITORED_FENCE_STORAGE *)(v17 + 48),
            *(_BYTE *)(v17 + 24) != 0);
        }
        if ( *(_BYTE *)(v17 + 27) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v17 + 168) + 8LL), &v164);
          v94 = *(_QWORD *)(v17 + 120);
          v95 = *(_QWORD **)(v17 + 128);
          if ( *(_QWORD *)(v94 + 8) != v17 + 120 || *v95 != v17 + 120 )
            __fastfail(3u);
          *v95 = v94;
          *(_QWORD *)(v94 + 8) = v95;
          KeReleaseInStackQueuedSpinLock(&v164);
          v96 = *(void **)(v17 + 168);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v96, 0xFFFFFFFF) == 1 )
            ExFreePoolWithTag(v96, 0);
        }
        ExFreePoolWithTag((PVOID)v17, 0);
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 65) );
    v16 = v176;
  }
  v18 = *((_QWORD *)v16 + 4);
  v149 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v18 + 8) + 432LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 1856), &v162);
  v20 = (struct _VIDSCH_CONTEXT *)(v18 + 1888);
  v21 = *(struct _VIDSCH_CONTEXT ***)v20;
  if ( *(struct _VIDSCH_CONTEXT **)v20 != v20 )
  {
    do
    {
      v140 = *v21;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v19, v21 - 25) )
      {
        v98 = *v97;
        v99 = (_QWORD *)v97[1];
        if ( *(_QWORD **)(*v97 + 8LL) != v97 || (_QWORD *)*v99 != v97 )
          __fastfail(3u);
        *v99 = v98;
        *(_QWORD *)(v98 + 8) = v99;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v97 - 24), (struct VIDMM_ALLOC *)(v97 - 25));
      }
      v21 = (struct _VIDSCH_CONTEXT **)v140;
    }
    while ( v140 != v20 );
  }
  KeReleaseInStackQueuedSpinLock(&v162);
  v22 = (_VIDSCH_SYNC_POINT *)((char *)v16 + 1168);
  v23 = (_VIDSCH_SYNC_POINT *)*((_QWORD *)v16 + 146);
  if ( v23 == v22 )
    goto LABEL_29;
  v77 = v176;
  while ( 1 )
  {
    v78 = v23;
    v23 = *(_VIDSCH_SYNC_POINT **)v23;
    v159 = v78;
    v79 = *((_QWORD *)v78 + 2);
    if ( v79 > *((_QWORD *)v77 + 145) )
      break;
LABEL_211:
    v100 = (VIDMM_GLOBAL **)*((_QWORD *)v78 + 11);
    v101 = (_VIDSCH_SYNC_POINT *)((char *)v78 + 88);
    v141 = (_VIDSCH_SYNC_POINT *)((char *)v78 + 88);
    if ( v100 != (VIDMM_GLOBAL **)((char *)v78 + 88) )
    {
      do
      {
        v157 = *v100;
        v102 = *v100;
        v103 = (VIDMM_GLOBAL **)v100[1];
        v153 = v100 - 27;
        if ( *((VIDMM_GLOBAL ***)*v100 + 1) != v100 || *v103 != (VIDMM_GLOBAL *)v100 )
          __fastfail(3u);
        *v103 = v102;
        *((_QWORD *)v102 + 1) = v103;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v100 - 27);
        v101 = v141;
        v153[27] = 0LL;
        v153[28] = 0LL;
        v100 = (VIDMM_GLOBAL **)v157;
      }
      while ( v157 != v141 );
      v77 = v176;
      v78 = v159;
    }
    v104 = (_QWORD *)*((_QWORD *)v78 + 9);
    v105 = (_QWORD *)((char *)v78 + 72);
    v154 = (_QWORD *)((char *)v78 + 72);
    if ( v104 != (_QWORD *)((char *)v78 + 72) )
    {
      do
      {
        v146 = (_QWORD *)*v104;
        v106 = (_QWORD *)*v104;
        v107 = (_QWORD *)v104[1];
        v158 = (VIDMM_GLOBAL *)(v104 - 25);
        if ( *(_QWORD **)(*v104 + 8LL) != v104 || (_QWORD *)*v107 != v104 )
          __fastfail(3u);
        *v107 = v106;
        v106[1] = v107;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v107, v104 - 25) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v149, v109);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v108 + 32) + 1856LL), &v170);
          v110 = *((_QWORD *)v176 + 4) + 1888LL;
          v111 = (char *)v158 + 200;
          v112 = *(_QWORD **)(*((_QWORD *)v176 + 4) + 1896LL);
          *((_QWORD *)v158 + 25) = v110;
          *((_QWORD *)v158 + 26) = v112;
          if ( *v112 != v110 )
            __fastfail(3u);
          *v112 = v111;
          *(_QWORD *)(v110 + 8) = v111;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v170);
        }
        v105 = v154;
        v104 = v146;
        v77 = v176;
      }
      while ( v146 != v154 );
      v78 = v159;
      v101 = v141;
    }
    if ( (_QWORD *)*v105 == v105 && *(struct _VIDSCH_CONTEXT **)v101 == v101 )
    {
      v113 = *(_VIDSCH_SYNC_POINT **)v78;
      v114 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v78 + 1);
      if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v78 + 8LL) != v78 || *v114 != v78 )
        __fastfail(3u);
      v63 = bTracingEnabled == 0;
      *v114 = v113;
      *((_QWORD *)v113 + 1) = v114;
      if ( !v63 )
      {
        v115 = (_VIDSCH_SYNC_POINT *)*((_QWORD *)v77 + 1);
        if ( !v115 )
          v115 = v77;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          Template_px(v78, v113, v101, v115, *((_QWORD *)v78 + 2));
          v78 = v159;
        }
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v78, (unsigned int)v113);
      v77 = v176;
    }
    if ( v23 == v22 )
      goto LABEL_29;
  }
  v80 = *((_DWORD *)v78 + 16);
  LODWORD(v10) = 0;
  if ( !v80 )
  {
LABEL_210:
    *((_QWORD *)v77 + 145) = v79;
    goto LABEL_211;
  }
  v81 = *((_QWORD *)v78 + 3);
  while ( 1 )
  {
    v82 = *(_QWORD *)(v81 + 16LL * (unsigned int)v10);
    if ( v82 )
    {
      if ( *(_QWORD *)(v82 + 152) < *(_QWORD *)(v81 + 16LL * (unsigned int)v10 + 8) )
        break;
    }
    LODWORD(v10) = v10 + 1;
    if ( (unsigned int)v10 >= v80 )
      goto LABEL_210;
  }
LABEL_29:
  if ( (*((_DWORD *)a1 + 19) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 984));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2704));
      v34 = *(_QWORD *)(v8 + 360);
      _bittestandset64(&v34, *(unsigned __int16 *)(v6 + 4));
      *(_QWORD *)(v8 + 360) = v34;
    }
    for ( i = 0; i < *((_DWORD *)a1 + 112); ++i )
    {
      if ( i >= 0x10 )
        break;
      v36 = *((_QWORD *)a1 + i + 57);
      *((_QWORD *)a1 + i + 57) = 0LL;
      if ( v36 )
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 104));
    }
  }
  v24 = *((_DWORD *)a1 + 18);
  if ( (v24 & 0x40020) != 0x40000 && (v24 & 0x4000) == 0 )
  {
LABEL_63:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0, 0);
    goto LABEL_65;
  }
  v25 = *((unsigned int *)a1 + 36);
  v177 = *((_DWORD *)a1 + 36);
  v26 = (v24 & 0xC00) != 1024;
  if ( (v24 & 0x40000) != 0 )
  {
    if ( (v24 & 0x4000) == 0 )
      goto LABEL_37;
  }
  else if ( (v24 & 4) != 0 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 94) - 1) > 1 )
    {
      if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        goto LABEL_37;
      if ( (v24 & 0xC00) != 0x400 )
      {
        v184 = 1;
        v183 = 1;
        v143 = 1;
        goto LABEL_104;
      }
      goto LABEL_244;
    }
    v184 = (v24 & 0xC00) != 1024;
  }
  v183 = (v24 & 0xC00) != 1024;
  if ( (v24 & 0xC00) == 0x400 )
    goto LABEL_37;
LABEL_104:
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 10), 1, 0);
  if ( v143 )
  {
LABEL_244:
    v116 = *((_DWORD *)a1 + 154);
    if ( (_BYTE)v116 )
    {
      v117 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v116);
      VidSchiUnreferencePrimaryAllocations(
        0LL,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 616),
        v117,
        *((_DWORD *)a1 + 98),
        1 << *(_BYTE *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 376) + 6LL),
        0);
    }
    v25 = (unsigned int)v25;
  }
  if ( (_DWORD)v25 != -1 && v183 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v25 + 1000));
    v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v25
                    + 520);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v25 + 5128) + 8LL));
      ++**(_DWORD **)(v8 + 8 * v25 + 5128);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v59 + 8));
    ++*(_DWORD *)v59;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1832), &v166);
      *(_DWORD *)(v7 + 4 * v25 + 476) = *((_DWORD *)a1 + 92);
      *(_DWORD *)(v7 + 4 * v25 + 540) = *((_DWORD *)a1 + 29);
      *(_QWORD *)(v7 + 8 * v25 + 608) = *((_QWORD *)a1 + 15);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
    }
  }
LABEL_37:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) == 0 || !*((_QWORD *)a1 + 16) || !*((_QWORD *)a1 + 17) || !v26 )
    goto LABEL_44;
  v27 = *((_QWORD *)a1 + 10);
  v28 = *(union _ULARGE_INTEGER *)((char *)a1 + 96);
  v139 = (struct _VIDSCH_CONTEXT *)v27;
  v29 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v27 + 104) + 32LL);
  v150 = v29;
  if ( (*((_BYTE *)a1 + 259) & 1) == 0 )
    goto LABEL_42;
  v160 = *((_DWORD *)a1 + 93);
  v63 = !_BitScanForward((unsigned int *)&v83, (unsigned __int8)*((_DWORD *)a1 + 154));
  if ( v63 || (_BYTE)v83 == 0xFF )
    LOBYTE(v83) = 0;
  v84 = (unsigned int)(char)v83;
  v144 = v84;
  v85 = 280 * v84 + *((_QWORD *)v29 + v160 + 324) + 88LL;
  v145 = v85;
  if ( *(_QWORD *)(v85 + 96) != v85 + 96 )
  {
    VidSchiPostponePresentHistoryToken(
      (struct _VIDSCH_CONTEXT *)v27,
      (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 256),
      v28);
    goto LABEL_44;
  }
  if ( *(_DWORD *)(v85 + 68) != 1
    || !VidSchiCheckTokenIndependentFlipCondition(v29, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 256), 280 * v84) )
  {
LABEL_42:
    LOBYTE(v27) = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v145 + 65) )
  {
    if ( !VidSchiCheckPlaneIndependentFlipCondition(v150, v160, v144) )
    {
      VidSchiPostponePresentHistoryToken(v139, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 256), v28);
      goto LABEL_44;
    }
    goto LABEL_42;
  }
  *(_BYTE *)(v145 + 65) = 1;
  LOBYTE(v27) = 1;
LABEL_43:
  VidSchiProcessPresentHistoryToken(v139, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 256), v28, v27);
LABEL_44:
  if ( v184 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 916));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1128));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4LL * v177 + 1064));
  }
  v30 = (struct _KEVENT **)(v8 + 1800);
  v178 = KfRaiseIrql(2u);
  v31 = v178;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1840), &v174);
  if ( *v30 != (struct _KEVENT *)v30 )
  {
    v118 = *v30;
    while ( LODWORD(v118->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v118[1].Header.Lock + 4LL * LODWORD(v118[1].Header.WaitListHead.Blink) + 1000) < *(_DWORD *)(*(_QWORD *)&v118[1].Header.Lock + 212LL) )
        goto LABEL_254;
LABEL_255:
      v118 = *(struct _KEVENT **)&v118->Header.Lock;
      if ( v118 == (struct _KEVENT *)v30 )
      {
        v31 = v178;
        goto LABEL_47;
      }
    }
    if ( ((__int64)v118[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      Flink = (int)v118[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v118[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        goto LABEL_255;
    }
LABEL_254:
    ++v118[5].Header.LockNV;
    KeSetEvent(v118 + 4, 0, 0);
    goto LABEL_255;
  }
LABEL_47:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v174);
  KeLowerIrql(v31);
  if ( !v183 )
    goto LABEL_63;
LABEL_65:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 36) != -1 )
  {
    v60 = *((_DWORD *)a1 + 154);
    v61 = (unsigned __int8)v60;
    v62 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 32LL);
    v63 = !_BitScanForward((unsigned int *)&v64, (unsigned __int8)v60);
    if ( v63 )
      LOBYTE(v64) = -1;
    if ( (_BYTE)v60 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v62 + 8LL * *((unsigned int *)a1 + 36) + 2592)
                                    + 280LL * (char)v64
                                    + 160),
          0xFFFFFFFF);
        v61 &= ~(1 << v64);
        v63 = !_BitScanForward((unsigned int *)&v64, v61);
        if ( v63 )
          LOBYTE(v64) = -1;
      }
      while ( v61 );
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, *((_DWORD *)a1 + 36), 0) )
      VidSchiFlushPendingTokenList(v8, v66, v65);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 904));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 2716));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 1136));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1140));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 760));
  VidSchiProfilePerformanceTick(9, v8, v6, v10, 0LL, (__int64)a1, 0LL, 0LL);
  v37 = *(_QWORD *)(v7 + 32);
  v156 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v37 + 8) + 432LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v37 + 1856), &v168);
  v39 = (_QWORD **)(v37 + 1888);
  v40 = *v39;
  if ( *v39 != v39 )
  {
    do
    {
      v88 = (_QWORD *)*v40;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v38, v40 - 25) )
      {
        v90 = *v89;
        v91 = (_QWORD *)v89[1];
        if ( *(_QWORD **)(*v89 + 8LL) != v89 || (_QWORD *)*v91 != v89 )
          __fastfail(3u);
        *v91 = v90;
        *(_QWORD *)(v90 + 8) = v91;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v89 - 24), (struct VIDMM_ALLOC *)(v89 - 25));
      }
      v40 = v88;
    }
    while ( v88 != v39 );
  }
  KeReleaseInStackQueuedSpinLock(&v168);
  v41 = *(_VIDSCH_SYNC_POINT **)(v7 + 1168);
  if ( v41 == (_VIDSCH_SYNC_POINT *)(v7 + 1168) )
    goto LABEL_70;
  while ( 2 )
  {
    v70 = v41;
    v41 = *(_VIDSCH_SYNC_POINT **)v41;
    v181 = v70;
    v71 = *((_QWORD *)v70 + 2);
    if ( v71 <= *(_QWORD *)(v7 + 1160) )
    {
LABEL_259:
      v120 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)v70 + 11);
      v121 = (_VIDSCH_SYNC_POINT *)((char *)v70 + 88);
      v142 = (_VIDSCH_SYNC_POINT *)((char *)v70 + 88);
      if ( v120 != (struct _VIDSCH_GLOBAL **)((char *)v70 + 88) )
      {
        do
        {
          v151 = *v120;
          v122 = *v120;
          v123 = (struct _VIDSCH_GLOBAL **)v120[1];
          v147 = v120 - 27;
          if ( *((struct _VIDSCH_GLOBAL ***)*v120 + 1) != v120 || *v123 != (struct _VIDSCH_GLOBAL *)v120 )
            __fastfail(3u);
          *v123 = v122;
          *((_QWORD *)v122 + 1) = v123;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v120 - 27);
          v121 = v142;
          v147[27] = 0LL;
          v147[28] = 0LL;
          v120 = (struct _VIDSCH_GLOBAL **)v151;
        }
        while ( v151 != v142 );
        v70 = v181;
      }
      v124 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)v70 + 9);
      v125 = (_VIDSCH_SYNC_POINT *)((char *)v70 + 72);
      v152 = (_VIDSCH_SYNC_POINT *)((char *)v70 + 72);
      if ( v124 != (struct _VIDSCH_GLOBAL **)((char *)v70 + 72) )
      {
        do
        {
          v155 = *v124;
          v126 = *v124;
          v127 = (struct _VIDSCH_GLOBAL **)v124[1];
          v148 = v124 - 25;
          if ( *((struct _VIDSCH_GLOBAL ***)*v124 + 1) != v124 || *v127 != (struct _VIDSCH_GLOBAL *)v124 )
            __fastfail(3u);
          *v127 = v126;
          *((_QWORD *)v126 + 1) = v127;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v127, v124 - 25) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v156, v128);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v7 + 32) + 1856LL), &v172);
            v129 = *(_QWORD *)(v7 + 32) + 1888LL;
            v130 = v148 + 25;
            v131 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v7 + 32) + 1896LL);
            v148[25] = (struct _VIDSCH_GLOBAL *)v129;
            v148[26] = v131;
            if ( *(_QWORD *)v131 != v129 )
              __fastfail(3u);
            *(_QWORD *)v131 = v130;
            *(_QWORD *)(v129 + 8) = v130;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v172);
          }
          v125 = v152;
          v124 = (struct _VIDSCH_GLOBAL **)v155;
        }
        while ( v155 != v152 );
        v70 = v181;
        v121 = v142;
      }
      if ( *(struct _VIDSCH_GLOBAL **)v125 == v125 && *(struct _VIDSCH_CONTEXT **)v121 == v121 )
      {
        v132 = *(_VIDSCH_SYNC_POINT **)v70;
        v133 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v70 + 1);
        if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v70 + 8LL) != v70 || *v133 != v70 )
          __fastfail(3u);
        v63 = bTracingEnabled == 0;
        *v133 = v132;
        *((_QWORD *)v132 + 1) = v133;
        if ( !v63 )
        {
          v134 = *(_QWORD *)(v7 + 8);
          if ( !v134 )
            v134 = v7;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            Template_px(v70, v132, v121, v134, *((_QWORD *)v70 + 2));
            v70 = v181;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v70, (unsigned int)v132);
      }
      if ( v41 == (_VIDSCH_SYNC_POINT *)(v7 + 1168) )
        goto LABEL_70;
      continue;
    }
    break;
  }
  v72 = *((_DWORD *)v70 + 16);
  v73 = 0;
  if ( !v72 )
  {
LABEL_258:
    *(_QWORD *)(v7 + 1160) = v71;
    goto LABEL_259;
  }
  v74 = *((_QWORD *)v70 + 3);
  while ( 1 )
  {
    v75 = *(_QWORD *)(v74 + 16LL * v73);
    if ( v75 )
    {
      if ( *(_QWORD *)(v75 + 152) < *(_QWORD *)(v74 + 16LL * v73 + 8) )
        break;
    }
    if ( ++v73 >= v72 )
      goto LABEL_258;
  }
LABEL_70:
  if ( v183 )
  {
    v67 = (struct _KEVENT *)(v7 + 104);
    v180 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1840), &v163);
    v68 = *(struct _KEVENT **)(v7 + 104);
    if ( *(struct _KEVENT **)&v67->Header.Lock == v67 )
    {
LABEL_122:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v163);
      KeLowerIrql(v180);
      goto LABEL_71;
    }
    while ( LODWORD(v68->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 4LL * LODWORD(v68[1].Header.WaitListHead.Blink) + 1000) < *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 212LL) )
        goto LABEL_132;
LABEL_133:
      v68 = *(struct _KEVENT **)&v68->Header.Lock;
      if ( v68 == v67 )
        goto LABEL_122;
    }
    if ( ((__int64)v68[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v135 = (int)v68[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v68[5].Header.WaitListHead.Blink) = v135;
      if ( v135 )
        goto LABEL_133;
    }
LABEL_132:
    ++v68[5].Header.LockNV;
    KeSetEvent(v68 + 4, 0, 0);
    goto LABEL_133;
  }
LABEL_71:
  if ( v184 )
  {
    VidSchiSignalRegisteredEvent(v8, v7 + 120);
    VidSchiSignalRegisteredEvent(v8, v8 + 1784);
    *(_QWORD *)(v8 + 1728) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1696), 0, 0);
  }
  v42 = (struct _KEVENT *)(v6 + 384);
  v179 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1840), &v165);
  v43 = *(struct _KEVENT **)(v6 + 384);
  if ( *(struct _KEVENT **)&v42->Header.Lock != v42 )
  {
    while ( LODWORD(v43->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v43[1].Header.Lock + 4LL * LODWORD(v43[1].Header.WaitListHead.Blink) + 1000) < *(_DWORD *)(*(_QWORD *)&v43[1].Header.Lock + 212LL) )
        goto LABEL_297;
LABEL_298:
      v43 = *(struct _KEVENT **)&v43->Header.Lock;
      if ( v43 == v42 )
        goto LABEL_74;
    }
    if ( ((__int64)v43[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v136 = (int)v43[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v43[5].Header.WaitListHead.Blink) = v136;
      if ( v136 )
        goto LABEL_298;
    }
LABEL_297:
    ++v43[5].Header.LockNV;
    KeSetEvent(v43 + 4, 0, 0);
    goto LABEL_298;
  }
LABEL_74:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v165);
  KeLowerIrql(v179);
  v44 = (struct _KEVENT *)(v8 + 1768);
  v45 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1840), &v167);
  v46 = *(struct _KEVENT **)(v8 + 1768);
  if ( *(struct _KEVENT **)&v44->Header.Lock != v44 )
  {
    do
    {
      if ( LODWORD(v46->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v46[1].Header.Lock + 4LL * LODWORD(v46[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v46[1].Header.Lock + 212LL) )
          goto LABEL_145;
      }
      else if ( ((__int64)v46[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v76 = (int)v46[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v46[5].Header.WaitListHead.Blink) = v76;
        if ( v76 )
          goto LABEL_145;
      }
      ++v46[5].Header.LockNV;
      KeSetEvent(v46 + 4, 0, 0);
LABEL_145:
      v46 = *(struct _KEVENT **)&v46->Header.Lock;
    }
    while ( v46 != v44 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
  KeLowerIrql(v45);
  *(_QWORD *)(v6 + 288) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 256), 0, 0);
  *(_QWORD *)(v8 + 1616) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1584), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v47 = *((_DWORD *)a1 + 12);
    if ( !v47 || v47 == 7 )
    {
      v58 = (struct _KEVENT *)*((_QWORD *)a1 + 43);
      if ( v58 )
      {
        KeSetEvent(v58, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 43));
      }
    }
    else if ( v47 == 6 )
    {
      v87 = (struct _KEVENT *)*((_QWORD *)a1 + 37);
      if ( v87 )
        KeSetEvent(v87, 0, 0);
    }
  }
  v48 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 74) || *((_QWORD *)a1 + 31)) )
  {
    v137 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v137[3] = 281LL;
    v137[4] = 2560LL;
    v137[5] = a1;
    v137[6] = *((_QWORD *)a1 + 74);
    v137[7] = *((_QWORD *)a1 + 31);
    WdLogEvent5_WdCriticalError(v137);
    JUMPOUT(0x1C00191CCLL);
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v49 = (KSPIN_LOCK *)(v48 + 1832);
  *((_DWORD *)a1 + 13) = 0;
  v50 = (_QWORD *)((char *)a1 + 8);
  KeAcquireInStackQueuedSpinLock(v49, &v169);
  v51 = *v50;
  v52 = (_QWORD *)v50[1];
  if ( *(_QWORD **)(*v50 + 8LL) != v50 || (_QWORD *)*v52 != v50 )
    __fastfail(3u);
  *v52 = v51;
  *(_QWORD *)(v51 + 8) = v52;
  if ( v3 != -752 )
    --*(_DWORD *)(v3 + 752);
  KeReleaseInStackQueuedSpinLock(&v169);
  v53 = (_DWORD *)(v3 + 728);
  v54 = (__int64 **)(v3 + 712);
  KeAcquireInStackQueuedSpinLock(v49, &v171);
  v55 = *(_QWORD **)(v3 + 720);
  *v50 = v3 + 712;
  v50[1] = v55;
  if ( *v55 != v3 + 712 )
    __fastfail(3u);
  *v55 = v50;
  *(_QWORD *)(v3 + 720) = v50;
  if ( v3 != -728 )
    ++*v53;
  KeReleaseInStackQueuedSpinLock(&v171);
  while ( 1 )
  {
    v56 = 0LL;
    KeAcquireInStackQueuedSpinLock(v49, &v173);
    if ( *v54 != (__int64 *)v54 && *v53 > 0x10u )
    {
      v56 = *v54;
      v69 = **v54;
      if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v69 + 8) != v56 )
        __fastfail(3u);
      *v54 = (__int64 *)v69;
      *(_QWORD *)(v69 + 8) = v54;
      --*v53;
    }
    KeReleaseInStackQueuedSpinLock(&v173);
    if ( !v56 )
      break;
    ExFreePoolWithTag(v56 - 1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v182);
  return (struct _VIDSCH_QUEUE_PACKET *)v161;
}
