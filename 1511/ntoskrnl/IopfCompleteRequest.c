/*
 * XREFs of IopfCompleteRequest @ 0x140084CF0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401BC7C4 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1406B4F3C (IovCompleteRequest.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiIncrementConcurrencyCount @ 0x14008E774 (KiIncrementConcurrencyCount.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400D5460 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     IopDropIrp @ 0x1400DF7D8 (IopDropIrp.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400E2D94 (IopVerifyDeviceObjectOnStack.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     PoDeviceReleaseIrp @ 0x1401217F0 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1401218C4 (PoDeviceAcquireIrp.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     IopFreeIrpExtension @ 0x1401BC504 (IopFreeIrpExtension.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x14062F65C (ObpDeregisterObject.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, char a2)
{
  char v3; // cl
  __int64 v4; // r9
  unsigned __int8 v5; // r13
  __int64 v6; // r8
  __int64 v7; // rbx
  char v8; // r12
  int v9; // r15d
  char v10; // al
  char *v11; // rbx
  __int64 v12; // rax
  char v13; // al
  unsigned __int8 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  struct _MDL *v17; // rcx
  __int64 v18; // r14
  struct _MDL *Next; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  _QWORD *FileObjectExtension; // rax
  __int64 v26; // rsi
  __int64 i; // rax
  int v28; // eax
  void *v29; // rcx
  int v30; // r12d
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r14
  unsigned int v39; // esi
  __int64 v40; // r8
  int v41; // ebx
  struct _KPRCB *CurrentPrcb; // r15
  int v43; // eax
  __int64 *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 *v47; // rax
  char v48; // al
  __int64 v49; // rsi
  struct _KPRCB *v50; // rax
  _KTHREAD *CurrentThread; // r13
  unsigned __int8 IsThreadRunning; // al
  __int64 *v53; // rcx
  _QWORD *v54; // r12
  _QWORD *j; // rsi
  __int64 v56; // rbx
  char v57; // al
  __int64 v58; // r8
  __int64 v59; // rsi
  struct _KPRCB *v60; // rax
  _KTHREAD *v61; // r13
  unsigned __int8 v62; // al
  __int64 *v63; // rcx
  unsigned __int8 v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r8
  _KTHREAD *NextThread; // rbx
  __int64 v69; // r8
  bool v70; // zf
  struct _MDL *k; // rbx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 *v75; // rbx
  __int64 v76; // rdx
  __int64 *v77; // rax
  __int64 v78; // r14
  unsigned __int8 v79; // al
  __int64 v80; // rdx
  int v81; // r15d
  _QWORD *v82; // r13
  struct _KPRCB *v83; // rax
  _KTHREAD *v84; // rbx
  unsigned __int8 v85; // al
  __int64 v86; // r8
  __int64 *v87; // r15
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rbx
  char v91; // r12
  _QWORD *v92; // rcx
  __int64 v93; // rdx
  volatile signed __int32 *v94; // rbx
  unsigned __int8 v95; // r15
  unsigned __int8 v96; // bl
  int v97; // eax
  __int64 v98; // rsi
  unsigned __int8 v99; // r15
  struct _KPRCB *v100; // r14
  __int64 v101; // rcx
  __int64 v102; // rdx
  char v103; // al
  ULONG_PTR v104; // rcx
  __int64 v105; // rax
  ULONG_PTR v106; // rcx
  _QWORD *v107; // rax
  __int64 *v108; // rcx
  __int64 *m; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  char v115; // al
  int v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  struct _KPRCB *v121; // rax
  char v122; // cl
  KIRQL v123; // al
  __int64 *v124; // rcx
  ULONG_PTR v125; // r14
  KIRQL v126; // r15
  __int64 v127; // r8
  __int64 *v128; // rdx
  signed __int64 v129; // rsi
  bool v130; // cc
  signed __int64 v131; // rsi
  BOOLEAN v132; // al
  ULONG_PTR v133; // rcx
  __int64 v134; // rax
  signed __int32 v135[6]; // [rsp+8h] [rbp-A9h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-89h]
  __int64 v137; // [rsp+48h] [rbp-69h] BYREF
  __int64 v138; // [rsp+50h] [rbp-61h] BYREF
  struct _KPRCB *v139; // [rsp+58h] [rbp-59h]
  int v140; // [rsp+60h] [rbp-51h] BYREF
  int v141; // [rsp+64h] [rbp-4Dh] BYREF
  int v142; // [rsp+68h] [rbp-49h] BYREF
  int v143; // [rsp+6Ch] [rbp-45h] BYREF
  __int64 v144; // [rsp+70h] [rbp-41h]
  __int64 *v145; // [rsp+78h] [rbp-39h]
  __int64 v146; // [rsp+80h] [rbp-31h] BYREF
  volatile signed __int64 *v147[2]; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int8 v148; // [rsp+98h] [rbp-19h]
  __int64 v149; // [rsp+A0h] [rbp-11h] BYREF
  int v150; // [rsp+A8h] [rbp-9h]
  char v151; // [rsp+B0h] [rbp-1h] BYREF
  char v152; // [rsp+B8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  unsigned int v154; // [rsp+118h] [rbp+67h]
  char v155; // [rsp+118h] [rbp+67h]
  char v156; // [rsp+120h] [rbp+6Fh]
  int v157; // [rsp+120h] [rbp+6Fh]
  int v158; // [rsp+120h] [rbp+6Fh]
  int v159; // [rsp+128h] [rbp+77h] BYREF
  int v160; // [rsp+130h] [rbp+7Fh] BYREF

  v156 = a2;
  v3 = *(_BYTE *)(BugCheckParameter1 + 66);
  v4 = 0LL;
  v5 = a2;
  v138 = 0LL;
  v6 = *(unsigned __int8 *)(BugCheckParameter1 + 67);
  if ( (char)v6 > (char)(v3 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0xFE7uLL, 0LL, 0LL);
  v7 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( (char)v6 <= v3 && *(_BYTE *)v7 == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v7 + 1), *(_QWORD *)(v7 + 40));
    v4 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v9 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v9 = 0;
  v10 = *(_BYTE *)(BugCheckParameter1 + 66);
  ++*(_BYTE *)(BugCheckParameter1 + 67);
  *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
  if ( *(char *)(BugCheckParameter1 + 67) <= (char)(v10 + 1) )
  {
    v11 = (char *)(v7 + 3);
    do
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v11 & 1;
      v12 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v12 >= 0 )
        goto LABEL_19;
      if ( (_DWORD)v12 != v9 )
      {
        *v11 |= 2u;
        v9 = v12;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v12;
      }
      if ( *(int *)(BugCheckParameter1 + 48) >= 0 )
      {
LABEL_19:
        v13 = *v11;
        if ( (*v11 & 0x40) != 0 )
          goto LABEL_17;
      }
      else
      {
        v13 = *v11;
        if ( *v11 < 0 )
          goto LABEL_17;
      }
      if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v13 & 0x20) == 0 )
      {
        if ( *(_BYTE *)(BugCheckParameter1 + 65)
          && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
        {
          *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
        }
        *v11 &= 2u;
        *((_WORD *)v11 - 1) = 0;
        *(_QWORD *)(v11 + 5) = 0LL;
        *(_QWORD *)(v11 + 13) = 0LL;
        *(_QWORD *)(v11 + 21) = 0LL;
        *(_QWORD *)(v11 + 45) = 0LL;
        goto LABEL_33;
      }
LABEL_17:
      v14 = *(v11 - 2);
      *v11 = v13 & 2;
      *((_WORD *)v11 - 1) = 0;
      *(_QWORD *)(v11 + 5) = 0LL;
      *(_QWORD *)(v11 + 13) = 0LL;
      *(_QWORD *)(v11 + 21) = 0LL;
      *(_QWORD *)(v11 + 45) = 0LL;
      if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
        v15 = 0LL;
      else
        v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
      if ( v8 )
        PoDeviceAcquireIrp(BugCheckParameter1, v14, v15, 0LL);
      if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD, __int64))(v11 + 53))(
             v15,
             BugCheckParameter1,
             *(_QWORD *)(v11 + 61),
             v4) == -1073741802 )
        return;
      if ( v8 )
        PoDeviceReleaseIrp(BugCheckParameter1, v14, v15);
      v4 = 0LL;
LABEL_33:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v11 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
    }
    while ( *(char *)(BugCheckParameter1 + 67) <= (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) );
  }
  v16 = *(unsigned int *)(BugCheckParameter1 + 16);
  if ( (v16 & 8) != 0 )
  {
    v17 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v18 = *(_QWORD *)(BugCheckParameter1 + 24);
    if ( v17 )
    {
      do
      {
        Next = v17->Next;
        IoFreeMdl(v17);
        v17 = Next;
      }
      while ( Next );
    }
    pIoFreeIrp(BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 24), 0xFFFFFFFF) == 1 )
      pIofCompleteRequest(v18, v5);
    return;
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v20 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v20 > 1 )
    {
      if ( v20 == 2684354563 || v20 == 2684354572 || v20 == 2147483673 )
      {
        v138 = *(_QWORD *)(BugCheckParameter1 + 160);
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
      }
    }
  }
  if ( !v5 )
  {
    v21 = *(_QWORD *)(BugCheckParameter1 + 192);
    if ( v21 )
    {
      if ( (v16 & 0x400) == 0 )
      {
        v22 = *(_QWORD *)(v21 + 16);
        if ( (!v22 || (v23 = *(_QWORD *)(v22 + 8)) == 0)
          && ((*(_DWORD *)(v21 + 80) & 0x800) != 0
           || (v24 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 56LL)) == 0
           || (v23 = *(_QWORD *)(v24 + 8)) == 0) )
        {
          v23 = *(_QWORD *)(v21 + 8);
        }
        if ( *(_QWORD *)(v23 + 24) )
        {
          if ( *(_QWORD *)(v21 + 208) )
          {
            FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(v21, 1, 0LL);
            if ( FileObjectExtension )
            {
              v26 = *FileObjectExtension;
              if ( *FileObjectExtension )
              {
                if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v23, *FileObjectExtension) )
                {
LABEL_63:
                  v28 = *(_DWORD *)(v26 + 72);
                  if ( v28 == 8 || v28 == 20 )
                  {
                    v5 = 1;
                    v156 = 1;
                  }
                  goto LABEL_66;
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v23 + 24); i; i = *(_QWORD *)(i + 24) )
            v23 = i;
        }
        v26 = v23;
        goto LABEL_63;
      }
    }
  }
LABEL_66:
  v29 = *(void **)(BugCheckParameter1 + 160);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
  {
    LOBYTE(v6) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, v6, v4);
  }
  v30 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v30 & 0x402) != 0 )
  {
    if ( (v30 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread((_QWORD *)BugCheckParameter1, v16, v6);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v5);
      return;
    }
    v31 = *(_DWORD *)(BugCheckParameter1 + 16) & 0x42;
    v32 = 2LL;
    v157 = v31;
    *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
    if ( v31 )
    {
      v33 = *(_QWORD *)(BugCheckParameter1 + 152);
      CurrentIrql = 0;
      if ( v33 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock((PKSPIN_LOCK)(v33 + 1832));
      }
      v35 = *(_QWORD *)(BugCheckParameter1 + 32);
      v36 = (_QWORD *)(BugCheckParameter1 + 32);
      v37 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( *(_QWORD *)(v35 + 8) != BugCheckParameter1 + 32 || (_QWORD *)*v37 != v36 )
        __fastfail(3u);
      *v37 = v35;
      *(_QWORD *)(v35 + 8) = v37;
      *(_QWORD *)(BugCheckParameter1 + 40) = BugCheckParameter1 + 32;
      *v36 = v36;
      if ( v33 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v33 + 1832, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 1832), 0LL);
        __writecr8(CurrentIrql);
      }
      v32 = 2LL;
    }
    v38 = *(_QWORD *)(BugCheckParameter1 + 80);
    v39 = v5;
    v154 = v5;
    if ( (*(_BYTE *)v38 & 0x7F) != 0 )
    {
      v40 = 0LL;
      v41 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v38 + 4) == 1 )
      {
LABEL_154:
        if ( v31 )
          pIoFreeIrp(BugCheckParameter1);
        return;
      }
      v40 = 0LL;
      v41 = 1;
    }
    v144 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v159 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v38, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v159, v32, v40);
        while ( (*(_DWORD *)v38 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v38, 7u) );
      v32 = 2LL;
      v40 = 0LL;
    }
    v43 = *(_DWORD *)(v38 + 4);
    *(_DWORD *)(v38 + 4) = 1;
    if ( !v43 )
    {
      if ( !v41 )
      {
        v44 = *(__int64 **)(v38 + 8);
        if ( v44 != (__int64 *)(v38 + 8) )
        {
          while ( 1 )
          {
            v45 = (__int64)v44;
            v145 = (__int64 *)*v44;
            v46 = *v44;
            v47 = (__int64 *)v44[1];
            if ( *(_QWORD *)(v46 + 8) != v45 || *v47 != v45 )
              __fastfail(3u);
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
            v48 = *(_BYTE *)(v45 + 16);
            if ( v48 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v45, *(unsigned __int16 *)(v45 + 18), 0LL) )
              {
                v70 = (*(_DWORD *)(v38 + 4))-- == 1;
                if ( v70 )
                  goto LABEL_137;
              }
            }
            else if ( v48 == 2 )
            {
              *(_BYTE *)(v45 + 17) = 5;
              v49 = *(_QWORD *)(v45 + 24);
              *(_QWORD *)v45 = 0LL;
              __writecr8(2uLL);
              v50 = KeGetCurrentPrcb();
              v139 = v50;
              CurrentThread = v50->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v50->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v45, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v49, v32, v40);
              if ( *(_QWORD *)(v49 + 16) == v49 + 8
                || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v49 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v139, v49, v45) )
              {
                ++*(_DWORD *)(v49 + 4);
                v53 = *(__int64 **)(v49 + 32);
                *(_QWORD *)v45 = v49 + 24;
                *(_QWORD *)(v45 + 8) = v53;
                if ( *v53 != v49 + 24 )
                  __fastfail(3u);
                *v53 = v45;
                *(_QWORD *)(v49 + 32) = v45;
              }
              _InterlockedAnd((volatile signed __int32 *)v49, 0xFFFFFF7F);
              v70 = (*(_DWORD *)(v38 + 4))-- == 1;
              if ( v70 )
                goto LABEL_137;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v45, 256LL, 0LL);
            }
            v44 = v145;
            v32 = 2LL;
            v40 = 0LL;
            if ( v145 == (__int64 *)(v38 + 8) )
              goto LABEL_137;
          }
        }
        goto LABEL_138;
      }
      v54 = *(_QWORD **)(v38 + 8);
      for ( j = (_QWORD *)(v38 + 8); v54 != j; v40 = 0LL )
      {
        v56 = (__int64)v54;
        v54 = (_QWORD *)*v54;
        v57 = *(_BYTE *)(v56 + 16);
        if ( v57 == 1 )
        {
          v58 = *(unsigned __int16 *)(v56 + 18);
        }
        else
        {
          if ( v57 == 2 )
          {
            *(_BYTE *)(v56 + 17) = 5;
            v59 = *(_QWORD *)(v56 + 24);
            *(_QWORD *)v56 = 0LL;
            __writecr8(2uLL);
            v60 = KeGetCurrentPrcb();
            v145 = (__int64 *)v60;
            v61 = v60->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v62 = KeIsThreadRunning(v60->CurrentThread);
              EtwTraceEnqueueWork(v61, v56, v62);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v59, v32, v40);
            if ( *(_QWORD *)(v59 + 16) == v59 + 8
              || *(_DWORD *)(v59 + 40) >= *(_DWORD *)(v59 + 44)
              || v61->Queue == (_DISPATCHER_HEADER *volatile)v59 && v61->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v145, v59, v56) )
            {
              ++*(_DWORD *)(v59 + 4);
              v63 = *(__int64 **)(v59 + 32);
              *(_QWORD *)v56 = v59 + 24;
              *(_QWORD *)(v56 + 8) = v63;
              if ( *v63 != v59 + 24 )
                __fastfail(3u);
              *v63 = v56;
              *(_QWORD *)(v59 + 32) = v56;
            }
            _InterlockedAnd((volatile signed __int32 *)v59, 0xFFFFFF7F);
            j = (_QWORD *)(v38 + 8);
            goto LABEL_135;
          }
          v58 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v56, v58, 0LL);
LABEL_135:
        v32 = 2LL;
      }
      j[1] = j;
      *j = j;
LABEL_137:
      v39 = v154;
      v31 = v157;
    }
LABEL_138:
    _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      KiProcessThreadWaitList(CurrentPrcb, 1LL, v39);
    v64 = v144;
    if ( (unsigned __int8)v144 >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2u);
    }
    else
    {
      v65 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v160 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v160, v66, v67);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v65, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v65 + 643) = 32;
        *(_BYTE *)(v65 + 390) = v64;
        KiQueueReadyThread(CurrentPrcb, v65, v69);
        v70 = (unsigned __int8)KiSwapContext(v65, NextThread, v64) == 0;
      }
      else
      {
        v70 = (*(_DWORD *)(v65 + 116) & 0x40) == 0;
      }
      if ( !v70 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(v65 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      __writecr8(v64);
    }
    goto LABEL_154;
  }
  for ( k = *(struct _MDL **)(BugCheckParameter1 + 8); k; k = k->Next )
    MmUnlockPages(k);
  if ( (*(_DWORD *)(BugCheckParameter1 + 16) & 0x2000) != 0 )
    ObfDereferenceObjectWithTag(*(PVOID *)(BugCheckParameter1 + 152), 0x746C6644u);
  v72 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v72 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v73 = *(_QWORD *)(BugCheckParameter1 + 56);
      if ( v73 == 2684354563LL || v73 == 2684354572LL || v73 == 2147483673LL )
        *(_QWORD *)(BugCheckParameter1 + 160) = v138;
    }
    return;
  }
  v74 = *(_QWORD *)(BugCheckParameter1 + 152);
  v75 = (__int64 *)(BugCheckParameter1 + 192);
  v76 = *(_QWORD *)(BugCheckParameter1 + 192);
  v137 = v76;
  if ( (v72 & 0x2000) == 0
    || (v6 = 0LL, v146 = 0LL, !*(_BYTE *)(BugCheckParameter1 + 65))
    && ((*(_DWORD *)(BugCheckParameter1 + 48) & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(v76 + 80) & 0x2000000) != 0 && *(int *)(BugCheckParameter1 + 48) >= 0) )
  {
    if ( v74 )
    {
      v94 = (volatile signed __int32 *)(v74 + 1832);
      v95 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v74 + 1832);
      }
      else if ( _interlockedbittestandset64(v94, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v74 + 1832), v76, v6);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v74 + 1832, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v94, 0LL);
      __writecr8(v95);
    }
    if ( *(_BYTE *)(BugCheckParameter1 + 68) )
    {
      v123 = KeAcquireQueuedSpinLock(0xBuLL);
      v124 = (__int64 *)IopDeadIrps;
      v125 = *(_QWORD *)(BugCheckParameter1 + 152);
      v126 = v123;
      if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
      {
LABEL_309:
        if ( v125 )
        {
          KeInitializeApc(
            BugCheckParameter1 + 120,
            v125,
            *(char *)(BugCheckParameter1 + 70),
            (__int64)IopCompleteRequest,
            (__int64)IopAbortRequest,
            0LL,
            0,
            0LL);
          KeInsertQueueApc(BugCheckParameter1 + 120, v137, v138, v5);
          KeReleaseQueuedSpinLock(0xBuLL, v126);
          return;
        }
      }
      else
      {
        while ( v124 - 4 != (__int64 *)BugCheckParameter1 )
        {
          v124 = (__int64 *)*v124;
          if ( v124 == &IopDeadIrps )
            goto LABEL_309;
        }
        v127 = *v124;
        v128 = (__int64 *)v124[1];
        if ( *(__int64 **)(*v124 + 8) != v124 || (__int64 *)*v128 != v124 )
          __fastfail(3u);
        *v128 = v127;
        v70 = ObpTraceFlags == 0;
        *(_QWORD *)(v127 + 8) = v128;
        v124[1] = (__int64)v124;
        *v124 = (__int64)v124;
        if ( !v70 )
          ObpPushStackInfo(v125 - 48);
        v129 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v130 = v129 <= 1;
        v131 = v129 - 1;
        if ( v130 )
        {
          if ( *(_QWORD *)(v125 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v125 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v125 - 48) >> 8)],
              v125,
              1uLL,
              *(_QWORD *)(v125 - 40));
          if ( v131 < 0 )
            KeBugCheckEx(0x18u, 0LL, v125, 2uLL, v131);
          v132 = KeAreAllApcsDisabled();
          v133 = v125 - 48;
          if ( v132 )
          {
            ObpDeferObjectDeletion(v133);
          }
          else
          {
            v134 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v133);
            if ( v134 )
              ObpHandleRevocationBlockRemoveObject(v134);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v125 - 48);
            ObpRemoveObjectRoutine(v125 - 48, 0LL);
          }
        }
      }
      KeReleaseQueuedSpinLock(0xBuLL, v126);
      v93 = v137;
      goto LABEL_216;
    }
    if ( (struct _KTHREAD *)v74 == KeGetCurrentThread()
      && !KeGetCurrentThread()->SpecialApcDisable
      && (unsigned __int8)KeAreInterruptsEnabled()
      && !KeGetCurrentIrql()
      && KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      v149 = 1LL;
      v96 = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(
        BugCheckParameter1 + 120,
        (unsigned int)&v152,
        (unsigned int)&v149,
        (unsigned int)&v137,
        (__int64)&v138);
      __writecr8(v96);
      return;
    }
    v97 = *(char *)(BugCheckParameter1 + 70);
    *(_BYTE *)(BugCheckParameter1 + 120) = 18;
    *(_BYTE *)(BugCheckParameter1 + 122) = 88;
    if ( v97 == 2 )
      LOBYTE(v97) = *(_BYTE *)(v74 + 586);
    *(_BYTE *)(BugCheckParameter1 + 200) = v97;
    *(_QWORD *)(BugCheckParameter1 + 128) = v74;
    *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
    v98 = v74;
    *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
    *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
    *(_WORD *)(BugCheckParameter1 + 201) = 0;
    *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
    v99 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v100 = KeGetCurrentPrcb();
    v140 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v140, v76, v6);
      while ( *(_QWORD *)(v98 + 64) );
    }
    if ( (*(_DWORD *)(v98 + 116) & 0x4000) != 0 && !*(_BYTE *)(BugCheckParameter1 + 202) )
    {
      v101 = *(_QWORD *)(BugCheckParameter1 + 128);
      *(_QWORD *)(BugCheckParameter1 + 184) = v137;
      *(_QWORD *)(BugCheckParameter1 + 192) = v138;
      *(_BYTE *)(BugCheckParameter1 + 202) = 1;
      if ( *(_BYTE *)(BugCheckParameter1 + 200) || !*(_BYTE *)(v101 + 586) )
      {
        v102 = v101 + 152;
        *(_BYTE *)(BugCheckParameter1 + 200) = *(_BYTE *)(v101 + 586);
      }
      else
      {
        v102 = v101 + 600;
      }
      v103 = *(_BYTE *)(BugCheckParameter1 + 201);
      if ( *(_QWORD *)(BugCheckParameter1 + 168) )
      {
        if ( v103 && *(void (__fastcall __noreturn **)())(BugCheckParameter1 + 152) == KiSchedulerApcTerminate )
        {
          *(_BYTE *)(v101 + 194) = 1;
          v104 = BugCheckParameter1 + 136;
          v6 = v102 + 16LL * v103;
          v105 = *(_QWORD *)v6;
          *(_QWORD *)(BugCheckParameter1 + 136) = *(_QWORD *)v6;
          *(_QWORD *)(BugCheckParameter1 + 144) = v6;
          if ( *(_QWORD *)(v105 + 8) != v6 )
            __fastfail(3u);
          *(_QWORD *)(v105 + 8) = v104;
          *(_QWORD *)v6 = v104;
        }
        else
        {
          v106 = BugCheckParameter1 + 136;
          v6 = v102 + 16LL * v103;
          v107 = *(_QWORD **)(v6 + 8);
          *(_QWORD *)(BugCheckParameter1 + 136) = v6;
          *(_QWORD *)(BugCheckParameter1 + 144) = v107;
          if ( *v107 != v6 )
            __fastfail(3u);
          *v107 = v106;
          *(_QWORD *)(v6 + 8) = v106;
        }
      }
      else
      {
        v108 = (__int64 *)(v102 + 16LL * v103);
        for ( m = (__int64 *)v108[1]; m != v108; m = (__int64 *)m[1] )
        {
          if ( !m[4] )
            break;
        }
        v110 = *m;
        v111 = BugCheckParameter1 + 136;
        *(_QWORD *)(BugCheckParameter1 + 136) = *m;
        *(_QWORD *)(BugCheckParameter1 + 144) = m;
        if ( *(__int64 **)(v110 + 8) != m )
          __fastfail(3u);
        *(_QWORD *)(v110 + 8) = v111;
        *m = v111;
      }
      v112 = *(_QWORD *)(BugCheckParameter1 + 128);
      v113 = *(unsigned __int8 *)(BugCheckParameter1 + 201);
      v114 = *(unsigned __int8 *)(v112 + 586);
      if ( *(char *)(BugCheckParameter1 + 200) == (_DWORD)v114 )
      {
        if ( (_KTHREAD *)v112 == v100->CurrentThread )
        {
          if ( (_BYTE)v113
            || *(_DWORD *)(v112 + 484) && (*(_QWORD *)(BugCheckParameter1 + 168) || *(_WORD *)(v112 + 486)) )
          {
            goto LABEL_305;
          }
          *(_BYTE *)(v112 + 193) = 1;
          if ( !v99 )
          {
            *(_DWORD *)(v112 + 116) |= 0x40u;
            goto LABEL_305;
          }
        }
        else
        {
          if ( (_BYTE)v113 )
          {
            if ( *(_BYTE *)(v112 + 388) == 5 && *(_BYTE *)(v112 + 391) == 1 )
            {
              v122 = *(_BYTE *)(v112 + 112);
              if ( (unsigned __int8)((v122 & 7) - 3) > 1u
                && ((*(_DWORD *)(v112 + 116) & 0x10) != 0 || *(_BYTE *)(v112 + 194)) )
              {
                *(_BYTE *)(v112 + 112) = v122 | 0x40;
                if ( KiSignalThread((__int64)v100, v112, 192LL, 0LL) )
                  *(_BYTE *)(v112 + 194) = 1;
              }
            }
            goto LABEL_305;
          }
          *(_BYTE *)(v112 + 193) = 1;
          _InterlockedOr(v135, 0);
          v115 = *(_BYTE *)(v112 + 388);
          if ( v115 != 2 )
          {
            if ( v115 == 5
              && !*(_BYTE *)(v112 + 390)
              && !*(_WORD *)(v112 + 486)
              && (!*(_QWORD *)(BugCheckParameter1 + 168) || !*(_WORD *)(v112 + 484) && !*(_BYTE *)(v112 + 192)) )
            {
              v116 = *(_BYTE *)(v112 + 112) & 7;
              if ( v116 == 1 || v116 == 4 )
              {
                v117 = *(_QWORD *)(v112 + 232);
                if ( v117 )
                  KiIncrementConcurrencyCount(v117, v112);
                v118 = *(_QWORD *)(v112 + 712);
                if ( v118 )
                {
                  v143 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v118 + 22672), 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v143, v113, v6);
                    while ( *(_QWORD *)(v118 + 22672) );
                  }
                  if ( *(_QWORD *)(v112 + 712) )
                  {
                    v119 = *(_QWORD *)(v112 + 216);
                    v120 = *(_QWORD **)(v112 + 224);
                    if ( *(_QWORD *)(v119 + 8) != v112 + 216 || *v120 != v112 + 216 )
                      __fastfail(3u);
                    *v120 = v119;
                    *(_QWORD *)(v119 + 8) = v120;
                    *(_QWORD *)(v112 + 712) = 0LL;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v118 + 22672), 0LL);
                }
                *(_BYTE *)(v112 + 388) = 7;
                *(_QWORD *)(v112 + 216) = v100->DeferredReadyListHead.Next;
                v100->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v112 + 216);
                *(_QWORD *)(v112 + 200) = 256LL;
              }
              *(_BYTE *)(v112 + 112) |= 0x20u;
            }
            goto LABEL_305;
          }
          v114 = *(unsigned int *)(v112 + 536);
          LODWORD(v114) = v114 & 0x7FFFFFFF;
          if ( KeGetPcr()->Prcb.Number != (_DWORD)v114 )
          {
            v121 = KeGetCurrentPrcb();
            LOBYTE(v113) = 1;
            ++v121->SynchCounters.IpiSendSoftwareInterruptCount;
            HalSendSoftwareInterrupt(v114, v113);
            goto LABEL_305;
          }
        }
        LOBYTE(v114) = 1;
        HalRequestSoftwareInterrupt(v114);
      }
    }
LABEL_305:
    *(_QWORD *)(v98 + 64) = 0LL;
    LOBYTE(BugCheckParameter4) = v99;
    KiExitDispatcher((_DWORD)v100, 0, 1, v5, BugCheckParameter4);
    return;
  }
  v77 = *(__int64 **)(v137 + 176);
  if ( !v77 )
  {
    IopCompleteRequest(
      BugCheckParameter1 + 120,
      (unsigned int)&v151,
      (unsigned int)&v146,
      BugCheckParameter1 + 192,
      (__int64)&v146);
    return;
  }
  v78 = *v77;
  v155 = 0;
  *(_QWORD *)(BugCheckParameter1 + 120) = v77[1];
  *(_DWORD *)(BugCheckParameter1 + 184) = 0;
  v147[1] = (volatile signed __int64 *)(v78 + 64);
  v147[0] = 0LL;
  v79 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v148 = v79;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v147);
  }
  else
  {
    v80 = _InterlockedExchange64((volatile __int64 *)(v78 + 64), (__int64)v147);
    if ( v80 )
      KxWaitForLockOwnerShip(v147);
  }
  *(_DWORD *)(BugCheckParameter1 + 16) |= 0x10000u;
  if ( *(_BYTE *)(v78 + 72) )
  {
    v155 = 1;
  }
  else
  {
    v81 = v156;
    v82 = (_QWORD *)(BugCheckParameter1 + 168);
    v158 = v156;
    v144 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v83 = KeGetCurrentPrcb();
    v139 = v83;
    v84 = v83->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v85 = KeIsThreadRunning(v83->CurrentThread);
      EtwTraceEnqueueWork(v84, BugCheckParameter1 + 168, v85);
    }
    if ( (_BYTE)v158 )
    {
      v86 = 0LL;
      if ( (*(_BYTE *)(v78 + 1) & 2) != 0 )
        v81 = 0;
      v158 = v81;
    }
    else
    {
      v86 = 0LL;
    }
    v141 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v78, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v141, v80, v86);
        while ( (*(_DWORD *)v78 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v78, 7u) );
      v86 = 0LL;
    }
    v150 = *(_DWORD *)(v78 + 4);
    if ( *(_QWORD *)(v78 + 16) != v78 + 8
      && *(_DWORD *)(v78 + 40) < *(_DWORD *)(v78 + 44)
      && (v84->Queue != (_DISPATCHER_HEADER *volatile)v78 || v84->WaitReason != 15) )
    {
      v87 = *(__int64 **)(v78 + 16);
      do
      {
        v88 = (__int64)v87;
        v87 = (__int64 *)v87[1];
        v89 = *(_QWORD *)v88;
        if ( *(_QWORD *)(*(_QWORD *)v88 + 8LL) != v88 || *v87 != v88 )
          __fastfail(3u);
        *v87 = v89;
        *(_QWORD *)(v89 + 8) = v87;
        if ( *(_BYTE *)(v88 + 16) == 1 )
        {
          v90 = *(_QWORD *)(v88 + 24);
          v91 = 0;
          v142 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v90 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v142, v89, v86);
            while ( *(_QWORD *)(v90 + 64) );
          }
          if ( *(_BYTE *)(v90 + 388) == 5 )
            v91 = KiSignalThread((__int64)v139, v90, BugCheckParameter1 + 168, v88);
          v86 = 0LL;
          *(_QWORD *)(v90 + 64) = 0LL;
          ++*(_BYTE *)(v88 + 17);
          if ( v91 )
            goto LABEL_213;
        }
        else
        {
          *(_BYTE *)(v88 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v88 + 24), v88);
          v86 = 0LL;
        }
      }
      while ( v87 != (__int64 *)(v78 + 8) );
    }
    ++*(_DWORD *)(v78 + 4);
    v92 = *(_QWORD **)(v78 + 32);
    *v82 = v78 + 24;
    *(_QWORD *)(BugCheckParameter1 + 176) = v92;
    if ( *v92 != v78 + 24 )
      __fastfail(3u);
    *v92 = v82;
    *(_QWORD *)(v78 + 32) = v82;
LABEL_213:
    _InterlockedAnd((volatile signed __int32 *)v78, 0xFFFFFF7F);
    LOBYTE(BugCheckParameter4) = v144;
    KiExitDispatcher((_DWORD)v139, 0, 1, v158, BugCheckParameter4);
    v75 = (__int64 *)(BugCheckParameter1 + 192);
  }
  KxReleaseQueuedSpinLock(v147);
  __writecr8(v148);
  if ( v155 )
  {
    v93 = *v75;
LABEL_216:
    IopDropIrp(BugCheckParameter1, v93);
  }
}
