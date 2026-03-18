/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80
 * Callers:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001AB0 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D568 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000E1C0 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C000F338 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA88 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0011CE8 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0011D0C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C0011D68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0020870 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0020B6C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021654 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 *     Template_pp @ 0x1C00228B0 (Template_pp.c)
 *     Template_px @ 0x1C0023A60 (Template_px.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  int v13; // eax
  volatile signed __int32 *v14; // rdx
  struct _VIDSCH_QUEUE_PACKET **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _VIDSCH_SYNC_POINT *v19; // r12
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct _VIDSCH_CONTEXT ***v23; // rbx
  struct _VIDSCH_CONTEXT **v24; // r9
  _VIDSCH_SYNC_POINT *v25; // rbx
  _VIDSCH_SYNC_POINT *v26; // r12
  int v27; // ecx
  __int64 v28; // r12
  BOOL v29; // ebx
  __int64 v30; // r9
  union _ULARGE_INTEGER v31; // rbx
  struct _VIDSCH_GLOBAL *v32; // r10
  bool v33; // r9
  struct _KEVENT **v34; // rbx
  KIRQL v35; // r12
  volatile signed __int32 *v36; // rcx
  volatile signed __int32 *v37; // rcx
  __int64 v38; // rcx
  unsigned int i; // ecx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rcx
  _QWORD **v44; // rbx
  _QWORD *v45; // r9
  _VIDSCH_SYNC_POINT *v46; // r12
  struct _KEVENT *v47; // rbx
  struct _KEVENT *v48; // r13
  struct _KEVENT *v49; // rbx
  KIRQL v50; // r13
  struct _KEVENT *v51; // r12
  __int64 v52; // rdx
  struct _KEVENT *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // r12
  KSPIN_LOCK *v58; // r12
  char *v59; // rbx
  __int64 v60; // rcx
  char **v61; // rax
  char **v62; // rax
  __int64 **v63; // rbx
  __int64 *v64; // rdi
  __int64 v66; // rcx
  __int64 v67; // r10
  bool v68; // zf
  int v69; // ecx
  unsigned int v70; // ebx
  int v71; // r12d
  __int64 v72; // rcx
  struct _KEVENT *v73; // r12
  struct _KEVENT *v74; // rbx
  __int64 v75; // rax
  _VIDSCH_SYNC_POINT *v76; // rcx
  __int64 v77; // r9
  unsigned int v78; // r10d
  unsigned int v79; // r11d
  __int64 v80; // r8
  __int64 v81; // rdx
  _VIDSCH_SYNC_POINT *v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // r11d
  unsigned int v85; // r10d
  __int64 v86; // r8
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rcx
  void (__fastcall *v90)(_QWORD); // rax
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  void *v93; // rcx
  _QWORD *v94; // r9
  struct _VIDSCH_CONTEXT *v95; // r11
  __int64 v96; // rcx
  _QWORD *v97; // rax
  struct _VIDSCH_CONTEXT **v98; // rax
  struct _VIDSCH_CONTEXT *v99; // r8
  struct _VIDSCH_CONTEXT *v100; // r8
  struct _VIDSCH_CONTEXT **v101; // rcx
  volatile signed __int32 **v102; // rax
  volatile signed __int32 *v103; // rdx
  volatile signed __int32 **v104; // rcx
  __int64 v105; // r9
  struct VIDMM_ALLOC *v106; // r10
  __int64 v107; // rcx
  volatile signed __int32 *v108; // r8
  unsigned __int64 v109; // rdx
  _VIDSCH_SYNC_POINT **v110; // rax
  int v111; // eax
  ULONG v112; // eax
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rcx
  struct _KEVENT *v116; // r12
  int Flink; // ecx
  _QWORD *v118; // r12
  _QWORD *v119; // r9
  __int64 v120; // rcx
  _QWORD *v121; // rax
  struct _VIDSCH_CONTEXT **v122; // rax
  struct _VIDSCH_CONTEXT *v123; // r8
  struct _VIDSCH_CONTEXT *v124; // r8
  struct _VIDSCH_CONTEXT **v125; // rcx
  _QWORD *v126; // rax
  _QWORD *v127; // rdx
  _QWORD *v128; // rdx
  _QWORD *v129; // rcx
  struct VIDMM_ALLOC *v130; // r9
  __int64 v131; // rcx
  _QWORD *v132; // r8
  _VIDSCH_SYNC_POINT *v133; // rdx
  _VIDSCH_SYNC_POINT **v134; // rax
  __int64 v135; // r9
  int v136; // ecx
  int v137; // ecx
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  struct _VIDSCH_CONTEXT *v140; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v141; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v142; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v143; // [rsp+40h] [rbp-C0h]
  unsigned int v144; // [rsp+48h] [rbp-B8h]
  unsigned int v145; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 *v146; // [rsp+50h] [rbp-B0h]
  __int64 v147; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_CONTEXT *v148; // [rsp+50h] [rbp-B0h]
  _QWORD *v149; // [rsp+50h] [rbp-B0h]
  _VIDSCH_SYNC_POINT *v150; // [rsp+58h] [rbp-A8h]
  unsigned int v151; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_CONTEXT *v152; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 **v153; // [rsp+60h] [rbp-A0h]
  _QWORD *v154; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL *v155; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v156; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v157; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_CONTEXT **v158; // [rsp+70h] [rbp-90h]
  _QWORD *v159; // [rsp+70h] [rbp-90h]
  struct _VIDSCH_CONTEXT **v160; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v161; // [rsp+78h] [rbp-88h]
  __int64 v162; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v163; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v164; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v165; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v166; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v168; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v169; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v170; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v172; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+190h] [rbp+90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v174; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v175; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1D8h] [rbp+D8h] BYREF
  _VIDSCH_SYNC_POINT *v177; // [rsp+240h] [rbp+140h]
  unsigned int v178; // [rsp+240h] [rbp+140h]
  KIRQL v179; // [rsp+240h] [rbp+140h]
  KIRQL v180; // [rsp+240h] [rbp+140h]
  KIRQL v181; // [rsp+240h] [rbp+140h]
  _VIDSCH_SYNC_POINT *v182; // [rsp+240h] [rbp+140h]
  KIRQL v183; // [rsp+248h] [rbp+148h]
  BOOL v184; // [rsp+250h] [rbp+150h]
  BOOL v185; // [rsp+258h] [rbp+158h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v185 = 0;
  v184 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(v3 + 104);
  v144 = 0;
  v162 = 0LL;
  v8 = *(_QWORD *)(v6 + 24);
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v89 = *(_QWORD *)(v3 + 56);
    if ( !v89 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v89 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v89, &AbortQueuePacket, a3, a1, v89);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v36 = (volatile signed __int32 *)*((_QWORD *)a1 + 36);
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v36, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v37 = (volatile signed __int32 *)*((_QWORD *)a1 + 35);
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v37, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
  }
  v183 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1856), &LockHandle);
  v13 = *((_DWORD *)a1 + 20);
  if ( (v13 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v13 & 0xFFFFFFEF;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
    v9 = *(unsigned int *)(v10 + 2788);
    if ( (_DWORD)v9 != -1 )
    {
      v90 = *(void (__fastcall **)(_QWORD))(v8 + 2864);
      if ( v90 )
        v90(*(_QWORD *)(v8 + 2896));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v139 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
    v139[3] = 281LL;
    v139[4] = 512LL;
    v139[5] = v8;
    v139[6] = v3;
    v139[7] = a1;
    WdLogEvent5_WdCriticalError(v139);
    JUMPOUT(0x1C00191A9LL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId(a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v14 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  v15 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *((struct _VIDSCH_QUEUE_PACKET **)v14 + 1) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || *v15 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
  {
    __fastfail(3u);
  }
  *v15 = (struct _VIDSCH_QUEUE_PACKET *)v14;
  v16 = (_QWORD *)(v3 + 664);
  *((_QWORD *)v14 + 1) = v15;
  if ( (_QWORD *)*v16 == v16 )
  {
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0 )
    {
      v40 = 10LL;
      v41 = 11058LL;
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 176) & 0x10) != 0
        || (*(_DWORD *)(v3 + 176) & 0x40) != 0
        || (*(_DWORD *)(v3 + 176) & 0x100) != 0 )
      {
        goto LABEL_14;
      }
      v40 = 0LL;
      v41 = 11091LL;
    }
    VidSchiUpdateContextStatus(v3, v40, v41);
    goto LABEL_14;
  }
  v17 = *v16 - 32LL;
  v14 = (volatile signed __int32 *)*(unsigned int *)(v17 + 80);
  if ( (*(_DWORD *)(v17 + 80) & 3) == 1 )
  {
    v14 = (volatile signed __int32 *)((unsigned int)v14 | 2);
    v162 = *v16 - 32LL;
    *(_DWORD *)(v17 + 80) = (_DWORD)v14;
  }
  if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0
    && (((unsigned __int8)(*(_DWORD *)(v3 + 176) >> 9) | *(_BYTE *)(v3 + 176)) & 2) == 0 )
  {
    VidSchiUpdateContextStatus(v3, 10LL, 11039LL);
  }
LABEL_14:
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_29;
  v18 = *((_QWORD *)a1 + 98);
  v19 = *(_VIDSCH_SYNC_POINT **)(*((_QWORD *)a1 + 11) + 104LL);
  v177 = v19;
  if ( v18 )
  {
    *(_QWORD *)(v18 + 792) = *((_QWORD *)a1 + 99);
    goto LABEL_173;
  }
  if ( *((_QWORD *)a1 + 99) )
  {
LABEL_173:
    v88 = *((_QWORD *)a1 + 99);
    if ( v88 )
      *(_QWORD *)(v88 + 784) = *((_QWORD *)a1 + 98);
    *((_QWORD *)a1 + 98) = 0LL;
    *((_QWORD *)a1 + 99) = 0LL;
    goto LABEL_22;
  }
  if ( (*((_DWORD *)a1 + 66) & 2) != 0 )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 66), 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 66));
    *((_QWORD *)a1 + 66) = 0LL;
  }
  else if ( *((_DWORD *)a1 + 67) )
  {
    do
    {
      LOBYTE(v12) = 1;
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + v4 + 34), v14, (char *)a1 + 8 * v4 + 528, v12);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 67) );
    v4 = 0;
  }
LABEL_22:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 66) & 2) == 0 && *((_DWORD *)a1 + 67) )
  {
    do
    {
      v20 = *((_QWORD *)a1 + v4 + 34);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 32), 0xFFFFFFFF) == 1 )
      {
        if ( *(_DWORD *)(v20 + 40) == 3 )
        {
          ObfDereferenceObject(*(PVOID *)(v20 + 48));
          *(_QWORD *)(v20 + 48) = 0LL;
        }
        else if ( *(_DWORD *)(v20 + 40) == 4 && !*(_QWORD *)(v20 + 16) )
        {
          VIDMM_GLOBAL::FreeFenceStorageSlot(
            (struct VIDMM_MONITORED_FENCE_STORAGE *)(v20 + 48),
            *(_BYTE *)(v20 + 24) != 0);
        }
        if ( *(_BYTE *)(v20 + 27) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v20 + 168) + 8LL), &v163);
          v91 = *(_QWORD *)(v20 + 120);
          v92 = *(_QWORD **)(v20 + 128);
          if ( *(_QWORD *)(v91 + 8) != v20 + 120 || *v92 != v20 + 120 )
            __fastfail(3u);
          *v92 = v91;
          *(_QWORD *)(v91 + 8) = v92;
          KeReleaseInStackQueuedSpinLock(&v163);
          v93 = *(void **)(v20 + 168);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v93, 0xFFFFFFFF) == 1 )
            ExFreePoolWithTag(v93, 0);
        }
        ExFreePoolWithTag((PVOID)v20, 0);
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 67) );
    v19 = v177;
  }
  v21 = *((_QWORD *)v19 + 4);
  v155 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v21 + 8) + 408LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 1888), &v164);
  v23 = (struct _VIDSCH_CONTEXT ***)(v21 + 1920);
  v24 = *v23;
  if ( *v23 != (struct _VIDSCH_CONTEXT **)v23 )
  {
    do
    {
      v141 = *v24;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v22, (__int64)(v24 - 27)) )
      {
        v96 = *v94;
        v97 = (_QWORD *)v94[1];
        if ( *(_QWORD **)(*v94 + 8LL) != v94 || (_QWORD *)*v97 != v94 )
          __fastfail(3u);
        *v97 = v96;
        *(_QWORD *)(v96 + 8) = v97;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v94 - 26), (struct VIDMM_ALLOC *)(v94 - 27));
        v95 = v141;
      }
      v24 = (struct _VIDSCH_CONTEXT **)v95;
    }
    while ( v95 != (struct _VIDSCH_CONTEXT *)v23 );
  }
  KeReleaseInStackQueuedSpinLock(&v164);
  v25 = (_VIDSCH_SYNC_POINT *)((char *)v19 + 1160);
  v26 = (_VIDSCH_SYNC_POINT *)*((_QWORD *)v19 + 145);
  if ( v26 == v25 )
    goto LABEL_29;
  v12 = (unsigned __int64)v177;
  while ( 1 )
  {
    v82 = v26;
    v26 = *(_VIDSCH_SYNC_POINT **)v26;
    v150 = v82;
    v83 = *((_QWORD *)v82 + 2);
    if ( v83 > *(_QWORD *)(v12 + 1152) )
      break;
LABEL_213:
    v98 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)v82 + 11);
    v99 = (_VIDSCH_SYNC_POINT *)((char *)v82 + 88);
    v142 = (_VIDSCH_SYNC_POINT *)((char *)v82 + 88);
    if ( v98 != (struct _VIDSCH_CONTEXT **)((char *)v82 + 88) )
    {
      do
      {
        v152 = *v98;
        v100 = *v98;
        v101 = (struct _VIDSCH_CONTEXT **)v98[1];
        v160 = v98 - 29;
        if ( *((struct _VIDSCH_CONTEXT ***)*v98 + 1) != v98 || *v101 != (struct _VIDSCH_CONTEXT *)v98 )
          __fastfail(3u);
        *v101 = v100;
        *((_QWORD *)v100 + 1) = v101;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v98 - 29);
        v99 = v142;
        v160[29] = 0LL;
        v160[30] = 0LL;
        v98 = (struct _VIDSCH_CONTEXT **)v152;
      }
      while ( v152 != v142 );
      v12 = (unsigned __int64)v177;
      v82 = v150;
    }
    v102 = (volatile signed __int32 **)*((_QWORD *)v82 + 9);
    v14 = (volatile signed __int32 *)((char *)v82 + 72);
    v161 = (volatile signed __int32 *)((char *)v82 + 72);
    if ( v102 != (volatile signed __int32 **)((char *)v82 + 72) )
    {
      do
      {
        v146 = *v102;
        v103 = *v102;
        v104 = (volatile signed __int32 **)v102[1];
        v153 = v102 - 27;
        if ( *((volatile signed __int32 ***)*v102 + 1) != v102 || *v104 != (volatile signed __int32 *)v102 )
          __fastfail(3u);
        *v104 = v103;
        *((_QWORD *)v103 + 1) = v104;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v104, (__int64)(v102 - 27)) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v155, v106);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v105 + 32) + 1888LL), &v165);
          v107 = *((_QWORD *)v177 + 4) + 1920LL;
          v108 = *(volatile signed __int32 **)(*((_QWORD *)v177 + 4) + 1928LL);
          if ( *(_QWORD *)v108 != v107 )
            __fastfail(3u);
          v153[27] = (volatile signed __int32 *)v107;
          v153[28] = v108;
          *(_QWORD *)v108 = v153 + 27;
          *(_QWORD *)(v107 + 8) = v153 + 27;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v165);
        }
        v14 = v161;
        v102 = (volatile signed __int32 **)v146;
        v12 = (unsigned __int64)v177;
      }
      while ( v146 != v161 );
      v82 = v150;
      v99 = v142;
    }
    if ( *(volatile signed __int32 **)v14 == v14 && *(struct _VIDSCH_CONTEXT **)v99 == v99 )
    {
      v109 = *(_QWORD *)v82;
      v110 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v82 + 1);
      if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v82 + 8LL) != v82 || *v110 != v82 )
        __fastfail(3u);
      v68 = bTracingEnabled == 0;
      *v110 = (_VIDSCH_SYNC_POINT *)v109;
      *(_QWORD *)(v109 + 8) = v110;
      if ( !v68 )
      {
        v109 = *(_QWORD *)(v12 + 8);
        if ( !v109 )
          v109 = v12;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Template_px(v82, v109, v99, v109, *((_QWORD *)v82 + 2));
          v82 = v150;
        }
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v82, v109);
      v12 = (unsigned __int64)v177;
    }
    if ( v26 == v25 )
      goto LABEL_29;
  }
  v84 = *((_DWORD *)v82 + 16);
  v85 = 0;
  if ( !v84 )
  {
LABEL_212:
    *(_QWORD *)(v12 + 1152) = v83;
    goto LABEL_213;
  }
  v86 = *((_QWORD *)v82 + 3);
  while ( 1 )
  {
    v14 = *(volatile signed __int32 **)(v86 + 16LL * v85);
    if ( v14 )
    {
      if ( *((_QWORD *)v14 + 19) < *(_QWORD *)(v86 + 16LL * v85 + 8) )
        break;
    }
    if ( ++v85 >= v84 )
      goto LABEL_212;
  }
LABEL_29:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1016));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2744));
      v38 = *(_QWORD *)(v8 + 392);
      _bittestandset64(&v38, *(unsigned __int16 *)(v6 + 4));
      *(_QWORD *)(v8 + 392) = v38;
    }
    for ( i = 0; i < *((_DWORD *)a1 + 114); ++i )
    {
      if ( i >= 0x10 )
        break;
      v14 = (volatile signed __int32 *)*((_QWORD *)a1 + i + 58);
      *((_QWORD *)a1 + i + 58) = 0LL;
      if ( v14 )
        _InterlockedDecrement(v14 + 26);
    }
  }
  v27 = *((_DWORD *)a1 + 18);
  if ( (v27 & 0x40020) != 0x40000 && (v27 & 0x4000) == 0 )
  {
LABEL_69:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
    goto LABEL_71;
  }
  v28 = *((unsigned int *)a1 + 38);
  v178 = *((_DWORD *)a1 + 38);
  v29 = (v27 & 0xC00) != 1024;
  if ( (v27 & 0x40000) != 0 )
  {
    if ( (v27 & 0x4000) == 0 )
      goto LABEL_37;
  }
  else if ( (v27 & 4) != 0 )
  {
    if ( *((_DWORD *)a1 + 96) != 1 )
    {
      if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        goto LABEL_37;
      if ( (v27 & 0xC00) != 0x400 )
      {
        v185 = 1;
        v184 = 1;
        v144 = 1;
        goto LABEL_111;
      }
      goto LABEL_246;
    }
    v185 = (v27 & 0xC00) != 1024;
  }
  v184 = (v27 & 0xC00) != 1024;
  if ( (v27 & 0xC00) == 0x400 )
    goto LABEL_37;
LABEL_111:
  LOBYTE(v14) = 1;
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v14, 0LL);
  if ( v144 )
  {
LABEL_246:
    v111 = *((_DWORD *)a1 + 172);
    if ( (_BYTE)v111 )
    {
      v112 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v111);
      VidSchiUnreferencePrimaryAllocations(
        0LL,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 688),
        v112,
        *((_DWORD *)a1 + 100),
        1 << *(_BYTE *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 408) + 6LL),
        0);
    }
    v28 = (unsigned int)v28;
  }
  if ( (_DWORD)v28 != -1 && v184 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v28 + 996));
    v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v28
                    + 520);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v28 + 5504) + 8LL));
      ++**(_DWORD **)(v8 + 8 * v28 + 5504);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v66 + 8));
    ++*(_DWORD *)v66;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1864), &v166);
      *(_DWORD *)(v7 + 4 * v28 + 468) = *((_DWORD *)a1 + 94);
      *(_DWORD *)(v7 + 4 * v28 + 532) = *((_DWORD *)a1 + 31);
      *(_QWORD *)(v7 + 8 * v28 + 600) = *((_QWORD *)a1 + 16);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
    }
  }
LABEL_37:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 17) && *((_QWORD *)a1 + 18) && v29 )
  {
    v30 = *((_QWORD *)a1 + 11);
    v31 = *(union _ULARGE_INTEGER *)((char *)a1 + 104);
    v140 = (struct _VIDSCH_CONTEXT *)v30;
    v32 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v30 + 104) + 32LL);
    v156 = v32;
    if ( (*((_BYTE *)a1 + 267) & 1) == 0 )
      goto LABEL_42;
    v151 = *((_DWORD *)a1 + 95);
    v68 = !_BitScanForward((unsigned int *)&v113, (unsigned __int8)*((_DWORD *)a1 + 172));
    if ( v68 || (_BYTE)v113 == 0xFF )
      LOBYTE(v113) = 0;
    v114 = (unsigned int)(char)v113;
    v145 = v114;
    v115 = 272 * v114 + *((_QWORD *)v32 + v151 + 371) + 88LL;
    v147 = v115;
    if ( *(_QWORD *)(v115 + 88) != v115 + 88 )
    {
      VidSchiPostponePresentHistoryToken(
        (struct _VIDSCH_CONTEXT *)v30,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264),
        v31);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v115 + 68) != 1
      || !VidSchiCheckTokenIndependentFlipCondition(v32, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264)) )
    {
      goto LABEL_42;
    }
    if ( !*(_BYTE *)(v147 + 65) )
    {
      *(_BYTE *)(v147 + 65) = 1;
      v33 = 1;
      goto LABEL_43;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition(v156, v151, v145) )
    {
LABEL_42:
      v33 = 0;
LABEL_43:
      VidSchiProcessPresentHistoryToken(v140, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264), v31, v33);
      goto LABEL_44;
    }
    VidSchiPostponePresentHistoryToken(v140, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264), v31);
  }
LABEL_44:
  if ( v185 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 952));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1124));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4LL * v178 + 1060));
  }
  v34 = (struct _KEVENT **)(v8 + 1832);
  v179 = KfRaiseIrql(2u);
  v35 = v179;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1872), &v167);
  if ( *v34 != (struct _KEVENT *)v34 )
  {
    v116 = *v34;
    while ( LODWORD(v116->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v116[1].Header.Lock + 4LL * LODWORD(v116[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v116[1].Header.Lock + 204LL) )
        goto LABEL_266;
LABEL_267:
      v116 = *(struct _KEVENT **)&v116->Header.Lock;
      if ( v116 == (struct _KEVENT *)v34 )
      {
        v35 = v179;
        goto LABEL_47;
      }
    }
    if ( ((__int64)v116[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      Flink = (int)v116[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v116[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        goto LABEL_267;
    }
LABEL_266:
    ++v116[5].Header.LockNV;
    KeSetEvent(v116 + 4, 0, 0);
    goto LABEL_267;
  }
LABEL_47:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
  KeLowerIrql(v35);
  if ( !v184 )
    goto LABEL_69;
LABEL_71:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 38) != -1 )
  {
    v67 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v12 = (unsigned __int8)*((_DWORD *)a1 + 172) | (unsigned int)*((unsigned __int8 *)a1 + 689);
    else
      v12 = (unsigned int)((1 << *(_DWORD *)(v67 + 128)) - 1);
    v68 = !_BitScanForward((unsigned int *)&v69, v12);
    if ( v68 )
      LOBYTE(v69) = -1;
    while ( (_DWORD)v12 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v67 + 8LL * *((unsigned int *)a1 + 38) + 2968) + 272LL * (char)v69 + 160),
        0xFFFFFFFF);
      v12 = ~(1 << v69) & (unsigned int)v12;
      v68 = !_BitScanForward((unsigned int *)&v69, v12);
      if ( v68 )
        LOBYTE(v69) = -1;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v70 = (unsigned __int8)*((_DWORD *)a1 + 172) | *((unsigned __int8 *)a1 + 689);
    else
      v70 = (1 << *(_DWORD *)(v8 + 128)) - 1;
    v68 = !_BitScanForward((unsigned int *)&v71, v70);
    if ( v68 )
      LOBYTE(v71) = -1;
    while ( v70 )
    {
      v72 = *((unsigned int *)a1 + 38);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * v72 + 2968) + 272LL * (char)v71 + 156) == 1 )
        VidSchiTryEnterIndependentFlip(v8, (unsigned int)v72, (unsigned int)(char)v71, v12);
      v70 &= ~(1 << v71);
      v68 = !_BitScanForward((unsigned int *)&v71, v70);
      if ( v68 )
        LOBYTE(v71) = -1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 940));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 2756));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 1132));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1136));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL)
                                            + 8LL * *((unsigned int *)a1 + 38)
                                            + 2968)
                                + 2276LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v8, v6, v12, 0LL, (__int64)a1, 0LL, 0LL);
  v42 = *(_QWORD *)(v7 + 32);
  v157 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v42 + 8) + 408LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v42 + 1888), &v168);
  v44 = (_QWORD **)(v42 + 1920);
  v45 = *v44;
  if ( *v44 != v44 )
  {
    do
    {
      v118 = (_QWORD *)*v45;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v43, (__int64)(v45 - 27)) )
      {
        v120 = *v119;
        v121 = (_QWORD *)v119[1];
        if ( *(_QWORD **)(*v119 + 8LL) != v119 || (_QWORD *)*v121 != v119 )
          __fastfail(3u);
        *v121 = v120;
        *(_QWORD *)(v120 + 8) = v121;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v119 - 26), (struct VIDMM_ALLOC *)(v119 - 27));
      }
      v45 = v118;
    }
    while ( v118 != v44 );
  }
  KeReleaseInStackQueuedSpinLock(&v168);
  v46 = *(_VIDSCH_SYNC_POINT **)(v7 + 1160);
  if ( v46 == (_VIDSCH_SYNC_POINT *)(v7 + 1160) )
    goto LABEL_77;
  while ( 2 )
  {
    v76 = v46;
    v46 = *(_VIDSCH_SYNC_POINT **)v46;
    v182 = v76;
    v77 = *((_QWORD *)v76 + 2);
    if ( v77 <= *(_QWORD *)(v7 + 1152) )
    {
LABEL_279:
      v122 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)v76 + 11);
      v123 = (_VIDSCH_SYNC_POINT *)((char *)v76 + 88);
      v143 = (_VIDSCH_SYNC_POINT *)((char *)v76 + 88);
      if ( v122 != (struct _VIDSCH_CONTEXT **)((char *)v76 + 88) )
      {
        do
        {
          v148 = *v122;
          v124 = *v122;
          v125 = (struct _VIDSCH_CONTEXT **)v122[1];
          v158 = v122 - 29;
          if ( *((struct _VIDSCH_CONTEXT ***)*v122 + 1) != v122 || *v125 != (struct _VIDSCH_CONTEXT *)v122 )
            __fastfail(3u);
          *v125 = v124;
          *((_QWORD *)v124 + 1) = v125;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v122 - 29);
          v123 = v143;
          v158[29] = 0LL;
          v158[30] = 0LL;
          v122 = (struct _VIDSCH_CONTEXT **)v148;
        }
        while ( v148 != v143 );
        v76 = v182;
      }
      v126 = (_QWORD *)*((_QWORD *)v76 + 9);
      v127 = (_QWORD *)((char *)v76 + 72);
      v149 = (_QWORD *)((char *)v76 + 72);
      if ( v126 != (_QWORD *)((char *)v76 + 72) )
      {
        do
        {
          v154 = (_QWORD *)*v126;
          v128 = (_QWORD *)*v126;
          v129 = (_QWORD *)v126[1];
          v159 = v126 - 27;
          if ( *(_QWORD **)(*v126 + 8LL) != v126 || (_QWORD *)*v129 != v126 )
            __fastfail(3u);
          *v129 = v128;
          v128[1] = v129;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v129, (__int64)(v126 - 27)) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v157, v130);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v7 + 32) + 1888LL), &v169);
            v131 = *(_QWORD *)(v7 + 32) + 1920LL;
            v132 = *(_QWORD **)(*(_QWORD *)(v7 + 32) + 1928LL);
            if ( *v132 != v131 )
              __fastfail(3u);
            v159[27] = v131;
            v159[28] = v132;
            *v132 = v159 + 27;
            *(_QWORD *)(v131 + 8) = v159 + 27;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v169);
          }
          v127 = v149;
          v126 = v154;
        }
        while ( v154 != v149 );
        v76 = v182;
        v123 = v143;
      }
      if ( (_QWORD *)*v127 == v127 && *(struct _VIDSCH_CONTEXT **)v123 == v123 )
      {
        v133 = *(_VIDSCH_SYNC_POINT **)v76;
        v134 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v76 + 1);
        if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v76 + 8LL) != v76 || *v134 != v76 )
          __fastfail(3u);
        v68 = bTracingEnabled == 0;
        *v134 = v133;
        *((_QWORD *)v133 + 1) = v134;
        if ( !v68 )
        {
          v135 = *(_QWORD *)(v7 + 8);
          if ( !v135 )
            v135 = v7;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v76, v133, v123, v135, *((_QWORD *)v76 + 2));
            v76 = v182;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v76, (unsigned int)v133);
      }
      if ( v46 == (_VIDSCH_SYNC_POINT *)(v7 + 1160) )
        goto LABEL_77;
      continue;
    }
    break;
  }
  v78 = *((_DWORD *)v76 + 16);
  v79 = 0;
  if ( !v78 )
  {
LABEL_278:
    *(_QWORD *)(v7 + 1152) = v77;
    goto LABEL_279;
  }
  v80 = *((_QWORD *)v76 + 3);
  while ( 1 )
  {
    v81 = *(_QWORD *)(v80 + 16LL * v79);
    if ( v81 )
    {
      if ( *(_QWORD *)(v81 + 152) < *(_QWORD *)(v80 + 16LL * v79 + 8) )
        break;
    }
    if ( ++v79 >= v78 )
      goto LABEL_278;
  }
LABEL_77:
  if ( v184 )
  {
    v73 = (struct _KEVENT *)(v7 + 96);
    v181 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1872), &v170);
    v74 = *(struct _KEVENT **)(v7 + 96);
    if ( *(struct _KEVENT **)&v73->Header.Lock == v73 )
    {
LABEL_140:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v170);
      KeLowerIrql(v181);
      goto LABEL_78;
    }
    while ( LODWORD(v74->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v74[1].Header.Lock + 4LL * LODWORD(v74[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v74[1].Header.Lock + 204LL) )
        goto LABEL_146;
LABEL_147:
      v74 = *(struct _KEVENT **)&v74->Header.Lock;
      if ( v74 == v73 )
        goto LABEL_140;
    }
    if ( ((__int64)v74[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v136 = (int)v74[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v74[5].Header.WaitListHead.Blink) = v136;
      if ( v136 )
        goto LABEL_147;
    }
LABEL_146:
    ++v74[5].Header.LockNV;
    KeSetEvent(v74 + 4, 0, 0);
    goto LABEL_147;
  }
LABEL_78:
  if ( v185 )
  {
    VidSchiSignalRegisteredEvent(v8, v7 + 112);
    VidSchiSignalRegisteredEvent(v8, v8 + 1816);
    *(_QWORD *)(v8 + 1760) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1728), 0, 0);
  }
  v47 = (struct _KEVENT *)(v6 + 424);
  v180 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1872), &v171);
  v48 = *(struct _KEVENT **)(v6 + 424);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    while ( LODWORD(v48->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 4LL * LODWORD(v48[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 204LL) )
        goto LABEL_317;
LABEL_318:
      v48 = *(struct _KEVENT **)&v48->Header.Lock;
      if ( v48 == v47 )
        goto LABEL_81;
    }
    if ( ((__int64)v48[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v137 = (int)v48[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v48[5].Header.WaitListHead.Blink) = v137;
      if ( v137 )
        goto LABEL_318;
    }
LABEL_317:
    ++v48[5].Header.LockNV;
    KeSetEvent(v48 + 4, 0, 0);
    goto LABEL_318;
  }
LABEL_81:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
  KeLowerIrql(v180);
  v49 = (struct _KEVENT *)(v8 + 1800);
  v50 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1872), &v172);
  v51 = *(struct _KEVENT **)(v8 + 1800);
  if ( *(struct _KEVENT **)&v49->Header.Lock != v49 )
  {
    do
    {
      if ( LODWORD(v51->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v51[1].Header.Lock + 4LL * LODWORD(v51[1].Header.WaitListHead.Blink) + 996) >= *(_DWORD *)(*(_QWORD *)&v51[1].Header.Lock + 204LL) )
          goto LABEL_171;
      }
      else if ( ((__int64)v51[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v87 = (int)v51[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v51[5].Header.WaitListHead.Blink) = v87;
        if ( v87 )
          goto LABEL_171;
      }
      ++v51[5].Header.LockNV;
      KeSetEvent(v51 + 4, 0, 0);
LABEL_171:
      v51 = *(struct _KEVENT **)&v51->Header.Lock;
    }
    while ( v51 != v49 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v172);
  KeLowerIrql(v50);
  *(_QWORD *)(v6 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 296), 0, 0);
  *(_QWORD *)(v8 + 1648) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1616), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v56 = *((_DWORD *)a1 + 12);
    if ( !v56 || v56 == 7 )
    {
      v53 = (struct _KEVENT *)*((_QWORD *)a1 + 44);
      if ( v53 )
      {
        KeSetEvent(v53, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 44));
      }
    }
    else if ( v56 == 6 )
    {
      v53 = (struct _KEVENT *)*((_QWORD *)a1 + 37);
      if ( v53 )
        KeSetEvent(v53, 0, 0);
    }
  }
  v57 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 75) || *((_QWORD *)a1 + 32)) )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52, v54, v55);
    v138[3] = 281LL;
    v138[4] = 2560LL;
    v138[5] = a1;
    v138[6] = *((_QWORD *)a1 + 75);
    v138[7] = *((_QWORD *)a1 + 32);
    WdLogEvent5_WdCriticalError(v138);
    JUMPOUT(0x1C0019145LL);
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v58 = (KSPIN_LOCK *)(v57 + 1864);
  v59 = (char *)a1 + 8;
  *((_DWORD *)a1 + 13) = 0;
  KeAcquireInStackQueuedSpinLock(v58, &v173);
  v60 = *((_QWORD *)a1 + 1);
  v61 = (char **)*((_QWORD *)a1 + 2);
  if ( *(char **)(*(_QWORD *)v59 + 8LL) != v59 || *v61 != v59 )
    __fastfail(3u);
  *v61 = (char *)v60;
  *(_QWORD *)(v60 + 8) = v61;
  if ( v3 != -776 )
    --*(_DWORD *)(v3 + 776);
  KeReleaseInStackQueuedSpinLock(&v173);
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v58, v3 + 736, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 752));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v58, &v174);
    v62 = *(char ***)(v3 + 720);
    if ( *v62 != (char *)(v3 + 712) )
      __fastfail(3u);
    *(_QWORD *)v59 = v3 + 712;
    *((_QWORD *)a1 + 2) = v62;
    *v62 = v59;
    *(_QWORD *)(v3 + 720) = v59;
    if ( v3 != -728 )
      ++*(_DWORD *)(v3 + 728);
    KeReleaseInStackQueuedSpinLock(&v174);
  }
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v63 = (__int64 **)(v3 + 712);
    while ( 1 )
    {
      v64 = 0LL;
      KeAcquireInStackQueuedSpinLock(v58, &v175);
      if ( *v63 != (__int64 *)v63 && *(_DWORD *)(v3 + 728) > 0x10u )
      {
        v64 = *v63;
        v75 = **v63;
        if ( (__int64 **)(*v63)[1] != v63 || *(__int64 **)(v75 + 8) != v64 )
          __fastfail(3u);
        *v63 = (__int64 *)v75;
        *(_QWORD *)(v75 + 8) = v63;
        --*(_DWORD *)(v3 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v175);
      if ( !v64 )
        break;
      ExFreePoolWithTag(v64 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v183);
  return (struct _VIDSCH_QUEUE_PACKET *)v162;
}
