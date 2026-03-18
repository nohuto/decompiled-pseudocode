/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14042B804
 * Callers:
 *     NtNotifyChangeKey @ 0x14042C848 (NtNotifyChangeKey.c)
 * Callees:
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmpAllocatePostBlock @ 0x14042C258 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14042C358 (CmpNotifyChangeKey.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmObReferenceObjectByName @ 0x14065EAB8 (CmObReferenceObjectByName.c)
 */

NTSTATUS __stdcall NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  HANDLE v12; // rdi
  __int64 v15; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v17; // rtt
  bool v18; // r13
  KPROCESSOR_MODE PreviousMode; // cl
  int v20; // edx
  NTSTATUS v21; // edi
  int v22; // r9d
  _QWORD *v23; // r14
  unsigned int v24; // edi
  __int64 PostBlock; // rax
  __int64 v26; // rsi
  PVOID *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  ULONG_PTR v35; // r14
  struct _KTHREAD *v36; // r12
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rdi
  int v40; // r12d
  struct _KTHREAD *v41; // r14
  __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rdi
  signed __int32 v45; // eax
  ULONG_PTR v46; // r14
  bool v47; // zf
  signed __int32 v48; // eax
  void *v49; // rcx
  PVOID v50; // r14
  char v51; // r14
  unsigned __int64 v52; // rtt
  struct _KTHREAD *v53; // rcx
  __int16 v54; // ax
  char v56; // r8
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  ULONG_PTR v60; // r12
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rdi
  ULONG_PTR v64; // r12
  __int64 v65; // rax
  __int64 v66; // rdi
  int v67; // r9d
  ULONG_PTR v68; // r14
  signed __int32 v69; // eax
  ULONG_PTR v70; // r12
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // rdi
  ULONG_PTR v74; // r12
  __int64 v75; // rax
  __int64 v76; // rdi
  ULONG_PTR v77; // r14
  signed __int32 v78; // eax
  void *v79; // rcx
  BOOLEAN v80; // di
  struct _KTHREAD *v81; // rcx
  __int16 v82; // ax
  bool v83; // zf
  unsigned __int64 v84; // rtt
  unsigned __int64 v85; // rtt
  struct _KTHREAD *v86; // rcx
  __int16 v87; // ax
  unsigned __int64 v88; // rtt
  __int16 v89; // ax
  __int64 v90; // rcx
  _QWORD *v91; // rcx
  signed __int32 v92; // eax
  ULONG_PTR v93; // rsi
  signed __int32 v94; // eax
  ULONG_PTR v95; // rsi
  ULONG_PTR v96; // rsi
  signed __int32 v97; // eax
  signed __int32 v98; // eax
  void *v99; // rcx
  __int64 v100; // rcx
  _QWORD *v101; // rax
  unsigned __int8 CurrentIrql; // r8
  __int64 v103; // rdx
  _QWORD *v104; // rax
  unsigned __int64 v105; // rtt
  struct _KTHREAD *v106; // rcx
  __int16 v107; // ax
  NTSTATUS v108; // eax
  struct _KTHREAD *v109; // r14
  __int64 v110; // r9
  __int64 v111; // rax
  __int64 v112; // rdi
  unsigned __int8 v114; // r8
  _QWORD *v115; // rdx
  __int64 v116; // rax
  _QWORD *v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  __int64 v121; // rax
  _QWORD *v122; // rcx
  __int64 v123; // rdx
  _QWORD *v124; // rcx
  signed __int32 v125; // eax
  struct _KTHREAD *v126; // r12
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 v129; // r14
  unsigned __int8 v130; // r8
  _QWORD *v131; // r14
  __int64 v132; // rax
  _QWORD *v133; // rcx
  __int64 v134; // rdx
  _QWORD *v135; // rcx
  __int64 v136; // rax
  _QWORD *v137; // rcx
  __int64 v138; // rdx
  _QWORD *v139; // rcx
  signed __int32 v140; // eax
  int Object; // [rsp+20h] [rbp-138h]
  int Objecta; // [rsp+20h] [rbp-138h]
  int HandleInformation; // [rsp+28h] [rbp-130h]
  int HandleInformationa; // [rsp+28h] [rbp-130h]
  char v145; // [rsp+40h] [rbp-118h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-117h]
  bool v147; // [rsp+42h] [rbp-116h]
  bool v148; // [rsp+44h] [rbp-114h]
  __int64 v149; // [rsp+50h] [rbp-108h]
  struct _KTHREAD *v150; // [rsp+50h] [rbp-108h]
  struct _KTHREAD *v151; // [rsp+50h] [rbp-108h]
  struct _KTHREAD *v152; // [rsp+50h] [rbp-108h]
  unsigned int v153; // [rsp+58h] [rbp-100h]
  PVOID v154; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD *v155; // [rsp+70h] [rbp-E8h]
  PVOID v156; // [rsp+78h] [rbp-E0h]
  PVOID v157; // [rsp+80h] [rbp-D8h] BYREF
  PVOID v158; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v159[200]; // [rsp+90h] [rbp-C8h] BYREF
  int v161; // [rsp+170h] [rbp+18h]

  v161 = (int)SubordinateObjects;
  v12 = Event;
  v156 = 0LL;
  v15 = 0LL;
  v155 = 0LL;
  v153 = 1;
  memset(v159, 0, 136);
  v147 = 0;
  v149 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v17 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v80 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v80 )
    {
      v81 = KeGetCurrentThread();
      v82 = v81->KernelApcDisable + 1;
      v81->KernelApcDisable = v82;
      if ( !v82
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v81->ApcState.ApcListHead[0].Flink != &v81->152
        && !v81->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v80 )
      return -1073741431;
    v12 = Event;
  }
  v145 = 1;
  if ( Count <= 1 )
  {
    v18 = Count == 1;
    v148 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && v12 )
        {
          v153 = 4;
          goto LABEL_9;
        }
LABEL_124:
        _m_prefetchw(&CmpShutdownRundown);
        v85 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        v83 = v85 == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpShutdownRundown,
                       (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                       CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
        goto LABEL_125;
      }
      v147 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0;
      ProbeForWrite(IoStatusBlock, (-(__int64)v147 & 0xFFFFFFFFFFFFFFF8uLL) + 16, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v147 )
      {
        IoStatusBlock->Pointer = (PVOID)259;
      }
      else
      {
        IoStatusBlock->Status = 259;
        IoStatusBlock->Information = 0LL;
      }
      PreviousMode = AccessMode;
      if ( Asynchronous )
        v153 = 2;
    }
    else if ( Asynchronous )
    {
      v153 = 3;
      if ( Count )
        goto LABEL_124;
    }
LABEL_9:
    if ( CompletionFilter == (CompletionFilter & 0x1000000F) )
    {
      v21 = CmObReferenceObjectByHandle(MasterKeyHandle, 0x10u, SubordinateObjects, PreviousMode, &v157, 0LL);
      if ( v21 < 0 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v88 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v88 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v53 = KeGetCurrentThread();
        v89 = v53->KernelApcDisable + 1;
        v53->KernelApcDisable = v89;
        if ( v89 )
          return v21;
LABEL_53:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
          && !v53->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return v21;
      }
      v23 = 0LL;
      v154 = 0LL;
      if ( v18 )
      {
        v21 = CmObReferenceObjectByName(v161, v20, 16, v22, AccessMode, (__int64)v159, (__int64)&v154);
        if ( v21 < 0 )
          goto LABEL_48;
        v23 = v154;
        if ( *(_QWORD *)(*((_QWORD *)v157 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v154 + 1) + 32LL) )
        {
          ObfDereferenceObject(v154);
          v21 = -1073741811;
          goto LABEL_48;
        }
      }
      v24 = v153;
      PostBlock = CmpAllocatePostBlock(v153, 0x10000LL, 0LL, 0LL);
      v26 = PostBlock;
      if ( !PostBlock )
      {
        if ( v18 )
          ObfDereferenceObject(v23);
        goto LABEL_138;
      }
      if ( v18 )
      {
        v15 = CmpAllocatePostBlock(v153, 0LL, v23, PostBlock);
        v155 = (_QWORD *)v15;
        if ( !v15 )
        {
          ObfDereferenceObject(v23);
          CmpFreePostBlock(v26);
LABEL_138:
          v21 = -1073741670;
          goto LABEL_48;
        }
      }
      if ( v153 != 1 )
      {
        if ( Event )
        {
          v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v158, 0LL);
          v156 = v158;
          if ( v21 < 0 )
          {
            if ( !v18 )
            {
LABEL_142:
              v91 = (_QWORD *)v26;
LABEL_143:
              CmpFreePostBlock(v91);
              goto LABEL_48;
            }
            v90 = v15;
LABEL_141:
            CmpFreePostBlock(v90);
            goto LABEL_142;
          }
          KeResetEvent((PRKEVENT)v158);
          v24 = v153;
        }
        v27 = *(PVOID **)(v26 + 64);
        if ( v24 == 2 )
        {
          v27[13] = IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v26 + 64) + 8LL) = v156;
          v56 = AccessMode;
          if ( !ApcRoutine )
          {
            ApcRoutine = (PIO_APC_ROUTINE)AlpcMessageDeleteProcedure;
            v56 = 0;
          }
          KeInitializeApc(
            *(_QWORD *)(v26 + 64) + 16LL,
            (__int64)KeGetCurrentThread(),
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)ApcRoutine,
            v56,
            (__int64)ApcContext);
          v23 = v154;
        }
        else
        {
          *v27 = v156;
          if ( v24 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v26 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v26 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      v31 = (char *)v157 + 8;
      v32 = *((_QWORD *)v157 + 1);
      if ( Count == 1 )
        CmpLockTwoKcbsShared(v32, v23[1]);
      else
        CmpLockKcbShared(v32, v28, v29, v30);
      v34 = *(_QWORD *)v31;
      if ( (*(_DWORD *)(*(_QWORD *)v31 + 4LL) & 0x20000) == 0 )
      {
        if ( !v148 )
          goto LABEL_25;
        v57 = v23[1];
        if ( (*(_DWORD *)(v57 + 4) & 0x20000) == 0 )
        {
          v58 = *(_QWORD *)(v34 + 32);
          v59 = *(_QWORD *)(v57 + 32);
          if ( v58 != v59 )
          {
            v150 = KeGetCurrentThread();
            if ( v58 >= v59 )
            {
              v70 = *(_QWORD *)(v59 + 2832);
              v71 = KeAbPreAcquire(v70, 0LL, 0LL, v33);
              v73 = v71;
              if ( !_interlockedbittestandreset((volatile signed __int32 *)v70, 0) )
                ExpAcquireFastMutexContended(v70, v71);
              if ( v73 )
                *(_BYTE *)(v73 + 26) |= 1u;
              *(_QWORD *)(v70 + 8) = v150;
              v74 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
              v152 = KeGetCurrentThread();
              v75 = KeAbPreAcquire(v74, 0LL, 0LL, v72);
              v76 = v75;
              if ( !_interlockedbittestandreset((volatile signed __int32 *)v74, 0) )
                ExpAcquireFastMutexContended(v74, v75);
              if ( v76 )
                *(_BYTE *)(v76 + 26) |= 1u;
              *(_QWORD *)(v74 + 8) = v152;
              v40 = 3;
            }
            else
            {
              v60 = *(_QWORD *)(v58 + 2832);
              v61 = KeAbPreAcquire(v60, 0LL, 0LL, v33);
              v63 = v61;
              if ( !_interlockedbittestandreset((volatile signed __int32 *)v60, 0) )
                ExpAcquireFastMutexContended(v60, v61);
              if ( v63 )
                *(_BYTE *)(v63 + 26) |= 1u;
              *(_QWORD *)(v60 + 8) = v150;
              v64 = *(_QWORD *)(*(_QWORD *)(v23[1] + 32LL) + 2832LL);
              v151 = KeGetCurrentThread();
              v65 = KeAbPreAcquire(v64, 0LL, 0LL, v62);
              v66 = v65;
              if ( !_interlockedbittestandreset((volatile signed __int32 *)v64, 0) )
                ExpAcquireFastMutexContended(v64, v65);
              if ( v66 )
                *(_BYTE *)(v66 + 26) |= 1u;
              *(_QWORD *)(v64 + 8) = v151;
              v40 = 2;
            }
            v149 = *(_QWORD *)(v23[1] + 32LL);
LABEL_30:
            v41 = KeGetCurrentThread();
            v42 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, v38);
            v44 = v42;
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0) )
              ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v42);
            if ( v44 )
              *(_BYTE *)(v44 + 26) |= 1u;
            qword_14034DB68 = (__int64)v41;
            LOBYTE(v43) = WatchTree;
            v21 = CmpNotifyChangeKey((_DWORD)v157, v26, CompletionFilter, v43, Object, HandleInformation, v26);
            if ( v21 >= 0 )
            {
              if ( v148 )
              {
                ObfReferenceObject(v154);
                if ( v21 )
                {
                  LOBYTE(v67) = WatchTree;
                  v21 = CmpNotifyChangeKey(
                          (_DWORD)v154,
                          (_DWORD)v155,
                          CompletionFilter,
                          v67,
                          Objecta,
                          HandleInformationa,
                          v26);
                  if ( v21 < 0 )
                  {
                    v100 = *(_QWORD *)v26;
                    v101 = *(_QWORD **)(v26 + 8);
                    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || *v101 != v26 )
                      __fastfail(3u);
                    *v101 = v100;
                    *(_QWORD *)(v100 + 8) = v101;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    v103 = *(_QWORD *)(v26 + 16);
                    v104 = *(_QWORD **)(v26 + 24);
                    if ( *(_QWORD *)(v103 + 8) != v26 + 16 || *v104 != v26 + 16 )
                      __fastfail(3u);
                    *v104 = v103;
                    *(_QWORD *)(v103 + 8) = v104;
                    __writecr8(CurrentIrql);
                  }
                }
                else
                {
                  CmpFreePostBlock(v155);
                  v148 = 0;
                }
              }
              qword_14034DB68 = 0LL;
              v45 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
              if ( v45 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v45);
              KeAbPostRelease((ULONG_PTR)&CmpPostLock);
              if ( v40 == 1 )
              {
                v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
                *(_QWORD *)(v46 + 8) = 0LL;
                v48 = _InterlockedCompareExchange((volatile signed __int32 *)v46, 1, 0);
                v47 = v48 == 0;
              }
              else
              {
                if ( v40 == 2 )
                {
                  v68 = *(_QWORD *)(v149 + 2832);
                  *(_QWORD *)(v68 + 8) = 0LL;
                  v69 = _InterlockedCompareExchange((volatile signed __int32 *)v68, 1, 0);
                  if ( v69 )
                    ExpReleaseFastMutexContended((volatile signed __int32 *)v68, v69);
                  KeAbPostRelease(v68);
                  v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
                }
                else
                {
                  v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
                  *(_QWORD *)(v77 + 8) = 0LL;
                  v78 = _InterlockedCompareExchange((volatile signed __int32 *)v77, 1, 0);
                  if ( v78 )
                    ExpReleaseFastMutexContended((volatile signed __int32 *)v77, v78);
                  KeAbPostRelease(v77);
                  v46 = *(_QWORD *)(v149 + 2832);
                }
                *(_QWORD *)(v46 + 8) = 0LL;
                v48 = _InterlockedCompareExchange((volatile signed __int32 *)v46, 1, 0);
                v47 = v48 == 0;
              }
              if ( !v47 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)v46, v48);
              KeAbPostRelease(v46);
              v49 = *(void **)v31;
              if ( Count == 1 )
              {
                v50 = v154;
                CmpUnlockTwoKcbs(v49, *((_QWORD *)v154 + 1));
              }
              else
              {
                CmpUnlockKcb(v49);
                v50 = v154;
              }
              CmpUnlockRegistry();
              if ( v50 )
                ObfDereferenceObject(v50);
              if ( v21 < 0 )
              {
                CmpFreePostBlock(v26);
                if ( v156 )
                  ObfDereferenceObject(v156);
                goto LABEL_48;
              }
              if ( v153 != 1 )
              {
LABEL_48:
                v51 = v145;
                goto LABEL_49;
              }
              _m_prefetchw(&CmpShutdownRundown);
              v105 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v105 != _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&CmpShutdownRundown,
                             (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                             CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v106 = KeGetCurrentThread();
              v107 = v106->KernelApcDisable + 1;
              v106->KernelApcDisable = v107;
              if ( !v107
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v106->ApcState.ApcListHead[0].Flink != &v106->152
                && !v106->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v145 = 0;
              v108 = KeWaitForSingleObject(*(PVOID *)(v26 + 64), Executive, AccessMode, 1u, 0LL);
              v21 = v108;
              if ( v108 != 257 && v108 != 192 )
              {
                CmpLockRegistry();
                v109 = KeGetCurrentThread();
                v111 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, v110);
                v112 = v111;
                if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0) )
                  ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v111);
                if ( v112 )
                  *(_BYTE *)(v112 + 26) |= 1u;
                qword_14034DB68 = (__int64)v109;
                v114 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v148 )
                {
                  v115 = v155;
                  v116 = *v155;
                  if ( *v155 )
                  {
                    v117 = (_QWORD *)v155[1];
                    if ( *(_QWORD **)(v116 + 8) != v155 || (_QWORD *)*v117 != v155 )
                      __fastfail(3u);
                    *v117 = v116;
                    *(_QWORD *)(v116 + 8) = v117;
                  }
                  v118 = v115 + 2;
                  v119 = v115[2];
                  v120 = (_QWORD *)v118[1];
                  if ( *(_QWORD **)(v119 + 8) != v118 || (_QWORD *)*v120 != v118 )
                    __fastfail(3u);
                  *v120 = v119;
                  *(_QWORD *)(v119 + 8) = v120;
                }
                v121 = *(_QWORD *)v26;
                if ( *(_QWORD *)v26 )
                {
                  v122 = *(_QWORD **)(v26 + 8);
                  if ( *(_QWORD *)(v121 + 8) != v26 || *v122 != v26 )
                    __fastfail(3u);
                  *v122 = v121;
                  *(_QWORD *)(v121 + 8) = v122;
                }
                v123 = *(_QWORD *)(v26 + 16);
                v124 = *(_QWORD **)(v26 + 24);
                if ( *(_QWORD *)(v123 + 8) != v26 + 16 || *v124 != v26 + 16 )
                  __fastfail(3u);
                *v124 = v123;
                *(_QWORD *)(v123 + 8) = v124;
                __writecr8(v114);
                qword_14034DB68 = 0LL;
                v125 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
                if ( v125 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v125);
                KeAbPostRelease((ULONG_PTR)&CmpPostLock);
                CmpUnlockRegistry();
                v21 = *(_DWORD *)(*(_QWORD *)(v26 + 64) + 24LL);
                IoStatusBlock->Status = v21;
                if ( v147 )
                  HIDWORD(IoStatusBlock->Pointer) = 0;
                else
                  IoStatusBlock->Information = 0LL;
                v51 = 0;
                if ( v148 )
                  CmpFreePostBlock(v155);
                CmpFreePostBlock(v26);
LABEL_49:
                ObfDereferenceObject(v157);
                if ( !v51 )
                  return v21;
                _m_prefetchw(&CmpShutdownRundown);
                v52 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v52 != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CmpShutdownRundown,
                              (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                              CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                  ExfReleaseRundownProtection(&CmpShutdownRundown);
                v53 = KeGetCurrentThread();
                v54 = v53->KernelApcDisable + 1;
                v53->KernelApcDisable = v54;
                if ( v54 )
                  return v21;
                goto LABEL_53;
              }
              CmpLockRegistry();
              v126 = KeGetCurrentThread();
              v128 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, v127);
              v129 = v128;
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0) )
                ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v128);
              if ( v129 )
                *(_BYTE *)(v129 + 26) |= 1u;
              qword_14034DB68 = (__int64)v126;
              v130 = KeGetCurrentIrql();
              __writecr8(1uLL);
              v131 = v155;
              if ( v148 )
              {
                v132 = *v155;
                if ( *v155 )
                {
                  v133 = (_QWORD *)v155[1];
                  if ( *(_QWORD **)(v132 + 8) != v155 || (_QWORD *)*v133 != v155 )
                    __fastfail(3u);
                  *v133 = v132;
                  *(_QWORD *)(v132 + 8) = v133;
                }
                v134 = v131[2];
                v135 = (_QWORD *)v131[3];
                if ( *(_QWORD **)(v134 + 8) != v131 + 2 || (_QWORD *)*v135 != v131 + 2 )
                  __fastfail(3u);
                *v135 = v134;
                *(_QWORD *)(v134 + 8) = v135;
              }
              v136 = *(_QWORD *)v26;
              if ( *(_QWORD *)v26 )
              {
                v137 = *(_QWORD **)(v26 + 8);
                if ( *(_QWORD *)(v136 + 8) != v26 || *v137 != v26 )
                  __fastfail(3u);
                *v137 = v136;
                *(_QWORD *)(v136 + 8) = v137;
              }
              v138 = *(_QWORD *)(v26 + 16);
              v139 = *(_QWORD **)(v26 + 24);
              if ( *(_QWORD *)(v138 + 8) != v26 + 16 || *v139 != v26 + 16 )
                __fastfail(3u);
              *v139 = v138;
              *(_QWORD *)(v138 + 8) = v139;
              __writecr8(v130);
              qword_14034DB68 = 0LL;
              v140 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
              if ( v140 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v140);
              KeAbPostRelease((ULONG_PTR)&CmpPostLock);
              CmpUnlockRegistry();
              if ( !v148 )
                goto LABEL_142;
              v90 = (__int64)v131;
              goto LABEL_141;
            }
            qword_14034DB68 = 0LL;
            v92 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
            if ( v92 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v92);
            KeAbPostRelease((ULONG_PTR)&CmpPostLock);
            if ( v40 != 1 )
            {
              if ( v40 != 2 )
              {
                v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
                *(_QWORD *)(v96 + 8) = 0LL;
                v97 = _InterlockedCompareExchange((volatile signed __int32 *)v96, 1, 0);
                if ( v97 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)v96, v97);
                KeAbPostRelease(v96);
                v95 = *(_QWORD *)(v149 + 2832);
                goto LABEL_156;
              }
              v93 = *(_QWORD *)(v149 + 2832);
              *(_QWORD *)(v93 + 8) = 0LL;
              v94 = _InterlockedCompareExchange((volatile signed __int32 *)v93, 1, 0);
              if ( v94 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)v93, v94);
              KeAbPostRelease(v93);
            }
            v95 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 2832LL);
LABEL_156:
            *(_QWORD *)(v95 + 8) = 0LL;
            v98 = _InterlockedCompareExchange((volatile signed __int32 *)v95, 1, 0);
            if ( v98 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)v95, v98);
            KeAbPostRelease(v95);
            v99 = *(void **)v31;
            if ( Count == 1 )
              CmpUnlockTwoKcbs(v99, *((_QWORD *)v154 + 1));
            else
              CmpUnlockKcb(v99);
            CmpUnlockRegistry();
            if ( v156 )
              ObfDereferenceObject(v156);
            if ( !v148 )
              goto LABEL_48;
            v91 = v155;
            goto LABEL_143;
          }
LABEL_25:
          v35 = *(_QWORD *)(*(_QWORD *)(v34 + 32) + 2832LL);
          v36 = KeGetCurrentThread();
          v37 = KeAbPreAcquire(v35, 0LL, 0LL, v33);
          v39 = v37;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v35, 0) )
            ExpAcquireFastMutexContended(v35, v37);
          if ( v39 )
            *(_BYTE *)(v39 + 26) |= 1u;
          *(_QWORD *)(v35 + 8) = v36;
          v40 = 1;
          goto LABEL_30;
        }
      }
      v79 = *(void **)v31;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v79, v23[1]);
      else
        CmpUnlockKcb(v79);
      CmpUnlockRegistry();
      if ( v156 )
        ObfDereferenceObject(v156);
      if ( v148 )
        CmpFreePostBlock(v15);
      CmpFreePostBlock(v26);
      v21 = -1073741444;
      goto LABEL_48;
    }
    goto LABEL_124;
  }
  _m_prefetchw(&CmpShutdownRundown);
  v84 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  v83 = v84 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_125:
  if ( !v83 )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v86 = KeGetCurrentThread();
  v87 = v86->KernelApcDisable + 1;
  v86->KernelApcDisable = v87;
  if ( !v87
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v86->ApcState.ApcListHead[0].Flink != &v86->152
    && !v86->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741811;
}
