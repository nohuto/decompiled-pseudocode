/*
 * XREFs of IopfCompleteRequest @ 0x140048F80
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401F80E4 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1407350CC (IovCompleteRequest.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IopCompleteIrpInFileObjectList @ 0x140042DE0 (IopCompleteIrpInFileObjectList.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140113AAC (IopVerifyDeviceObjectOnStack.c)
 *     PoDeviceReleaseIrp @ 0x1401379D0 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140137AA4 (PoDeviceAcquireIrp.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopFreeIrpExtension @ 0x1401F7D7C (IopFreeIrpExtension.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v2; // r8
  char v3; // r9
  unsigned __int8 v4; // r12
  __int64 v6; // rbx
  char v7; // r14
  int v8; // ebp
  char v9; // al
  char *v10; // rbx
  __int64 v11; // rax
  char v12; // al
  unsigned __int8 v13; // si
  __int64 v14; // rdi
  int v15; // edx
  struct _MDL *v16; // rcx
  IRP *v17; // rsi
  struct _MDL *Next; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  _QWORD *FileObjectExtension; // rax
  __int64 v25; // rdi
  __int64 i; // rax
  int v27; // eax
  void *v28; // rcx
  int v29; // r14d
  int v30; // r14d
  __int64 v31; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // r15
  int v38; // edi
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v40; // ebx
  signed __int8 v41; // cf
  int v42; // eax
  _QWORD *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  char v47; // al
  bool v48; // zf
  __int64 v49; // rdi
  struct _KPRCB *v50; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v52; // al
  unsigned int v53; // ebx
  __int64 *v54; // rcx
  _QWORD *v55; // r14
  _QWORD *v56; // r12
  __int64 v57; // rsi
  char v58; // al
  __int64 v59; // r8
  __int64 v60; // rdi
  _KTHREAD *v61; // rbp
  bool v62; // al
  unsigned int v63; // ebx
  __int64 *v64; // rcx
  struct _MDL *j; // rbx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rsi
  volatile signed __int32 *v70; // rbx
  unsigned __int8 v71; // bp
  unsigned __int8 v72; // bl
  int v73; // eax
  __int64 v74; // rbp
  char v75; // r15
  struct _KPRCB *v76; // r14
  unsigned int v77; // ebx
  __int64 v78; // rcx
  __int64 v79; // rdx
  char v80; // al
  __int64 v81; // rcx
  __int64 *v82; // r8
  __int64 v83; // rax
  ULONG_PTR v84; // rcx
  __int64 v85; // r8
  _QWORD *v86; // rax
  __int64 *v87; // rcx
  __int64 *k; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  char v94; // al
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rsi
  unsigned int v99; // ebx
  __int64 v100; // rdx
  _QWORD *v101; // rcx
  struct _KPRCB *v102; // rax
  char v103; // cl
  KIRQL v104; // al
  __int64 *v105; // rcx
  ULONG_PTR v106; // rsi
  KIRQL v107; // bp
  __int64 v108; // r8
  __int64 *v109; // rdx
  signed __int64 v110; // rbx
  signed __int64 v111; // rdi
  bool v112; // cc
  signed __int64 BugCheckParameter4; // rdi
  __int64 v114; // rax
  signed __int64 v115; // rcx
  signed __int64 m; // rax
  signed __int32 v117[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v118; // [rsp+40h] [rbp-78h] BYREF
  __int64 v119; // [rsp+48h] [rbp-70h]
  struct _KPRCB *v120; // [rsp+50h] [rbp-68h]
  __int64 v121; // [rsp+58h] [rbp-60h]
  __int64 v122; // [rsp+60h] [rbp-58h] BYREF
  char v123; // [rsp+68h] [rbp-50h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v125; // [rsp+C0h] [rbp+8h]
  unsigned __int8 v126; // [rsp+C8h] [rbp+10h]
  __int64 v127; // [rsp+D0h] [rbp+18h] BYREF
  struct _KPRCB *v128; // [rsp+D8h] [rbp+20h]

  v2 = *(unsigned __int8 *)(BugCheckParameter1 + 66);
  v3 = *(_BYTE *)(BugCheckParameter1 + 67);
  v4 = a2;
  v126 = a2;
  v127 = 0LL;
  if ( v3 > (char)(v2 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0xFE7uLL, 0LL, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( v3 <= (char)v2 && *(_BYTE *)v6 == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v6 + 1), *(_QWORD *)(v6 + 40));
  }
  else
  {
    v7 = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v8 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v8 = 0;
  v9 = *(_BYTE *)(BugCheckParameter1 + 66);
  ++*(_BYTE *)(BugCheckParameter1 + 67);
  *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
  if ( *(char *)(BugCheckParameter1 + 67) <= (char)(v9 + 1) )
  {
    v10 = (char *)(v6 + 3);
    do
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v10 & 1;
      v11 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v11 >= 0 )
        goto LABEL_19;
      if ( (_DWORD)v11 != v8 )
      {
        *v10 |= 2u;
        v8 = v11;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v11;
      }
      if ( *(int *)(BugCheckParameter1 + 48) >= 0 )
      {
LABEL_19:
        v12 = *v10;
        if ( (*v10 & 0x40) != 0 )
          goto LABEL_17;
      }
      else
      {
        v12 = *v10;
        if ( *v10 < 0 )
          goto LABEL_17;
      }
      if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v12 & 0x20) == 0 )
      {
        if ( *(_BYTE *)(BugCheckParameter1 + 65)
          && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
        {
          *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
        }
        *v10 &= 2u;
        *((_WORD *)v10 - 1) = 0;
        *(_QWORD *)(v10 + 5) = 0LL;
        *(_QWORD *)(v10 + 13) = 0LL;
        *(_QWORD *)(v10 + 21) = 0LL;
        *(_QWORD *)(v10 + 45) = 0LL;
        goto LABEL_32;
      }
LABEL_17:
      v13 = *(v10 - 2);
      *v10 = v12 & 2;
      *((_WORD *)v10 - 1) = 0;
      *(_QWORD *)(v10 + 5) = 0LL;
      *(_QWORD *)(v10 + 13) = 0LL;
      *(_QWORD *)(v10 + 21) = 0LL;
      *(_QWORD *)(v10 + 45) = 0LL;
      if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
        v14 = 0LL;
      else
        v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
      if ( v7 )
        PoDeviceAcquireIrp(BugCheckParameter1, v13, v14);
      if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v10 + 53))(
             v14,
             BugCheckParameter1,
             *(_QWORD *)(v10 + 61)) == -1073741802 )
        return;
      if ( v7 )
        PoDeviceReleaseIrp(BugCheckParameter1, v13, v14);
LABEL_32:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v10 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
    }
    while ( *(char *)(BugCheckParameter1 + 67) <= (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) );
  }
  v15 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v15 & 8) != 0 )
  {
    v16 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v17 = *(IRP **)(BugCheckParameter1 + 24);
    if ( v16 )
    {
      do
      {
        Next = v16->Next;
        IoFreeMdl(v16);
        v16 = Next;
      }
      while ( Next );
    }
    pIoFreeIrp(BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->AssociatedIrp, 0xFFFFFFFF) == 1 )
      pIofCompleteRequest(v17, v4);
    return;
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v19 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v19 > 1 )
    {
      if ( v19 == 2684354563 || v19 == 2684354572 || v19 == 2147483673 )
      {
        v127 = *(_QWORD *)(BugCheckParameter1 + 160);
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
      }
    }
  }
  if ( !v4 )
  {
    v20 = *(_QWORD *)(BugCheckParameter1 + 192);
    if ( v20 )
    {
      if ( (v15 & 0x400) == 0 )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( (!v21 || (v22 = *(_QWORD *)(v21 + 8)) == 0)
          && ((*(_DWORD *)(v20 + 80) & 0x800) != 0
           || (v23 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 56LL)) == 0
           || (v22 = *(_QWORD *)(v23 + 8)) == 0) )
        {
          v22 = *(_QWORD *)(v20 + 8);
        }
        if ( *(_QWORD *)(v22 + 24) )
        {
          if ( *(_QWORD *)(v20 + 208) )
          {
            FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(v20, 1LL, 0LL);
            if ( FileObjectExtension )
            {
              v25 = *FileObjectExtension;
              if ( *FileObjectExtension )
              {
                if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v22, *FileObjectExtension) )
                {
LABEL_62:
                  v27 = *(_DWORD *)(v25 + 72);
                  if ( v27 == 8 || v27 == 20 )
                  {
                    v4 = 1;
                    v126 = 1;
                  }
                  goto LABEL_65;
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v22 + 24); i; i = *(_QWORD *)(i + 24) )
            v22 = i;
        }
        v25 = v22;
        goto LABEL_62;
      }
    }
  }
LABEL_65:
  v28 = *(void **)(BugCheckParameter1 + 160);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
  {
    LOBYTE(v2) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, v2);
  }
  v29 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v29 & 0x402) != 0 )
  {
    if ( (v29 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread((_QWORD *)BugCheckParameter1);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v4);
      return;
    }
    v30 = *(_DWORD *)(BugCheckParameter1 + 16) & 0x42;
    v125 = v30;
    *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
    if ( v30 )
    {
      v31 = *(_QWORD *)(BugCheckParameter1 + 152);
      CurrentIrql = 0;
      if ( v31 )
      {
        v33 = (volatile signed __int32 *)(v31 + 1832);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v33);
        }
        else if ( _interlockedbittestandset64(v33, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v33);
        }
      }
      v34 = *(_QWORD *)(BugCheckParameter1 + 32);
      v35 = (_QWORD *)(BugCheckParameter1 + 32);
      v36 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( *(_QWORD *)(v34 + 8) != BugCheckParameter1 + 32 || (_QWORD *)*v36 != v35 )
        __fastfail(3u);
      *v36 = v34;
      *(_QWORD *)(v34 + 8) = v36;
      *(_QWORD *)(BugCheckParameter1 + 40) = BugCheckParameter1 + 32;
      *v35 = v35;
      if ( v31 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v31 + 1832, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 1832), 0LL);
        __writecr8(CurrentIrql);
      }
    }
    v37 = *(_QWORD *)(BugCheckParameter1 + 80);
    v119 = v37;
    if ( (*(_BYTE *)v37 & 0x7F) != 0 )
    {
      v38 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v37 + 4) == 1 )
        goto LABEL_168;
      v38 = 1;
    }
    v121 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v40 = 0;
    v41 = _interlockedbittestandset((volatile signed __int32 *)v37, 7u);
    v128 = CurrentPrcb;
    if ( v41 )
    {
      do
      {
        if ( (++v40 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v40);
      }
      while ( (*(_DWORD *)v37 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v37, 7u) );
      CurrentPrcb = v128;
    }
    v42 = *(_DWORD *)(v37 + 4);
    *(_DWORD *)(v37 + 4) = 1;
    if ( !v42 )
    {
      if ( !v38 )
      {
        v43 = *(_QWORD **)(v37 + 8);
        if ( v43 != (_QWORD *)(v37 + 8) )
        {
          while ( 1 )
          {
            v44 = (__int64)v43;
            v43 = (_QWORD *)*v43;
            v45 = *(_QWORD *)v44;
            v46 = *(_QWORD **)(v44 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v44 + 8LL) != v44 || *v46 != v44 )
              __fastfail(3u);
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
            v47 = *(_BYTE *)(v44 + 16);
            if ( v47 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v44, *(unsigned __int16 *)(v44 + 18), 0LL) )
              {
                v48 = (*(_DWORD *)(v37 + 4))-- == 1;
                if ( v48 )
                  goto LABEL_166;
              }
            }
            else if ( v47 == 2 )
            {
              *(_BYTE *)(v44 + 17) = 5;
              v49 = *(_QWORD *)(v44 + 24);
              *(_QWORD *)v44 = 0LL;
              __writecr8(2uLL);
              v50 = KeGetCurrentPrcb();
              CurrentThread = v50->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v52 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
                EtwTraceEnqueueWork(v50->CurrentThread, v44, v52);
              }
              v53 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v49, 7u) )
              {
                do
                {
                  if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v53);
                }
                while ( (*(_DWORD *)v49 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v49, 7u) );
              }
              if ( *(_QWORD *)(v49 + 16) == v49 + 8
                || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v49 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v50, v49, v44) )
              {
                ++*(_DWORD *)(v49 + 4);
                v54 = *(__int64 **)(v49 + 32);
                *(_QWORD *)v44 = v49 + 24;
                *(_QWORD *)(v44 + 8) = v54;
                if ( *v54 != v49 + 24 )
                  __fastfail(3u);
                *v54 = v44;
                *(_QWORD *)(v49 + 32) = v44;
              }
              _InterlockedAnd((volatile signed __int32 *)v49, 0xFFFFFF7F);
              v37 = v119;
              v48 = (*(_DWORD *)(v119 + 4))-- == 1;
              if ( v48 )
                goto LABEL_166;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v44, 256LL, 0LL);
            }
            if ( v43 == (_QWORD *)(v37 + 8) )
              goto LABEL_166;
            CurrentPrcb = v128;
          }
        }
        goto LABEL_167;
      }
      v55 = *(_QWORD **)(v37 + 8);
      v56 = (_QWORD *)(v37 + 8);
      if ( v55 != (_QWORD *)(v37 + 8) )
      {
        while ( 1 )
        {
          v57 = (__int64)v55;
          v55 = (_QWORD *)*v55;
          v58 = *(_BYTE *)(v57 + 16);
          if ( v58 == 1 )
            break;
          if ( v58 != 2 )
          {
            v59 = 256LL;
            goto LABEL_160;
          }
          *(_BYTE *)(v57 + 17) = 5;
          v60 = *(_QWORD *)(v57 + 24);
          *(_QWORD *)v57 = 0LL;
          __writecr8(2uLL);
          v120 = KeGetCurrentPrcb();
          v61 = v120->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v62 = v61->WaitBlockFill6[68] == 2 && v61->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v61, v57, v62);
          }
          v63 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v60, 7u) )
          {
            do
            {
              if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v63);
            }
            while ( (*(_DWORD *)v60 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v60, 7u) );
          }
          if ( *(_QWORD *)(v60 + 16) == v60 + 8
            || *(_DWORD *)(v60 + 40) >= *(_DWORD *)(v60 + 44)
            || v61->Queue == (_DISPATCHER_HEADER *volatile)v60 && v61->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v120, v60, v57) )
          {
            ++*(_DWORD *)(v60 + 4);
            v64 = *(__int64 **)(v60 + 32);
            *(_QWORD *)v57 = v60 + 24;
            *(_QWORD *)(v57 + 8) = v64;
            if ( *v64 != v60 + 24 )
              __fastfail(3u);
            *v64 = v57;
            *(_QWORD *)(v60 + 32) = v57;
          }
          _InterlockedAnd((volatile signed __int32 *)v60, 0xFFFFFF7F);
LABEL_161:
          if ( v55 == v56 )
          {
            v37 = v119;
            goto LABEL_165;
          }
          CurrentPrcb = v128;
        }
        v59 = *(unsigned __int16 *)(v57 + 18);
LABEL_160:
        KiTryUnwaitThread(CurrentPrcb, v57, v59, 0LL);
        goto LABEL_161;
      }
LABEL_165:
      v56[1] = v56;
      *v56 = v56;
LABEL_166:
      v30 = v125;
    }
LABEL_167:
    _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)v128, 0, 1, v126, v121);
LABEL_168:
    if ( v30 )
      pIoFreeIrp(BugCheckParameter1);
    return;
  }
  for ( j = *(struct _MDL **)(BugCheckParameter1 + 8); j; j = j->Next )
    MmUnlockPages(j);
  if ( (*(_DWORD *)(BugCheckParameter1 + 16) & 0x2000) != 0 )
    ObfDereferenceObjectWithTag(*(PVOID *)(BugCheckParameter1 + 152), 0x746C6644u);
  v66 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v66 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v67 = *(_QWORD *)(BugCheckParameter1 + 56);
      if ( v67 == 2684354563LL || v67 == 2684354572LL || v67 == 2147483673LL )
        *(_QWORD *)(BugCheckParameter1 + 160) = v127;
    }
    return;
  }
  v68 = *(_QWORD *)(BugCheckParameter1 + 192);
  v69 = *(_QWORD *)(BugCheckParameter1 + 152);
  v118 = v68;
  if ( (v66 & 0x2000) != 0 && IopCompleteIrpInFileObjectList(BugCheckParameter1, v68, v4) )
    return;
  if ( v69 )
  {
    v70 = (volatile signed __int32 *)(v69 + 1832);
    v71 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v69 + 1832);
    }
    else if ( _interlockedbittestandset64(v70, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v69 + 1832);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v69 + 1832, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v70, 0LL);
    __writecr8(v71);
  }
  if ( !*(_BYTE *)(BugCheckParameter1 + 68) )
  {
    if ( (struct _KTHREAD *)v69 == KeGetCurrentThread()
      && !KeGetCurrentThread()->SpecialApcDisable
      && (unsigned __int8)KeAreInterruptsEnabled()
      && !KeGetCurrentIrql()
      && KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      v122 = 1LL;
      v72 = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(
        BugCheckParameter1 + 120,
        (unsigned int)&v123,
        (unsigned int)&v122,
        (unsigned int)&v118,
        (__int64)&v127);
      __writecr8(v72);
      return;
    }
    v73 = *(char *)(BugCheckParameter1 + 70);
    *(_BYTE *)(BugCheckParameter1 + 120) = 18;
    *(_BYTE *)(BugCheckParameter1 + 122) = 88;
    if ( v73 == 2 )
      LOBYTE(v73) = *(_BYTE *)(v69 + 586);
    *(_BYTE *)(BugCheckParameter1 + 200) = v73;
    *(_QWORD *)(BugCheckParameter1 + 128) = v69;
    *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
    *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
    v74 = v69;
    *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
    *(_WORD *)(BugCheckParameter1 + 201) = 0;
    *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
    v75 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v76 = KeGetCurrentPrcb();
    v77 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 64), 0LL) )
    {
      do
      {
        if ( (++v77 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v77);
      }
      while ( *(_QWORD *)(v69 + 64) );
    }
    if ( (*(_DWORD *)(v69 + 116) & 0x4000) == 0 || *(_BYTE *)(BugCheckParameter1 + 202) )
      goto LABEL_281;
    v48 = *(_BYTE *)(BugCheckParameter1 + 200) == 0;
    v78 = *(_QWORD *)(BugCheckParameter1 + 128);
    *(_QWORD *)(BugCheckParameter1 + 184) = v118;
    *(_QWORD *)(BugCheckParameter1 + 192) = v127;
    *(_BYTE *)(BugCheckParameter1 + 202) = 1;
    if ( v48 && *(_BYTE *)(v78 + 586) )
    {
      v79 = v78 + 600;
    }
    else
    {
      v79 = v78 + 152;
      *(_BYTE *)(BugCheckParameter1 + 200) = *(_BYTE *)(v78 + 586);
    }
    v80 = *(_BYTE *)(BugCheckParameter1 + 201);
    if ( *(_QWORD *)(BugCheckParameter1 + 168) )
    {
      if ( v80 && *(void (__fastcall __noreturn **)())(BugCheckParameter1 + 152) == KiSchedulerApcTerminate )
      {
        *(_BYTE *)(v78 + 194) = 1;
        v81 = BugCheckParameter1 + 136;
        v82 = (__int64 *)(v79 + 16LL * v80);
        v83 = *v82;
        *(_QWORD *)(BugCheckParameter1 + 136) = *v82;
        *(_QWORD *)(BugCheckParameter1 + 144) = v82;
        if ( *(__int64 **)(v83 + 8) != v82 )
          __fastfail(3u);
        *(_QWORD *)(v83 + 8) = v81;
        *v82 = v81;
      }
      else
      {
        v84 = BugCheckParameter1 + 136;
        v85 = v79 + 16LL * v80;
        v86 = *(_QWORD **)(v85 + 8);
        *(_QWORD *)(BugCheckParameter1 + 136) = v85;
        *(_QWORD *)(BugCheckParameter1 + 144) = v86;
        if ( *v86 != v85 )
          __fastfail(3u);
        *v86 = v84;
        *(_QWORD *)(v85 + 8) = v84;
      }
    }
    else
    {
      v87 = (__int64 *)(v79 + 16LL * v80);
      for ( k = (__int64 *)v87[1]; k != v87; k = (__int64 *)k[1] )
      {
        if ( !k[4] )
          break;
      }
      v89 = *k;
      v90 = BugCheckParameter1 + 136;
      *(_QWORD *)(BugCheckParameter1 + 136) = *k;
      *(_QWORD *)(BugCheckParameter1 + 144) = k;
      if ( *(__int64 **)(v89 + 8) != k )
        __fastfail(3u);
      *(_QWORD *)(v89 + 8) = v90;
      *k = v90;
    }
    v91 = *(_QWORD *)(BugCheckParameter1 + 128);
    v92 = *(unsigned __int8 *)(BugCheckParameter1 + 201);
    v93 = *(unsigned __int8 *)(v91 + 586);
    if ( *(char *)(BugCheckParameter1 + 200) != (_DWORD)v93 )
      goto LABEL_281;
    if ( (_KTHREAD *)v91 == v76->CurrentThread )
    {
      if ( (_BYTE)v92 || *(_DWORD *)(v91 + 484) && (*(_QWORD *)(BugCheckParameter1 + 168) || *(_WORD *)(v91 + 486)) )
        goto LABEL_281;
      *(_BYTE *)(v91 + 193) = 1;
      if ( !v75 )
      {
        *(_DWORD *)(v91 + 116) |= 0x40u;
LABEL_281:
        *(_QWORD *)(v74 + 64) = 0LL;
        KiExitDispatcher((_DWORD)v76, 0, 1, v4, v75);
        return;
      }
    }
    else
    {
      if ( (_BYTE)v92 )
      {
        if ( *(_BYTE *)(v91 + 388) == 5 && *(_BYTE *)(v91 + 391) == 1 )
        {
          v103 = *(_BYTE *)(v91 + 112);
          if ( (unsigned __int8)((v103 & 7) - 3) > 1u && ((*(_DWORD *)(v91 + 116) & 0x10) != 0 || *(_BYTE *)(v91 + 194)) )
          {
            *(_BYTE *)(v91 + 112) = v103 | 0x40;
            if ( KiSignalThread((__int64)v76, v91, 192LL, 0LL) )
              *(_BYTE *)(v91 + 194) = 1;
          }
        }
        goto LABEL_281;
      }
      *(_BYTE *)(v91 + 193) = 1;
      _InterlockedOr(v117, 0);
      v94 = *(_BYTE *)(v91 + 388);
      if ( v94 != 2 )
      {
        if ( v94 == 5
          && !*(_BYTE *)(v91 + 390)
          && !*(_WORD *)(v91 + 486)
          && (!*(_QWORD *)(BugCheckParameter1 + 168) || !*(_WORD *)(v91 + 484) && !*(_BYTE *)(v91 + 192)) )
        {
          v95 = *(_BYTE *)(v91 + 112) & 7;
          if ( v95 == 1 || v95 == 4 )
          {
            v96 = *(_QWORD *)(v91 + 232);
            if ( v96 )
            {
              if ( (*(_BYTE *)v96 & 0x7F) == 0x15 )
              {
                v97 = (unsigned __int8)*(_DWORD *)(v91 + 540);
                *(_DWORD *)(v91 + 540) = v97;
                _InterlockedIncrement((volatile signed __int32 *)(v96 + 4 * v97 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v96 + 40));
              }
            }
            v98 = *(_QWORD *)(v91 + 712);
            if ( v98 )
            {
              v99 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 22672), 0LL) )
              {
                do
                {
                  if ( (++v99 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v99);
                }
                while ( *(_QWORD *)(v98 + 22672) );
              }
              if ( *(_QWORD *)(v91 + 712) )
              {
                v100 = *(_QWORD *)(v91 + 216);
                v101 = *(_QWORD **)(v91 + 224);
                if ( *(_QWORD *)(v100 + 8) != v91 + 216 || *v101 != v91 + 216 )
                  __fastfail(3u);
                *v101 = v100;
                *(_QWORD *)(v100 + 8) = v101;
                *(_QWORD *)(v91 + 712) = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v98 + 22672), 0LL);
            }
            *(_BYTE *)(v91 + 388) = 7;
            *(_QWORD *)(v91 + 216) = v76->DeferredReadyListHead.Next;
            v76->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v91 + 216);
            *(_QWORD *)(v91 + 200) = 256LL;
          }
          *(_BYTE *)(v91 + 112) |= 0x20u;
        }
        goto LABEL_281;
      }
      v93 = *(unsigned int *)(v91 + 536);
      LODWORD(v93) = v93 & 0x7FFFFFFF;
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v93 )
      {
        v102 = KeGetCurrentPrcb();
        LOBYTE(v92) = 1;
        ++v102->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v93, v92);
        goto LABEL_281;
      }
    }
    LOBYTE(v93) = 1;
    HalRequestSoftwareInterrupt(v93);
    goto LABEL_281;
  }
  v104 = KeAcquireQueuedSpinLock(0xBuLL);
  v105 = (__int64 *)IopDeadIrps;
  v106 = *(_QWORD *)(BugCheckParameter1 + 152);
  v107 = v104;
  if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
  {
LABEL_285:
    if ( v106 )
    {
      KeInitializeApc(
        BugCheckParameter1 + 120,
        v106,
        *(char *)(BugCheckParameter1 + 70),
        (__int64)IopCompleteRequest,
        (__int64)IopAbortRequest,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, v118, v127, v4);
      KeReleaseQueuedSpinLock(0xBuLL, v107);
      return;
    }
  }
  else
  {
    while ( v105 - 4 != (__int64 *)BugCheckParameter1 )
    {
      v105 = (__int64 *)*v105;
      if ( v105 == &IopDeadIrps )
        goto LABEL_285;
    }
    v108 = *v105;
    v109 = (__int64 *)v105[1];
    if ( *(__int64 **)(*v105 + 8) != v105 || (__int64 *)*v109 != v105 )
      __fastfail(3u);
    *v109 = v108;
    v48 = ObpTraceFlags == 0;
    v110 = v106 - 48;
    *(_QWORD *)(v108 + 8) = v109;
    v105[1] = (__int64)v105;
    *v105 = (__int64)v105;
    if ( !v48 )
      ObpPushStackInfo(v106 - 48);
    v111 = _InterlockedExchangeAdd64((volatile signed __int64 *)v110, 0xFFFFFFFFFFFFFFFFuLL);
    v112 = v111 <= 1;
    BugCheckParameter4 = v111 - 1;
    if ( v112 )
    {
      if ( *(_QWORD *)(v110 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v110 + 24) ^ (unsigned __int64)BYTE1(v110)],
          v106,
          1uLL,
          *(_QWORD *)(v110 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v106, 2uLL, BugCheckParameter4);
      if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        _m_prefetchw(&ObpRemoveObjectList);
        v115 = ObpRemoveObjectList;
        *(_QWORD *)(v110 + 8) = ObpRemoveObjectList;
        for ( m = _InterlockedCompareExchange64(&ObpRemoveObjectList, v110, v115);
              m != v115;
              m = _InterlockedCompareExchange64(&ObpRemoveObjectList, v110, m) )
        {
          v115 = m;
          *(_QWORD *)(v110 + 8) = m;
        }
        if ( !v115 )
        {
          if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
            ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
          else
            KiInsertQueueDpc((unsigned int)&ObpRemoveObjectDpc, 0, 0, 0, 0);
        }
      }
      else
      {
        if ( (*(_BYTE *)(v110 + 26) & 0x40) != 0 )
        {
          v114 = ObpInfoMaskToOffset[*(_BYTE *)(v110 + 26) & 0x7F];
          if ( v110 != v114 )
            ObpHandleRevocationBlockRemoveObject(v110 - v114);
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(v106 - 48);
        ObpRemoveObjectRoutine(v106 - 48, 0LL);
      }
    }
  }
  KeReleaseQueuedSpinLock(0xBuLL, v107);
  IopDropIrp(BugCheckParameter1, v118);
}
