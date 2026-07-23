/*
 * XREFs of IopfCompleteRequest @ 0x1400530F0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401CA67C (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140700DA4 (IovCompleteRequest.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14009E038 (IopVerifyDeviceObjectOnStack.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1400C7FD4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400C8154 (KiInsertQueueApc.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     PoDeviceReleaseIrp @ 0x14012C584 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x14012C65C (PoDeviceAcquireIrp.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObpRemoveObjectRoutine @ 0x14041A5F0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // rdi
  char v4; // cl
  unsigned __int8 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // rbx
  char v9; // r12
  int v10; // r15d
  char v11; // al
  char *v12; // rbx
  __int64 v13; // rax
  char v14; // al
  unsigned __int8 v15; // r14
  __int64 v16; // rsi
  int v17; // edx
  struct _MDL *v18; // rcx
  IRP *v19; // r14
  struct _MDL *Next; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 *v26; // r14
  _QWORD *FileObjectExtension; // rax
  __int64 v28; // rsi
  __int64 i; // rax
  int v30; // eax
  void *v31; // rcx
  int v32; // eax
  __int128 v33; // xmm0
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  unsigned int v41; // esi
  __int64 v42; // r14
  __int64 v43; // r8
  int v44; // ebx
  struct _KPRCB *CurrentPrcb; // r15
  int v46; // eax
  _QWORD *v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  char v51; // al
  __int64 v52; // rsi
  _QWORD *v53; // r12
  struct _KPRCB *v54; // rax
  _KTHREAD *CurrentThread; // r13
  unsigned __int8 IsThreadRunning; // al
  struct _KPRCB *v57; // r13
  _QWORD *v58; // rcx
  _QWORD *v59; // rsi
  _QWORD *v60; // rdi
  _QWORD *v61; // rbx
  char v62; // al
  __int64 v63; // r8
  __int64 v64; // rsi
  _QWORD *v65; // r12
  struct _KPRCB *v66; // rax
  _KTHREAD *v67; // r13
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r13
  int v70; // edx
  _QWORD *v71; // rcx
  unsigned __int8 v72; // r14
  _KTHREAD *v73; // rbx
  _KTHREAD *NextThread; // rsi
  bool v75; // zf
  struct _MDL *j; // rbx
  int v77; // eax
  __int64 v78; // rax
  struct _KTHREAD *v79; // r14
  __int64 *v80; // rbx
  __int64 v81; // rdx
  __int64 *v82; // rax
  __int64 v83; // rsi
  unsigned __int8 v84; // al
  _QWORD *v85; // rdx
  char v86; // si
  int v87; // r12d
  _QWORD *v88; // r14
  _QWORD **v89; // r13
  struct _KPRCB *v90; // r15
  _KTHREAD *v91; // rbx
  unsigned __int8 v92; // al
  _QWORD *v93; // r15
  _QWORD *v94; // r14
  __int64 v95; // rcx
  _QWORD *v96; // rax
  char v97; // r12
  __int64 v98; // rbx
  int v99; // r8d
  _QWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  volatile signed __int32 *v103; // rbx
  unsigned __int8 v104; // r15
  unsigned __int8 v105; // bl
  int v106; // eax
  ULONG_PTR v107; // rdi
  BOOLEAN v108; // si
  __int64 v109; // rbx
  __int64 v110; // r12
  __int64 v111; // r13
  unsigned __int8 v112; // r14
  struct _KPRCB *v113; // r15
  char v114; // di
  KIRQL v115; // al
  __int64 *v116; // rcx
  ULONG_PTR v117; // r14
  KIRQL v118; // r15
  BOOLEAN v119; // r14
  __int64 v120; // rbx
  __int64 v121; // r13
  unsigned __int8 v122; // r15
  struct _KPRCB *v123; // r12
  __int64 v124; // r8
  __int64 *v125; // rdx
  signed __int64 v126; // rsi
  bool v127; // cc
  signed __int64 v128; // rsi
  char v129; // di
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-89h]
  _QWORD *v131; // [rsp+48h] [rbp-69h]
  struct _KPRCB *v132; // [rsp+48h] [rbp-69h]
  __int64 v133; // [rsp+50h] [rbp-61h] BYREF
  __int64 v134; // [rsp+58h] [rbp-59h] BYREF
  __int64 v135; // [rsp+60h] [rbp-51h]
  __int64 v136; // [rsp+68h] [rbp-49h] BYREF
  volatile signed __int64 *v137; // [rsp+70h] [rbp-41h]
  unsigned __int8 v138; // [rsp+78h] [rbp-39h]
  int v139; // [rsp+80h] [rbp-31h]
  int v140; // [rsp+84h] [rbp-2Dh] BYREF
  int v141; // [rsp+88h] [rbp-29h] BYREF
  int v142; // [rsp+8Ch] [rbp-25h] BYREF
  int v143; // [rsp+90h] [rbp-21h] BYREF
  __int64 v144; // [rsp+98h] [rbp-19h] BYREF
  int v145; // [rsp+A0h] [rbp-11h]
  __int64 v146; // [rsp+A8h] [rbp-9h] BYREF
  char v147; // [rsp+B0h] [rbp-1h] BYREF
  char v148; // [rsp+B8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  struct _KPRCB *v151; // [rsp+118h] [rbp+67h]
  struct _KPRCB *v152; // [rsp+118h] [rbp+67h]
  KIRQL v153; // [rsp+118h] [rbp+67h]
  CCHAR v154; // [rsp+120h] [rbp+6Fh]
  unsigned int v155; // [rsp+120h] [rbp+6Fh]
  int v156; // [rsp+120h] [rbp+6Fh]
  int v157; // [rsp+128h] [rbp+77h] BYREF
  int v158; // [rsp+130h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v154 = a2;
  v3 = BugCheckParameter1;
  v134 = 0LL;
  v4 = *(_BYTE *)(BugCheckParameter1 + 66);
  v5 = a2;
  v6 = 0LL;
  v7 = *(unsigned __int8 *)(v3 + 67);
  if ( (char)v7 > (char)(v4 + 1) || *(_WORD *)v3 != 6 )
    KeBugCheckEx(0x44u, v3, 0x110EuLL, 0LL, 0LL);
  v8 = *(_QWORD *)(v3 + 184);
  if ( (char)v7 <= v4 && *(_BYTE *)v8 == 22 )
  {
    v9 = 1;
    PoDeviceReleaseIrp(v3, *(unsigned __int8 *)(v8 + 1), *(_QWORD *)(v8 + 40));
    v2 = 0LL;
  }
  else
  {
    v9 = 0;
  }
  if ( (*(_BYTE *)(v3 + 211) & 2) != 0 )
    v10 = *(_DWORD *)(v3 + 240);
  else
    v10 = 0;
  v11 = *(_BYTE *)(v3 + 66);
  ++*(_BYTE *)(v3 + 67);
  *(_QWORD *)(v3 + 184) += 72LL;
  if ( *(char *)(v3 + 67) <= (char)(v11 + 1) )
  {
    v12 = (char *)(v8 + 3);
    while ( 1 )
    {
      *(_BYTE *)(v3 + 65) = *v12 & 1;
      v13 = *(int *)(v3 + 48);
      if ( (int)v13 >= 0 )
        goto LABEL_19;
      if ( (_DWORD)v13 != v10 )
      {
        *v12 |= 2u;
        v10 = v13;
        *(_BYTE *)(v3 + 211) |= 2u;
        *(_QWORD *)(v3 + 240) = v13;
      }
      if ( *(int *)(v3 + 48) >= 0 )
      {
LABEL_19:
        v14 = *v12;
        if ( (*v12 & 0x40) != 0 )
          goto LABEL_17;
      }
      else
      {
        v14 = *v12;
        if ( *v12 < 0 )
          goto LABEL_17;
      }
      if ( *(_BYTE *)(v3 + 68) && (v14 & 0x20) != 0 )
      {
LABEL_17:
        v15 = *(v12 - 2);
        *v12 = v14 & 2;
        *((_WORD *)v12 - 1) = 0;
        *(_QWORD *)(v12 + 5) = 0LL;
        *(_QWORD *)(v12 + 13) = 0LL;
        *(_QWORD *)(v12 + 21) = 0LL;
        *(_QWORD *)(v12 + 45) = 0LL;
        if ( *(_BYTE *)(v3 + 67) == *(_BYTE *)(v3 + 66) + 1 )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(*(_QWORD *)(v3 + 184) + 40LL);
        if ( v9 )
          PoDeviceAcquireIrp(v3, v15, v16, 0LL);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD, __int64))(v12 + 53))(
               v16,
               v3,
               *(_QWORD *)(v12 + 61),
               v2) == -1073741802 )
          return;
        if ( v9 )
          PoDeviceReleaseIrp(v3, v15, v16);
        v2 = 0LL;
        goto LABEL_33;
      }
      if ( *(_BYTE *)(v3 + 65) && *(_BYTE *)(v3 + 67) <= *(_BYTE *)(v3 + 66) )
        *(_BYTE *)(*(_QWORD *)(v3 + 184) + 3LL) |= 1u;
      *v12 &= 2u;
      *((_WORD *)v12 - 1) = 0;
      *(_QWORD *)(v12 + 5) = 0LL;
      *(_QWORD *)(v12 + 13) = 0LL;
      *(_QWORD *)(v12 + 21) = 0LL;
      *(_QWORD *)(v12 + 45) = 0LL;
LABEL_33:
      ++*(_BYTE *)(v3 + 67);
      v12 += 72;
      *(_QWORD *)(v3 + 184) += 72LL;
      if ( *(char *)(v3 + 67) > (char)(*(_BYTE *)(v3 + 66) + 1) )
      {
        v5 = v154;
        break;
      }
    }
  }
  v17 = *(_DWORD *)(v3 + 16);
  if ( (v17 & 8) != 0 )
  {
    v18 = *(struct _MDL **)(v3 + 8);
    v19 = *(IRP **)(v3 + 24);
    if ( v18 )
    {
      do
      {
        Next = v18->Next;
        IoFreeMdl(v18);
        v18 = Next;
      }
      while ( Next );
    }
    pIoFreeIrp(v3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->AssociatedIrp, 0xFFFFFFFF) == 1 )
      pIofCompleteRequest(v19, v154);
    return;
  }
  if ( *(_DWORD *)(v3 + 48) == 260 )
  {
    v21 = *(_QWORD *)(v3 + 56);
    if ( v21 > 2 )
    {
      if ( v21 == 2684354563 || v21 == 2684354572 || v21 == 2147483673 )
      {
        v6 = *(_QWORD *)(v3 + 160);
        v134 = v6;
        *(_QWORD *)(v3 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(v3 + 48) = -1073741191;
      }
    }
  }
  if ( !v5 )
  {
    v22 = *(_QWORD *)(v3 + 192);
    if ( v22 )
    {
      if ( (v17 & 0x400) == 0 )
      {
        v23 = *(_QWORD *)(v22 + 16);
        if ( (!v23 || (v24 = *(_QWORD *)(v23 + 8)) == 0)
          && ((*(_DWORD *)(v22 + 80) & 0x800) != 0
           || (v25 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 56LL)) == 0
           || (v24 = *(_QWORD *)(v25 + 8)) == 0) )
        {
          v24 = *(_QWORD *)(v22 + 8);
        }
        v26 = (__int64 *)(v24 + 24);
        if ( *(_QWORD *)(v24 + 24) )
        {
          if ( *(_QWORD *)(v22 + 208) )
          {
            FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(v22, 1LL, 0LL, 0LL);
            if ( FileObjectExtension )
            {
              v28 = *FileObjectExtension;
              if ( *FileObjectExtension )
              {
                if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v24, *FileObjectExtension) )
                {
LABEL_64:
                  v30 = *(_DWORD *)(v28 + 72);
                  if ( v30 == 8 || v30 == 20 )
                  {
                    v5 = 1;
                    v154 = 1;
                  }
                  else
                  {
                    v5 = v154;
                  }
                  goto LABEL_68;
                }
              }
            }
          }
          for ( i = *v26; i; i = *(_QWORD *)(i + 24) )
            v24 = i;
        }
        v28 = v24;
        goto LABEL_64;
      }
    }
  }
LABEL_68:
  v31 = *(void **)(v3 + 160);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(v3 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(v3 + 71) & 0x40) != 0 )
  {
    LOBYTE(v7) = 1;
    IopFreeIrpExtension(v3, 0xFFFFFFFFLL, v7, v2);
  }
  v32 = *(_DWORD *)(v3 + 16);
  if ( (v32 & 0x402) != 0 )
  {
    if ( (v32 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread((_QWORD *)v3);
      KeInitializeApc(
        v3 + 120,
        *(_QWORD *)(v3 + 152),
        *(char *)(v3 + 70),
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(v3 + 120, 0LL, 0LL, v5);
      return;
    }
    v33 = *(_OWORD *)(v3 + 48);
    v35 = 2LL;
    v139 = *(_DWORD *)(v3 + 16) & 0x42;
    v34 = v139;
    *(_OWORD *)*(_QWORD *)(v3 + 72) = v33;
    if ( v34 )
    {
      v36 = *(_QWORD *)(v3 + 152);
      CurrentIrql = 0;
      if ( v36 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock((PKSPIN_LOCK)(v36 + 1840));
      }
      v38 = *(_QWORD *)(v3 + 32);
      v39 = (_QWORD *)(v3 + 32);
      v40 = *(_QWORD **)(v3 + 40);
      if ( *(_QWORD *)(v38 + 8) != v3 + 32 || (_QWORD *)*v40 != v39 )
        __fastfail(3u);
      *v40 = v38;
      *(_QWORD *)(v38 + 8) = v40;
      *(_QWORD *)(v3 + 40) = v3 + 32;
      *v39 = v39;
      if ( v36 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v36 + 1840, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 1840), 0LL);
        __writecr8(CurrentIrql);
      }
      v35 = 2LL;
    }
    v41 = v5;
    v42 = *(_QWORD *)(v3 + 80);
    v155 = v41;
    if ( (*(_BYTE *)v42 & 0x7F) != 0 )
    {
      v43 = 0LL;
      v44 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v42 + 4) == 1 )
      {
LABEL_168:
        if ( v139 )
          pIoFreeIrp(v3);
        return;
      }
      v43 = 0LL;
      v44 = 1;
    }
    v135 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v157 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v42, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v157);
        while ( (*(_DWORD *)v42 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v42, 7u) );
      v35 = 2LL;
      v43 = 0LL;
    }
    v46 = *(_DWORD *)(v42 + 4);
    *(_DWORD *)(v42 + 4) = 1;
    if ( !v46 )
    {
      if ( !v44 )
      {
        v47 = *(_QWORD **)(v42 + 8);
        if ( v47 != (_QWORD *)(v42 + 8) )
        {
          while ( 1 )
          {
            v48 = v47;
            v131 = (_QWORD *)*v47;
            v49 = *v47;
            v50 = (_QWORD *)v47[1];
            if ( *(_QWORD **)(v49 + 8) != v48 || (_QWORD *)*v50 != v48 )
              __fastfail(3u);
            *v50 = v49;
            *(_QWORD *)(v49 + 8) = v50;
            v51 = *((_BYTE *)v48 + 16);
            if ( v51 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v48, *((unsigned __int16 *)v48 + 9), 0LL) )
              {
                v75 = (*(_DWORD *)(v42 + 4))-- == 1;
                if ( v75 )
                  goto LABEL_149;
              }
            }
            else
            {
              if ( v51 == 2 )
              {
                *((_BYTE *)v48 + 17) = 5;
                v52 = v48[3];
                *v48 = 0LL;
                v53 = (_QWORD *)(v52 + 8);
                __writecr8(2uLL);
                v54 = KeGetCurrentPrcb();
                v151 = v54;
                CurrentThread = v54->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v54->CurrentThread);
                  EtwTraceEnqueueWork(CurrentThread, v48, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe(v52);
                if ( (_QWORD *)*v53 != v53
                  && *(_DWORD *)(v52 + 40) < *(_DWORD *)(v52 + 44)
                  && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v52 || CurrentThread->WaitReason != 15) )
                {
                  v57 = v151;
                  if ( !(unsigned __int8)KiWakeQueueWaiter(v151, v52, v48) )
                  {
LABEL_114:
                    v35 = *(unsigned int *)(v52 + 4);
                    *(_DWORD *)(v52 + 4) = v35 + 1;
                    v58 = *(_QWORD **)(v52 + 32);
                    if ( *v58 != v52 + 24 )
                      __fastfail(3u);
                    *v48 = v52 + 24;
                    v48[1] = v58;
                    *v58 = v48;
                    *(_QWORD *)(v52 + 32) = v48;
                    if ( !(_DWORD)v35 && (_QWORD *)*v53 != v53 )
                      KiWakeOtherQueueWaiters(v57, v52);
                  }
                  _InterlockedAnd((volatile signed __int32 *)v52, 0xFFFFFF7F);
                  v75 = (*(_DWORD *)(v42 + 4))-- == 1;
                  if ( v75 )
                    goto LABEL_149;
                  goto LABEL_122;
                }
                v57 = v151;
                goto LABEL_114;
              }
              KiTryUnwaitThread(CurrentPrcb, v48, 256LL, 0LL);
            }
LABEL_122:
            v47 = v131;
            v35 = 2LL;
            v43 = 0LL;
            if ( v131 == (_QWORD *)(v42 + 8) )
              goto LABEL_149;
          }
        }
        goto LABEL_150;
      }
      v59 = (_QWORD *)(v42 + 8);
      if ( *(_QWORD *)(v42 + 8) != v42 + 8 )
      {
        v60 = *(_QWORD **)(v42 + 8);
        while ( 1 )
        {
          v61 = v60;
          v60 = (_QWORD *)*v60;
          v62 = *((_BYTE *)v61 + 16);
          if ( v62 == 1 )
          {
            v63 = *((unsigned __int16 *)v61 + 9);
LABEL_145:
            KiTryUnwaitThread(CurrentPrcb, v61, v63, 0LL);
            goto LABEL_146;
          }
          if ( v62 != 2 )
          {
            v63 = 256LL;
            goto LABEL_145;
          }
          *((_BYTE *)v61 + 17) = 5;
          v64 = v61[3];
          *v61 = 0LL;
          v65 = (_QWORD *)(v64 + 8);
          __writecr8(2uLL);
          v66 = KeGetCurrentPrcb();
          v132 = v66;
          v67 = v66->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v68 = KeIsThreadRunning(v66->CurrentThread);
            EtwTraceEnqueueWork(v67, v61, v68);
          }
          KiAcquireKobjectLockSafe(v64);
          if ( (_QWORD *)*v65 == v65
            || *(_DWORD *)(v64 + 40) >= *(_DWORD *)(v64 + 44)
            || v67->Queue == (_DISPATCHER_HEADER *volatile)v64 && v67->WaitReason == 15 )
          {
            break;
          }
          v69 = v132;
          if ( !(unsigned __int8)KiWakeQueueWaiter(v132, v64, v61) )
            goto LABEL_138;
LABEL_143:
          _InterlockedAnd((volatile signed __int32 *)v64, 0xFFFFFF7F);
          v59 = (_QWORD *)(v42 + 8);
LABEL_146:
          v35 = 2LL;
          v43 = 0LL;
          if ( v60 == v59 )
          {
            v3 = BugCheckParameter1;
            goto LABEL_148;
          }
        }
        v69 = v132;
LABEL_138:
        v70 = *(_DWORD *)(v64 + 4);
        *(_DWORD *)(v64 + 4) = v70 + 1;
        v71 = *(_QWORD **)(v64 + 32);
        if ( *v71 != v64 + 24 )
          __fastfail(3u);
        *v61 = v64 + 24;
        v61[1] = v71;
        *v71 = v61;
        *(_QWORD *)(v64 + 32) = v61;
        if ( !v70 && (_QWORD *)*v65 != v65 )
          KiWakeOtherQueueWaiters(v69, v64);
        goto LABEL_143;
      }
LABEL_148:
      v59[1] = v59;
      *v59 = v59;
LABEL_149:
      v41 = v155;
    }
LABEL_150:
    _InterlockedAnd((volatile signed __int32 *)v42, 0xFFFFFF7F);
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      KiProcessThreadWaitList(CurrentPrcb, 1LL, v41, 0LL);
    v72 = v135;
    if ( (unsigned __int8)v135 >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      {
        LOBYTE(v35) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v35, v43, v2);
      }
    }
    else
    {
      v73 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL, v43, v2);
        v158 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v158);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(CurrentPrcb, v73, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          LODWORD(NextThread[1].Uch) = LODWORD(NextThread[1].Uch)
                                     - NextThread->WaitBlock[2].SpareLong
                                     + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        v73->WaitReason = 32;
        v73->WaitIrql = v72;
        KiQueueReadyThread(CurrentPrcb, v73);
        v75 = (unsigned __int8)KiSwapContext(v73, NextThread, v72) == 0;
      }
      else
      {
        v75 = (v73->MiscFlags & 0x40) == 0;
      }
      if ( !v75 )
      {
        __writecr8(1uLL);
        v73->MiscFlags &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      __writecr8(v72);
    }
    goto LABEL_168;
  }
  for ( j = *(struct _MDL **)(v3 + 8); j; j = j->Next )
    MmUnlockPages(j);
  if ( (*(_DWORD *)(v3 + 16) & 0x2000) != 0 )
    ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 152), 0x746C6644u);
  v77 = *(_DWORD *)(v3 + 16);
  if ( (v77 & 0x800) != 0 && !*(_BYTE *)(v3 + 65) )
  {
    if ( *(_DWORD *)(v3 + 48) == 260 )
    {
      v78 = *(_QWORD *)(v3 + 56);
      if ( v78 == 2684354563LL || v78 == 2684354572LL || v78 == 2147483673LL )
        *(_QWORD *)(v3 + 160) = v6;
    }
    return;
  }
  v79 = *(struct _KTHREAD **)(v3 + 152);
  v80 = (__int64 *)(v3 + 192);
  v81 = *(_QWORD *)(v3 + 192);
  v133 = v81;
  if ( (v77 & 0x2000) != 0 )
  {
    v144 = 0LL;
    if ( *(_BYTE *)(v3 + 65)
      || (*(_DWORD *)(v3 + 48) & 0xC0000000) != 0xC0000000
      && ((*(_DWORD *)(v81 + 80) & 0x2000000) == 0 || *(int *)(v3 + 48) < 0) )
    {
      v82 = *(__int64 **)(v133 + 176);
      if ( !v82 )
      {
        IopCompleteRequest(v3 + 120, (unsigned int)&v147, (unsigned int)&v144, v3 + 192, (__int64)&v144);
        return;
      }
      v83 = *v82;
      *(_QWORD *)(v3 + 120) = v82[1];
      *(_DWORD *)(v3 + 184) = 0;
      v136 = 0LL;
      v137 = (volatile signed __int64 *)(v83 + 64);
      v84 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v138 = v84;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v136, v83 + 64);
      }
      else
      {
        v85 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v83 + 64), (__int64)&v136);
        if ( v85 )
          KxWaitForLockOwnerShip((__int64)&v136, v85);
      }
      *(_DWORD *)(v3 + 16) |= 0x10000u;
      if ( *(_BYTE *)(v83 + 72) )
      {
        v86 = 1;
      }
      else
      {
        v87 = v154;
        v88 = (_QWORD *)(v3 + 168);
        v156 = v154;
        v89 = (_QWORD **)(v83 + 8);
        v135 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v90 = KeGetCurrentPrcb();
        v152 = v90;
        v91 = v90->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v92 = KeIsThreadRunning(v90->CurrentThread);
          EtwTraceEnqueueWork(v91, v3 + 168, v92);
        }
        if ( (_BYTE)v156 )
        {
          if ( (*(_BYTE *)(v83 + 1) & 2) != 0 )
            v87 = 0;
          v156 = v87;
        }
        v140 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v83, 7u) )
        {
          do
            KeYieldProcessorEx(&v140);
          while ( (*(_DWORD *)v83 & 0x80u) != 0 );
        }
        v145 = *(_DWORD *)(v83 + 4);
        if ( *v89 != v89
          && *(_DWORD *)(v83 + 40) < *(_DWORD *)(v83 + 44)
          && (v91->Queue != (_DISPATCHER_HEADER *volatile)v83 || v91->WaitReason != 15) )
        {
          v93 = *v89;
          do
          {
            v94 = v93;
            v93 = (_QWORD *)*v93;
            if ( *((_BYTE *)v94 + 16) != 3 )
              break;
            v95 = *v94;
            v96 = (_QWORD *)v94[1];
            if ( *(_QWORD **)(*v94 + 8LL) != v94 || (_QWORD *)*v96 != v94 )
              __fastfail(3u);
            *v96 = v95;
            v97 = 0;
            *(_QWORD *)(v95 + 8) = v96;
            v98 = v94[3];
            v141 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v141);
              while ( *(_QWORD *)(v98 + 64) );
            }
            if ( *(_BYTE *)(v98 + 388) == 5 )
              v97 = KiSignalThread(v152, v98, v3 + 168, v94);
            *(_QWORD *)(v98 + 64) = 0LL;
            ++*((_BYTE *)v94 + 17);
            if ( v97 )
              goto LABEL_226;
          }
          while ( v93 != v89 );
          v90 = v152;
          v88 = (_QWORD *)(v3 + 168);
        }
        v99 = *(_DWORD *)(v83 + 4);
        *(_DWORD *)(v83 + 4) = v99 + 1;
        v100 = *(_QWORD **)(v83 + 32);
        if ( *v100 != v83 + 24 )
          __fastfail(3u);
        *v88 = v83 + 24;
        v88[1] = v100;
        *v100 = v88;
        *(_QWORD *)(v83 + 32) = v88;
        if ( !v99 && *v89 != v89 )
          KiWakeOtherQueueWaiters(v90, v83);
LABEL_226:
        _InterlockedAnd((volatile signed __int32 *)v83, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v152, 0, 1, v156, v135);
        v86 = 0;
        v80 = (__int64 *)(v3 + 192);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v136, retaddr);
LABEL_233:
        __writecr8(v138);
        if ( !v86 )
          return;
        v102 = *v80;
        goto LABEL_235;
      }
      _m_prefetchw(&v136);
      v101 = v136;
      if ( !v136 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v137, 0LL, (signed __int64)&v136) == &v136 )
          goto LABEL_233;
        v101 = KxWaitForLockChainValid(&v136);
      }
      v136 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v101 + 8), 1uLL);
      goto LABEL_233;
    }
  }
  if ( v79 )
  {
    v103 = (volatile signed __int32 *)&v79[1].WaitBlockFill11[16];
    v104 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&v79[1].WaitBlockFill11[16]);
    }
    else if ( _interlockedbittestandset64(v103, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&v79[1].WaitBlockFill11[16]);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&v79[1].WaitBlockFill11[16], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v103, 0LL);
    __writecr8(v104);
  }
  if ( !*(_BYTE *)(v3 + 68) )
  {
    if ( v79 != KeGetCurrentThread()
      || KeGetCurrentThread()->SpecialApcDisable
      || !(unsigned __int8)KeAreInterruptsEnabled()
      || KeGetCurrentIrql()
      || KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v106 = *(char *)(v3 + 70);
      v107 = v3 + 120;
      *(_BYTE *)v107 = 18;
      *(_BYTE *)(v107 + 2) = 88;
      if ( v106 == 2 )
        LOBYTE(v106) = v79->ApcStateIndex;
      *(_BYTE *)(v107 + 80) = v106;
      *(_QWORD *)(v107 + 8) = v79;
      v108 = 0;
      *(_QWORD *)(v107 + 40) = IopAbortRequest;
      *(_QWORD *)(v107 + 32) = IopCompleteRequest;
      *(_QWORD *)(v107 + 48) = 0LL;
      *(_WORD *)(v107 + 81) = 0;
      *(_QWORD *)(v107 + 56) = 0LL;
      if ( *(_BYTE *)(v107 + 81) )
        v108 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
      v109 = *(_QWORD *)(v107 + 8);
      v110 = *(_QWORD *)(v107 + 56);
      v111 = *(_QWORD *)(v107 + 48);
      if ( v108 )
        ObfReferenceObjectWithTag(*(PVOID *)(v107 + 8), 0x5149654Bu);
      v112 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v113 = KeGetCurrentPrcb();
      v142 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v109 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v142);
        while ( *(_QWORD *)(v109 + 64) );
      }
      if ( (*(_DWORD *)(v109 + 116) & 0x4000) == 0 || *(_BYTE *)(v107 + 82) )
      {
        v114 = 0;
      }
      else
      {
        *(_QWORD *)(v107 + 64) = v133;
        *(_QWORD *)(v107 + 72) = v134;
        *(_BYTE *)(v107 + 82) = 1;
        KiInsertQueueApc(v107);
        KiSignalThreadForApc(v113, v107, v112);
        v114 = 1;
      }
      *(_QWORD *)(v109 + 64) = 0LL;
      KiExitDispatcher((_DWORD)v113, 0, 1, (unsigned __int8)v154, v112);
      if ( v108 )
      {
        if ( v114 )
          EtwTiLogQueueApcThread((unsigned __int8)KeGetCurrentThread()->gap0[10], v109, v111, v110, v133, v134);
        ObfDereferenceObjectWithTag((PVOID)v109, 0x5149654Bu);
      }
    }
    else
    {
      v146 = 1LL;
      v105 = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(v3 + 120, (unsigned int)&v148, (unsigned int)&v146, (unsigned int)&v133, (__int64)&v134);
      __writecr8(v105);
    }
    return;
  }
  v115 = KeAcquireQueuedSpinLock(0xBuLL);
  v116 = (__int64 *)IopDeadIrps;
  v117 = *(_QWORD *)(v3 + 152);
  v118 = v115;
  v153 = v115;
  if ( (__int64 *)IopDeadIrps != &IopDeadIrps )
  {
    while ( v116 - 4 != (__int64 *)v3 )
    {
      v116 = (__int64 *)*v116;
      if ( v116 == &IopDeadIrps )
        goto LABEL_275;
    }
    v124 = *v116;
    v125 = (__int64 *)v116[1];
    if ( *(__int64 **)(*v116 + 8) != v116 || (__int64 *)*v125 != v116 )
      __fastfail(3u);
    *v125 = v124;
    v75 = ObpTraceFlags == 0;
    *(_QWORD *)(v124 + 8) = v125;
    v116[1] = (__int64)v116;
    *v116 = (__int64)v116;
    if ( !v75 )
      ObpPushStackInfo(v117 - 48);
    v126 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v117 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v127 = v126 <= 1;
    v128 = v126 - 1;
    if ( v127 )
    {
      if ( *(_QWORD *)(v117 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v117 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v117 - 48) >> 8)],
          v117,
          1uLL,
          *(_QWORD *)(v117 - 40));
      if ( v128 < 0 )
        KeBugCheckEx(0x18u, 0LL, v117, 2uLL, v128);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v117 - 48);
      }
      else
      {
        if ( (*(_BYTE *)(v117 - 22) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)(v117 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v117 - 22) & 0x7F]) + 24LL) )
        {
          ObpHandleRevocationBlockRemoveObject();
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(v117 - 48);
        ObpRemoveObjectRoutine(v117 - 48, 0LL);
      }
    }
    goto LABEL_298;
  }
LABEL_275:
  if ( !v117 )
  {
LABEL_298:
    KeReleaseQueuedSpinLock(0xBuLL, v118);
    v102 = v133;
LABEL_235:
    IopDropIrp(v3, v102);
    return;
  }
  KeInitializeApc(
    v3 + 120,
    v117,
    *(char *)(v3 + 70),
    (unsigned int)IopCompleteRequest,
    (__int64)IopAbortRequest,
    0LL,
    0,
    0LL);
  v119 = 0;
  if ( *(_BYTE *)(v3 + 201) )
    v119 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v120 = *(_QWORD *)(v3 + 128);
  v121 = *(_QWORD *)(v3 + 176);
  v135 = *(_QWORD *)(v3 + 168);
  if ( v119 )
    ObfReferenceObjectWithTag((PVOID)v120, 0x5149654Bu);
  v122 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v123 = KeGetCurrentPrcb();
  v143 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v143);
    while ( *(_QWORD *)(v120 + 64) );
  }
  if ( (*(_DWORD *)(v120 + 116) & 0x4000) == 0 || *(_BYTE *)(v3 + 202) )
  {
    v129 = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 184) = v133;
    *(_QWORD *)(v3 + 192) = v134;
    *(_BYTE *)(v3 + 202) = 1;
    KiInsertQueueApc(v3 + 120);
    KiSignalThreadForApc(v123, v3 + 120, v122);
    v129 = 1;
  }
  *(_QWORD *)(v120 + 64) = 0LL;
  LOBYTE(BugCheckParameter4) = v122;
  KiExitDispatcher((_DWORD)v123, 0, 1, (unsigned __int8)v154, BugCheckParameter4);
  if ( v119 )
  {
    if ( v129 )
      EtwTiLogQueueApcThread((unsigned __int8)KeGetCurrentThread()->gap0[10], v120, v135, v121, v133, v134);
    ObfDereferenceObjectWithTag((PVOID)v120, 0x5149654Bu);
  }
  KeReleaseQueuedSpinLock(0xBuLL, v153);
}
